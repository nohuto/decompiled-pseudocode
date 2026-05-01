/*
 * XREFs of ?SetAutoRelease@ResourceSetClientProxy@@UEAAX_N@Z @ 0x18000F3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ResourceSetClientProxy::SetAutoRelease(ResourceSetClientProxy *this, unsigned __int8 a2)
{
  int v2; // [rsp+28h] [rbp-20h]

  v2 = a2;
  NdrClientCall3(
    (MIDL_STUBLESS_PROXY_INFO *)&stru_180010C20,
    0xBu,
    0LL,
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 3),
    v2);
}
