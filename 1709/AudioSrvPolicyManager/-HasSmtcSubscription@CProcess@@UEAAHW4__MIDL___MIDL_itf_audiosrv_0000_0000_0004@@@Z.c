/*
 * XREFs of ?HasSmtcSubscription@CProcess@@UEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180011A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::HasSmtcSubscription(__int64 a1, int a2)
{
  return *(_DWORD *)(a1 + 4LL * a2 + 516) != 0;
}
