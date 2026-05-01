/*
 * XREFs of CrmStateMonitorWNFCallback @ 0x18003E150
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180005574 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorStateSizeGet @ 0x1800057E0 (CrmStateMonitorStateSizeGet.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorWNFCallback(__int64 a1, __int64 a2, __int64 a3, int *a4, void *Src, size_t Size)
{
  unsigned int v7; // eax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v10[3]; // [rsp+24h] [rbp-24h] BYREF

  v10[0] = 0;
  v9 = 1;
  v10[1] = 0;
  memcpy_0(v10, Src, (unsigned int)Size);
  v7 = CrmStateMonitorStateSizeGet(*a4);
  CrmStateMonitorStateSet((void **)a4, &v9, v7);
  return 0LL;
}
