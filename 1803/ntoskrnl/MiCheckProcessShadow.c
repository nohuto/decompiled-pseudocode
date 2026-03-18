/*
 * XREFs of MiCheckProcessShadow @ 0x14001CFE0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MmCheckProcessShadow @ 0x1400CF100 (MmCheckProcessShadow.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiFinishVadDeletion @ 0x1400F0F10 (MiFinishVadDeletion.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiGetVadWakeList @ 0x1400FD750 (MiGetVadWakeList.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402577EC (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckProcessShadow(__int64 a1, char a2)
{
  __int64 v5; // rsi
  LONG *v6; // rax
  int v7; // r14d
  unsigned int v8; // ebx
  ULONG_PTR v9; // r8
  int v10; // r11d
  __int64 v11; // rsi
  __int64 v12; // r9
  ULONG_PTR v13; // rcx
  unsigned __int64 v14; // r10
  ULONG_PTR BugCheckParameter4; // rcx
  ULONG_PTR v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r10

  if ( (MiFlags & 0x1800000) == 0
    || (*(_BYTE *)(a1 + 184) & 7) != 0
    || *(_BYTE *)(a1 - 640) == 1
    || (a2 & 4) == 0 && (__rdtsc() & 0x3FF0) != 0 )
  {
    return 0xFFFFFFFFLL;
  }
  v5 = *(_QWORD *)(a1 + 264);
  if ( (a2 & 4) != 0 )
  {
    if ( (*(_DWORD *)(a1 - 508) & 0x4000000) == 0 )
      return 0xFFFFFFFFLL;
  }
  else if ( !v5 )
  {
    return 0xFFFFFFFFLL;
  }
  if ( !*(_QWORD *)(a1 + 16) )
    return 0xFFFFFFFFLL;
  if ( (a2 & 4) != 0 )
  {
    v7 = a2 & 1;
    if ( (a2 & 1) != 0 )
      MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
      v6 = &dword_1403CCD40;
    else
      v6 = (LONG *)(a1 + 192);
    if ( (*v6 & 0x40000000) != 0 )
      return 0xFFFFFFFFLL;
    v7 = a2 & 1;
    if ( (a2 & 1) != 0 && !(unsigned int)MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 1LL) )
      return 0xFFFFFFFFLL;
  }
  v8 = 0;
  v9 = 0xFFFFF6FB7DBED000uLL;
  v10 = 256;
  v11 = v5 + 0x90482413000LL;
  while ( 1 )
  {
    v12 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      v17 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 8 * ((v9 >> 3) & 0x1FF));
        v19 = v12 | 0x20;
        if ( (v18 & 0x20) == 0 )
          v19 = *(_QWORD *)v9;
        v12 = v19;
        if ( (v18 & 0x42) != 0 )
          v12 = v19 | 0x42;
      }
    }
    v13 = *(_QWORD *)(v11 + v9);
    v14 = v11 + v9;
    if ( v11 + v9 >= 0xFFFFF6FB7DBED000uLL
      && v14 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v20 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 8 * ((v14 >> 3) & 0x1FF));
        v22 = v13 | 0x20;
        if ( (v21 & 0x20) == 0 )
          v22 = *(_QWORD *)(v11 + v9);
        v13 = v22;
        if ( (v21 & 0x42) != 0 )
          v13 = v22 | 0x42;
      }
    }
    if ( (v12 & 1) != 0 )
      break;
    if ( v13 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3601uLL, v9, v13, v13);
      goto LABEL_27;
    }
LABEL_25:
    v9 += 8LL;
    ++v8;
    if ( !--v10 )
    {
      v8 = -1;
      goto LABEL_27;
    }
  }
  BugCheckParameter4 = v13 | 0x20;
  v16 = v12 & 0xEFFFFFFFFFFFFFDFuLL | 0x20;
  if ( v16 == BugCheckParameter4 )
    goto LABEL_25;
  if ( (a2 & 8) == 0 )
    KeBugCheckEx(0x1Au, 0x3600uLL, v9, v16, BugCheckParameter4);
LABEL_27:
  if ( v7 )
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
  return v8;
}
