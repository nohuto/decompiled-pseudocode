/*
 * XREFs of VslpIumPhase0Initialize @ 0x1408DE2A4
 * Callers:
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x140084C68 (HvlQueryVsmConnection.c)
 *     MmSetPageProtection @ 0x1400C7020 (MmSetPageProtection.c)
 *     VslpLockPagesForTransfer @ 0x14015CF58 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeIsTsxDisabled @ 0x1401A5A58 (KeIsTsxDisabled.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KeQueryKvaShadowInformation @ 0x1407426C4 (KeQueryKvaShadowInformation.c)
 *     VslpIumPhase0InitializeNtKd @ 0x1408DE59C (VslpIumPhase0InitializeNtKd.c)
 */

__int64 __fastcall VslpIumPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  _KIDTENTRY64 *IdtBase; // rbx
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  NTSTATUS v8; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-B8h]
  _QWORD v16[10]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[8]; // [rsp+A0h] [rbp-60h] BYREF
  int v18; // [rsp+A8h] [rbp-58h]
  int v19; // [rsp+ACh] [rbp-54h]
  PHYSICAL_ADDRESS PhysicalAddress; // [rsp+B0h] [rbp-50h]
  PHYSICAL_ADDRESS v21; // [rsp+D0h] [rbp-30h]
  _BYTE v22[8]; // [rsp+D8h] [rbp-28h] BYREF
  PHYSICAL_ADDRESS v23; // [rsp+E0h] [rbp-20h]
  __int64 v24; // [rsp+E8h] [rbp-18h]
  __int64 v25; // [rsp+F0h] [rbp-10h]

  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 116) & 0x200) != 0 )
  {
    if ( !HvlQueryVsmConnection(0LL) )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, v3 & BugCheckParameter4);
    memset(v17, 0, (unsigned int)(v3 + 104));
    v18 = 167772165;
    PhysicalAddress = MmGetPhysicalAddress((PVOID)0xFFFFF78000000000LL);
    VslpIumPhase0InitializeNtKd(a1, v17);
    IdtBase = KeGetPcr()->IdtBase;
    v21 = MmGetPhysicalAddress(KeGetPcr()->NtTib.ExceptionList);
    v23 = MmGetPhysicalAddress(IdtBase);
    MmSetPageProtection((unsigned __int64)IdtBase, 0x1000uLL, 2u);
    ((void (__fastcall *)(__int64, __int64, _BYTE *, int *))off_140397D98[0])(45LL, 8LL, v22, &v10);
    MEMORY[0xFFFFF7800000036C] |= 0x100u;
    if ( KiKvaShadowMode )
      v19 |= 1u;
    KeQueryKvaShadowInformation(&v11, 4u, &v10);
    if ( (v11 & 0x10) != 0 && KiImplementedPhysicalBits > 0 )
      v19 |= 2u;
    if ( KeIsTsxDisabled() )
      v19 = v5 | 4;
    v24 = 0LL;
    v6 = *(_DWORD *)(a1 + 264);
    v13 = VslpNestedPageProtectionFlags & 2;
    if ( (v6 & 1) != 0 && (v6 & 2) == 0 && (VslpNestedPageProtectionFlags & 2) != 0 )
    {
      ((void (__fastcall *)(__int64, __int64, __int64 *, int *))off_140397D98[0])(48LL, 16LL, &v14, &v10);
      v7 = VslpLockPagesForTransfer((__int64)v16, v14, v15, 2, 6u);
      if ( v7 < 0 )
        KeBugCheckEx(0x6Fu, v7, 0LL, 5uLL, 0LL);
      v24 = v16[0];
      v25 = v16[7];
    }
    v8 = VslpEnterIumSecureMode(2u, 208LL, 0, (__int64)v17);
    if ( v8 < 0 )
      KeBugCheckEx(0x6Fu, v8, 0LL, 1uLL, 0LL);
    if ( PhysicalAddress.LowPart != 167772165 )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000059uLL, 0LL, 2uLL, 0LL);
    v12 = 0;
    qword_1403C9AB0 = (__int64)&qword_1403C9AA8;
    qword_1403C9AA8 = (__int64)&qword_1403C9AA8;
    dword_1403C9AA4 = PhysicalAddress.HighPart;
    dword_1403C9AB8 = PhysicalAddress.HighPart;
    VslpIumThreadSemaphore = 5;
    byte_1403C9AA2 = 8;
    VslVsmEnabled = 1;
    ((void (__fastcall *)(__int64, __int64, int *))off_140397DA0[0])(16LL, 4LL, &v12);
    return ((__int64 (__fastcall *)(__int64, __int64, int *))off_140397DA0[0])(18LL, 4LL, &v13);
  }
  return result;
}
