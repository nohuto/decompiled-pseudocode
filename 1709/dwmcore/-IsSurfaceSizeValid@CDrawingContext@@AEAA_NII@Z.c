/*
 * XREFs of ?IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z @ 0x18003D284
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18003BAAC (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800809DC (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001AC40 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800BE3B8 (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDrawingContext::IsSurfaceSizeValid(CDrawingContext *this, unsigned int a2, unsigned int a3)
{
  struct _LUID v5; // rdx
  unsigned __int8 v6; // di
  int ExistingDevice; // eax
  int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // eax
  __int64 result; // rax
  struct CD3DDeviceLevel1 *v12; // [rsp+50h] [rbp+8h] BYREF

  v5 = (struct _LUID)*((_QWORD *)this + 49);
  v6 = 1;
  v12 = 0LL;
  ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v5, &v12);
  v8 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ExistingDevice, 0xEF1u);
  }
  else
  {
    v9 = *((_DWORD *)v12 + 192);
    v10 = *((_DWORD *)v12 + 193);
    if ( v9 >= 0x4000 )
      v9 = 0x4000;
    if ( v10 >= 0x4000 )
      v10 = 0x4000;
    if ( a2 > v9 || a3 > v10 )
      v6 = 0;
  }
  ReleaseInterface<CD3DDeviceLevel1>(&v12);
  result = v6;
  if ( v8 < 0 )
    return 0LL;
  return result;
}
