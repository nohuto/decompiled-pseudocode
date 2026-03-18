/*
 * XREFs of MiUpdatePrefetchPriority @ 0x1400AE9F0
 * Callers:
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiPrefetchJumpVad @ 0x1402580D8 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiUpdatePfnPriority @ 0x140052938 (MiUpdatePfnPriority.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 */

char __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  ULONG_PTR v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 CurrentThread; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rbx
  ULONG_PTR v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 80) & 7;
  v3 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = *(_QWORD *)v3;
  LOBYTE(CurrentThread) = 0;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL )
  {
    LOBYTE(CurrentThread) = -8;
    if ( v3 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
    {
      CurrentThread = (unsigned __int64)KeGetCurrentThread();
      if ( *(_BYTE *)(*(_QWORD *)(CurrentThread + 184) + 640LL) != 1
        && (v4 & 1) != 0
        && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
      {
        CurrentThread = (unsigned __int64)KeGetCurrentThread();
        v11 = *(_QWORD *)(*(_QWORD *)(CurrentThread + 184) + 1544LL);
        if ( v11 )
        {
          CurrentThread = *(_QWORD *)(v11 + 8 * ((v3 >> 3) & 0x1FF));
          v12 = v4 | 0x20;
          if ( (CurrentThread & 0x20) == 0 )
            v12 = *(_QWORD *)v3;
          v4 = v12;
          if ( (CurrentThread & 0x42) != 0 )
            v4 = v12 | 0x42;
        }
      }
    }
  }
  v17 = v4;
  if ( (v4 & 1) == 0 )
  {
    if ( !v4 )
      return CurrentThread;
    if ( (v4 & 0x400) != 0 )
      return CurrentThread;
    if ( (v4 & 0x800) == 0 )
      return CurrentThread;
    CurrentThread = MiLockTransitionLeafPage(v3, 0LL);
    v9 = CurrentThread;
    if ( !CurrentThread )
      return CurrentThread;
    goto LABEL_12;
  }
  if ( (unsigned __int64)&v17 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v17 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v13 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 8 * (((unsigned __int64)&v17 >> 3) & 0x1FF));
      v15 = v4 | 0x20;
      if ( (v14 & 0x20) == 0 )
        v15 = v4;
      v4 = v15;
      if ( (v14 & 0x42) != 0 )
        v4 = v15 | 0x42;
    }
  }
  LODWORD(CurrentThread) = MiIsPfnInline((v4 >> 12) & 0xFFFFFFFFFLL);
  if ( (_DWORD)CurrentThread )
  {
    v9 = 48 * v6 - 0x58000000000LL;
    LODWORD(CurrentThread) = *(_BYTE *)(v9 + 35) & 7;
    if ( (_DWORD)CurrentThread != v2 )
    {
      if ( v8 )
      {
        LOBYTE(CurrentThread) = *(_DWORD *)(v8 + 48) & 7;
        if ( (_BYTE)CurrentThread == 1 )
          return CurrentThread;
      }
      else if ( *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 240LL) )
      {
        CurrentThread = MiLocateAddress(v7);
        if ( !CurrentThread )
          return CurrentThread;
        LOBYTE(CurrentThread) = *(_DWORD *)(CurrentThread + 48) & 7;
        if ( (_BYTE)CurrentThread == 1 )
          return CurrentThread;
      }
      MiLockPageAtDpcInline(v9);
LABEL_12:
      if ( (unsigned int)MiGetPfnPriority(v9) != v2 )
        MiUpdatePfnPriority(v10, v2, 0);
      LOBYTE(CurrentThread) = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return CurrentThread;
}
