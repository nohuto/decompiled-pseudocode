/*
 * XREFs of ?HasTrackedContacts@CPTPEngine@@AEAAHXZ @ 0x1C01361F8
 * Callers:
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C0136344 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::HasTrackedContacts(CPTPEngine *this)
{
  __int64 result; // rax
  __int64 v2; // r9

  result = 0LL;
  v2 = 0LL;
  do
  {
    if ( (unsigned int)v2 >= 6 )
      break;
    if ( (*((_DWORD *)this + 72 * v2 + 292) & 0x10000000) != 0 )
      result = 1LL;
    v2 = (unsigned int)(v2 + 1);
  }
  while ( !(_DWORD)result );
  return result;
}
