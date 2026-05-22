/*
 * XREFs of ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x180021E30
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180024078 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

bool __fastcall DWMInputTarget::IsSameAsTarget(DWMInputTarget *this, const struct tagMsgRoutingInfo *a2, void *a3)
{
  bool result; // al
  void *v4; // r8
  __int64 v5; // r9

  result = operator==(a2, (char *)this + 88);
  if ( result )
    return DWMInputTarget::IsSameInputSink((DWMInputTarget *)(v5 - 8), v4);
  return result;
}
