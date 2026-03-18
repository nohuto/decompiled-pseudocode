/*
 * XREFs of ?AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18012D59C
 * Callers:
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800D1AF0 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18004B9C0 (--$ReleaseInterface@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVCBitmapOfDeviceBitmaps@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ReplaceInterface@VIBitmapSource@@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVIBitmapSource@@PEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18016383C (--$ReplaceInterface@VIBitmapSource@@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVIBitmapSource@@PEAVCBit.c)
 */

__int64 __fastcall CFlipChain::AddBuffer(CFlipChain *this, struct CBitmapOfDeviceBitmaps **a2)
{
  CMILCOMBase *v4; // r10
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // ebx
  int v9; // eax
  bool v10; // zf
  unsigned int v11; // edx
  _QWORD *v12; // rcx
  unsigned int v13; // r8d
  unsigned int v14; // eax
  int v15; // eax
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF
  char *v18; // [rsp+50h] [rbp+8h] BYREF

  if ( this )
    v18 = (char *)this + 88;
  else
    v18 = 0LL;
  v4 = *a2;
  v5 = (unsigned int)v18;
  v6 = *((unsigned int *)v4 + 128);
  v7 = v6 + 1;
  if ( (int)v6 + 1 >= (unsigned int)v6 )
    v5 = v6 + 1;
  v8 = v7 < (unsigned int)v6 ? 0x80070216 : 0;
  if ( v7 < (unsigned int)v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v5 > *((_DWORD *)v4 + 127) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4 + 488, 8u, 1, &v18);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v4 + 61) + 8 * v6) = v18;
    *((_DWORD *)v4 + 128) = v5;
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2CEu);
  }
  else
  {
    DWORD2(v17) = 0;
    v10 = *((_DWORD *)this + 40) == 0;
    *(_QWORD *)&v17 = *a2;
    if ( v10 )
      ReplaceInterface<IBitmapSource,CBitmapOfDeviceBitmaps>((char *)this + 80);
    v11 = (unsigned int)v18;
    v12 = (_QWORD *)((char *)this + 136);
    v13 = *((_DWORD *)this + 40);
    v14 = v13 + 1;
    if ( v13 + 1 >= v13 )
      v11 = v13 + 1;
    v8 = v14 < v13 ? 0x80070216 : 0;
    if ( v14 < v13 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
    }
    else if ( v11 > *((_DWORD *)this + 39) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v12, 0x10u, 1, &v17);
      v8 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*v12 + 16LL * v13) = v17;
      *((_DWORD *)this + 40) = v11;
    }
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2DAu);
    else
      *a2 = 0LL;
  }
  ReleaseInterface<CBitmapOfDeviceBitmaps>(a2);
  return (unsigned int)v8;
}
