/*
 * XREFs of ?FindOrAssignPrimary@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@@Z @ 0x1C0135A74
 * Callers:
 *     ?CacheGestureState@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0133098 (-CacheGestureState@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?CreateShellGestureFrame@CPTPEngine@@AEAAXPEBUPTPInput@@@Z @ 0x1C01333CC (-CreateShellGestureFrame@CPTPEngine@@AEAAXPEBUPTPInput@@@Z.c)
 *     ?DoTPShellProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KPEAH@Z @ 0x1C0135618 (-DoTPShellProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KPEAH@Z.c)
 * Callees:
 *     <none>
 */

struct PTPEnginePointerNode *__fastcall CPTPEngine::FindOrAssignPrimary(CPTPEngine *this, struct PTPInput *a2)
{
  unsigned int v2; // edi
  char *v3; // r10
  char *v4; // r8
  char *v6; // r9
  unsigned int v7; // ebx
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // edx

  v2 = *((_DWORD *)a2 + 12);
  v3 = (char *)a2 + 52;
  v4 = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( v2 )
  {
    v8 = *((_DWORD *)this + 4);
    do
    {
      v9 = *((_DWORD *)this + 72 * (*((_DWORD *)v3 + 1) % v8) + 292);
      if ( (v9 & 1) != 0 )
      {
        v10 = *((_DWORD *)v3 + 3);
        if ( (v10 & 0x40000) == 0 && v10 && (v9 & 0x800) == 0 )
        {
          if ( (v10 & 0x2000) != 0 )
            return (struct PTPEnginePointerNode *)v3;
          if ( !v6 )
            v6 = v3;
        }
      }
      v3 += 96;
      ++v7;
    }
    while ( v7 < v2 );
    if ( v6 )
    {
      v11 = *((_DWORD *)v6 + 1) % v8;
      *((_DWORD *)this + 805) |= 0x2000u;
      v4 = v6;
      *((_DWORD *)this + 725) = v11;
    }
  }
  return (struct PTPEnginePointerNode *)v4;
}
