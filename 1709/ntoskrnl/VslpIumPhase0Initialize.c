/*
 * XREFs of VslpIumPhase0Initialize @ 0x140869934
 * Callers:
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14011D9FC (HvlQueryVsmConnection.c)
 *     MmSetPageProtection @ 0x140139650 (MmSetPageProtection.c)
 *     VslpUnlockPagesForTransfer @ 0x140159CE0 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140159D24 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeIsTsxDisabled @ 0x14017B274 (KeIsTsxDisabled.c)
 *     KeKvaShadowingActive @ 0x14017B418 (KeKvaShadowingActive.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     KeQueryKvaShadowInformation @ 0x14043C7EC (KeQueryKvaShadowInformation.c)
 *     VslpIumPhase0InitializeNtKd @ 0x140869DA8 (VslpIumPhase0InitializeNtKd.c)
 *     MmQueryKernelCfgValidRanges @ 0x14086BEF0 (MmQueryKernelCfgValidRanges.c)
 */

__int64 __fastcall VslpIumPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  _KIDTENTRY64 *IdtBase; // rbx
  _QWORD *PoolWithTag; // rbx
  __int64 *v6; // rdi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  ULONG_PTR v11; // rsi
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h]
  _QWORD v18[10]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v19[8]; // [rsp+A8h] [rbp-60h] BYREF
  int v20; // [rsp+B0h] [rbp-58h]
  int v21; // [rsp+B4h] [rbp-54h]
  PHYSICAL_ADDRESS PhysicalAddress; // [rsp+B8h] [rbp-50h]
  PHYSICAL_ADDRESS v23; // [rsp+D8h] [rbp-30h]
  _BYTE v24[8]; // [rsp+E0h] [rbp-28h] BYREF
  PHYSICAL_ADDRESS v25; // [rsp+E8h] [rbp-20h]
  __int64 v26; // [rsp+F0h] [rbp-18h]
  __int64 v27; // [rsp+F8h] [rbp-10h]
  __int64 v28; // [rsp+100h] [rbp-8h]
  __int64 v29; // [rsp+108h] [rbp+0h]

  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 116) & 0x200) != 0 )
  {
    if ( !HvlQueryVsmConnection(0LL) )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    memset(v19, 0, (unsigned int)(v3 + 104));
    v20 = 167772164;
    PhysicalAddress = MmGetPhysicalAddress((PVOID)0xFFFFF78000000000LL);
    VslpIumPhase0InitializeNtKd(a1, v19);
    IdtBase = KeGetPcr()->IdtBase;
    v23 = MmGetPhysicalAddress(KeGetPcr()->NtTib.ExceptionList);
    v25 = MmGetPhysicalAddress(IdtBase);
    MmSetPageProtection((unsigned __int64)IdtBase, 0x1000uLL, 2u);
    ((void (__fastcall *)(__int64, __int64, _BYTE *, int *))off_140354F48[0])(45LL, 8LL, v24, &v12);
    MEMORY[0xFFFFF7800000036C] |= 0x100u;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x206D7549u);
    if ( !PoolWithTag )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000017uLL, 0LL, 3uLL, 0LL);
    v6 = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x206D7549u);
    if ( !v6 )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000017uLL, 0LL, 4uLL, 0LL);
    *PoolWithTag = 32832LL;
    PoolWithTag[1] = 384LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 32448LL;
    PoolWithTag[4] = 7LL;
    PoolWithTag[5] = 25960LL;
    PoolWithTag[6] = 208LL;
    PoolWithTag[7] = 209LL;
    PoolWithTag[8] = 36LL;
    PoolWithTag[9] = 2072LL;
    PoolWithTag[10] = 0LL;
    PoolWithTag[11] = 1520LL;
    PoolWithTag[12] = 484LL;
    PoolWithTag[13] = 486LL;
    PoolWithTag[14] = 152LL;
    PoolWithTag[15] = 796LL;
    MmQueryKernelCfgValidRanges(PoolWithTag + 16);
    v7 = VslpLockPagesForTransfer((__int64)v6, (__int64)PoolWithTag, 0xA0u, 0, 6u);
    if ( v7 < 0 )
      KeBugCheckEx(0x6Fu, v7, 0LL, 4uLL, 0LL);
    v26 = *v6;
    v27 = v6[7];
    v21 = KeKvaShadowingActive() != 0;
    KeQueryKvaShadowInformation(&v13, 4u, &v12);
    if ( (v13 & 0x10) != 0 && KiImplementedPhysicalBits > 0 )
      v21 |= 2u;
    if ( KeIsTsxDisabled() )
      v21 = v8 | 4;
    v9 = *(_DWORD *)(a1 + 264);
    v28 = 0LL;
    v15 = VslpNestedPageProtectionFlags & 2;
    if ( (v9 & 1) != 0 && (v9 & 2) == 0 && (VslpNestedPageProtectionFlags & 2) != 0 )
    {
      ((void (__fastcall *)(__int64, __int64, __int64 *, int *))off_140354F48[0])(48LL, 16LL, &v16, &v12);
      v10 = VslpLockPagesForTransfer((__int64)v18, v16, v17, 2, 6u);
      if ( v10 < 0 )
        KeBugCheckEx(0x6Fu, v10, 0LL, 5uLL, 0LL);
      v28 = v18[0];
      v29 = v18[7];
    }
    v11 = VslpEnterIumSecureMode(2u, 208LL, 0, (__int64)v19);
    VslpUnlockPagesForTransfer((__int64)v6);
    ExFreePoolWithTag(v6, 0);
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( (v11 & 0x80000000) != 0LL )
      KeBugCheckEx(0x6Fu, v11, 0LL, 1uLL, 0LL);
    if ( PhysicalAddress.LowPart != 167772164 )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000059uLL, 0LL, 2uLL, 0LL);
    qword_140386590 = (__int64)&qword_140386588;
    qword_140386588 = (__int64)&qword_140386588;
    dword_140386584 = PhysicalAddress.HighPart;
    dword_140386598 = PhysicalAddress.HighPart;
    VslpIumThreadSemaphore = 5;
    byte_140386582 = 8;
    VslVsmEnabled = 1;
    v14 = 0;
    ((void (__fastcall *)(__int64, __int64, int *))off_140354F50[0])(16LL, 4LL, &v14);
    return ((__int64 (__fastcall *)(__int64, __int64, int *))off_140354F50[0])(18LL, 4LL, &v15);
  }
  return result;
}
