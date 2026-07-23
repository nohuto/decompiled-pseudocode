/*
 * XREFs of sub_18000AB78 @ 0x18000AB78
 * Callers:
 *     sub_18000A978 @ 0x18000A978 (sub_18000A978.c)
 *     sub_18000BC3C @ 0x18000BC3C (sub_18000BC3C.c)
 *     sub_18000C004 @ 0x18000C004 (sub_18000C004.c)
 *     sub_18000C058 @ 0x18000C058 (sub_18000C058.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x1800A60D0 (ZwAlertThreadByThreadId.c)
 */

NTSTATUS __fastcall sub_18000AB78(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rbx
  NTSTATUS result; // eax

  v1 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      result = _InterlockedExchange((volatile __int32 *)(v1 + 40), 2);
      if ( !result )
        result = ZwAlertThreadByThreadId(*(HANDLE *)(v1 + 8));
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
