/*
 * XREFs of sub_18010B1C0 @ 0x18010B1C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 */

__int64 __fastcall sub_18010B1C0(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax

  *a4 = 0;
  if ( a3 < 0x38 )
    return 3221225507LL;
  result = ZwQueryInformationThread();
  if ( (int)result < 0 || (result = ZwQueryInformationThread(), (int)result < 0) )
    *a4 = 0;
  else
    *a4 += 8;
  return result;
}
