/*
 * XREFs of SnapEnergyCountersDispatch @ 0x1C000D5F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall SnapEnergyCountersDispatch(unsigned int a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // r10

  result = (__int64 (*)(void))WPP_MAIN_CB.Queue.ListEntry.Flink;
  v2 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
  if ( v2 )
  {
    result = (__int64 (*)(void))qword_1C00163F0[27 * *(unsigned __int8 *)(v2 + 352)];
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
