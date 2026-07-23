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

NTSTATUS __fastcall sub_1800556F8(__int64 **a1)
{
  __int64 *v1; // rbx
  NTSTATUS result; // eax

  if ( a1 )
  {
    do
    {
      v1 = *a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = (__int64 **)v1;
    }
    while ( v1 );
  }
  return result;
}
