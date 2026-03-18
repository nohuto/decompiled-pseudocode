/*
 * XREFs of ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C0136344
 * Callers:
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C0136C30 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?HasTrackedContacts@CPTPEngine@@AEAAHXZ @ 0x1C01361F8 (-HasTrackedContacts@CPTPEngine@@AEAAHXZ.c)
 */

__int64 __fastcall CPTPEngine::IsTouchpadActive(CPTPEngine *this)
{
  int v1; // eax
  unsigned int v2; // edx

  v1 = *((_DWORD *)this + 805);
  if ( (v1 & 1) != 0
    || (v1 & 2) != 0
    || (v1 & 4) != 0
    || *((_DWORD *)this + 800)
    || (unsigned int)CPTPEngine::HasTrackedContacts(this) )
  {
    return 1;
  }
  return v2;
}
