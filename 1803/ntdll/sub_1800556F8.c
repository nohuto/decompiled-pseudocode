/*
 * XREFs of sub_1800556F8 @ 0x1800556F8
 * Callers:
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     sub_180027A70 @ 0x180027A70 (sub_180027A70.c)
 *     sub_180029F94 @ 0x180029F94 (sub_180029F94.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009B890 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall sub_1800556F8(_QWORD *a1)
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
