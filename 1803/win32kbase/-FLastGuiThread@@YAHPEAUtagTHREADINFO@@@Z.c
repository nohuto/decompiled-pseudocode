/*
 * XREFs of ?FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C0036E10
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FLastGuiThread(struct tagTHREADINFO *a1)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  v1 = *((_QWORD *)a1 + 52);
  result = 0LL;
  if ( v1 )
  {
    if ( *(struct tagTHREADINFO **)(v1 + 320) == a1 )
      return *((_QWORD *)a1 + 82) == 0LL;
  }
  return result;
}
