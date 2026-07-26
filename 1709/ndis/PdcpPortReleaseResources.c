/*
 * XREFs of PdcpPortReleaseResources @ 0x1C00FDAFC
 * Callers:
 *     PdcTaskClientUnregister @ 0x1C00FD8D8 (PdcTaskClientUnregister.c)
 *     PdcPortOpen @ 0x1C00FD9B4 (PdcPortOpen.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
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
