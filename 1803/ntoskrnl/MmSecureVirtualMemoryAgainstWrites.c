/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x1404D5D60
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1404D513C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x1404D9C30 (AlpcpPrepareViewForDelivery.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x140062430 (MiVadMapsLargeImage.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiSetReadOnlyOnSectionView @ 0x140124DF0 (MiSetReadOnlyOnSectionView.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiIsRangeFullyCommitted @ 0x1404D5F64 (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x1404D73E0 (MiCheckSecuredVad.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140569118 (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     MiAddSecureEntry @ 0x140593490 (MiAddSecureEntry.c)
 */

__int64 __fastcall MmSecureVirtualMemoryAgainstWrites(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  unsigned __int64 v4; // rsi
  int v5; // r14d
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  _KPROCESS *Process; // [rsp+30h] [rbp-88h]
  int v18; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v19[48]; // [rsp+40h] [rbp-78h] BYREF

  v3 = a3;
  v4 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v5 = a2;
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v7 = 0LL;
  v8 = (a3 + a2 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == (_KPROCESS *)a1 )
    Process = 0LL;
  else
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v19);
  v9 = MiObtainReferencedVadEx(v4, 0, &v18);
  v13 = v9;
  if ( v9 )
  {
    if ( v8 >> 12 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
    {
      v10 = *(unsigned int *)(v9 + 48);
      if ( ((1 << (*(_BYTE *)(v9 + 48) & 7)) & 0x55) != 0
        && ((v10 & 0x8000000) == 0 || (int)MiCheckSecuredVad(v9, v5, v3, 1, 0) >= 0)
        && (*(_DWORD *)(v13 + 48) & 0x4000) == 0
        && (*(_DWORD *)(v13 + 64) & 0x4000000) == 0 )
      {
        v14 = *(_QWORD *)(v13 + 72);
        v11 = *(unsigned int *)(*(_QWORD *)v14 + 56LL);
        v10 = (*(_DWORD *)(*(_QWORD *)v14 + 56LL) >> 5) & 1;
        if ( (((*(_DWORD *)(*(_QWORD *)v14 + 56LL) >> 5) & 1) != 0
           || (MmCompatibleProtectionMask[(*(_DWORD *)(v13 + 48) >> 3) & 7] | 0x702) == (MmCompatibleProtectionMask[(*(_DWORD *)(v13 + 48) >> 3) & 7] | 0x700))
          && ((v11 & 0x80u) != 0LL && !(_DWORD)v10
           || !MiVadMapsLargeImage(v13) && (unsigned int)MiIsRangeFullyCommitted(v15, v4, v8))
          && (int)MiSetReadOnlyOnSectionView(a1, v13, v4, v8) >= 0 )
        {
          v7 = MiAddSecureEntry(v13, v4, v8, -1073741823, 0);
          if ( !v7 )
            MiUnsecureVirtualMemoryAgainstWrites(v13, v4, v8);
        }
      }
    }
    MiUnlockAndDereferenceVad((PVOID)v13, v10, v11, v12);
  }
  if ( Process )
    KiUnstackDetachProcess((__int64)v19, 0LL);
  if ( v7 )
    return a1 ^ qword_1403CB688 ^ v7;
  return v7;
}
