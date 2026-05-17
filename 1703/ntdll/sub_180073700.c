/*
 * XREFs of sub_180073700 @ 0x180073700
 * Callers:
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 *     sub_180016110 @ 0x180016110 (sub_180016110.c)
 *     sub_180016BD8 @ 0x180016BD8 (sub_180016BD8.c)
 *     sub_1800193C0 @ 0x1800193C0 (sub_1800193C0.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x1800A60D0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall sub_180073700(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
