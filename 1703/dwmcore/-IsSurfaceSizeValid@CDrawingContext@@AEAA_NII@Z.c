/*
 * XREFs of ?IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z @ 0x18000DD5C
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000D620 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800145D8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042480 (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800C5F9C (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDrawingContext::IsSurfaceSizeValid(CDrawingContext *this, unsigned int a2, unsigned int a3)
{
  struct _LUID v5; // r8
  const struct _GUID *v6; // rdx
  unsigned __int8 v7; // di
  int ExistingDevice; // eax
  int v9; // ebx
  unsigned int v10; // edx
  unsigned int v11; // r8d
  __int64 result; // rax
  struct CD3DDeviceLevel1 *v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = (struct _LUID)*((_QWORD *)this + 50);
  v6 = (const struct _GUID *)(*((_QWORD *)this + 4) + 324LL);
  v13 = 0LL;
  v7 = 1;
  ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v6, v5, &v13);
  v9 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ExistingDevice, 0x1102u);
  }
  else
  {
    v10 = *((_DWORD *)v13 + 188);
    v11 = *((_DWORD *)v13 + 189);
    if ( v10 >= 0x4000 )
      v10 = 0x4000;
    if ( v11 >= 0x4000 )
      v11 = 0x4000;
    if ( a2 > v10 || a3 > v11 )
      v7 = 0;
  }
  ReleaseInterface<CD3DDeviceLevel1>(&v13);
  result = v7;
  if ( v9 < 0 )
    return 0LL;
  return result;
}
