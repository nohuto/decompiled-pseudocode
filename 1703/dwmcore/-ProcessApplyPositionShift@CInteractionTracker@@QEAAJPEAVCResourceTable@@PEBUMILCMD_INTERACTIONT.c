/*
 * XREFs of ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z @ 0x18012C4CC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x18016C2F8 (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyPositionShift(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT *a3,
        char *a4)
{
  int v6; // esi
  char *i; // rdi
  int v8; // edx
  unsigned int v9; // ebx
  float v10; // xmm0_4

  v6 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    for ( i = a4 + 4; ; i += 12 )
    {
      v8 = *((_DWORD *)i - 1);
      v9 = -2003303421;
      if ( v8 == 2 )
        break;
      if ( v8 )
        v10 = *((float *)this + 17);
      else
        v10 = *((float *)this + 16);
      if ( v10 >= *((float *)i + 1) )
        CInteractionTracker::ApplyPositionShift(this);
      if ( (unsigned int)++v6 >= *((_DWORD *)a3 + 2) )
        return 0;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x38Cu);
  }
  else
  {
    return 0;
  }
  return v9;
}
