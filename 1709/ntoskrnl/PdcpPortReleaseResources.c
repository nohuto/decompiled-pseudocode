/*
 * XREFs of PdcpPortReleaseResources @ 0x140727A44
 * Callers:
 *     PdcPortOpen @ 0x1405ACE14 (PdcPortOpen.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PdcpPortReleaseResources(_QWORD *P)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, _DWORD *, __int64); // rax
  _DWORD v4[194]; // [rsp+20h] [rbp-308h] BYREF

  *(_DWORD *)P = 0;
  v2 = P[3];
  if ( v2 )
  {
    memset(v4, 0, 0x300uLL);
    v4[12] = *((_DWORD *)P + 4);
    v4[13] = *((_DWORD *)P + 5);
    v3 = (void (__fastcall *)(__int64, _DWORD *, __int64))P[4];
    v4[10] = 1;
    v3(v2, v4, 768LL);
  }
  ExFreePoolWithTag(P, 0);
}
