/*
 * XREFs of ObSetSecurityObjectByPointer @ 0x14055CCB0
 * Callers:
 *     SepAppendAceToTokenObjectAcl @ 0x1404C20C0 (SepAppendAceToTokenObjectAcl.c)
 *     NtSetSecurityObject @ 0x14055C910 (NtSetSecurityObject.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1405CD170 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PiSwGetChildPdo @ 0x1405E7FB8 (PiSwGetChildPdo.c)
 *     VRegSetup @ 0x140621500 (VRegSetup.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ObSetSecurityObjectByPointer(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  char PreviousMode; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+68h] [rbp+10h] BYREF

  v6 = a2;
  v3 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64, _QWORD, __int64, _DWORD, __int64, char))(v3 + 152))(
           a1,
           0LL,
           &v6,
           a3,
           0LL,
           a1 - 48 + 40,
           *(_DWORD *)(v3 + 100),
           v3 + 76,
           PreviousMode);
}
