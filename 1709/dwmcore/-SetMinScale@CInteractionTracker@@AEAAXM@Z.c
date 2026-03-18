/*
 * XREFs of ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x18016E0B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x18016DF10 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18016E2C0 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18016B868 (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x18016DF10 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker::SetMinScale(CInteractionTracker *this, float a2)
{
  float *v2; // rdi
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *cData; // r9
  CInteractionTracker *v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  CInteractionTracker **v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  float *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v2 = (float *)((char *)this + 116);
  if ( *((float *)this + 29) != a2 )
  {
    *v2 = a2;
    CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(this);
    CInteractionTracker::SetMaxScale(this, fmaxf(*v2, *((float *)this + 30)));
    CResource::InvalidateAnimationSources(this);
    if ( dword_18026D7B0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
      {
        v11 = 0;
        v14 = 0;
        v9 = &v7;
        v7 = this;
        v10 = 8;
        v12 = v2;
        v13 = (int)cData;
        TlgWrite(v4, &unk_180213A8F, v5, cData, (UINT32)cData, &pData);
      }
    }
  }
}
