/*
 * XREFs of ?_GetImmersiveGhostWindow@CAppArrangementBase@@IEAAPEAVCWindowData@@PEAV2@@Z @ 0x180095B28
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096D00 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

struct CWindowData *__fastcall CAppArrangementBase::_GetImmersiveGhostWindow(
        CAppArrangementBase *this,
        struct CWindowData *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rcx
  unsigned int v4; // r8d
  __int64 v5; // r10
  __int64 v6; // rdx

  v2 = *((_DWORD *)a2 + 134);
  v3 = 0LL;
  v4 = 0;
  if ( v2 )
  {
    v5 = *((_QWORD *)a2 + 64);
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 8LL * v4);
      if ( v6 )
      {
        if ( (*(_DWORD *)(v6 + 36) & 0x100000) != 0 )
          break;
      }
      if ( ++v4 >= v2 )
        return (struct CWindowData *)v3;
    }
    return *(struct CWindowData **)(v6 + 16);
  }
  return (struct CWindowData *)v3;
}
