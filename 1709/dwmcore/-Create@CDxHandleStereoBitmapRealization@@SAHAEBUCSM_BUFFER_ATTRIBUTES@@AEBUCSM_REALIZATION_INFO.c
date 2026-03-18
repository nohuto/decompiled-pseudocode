/*
 * XREFs of ?Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1801D2CE0
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18007627C (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18004DCC0 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1801D2B10 (--0CDxHandleStereoBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_REALIZATION_INFO *a2,
        struct CBitmapRealization **a3)
{
  CDxHandleStereoBitmapRealization *v6; // rax
  CMILCOMBase *v7; // rax
  CDxHandleBitmapRealization *v8; // rbx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  signed int v12; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (CDxHandleStereoBitmapRealization *)HeapAlloc(WPF::g_processHeap, 0, 0x1F8uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v7 = CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(v6, a1, a2);
  v8 = v7;
  if ( v7 )
  {
    CMILCOMBase::InternalAddRef(v7);
    v12 = CDxHandleBitmapRealization::Initialize(v8, v10, v11);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x1Du);
    }
    else
    {
      *a3 = v8;
      v8 = 0LL;
    }
    if ( v9 < 0 )
    {
      if ( !v8 )
        return (unsigned int)v9;
      *((_QWORD *)v8 + 35) = 0LL;
    }
    if ( v8 )
      CMILCOMBase::InternalRelease(v8);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1Au);
  }
  return (unsigned int)v9;
}
