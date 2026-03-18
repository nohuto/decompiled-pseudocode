/*
 * XREFs of _MonitorFromWindowFromUser @ 0x1C02390D0
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 */

__int64 __fastcall MonitorFromWindowFromUser(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = MonitorFromWindow(a1, a2);
  result = 0LL;
  if ( v2 )
    return *(_QWORD *)(v2 + 48);
  return result;
}
