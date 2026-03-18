/*
 * XREFs of ObSetSecurityObjectByPointer @ 0x140486290
 * Callers:
 *     SepAppendAceToTokenObjectAcl @ 0x140484B90 (SepAppendAceToTokenObjectAcl.c)
 *     NtSetSecurityObject @ 0x140488560 (NtSetSecurityObject.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1405767CC (PipChangeDeviceObjectFromRegistryProperties.c)
 *     VRegSetup @ 0x1405C7A40 (VRegSetup.c)
 *     PiSwGetChildPdo @ 0x1405E3DF8 (PiSwGetChildPdo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
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
