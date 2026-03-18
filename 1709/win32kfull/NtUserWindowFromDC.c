/*
 * XREFs of NtUserWindowFromDC @ 0x1C00F8820
 * Callers:
 *     <none>
 * Callees:
 *     _WindowFromDC @ 0x1C00F8870 (_WindowFromDC.c)
 */

__int64 __fastcall NtUserWindowFromDC(HDC a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( WindowFromDC(a1) )
    v4 = *(_QWORD *)WindowFromDC(a1);
  UserSessionSwitchLeaveCrit(v3, v2);
  return v4;
}
