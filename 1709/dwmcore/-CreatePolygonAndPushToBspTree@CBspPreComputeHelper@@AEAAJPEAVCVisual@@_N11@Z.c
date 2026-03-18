/*
 * XREFs of ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x1801CF6C8
 * Callers:
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x1801CF5B8 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800911EC (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ??2CAnimationLoggingManager@@SAPEAX_K@Z @ 0x180146310 (--2CAnimationLoggingManager@@SAPEAX_K@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x180177244 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMod.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1801CF8DC (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z @ 0x1801CF8F0 (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x1801CFA68 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x1801D8B9C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
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
  signed int PolygonNoRef; // eax
  unsigned int v19; // edi
  __int64 v20; // rcx
  CBspNode *v21; // rbx
  volatile signed __int32 *v22; // rax
  unsigned int v24; // [rsp+20h] [rbp-51h]
  struct CPolygon *v25[2]; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v26[4]; // [rsp+60h] [rbp-11h] BYREF
  int v27; // [rsp+A0h] [rbp+2Fh]
  CBspNode *v28; // [rsp+D0h] [rbp+5Fh] BYREF

  TopByReference = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 96));
  v25[0] = 0LL;
  v10 = *((_OWORD *)TopByReference + 1);
  v26[0] = *(_OWORD *)TopByReference;
  v11 = *((_OWORD *)TopByReference + 2);
  v26[1] = v10;
  v12 = *((_OWORD *)TopByReference + 3);
  v27 = *((_DWORD *)TopByReference + 16);
  v26[2] = v11;
  v26[3] = v12;
  v13 = (float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 256);
  PolygonNoRef = CVisual::GetPolygonNoRef((__int64)a2, (int)v26, *v13, *v14, *v17, *v16, a4, *v15, a5, (__int64 *)v25);
  v19 = PolygonNoRef;
  if ( PolygonNoRef < 0 )
  {
    v24 = 416;
    goto LABEL_13;
  }
  v21 = *(CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(this);
  v28 = v21;
  if ( v21 )
    goto LABEL_10;
  CWatermarkStack<CBspNode *,64,2,10>::Pop(v20, 0LL);
  v22 = (volatile signed __int32 *)CAnimationLoggingManager::operator new();
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
  v28 = v21;
  if ( v21 )
  {
    PolygonNoRef = CWatermarkStack<CBspNode *,64,2,10>::Push(this, &v28);
    v19 = PolygonNoRef;
    if ( PolygonNoRef < 0 )
    {
      v24 = 429;
      goto LABEL_13;
    }
LABEL_10:
    PolygonNoRef = CBspNode::PushPolygon(v21, v25[0], a3);
    v19 = PolygonNoRef;
    if ( PolygonNoRef >= 0 )
      goto LABEL_14;
    v24 = 432;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, PolygonNoRef, v24);
    goto LABEL_14;
  }
  v19 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1ABu);
LABEL_14:
  ReleaseInterface<CRemoteApplicationWindow>((__int64 *)v25);
  return v19;
}
