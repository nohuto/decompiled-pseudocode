/*
 * XREFs of PpIrpQueryResourceRequirements @ 0x1404DB604
 * Callers:
 *     PiQueryResourceRequirements @ 0x1404DA4E0 (PiQueryResourceRequirements.c)
 *     IopQueryDeviceResources @ 0x14055BA24 (IopQueryDeviceResources.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryResourceRequirements(int a1, _QWORD *a2)
{
  __int64 result; // rax
  _WORD v5[36]; // [rsp+30h] [rbp-58h] BYREF

  *a2 = 0LL;
  memset(v5, 0, sizeof(v5));
  v5[0] = 2843;
  result = IopSynchronousCall(a1, (unsigned int)v5, -1073741637, 0, (__int64)a2);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else if ( !*a2 )
  {
    return 3221225659LL;
  }
  return result;
}
