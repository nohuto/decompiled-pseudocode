/*
 * XREFs of VslpIumPhase0Initialize @ 0x140832A48
 * Callers:
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14002F528 (HvlQueryVsmConnection.c)
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     MmSetPageProtection @ 0x140135210 (MmSetPageProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeIsTsxDisabled @ 0x14017BAE0 (KeIsTsxDisabled.c)
 *     KeKvaShadowingActive @ 0x14017BC94 (KeKvaShadowingActive.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeQueryKvaShadowInformation @ 0x14041CDB0 (KeQueryKvaShadowInformation.c)
 *     VslpIumPhase0InitializeNtKd @ 0x140832C88 (VslpIumPhase0InitializeNtKd.c)
 */

__int64 __fastcall VslpIumPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  _KIDTENTRY64 *IdtBase; // rbx
  int v5; // ecx
  NTSTATUS v6; // eax
  __int64 v7; // [rsp+20h] [rbp-49h]
  int v8; // [rsp+30h] [rbp-39h] BYREF
  int v9; // [rsp+34h] [rbp-35h] BYREF
  int v10; // [rsp+38h] [rbp-31h] BYREF
  int v11; // [rsp+3Ch] [rbp-2Dh] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-29h] BYREF
  int v13; // [rsp+48h] [rbp-21h]
  int v14; // [rsp+4Ch] [rbp-1Dh]
  PHYSICAL_ADDRESS PhysicalAddress; // [rsp+50h] [rbp-19h]
  PHYSICAL_ADDRESS v16; // [rsp+70h] [rbp+7h]
  _BYTE v17[8]; // [rsp+78h] [rbp+Fh] BYREF
  PHYSICAL_ADDRESS v18; // [rsp+80h] [rbp+17h]

  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 116) & 0x200) != 0 )
  {
    if ( !HvlQueryVsmConnection(0LL) )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, v3 & v7);
    memset(v12, 0, (unsigned int)(v3 + 104));
    v13 = 167772163;
    PhysicalAddress = MmGetPhysicalAddress((PVOID)0xFFFFF78000000000LL);
    VslpIumPhase0InitializeNtKd(a1, v12);
    IdtBase = KeGetPcr()->IdtBase;
    v16 = MmGetPhysicalAddress(KeGetPcr()->NtTib.ExceptionList);
    v18 = MmGetPhysicalAddress(IdtBase);
    MmSetPageProtection((unsigned __int64)IdtBase, 0x1000uLL);
    ((void (__fastcall *)(__int64, __int64, _BYTE *, int *))off_14033C718[0])(45LL, 8LL, v17, &v8);
    v14 = KeKvaShadowingActive() != 0;
    KeQueryKvaShadowInformation(&v9, 4u, &v8);
    if ( (v9 & 0x10) != 0 && KiImplementedPhysicalBits > 0 )
      v14 |= 2u;
    if ( KeIsTsxDisabled() )
      v14 = v5 | 4;
    v6 = VslpEnterIumSecureMode(1, 208LL, 0LL, (__int64)v12);
    if ( v6 < 0 )
      KeBugCheckEx(0x6Fu, v6, 0LL, 1uLL, 0LL);
    if ( PhysicalAddress.LowPart != 167772163 )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000059uLL, 0LL, 2uLL, 0LL);
    v10 = 0;
    qword_14036A5F0 = (__int64)&qword_14036A5E8;
    qword_14036A5E8 = (__int64)&qword_14036A5E8;
    dword_14036A5E4 = PhysicalAddress.HighPart;
    dword_14036A5F8 = PhysicalAddress.HighPart;
    VslpIumThreadSemaphore = 5;
    byte_14036A5E2 = 8;
    VslVsmEnabled = 1;
    ((void (__fastcall *)(__int64, __int64, int *))off_14033C720[0])(16LL, 4LL, &v10);
    v11 = VslpNestedPageProtectionFlags & 2;
    return ((__int64 (__fastcall *)(__int64, __int64, int *))off_14033C720[0])(18LL, 4LL, &v11);
  }
  return result;
}
