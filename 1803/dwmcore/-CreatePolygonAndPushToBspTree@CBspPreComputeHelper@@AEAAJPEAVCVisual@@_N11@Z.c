/*
 * XREFs of ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x180211688
 * Callers:
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180211578 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800C2614 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801A7A0C (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMod.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1802113C4 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x180211550 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z @ 0x18021189C (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x180211A18 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18021F04C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::CreatePolygonAndPushToBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        bool a3,
        char a4,
        char a5)
{
  const struct CMILMatrix *TopByReference; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  float *v13; // rax
  int *v14; // r9
  char *v15; // r8
  int *v16; // r11
  int *v17; // r10
  int PolygonNoRef; // eax
  unsigned int v19; // edi
  __int64 v20; // rcx
  CBspNode *v21; // rbx
  volatile signed __int32 *v22; // rax
  unsigned int v24; // [rsp+20h] [rbp-51h]
  CBspNode *v25; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v26[4]; // [rsp+60h] [rbp-11h] BYREF
  int v27; // [rsp+A0h] [rbp+2Fh]
  struct CPolygon *v28; // [rsp+D0h] [rbp+5Fh] BYREF

  TopByReference = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 96));
  v28 = 0LL;
  v10 = *((_OWORD *)TopByReference + 1);
  v26[0] = *(_OWORD *)TopByReference;
  v11 = *((_OWORD *)TopByReference + 2);
  v26[1] = v10;
  v12 = *((_OWORD *)TopByReference + 3);
  v27 = *((_DWORD *)TopByReference + 16);
  v26[2] = v11;
  v26[3] = v12;
  v13 = (float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 256);
  PolygonNoRef = CVisual::GetPolygonNoRef((__int64)a2, (int)v26, *v13, *v14, *v17, *v16, a4, *v15, a5, (__int64 *)&v28);
  v19 = PolygonNoRef;
  if ( PolygonNoRef < 0 )
  {
    v24 = 416;
    goto LABEL_13;
  }
  v21 = *(CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((__int64)this);
  v25 = v21;
  if ( v21 )
    goto LABEL_10;
  CWatermarkStack<CBspNode *,64,2,10>::Pop(v20, 0LL);
  v22 = (volatile signed __int32 *)CBspNode::operator new();
  v21 = (CBspNode *)v22;
  if ( v22 )
  {
    *(_QWORD *)v22 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v22 = &CBspNode::`vftable';
    *((_DWORD *)v22 + 2) = 0;
    *((_DWORD *)v22 + 14) = 0;
    *((_QWORD *)v22 + 4) = v22 + 16;
    *((_QWORD *)v22 + 5) = v22 + 16;
    *((_DWORD *)v22 + 12) = 4;
    *((_DWORD *)v22 + 13) = 4;
    *((_BYTE *)v22 + 96) = a3;
    _InterlockedIncrement(v22 + 2);
  }
  else
  {
    v21 = 0LL;
  }
  v25 = v21;
  if ( v21 )
  {
    PolygonNoRef = CWatermarkStack<CBspNode *,64,2,10>::Push(this, &v25);
    v19 = PolygonNoRef;
    if ( PolygonNoRef < 0 )
    {
      v24 = 429;
      goto LABEL_13;
    }
LABEL_10:
    PolygonNoRef = CBspNode::PushPolygon(v21, v28, a3);
    v19 = PolygonNoRef;
    if ( PolygonNoRef >= 0 )
      goto LABEL_14;
    v24 = 432;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PolygonNoRef, v24);
    goto LABEL_14;
  }
  v19 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1ABu);
LABEL_14:
  ReleaseInterface<CD3DSurface>((__int64 *)&v28);
  return v19;
}
