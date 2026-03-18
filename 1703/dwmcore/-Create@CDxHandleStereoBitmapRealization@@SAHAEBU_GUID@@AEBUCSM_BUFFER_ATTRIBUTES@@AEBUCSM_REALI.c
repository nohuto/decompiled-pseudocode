/*
 * XREFs of ?Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1801B5FC0
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180075FE4 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18007A43C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1801B5DE0 (--0CDxHandleStereoBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::Create(
        const struct _GUID *a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CBitmapRealization **a4)
{
  CDxHandleStereoBitmapRealization *v8; // rax
  CBitmapOfDeviceBitmaps *v9; // rax
  CDxHandleBitmapRealization *v10; // rbx
  int v11; // edi
  int v12; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v8 = (CDxHandleStereoBitmapRealization *)HeapAlloc(WPF::g_processHeap, 0, 0x218uLL);
  if ( !v8 )
  {
    ModuleFailFastForHRESULT(-2147024882, retaddr);
    __debugbreak();
  }
  v9 = CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(v8, a1, a2, a3);
  v10 = v9;
  if ( v9 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v9);
    v12 = CDxHandleBitmapRealization::Initialize(v10);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1Fu);
    }
    else
    {
      *a4 = v10;
      v10 = 0LL;
    }
    if ( v11 < 0 )
    {
      if ( !v10 )
        return (unsigned int)v11;
      *((_QWORD *)v10 + 31) = 0LL;
    }
    if ( v10 )
      CMILCOMBase::InternalRelease(v10);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Cu);
  }
  return (unsigned int)v11;
}
