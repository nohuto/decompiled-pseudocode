/*
 * XREFs of ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C0134EA0
 * Callers:
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C0135BA0 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::IsTouchpadActive(CPTPEngine *this)
{
  int v1; // eax
  unsigned int v2; // edx
  int v3; // r8d
  unsigned int v4; // r10d

  v1 = *((_DWORD *)this + 820);
  if ( (v1 & 1) != 0 )
    return 1;
  if ( (v1 & 2) != 0 )
    return 1;
  if ( (v1 & 4) != 0 )
    return 1;
  v2 = 0;
  if ( *((_DWORD *)this + 815) )
    return 1;
  v3 = 0;
  v4 = 0;
  do
  {
    if ( v4 >= 6 )
      break;
    if ( (*((_DWORD *)this + 74 * v4 + 298) & 0x8000000) != 0 )
      v3 = 1;
    ++v4;
  }
  while ( !v3 );
  if ( v3 )
    return 1;
  return v2;
}
