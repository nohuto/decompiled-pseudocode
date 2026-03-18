/*
 * XREFs of ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x18016DE6C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x18016DCC8 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18016E100 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18016CAD8 (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x18016DCC8 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker::SetMinScale(CInteractionTracker *this, float a2)
{
  float *v2; // rdi
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *cData; // r9
  CInteractionTracker *v7; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  CInteractionTracker **v9; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+6Ch] [rbp-3Ch]
  float *v12; // [rsp+70h] [rbp-38h]
  int v13; // [rsp+78h] [rbp-30h]
  int v14; // [rsp+7Ch] [rbp-2Ch]

  v2 = (float *)((char *)this + 116);
  if ( *((float *)this + 29) != a2 )
  {
    *v2 = a2;
    CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(this);
    CInteractionTracker::SetMaxScale(this, fmaxf(*v2, *((float *)this + 30)));
    CResource::InvalidateAnimationSources(this, 26LL);
    if ( dword_18023D7F0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
      {
        v11 = 0;
        v14 = 0;
        v9 = &v7;
        v7 = this;
        v10 = 8;
        v12 = v2;
        v13 = (int)cData;
        TlgWrite(v4, &unk_1801F775E, v5, cData, (UINT32)cData, &pData);
      }
    }
  }
}
