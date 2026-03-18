/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x1404625C8
 * Callers:
 *     AlpcpPrepareViewForDelivery @ 0x1404614D4 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140461730 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x140015000 (MiVadMapsLargeImage.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiIsRangeFullyCommitted @ 0x1404627C4 (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x140462914 (MiCheckSecuredVad.c)
 *     MiAddSecureEntry @ 0x1404D3274 (MiAddSecureEntry.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x14057EE40 (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

__int64 __fastcall MmSecureVirtualMemoryAgainstWrites(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned int v12; // r9d
  __int64 v13; // rcx
  _KPROCESS *Process; // [rsp+30h] [rbp-88h]
  int v16; // [rsp+38h] [rbp-80h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v17; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v7 = 0LL;
  v8 = (a3 + a2 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == (_KPROCESS *)a1 )
    Process = 0LL;
  else
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v17);
  v9 = MiObtainReferencedVad(v4, &v16);
  v10 = v9;
  if ( v9 )
  {
    if ( v8 >> 12 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
      && ((1 << (*(_BYTE *)(v9 + 48) & 7)) & 0x55) != 0
      && ((*(_DWORD *)(v9 + 48) & 0x4000) == 0 || (int)MiCheckSecuredVad(v9, a2, a3, 1LL) >= 0) )
    {
      v11 = *(unsigned int *)(v10 + 48);
      if ( (v11 & 0x8000) == 0 && (*(_DWORD *)(v10 + 64) & 0x4000000) == 0 )
      {
        v12 = *(_DWORD *)(**(_QWORD **)(v10 + 72) + 56LL);
        if ( (((v12 >> 5) & 1) != 0
           || (MmCompatibleProtectionMask[(v11 >> 3) & 7] | 0x702) == (MmCompatibleProtectionMask[(v11 >> 3) & 7] | 0x700))
          && ((v12 & 0x80u) != 0 && ((v12 >> 5) & 1) == 0
           || !MiVadMapsLargeImage(v10) && (unsigned int)MiIsRangeFullyCommitted(v13, v4, v8))
          && (int)MiSetReadOnlyOnSectionView(a1, v10, v4, v8) >= 0 )
        {
          v7 = MiAddSecureEntry(v10, v4, v8, -1073741823, 0);
          if ( !v7 )
            MiUnsecureVirtualMemoryAgainstWrites(v10, v4, v8);
        }
      }
    }
    MiUnlockAndDereferenceVad((char *)v10);
  }
  if ( Process )
    KiUnstackDetachProcess(&v17, 0LL);
  if ( v7 )
    return a1 ^ qword_1403884F0 ^ v7;
  return v7;
}
