/*
 * XREFs of sub_1801071F0 @ 0x1801071F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 */

__int64 __fastcall sub_1801071F0(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
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
