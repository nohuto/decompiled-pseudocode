/*
 * XREFs of ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009E790
 * Callers:
 *     <none>
 * Callees:
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E6A4 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180015830 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009E188 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009E304 (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009E4A4 (-UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009E6C8 (-UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::ValidateVisual(CVisual ***this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int updated; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  if ( *((char *)this + 80) < 0 )
  {
    v2 = CIconicAnimatedVisual::EnsureVisualBrush((CIconicAnimatedVisual *)this);
    v3 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xE6u);
      return v3;
    }
    v4 = CSecondaryWindowRepresentation::Validate(this[36]);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xE7u);
      return v3;
    }
    updated = CIconicAnimatedVisual::UpdateSourceRect((CIconicAnimatedVisual *)this);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xE8u);
      return v3;
    }
    v6 = CIconicAnimatedVisual::UpdateDestinationRect((const struct tagRECT *)this);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xE9u);
      return v3;
    }
    v7 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xEAu);
      return v3;
    }
    v8 = CIconicAnimatedVisual::SetupInstructions((CIconicAnimatedVisual *)this);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xEBu);
      return v3;
    }
    *((_DWORD *)this + 20) &= ~0x80u;
  }
  v9 = CRenderDataVisual::ValidateVisual((CRenderDataVisual *)this);
  v3 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xEFu);
  return v3;
}
