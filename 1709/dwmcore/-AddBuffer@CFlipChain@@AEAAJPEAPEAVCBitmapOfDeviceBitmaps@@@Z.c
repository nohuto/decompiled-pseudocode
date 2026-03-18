/*
 * XREFs of ?AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x180164B00
 * Callers:
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x180164CB4 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x1800BE1B8 (--$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z.c)
 *     ??$ReplaceInterface@VIBitmapSource@@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVIBitmapSource@@PEAVCBitmapOfDeviceBitmaps@@@Z @ 0x180164838 (--$ReplaceInterface@VIBitmapSource@@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVIBitmapSource@@PEAVCBit.c)
 */

__int64 __fastcall CFlipChain::AddBuffer(CFlipChain *this, struct CBitmapOfDeviceBitmaps **a2)
{
  CMILCOMBase *v2; // r10
  unsigned __int64 v3; // r9
  bool v5; // cf
  __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // eax
  signed int v10; // ebx
  signed int v11; // eax
  bool v12; // zf
  CMILCOMBase *v13; // rdx
  unsigned int v14; // edx
  _QWORD *v15; // rcx
  unsigned int v16; // r8d
  unsigned int v17; // eax
  signed int v18; // eax
  __int128 v20; // [rsp+30h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = (unsigned __int64)this + 96;
  v5 = this != 0LL;
  v7 = *((unsigned int *)*a2 + 64);
  v21 = v3 & -(__int64)v5;
  v8 = v5 ? v3 : 0;
  v9 = v7 + 1;
  if ( (int)v7 + 1 >= (unsigned int)v7 )
    v8 = v7 + 1;
  v10 = v9 < (unsigned int)v7 ? 0x80070216 : 0;
  if ( v9 < (unsigned int)v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xB5u);
  }
  else if ( v8 > *((_DWORD *)v2 + 63) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2 + 232, 8u, 1, &v21);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v2 + 29) + 8 * v7) = v21;
    *((_DWORD *)v2 + 64) = v8;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x2CEu);
  }
  else
  {
    DWORD2(v20) = 0;
    v12 = *((_DWORD *)this + 42) == 0;
    v13 = *a2;
    *(_QWORD *)&v20 = *a2;
    if ( v12 )
      ReplaceInterface<IBitmapSource,CBitmapOfDeviceBitmaps>((unsigned __int64 *)this + 10, v13);
    v14 = v21;
    v15 = (_QWORD *)((char *)this + 144);
    v16 = *((_DWORD *)this + 42);
    v17 = v16 + 1;
    if ( v16 + 1 >= v16 )
      v14 = v16 + 1;
    v10 = v17 < v16 ? 0x80070216 : 0;
    if ( v17 < v16 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xB5u);
    }
    else if ( v14 > *((_DWORD *)this + 41) )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15, 0x10u, 1, &v20);
      v10 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*v15 + 16LL * v16) = v20;
      *((_DWORD *)this + 42) = v14;
    }
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x2DAu);
    else
      *a2 = 0LL;
  }
  ReleaseInterface<CSwRenderTargetGetBounds>(a2);
  return (unsigned int)v10;
}
