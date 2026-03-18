/*
 * XREFs of ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z @ 0x18016C5C8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x18016AE7C (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyPositionShift(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT *a3,
        char *a4)
{
  int v6; // esi
  float *i; // rdi
  int v8; // edx
  unsigned int v9; // ebx
  float v10; // xmm0_4

  v6 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    for ( i = (float *)(a4 + 4); ; i += 3 )
    {
      v8 = *((_DWORD *)i - 1);
      v9 = -2003303421;
      if ( v8 == 2 )
        break;
      if ( v8 )
        v10 = *((float *)this + 17);
      else
        v10 = *((float *)this + 16);
      if ( v10 >= i[1] )
        CInteractionTracker::ApplyPositionShift((__int64)this, v8, *i);
      if ( (unsigned int)++v6 >= *((_DWORD *)a3 + 2) )
        return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x3A0u);
  }
  else
  {
    return 0;
  }
  return v9;
}
