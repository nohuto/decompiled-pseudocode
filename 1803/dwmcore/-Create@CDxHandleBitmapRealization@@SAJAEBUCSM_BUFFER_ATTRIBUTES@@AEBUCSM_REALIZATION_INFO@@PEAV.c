/*
 * XREFs of ?Create@CDxHandleBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180082D0C
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1800827C4 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVCDecodeBitmap@@@Z @ 0x180045618 (--0CDxHandleBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVC.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180045BD8 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CDxHandleBitmapRealization@@KAPEAX_K@Z @ 0x180082DC4 (--2CDxHandleBitmapRealization@@KAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_REALIZATION_INFO *a2,
        struct CDecodeBitmap *a3,
        struct CBitmapRealization **a4)
{
  CDxHandleBitmapRealization *v8; // rax
  CDxHandleBitmapRealization *v9; // rbx
  __int64 (__fastcall *v10)(CMILCOMBase *); // rax
  int v11; // eax
  int v12; // edi

  *a4 = 0LL;
  v8 = (CDxHandleBitmapRealization *)CDxHandleBitmapRealization::operator new((unsigned __int64)a1);
  if ( v8 )
    v9 = CDxHandleBitmapRealization::CDxHandleBitmapRealization(v8, a1, a2, 1, a3);
  else
    v9 = 0LL;
  if ( v9 )
  {
    v10 = *(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)v9 + 8LL);
    if ( v10 == CMILCOMBase::InternalAddRef )
      CMILCOMBase::InternalAddRef(v9);
    else
      v10(v9);
    v11 = CDxHandleBitmapRealization::Initialize(v9);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x26u);
    }
    else
    {
      *a4 = v9;
      v9 = 0LL;
    }
    if ( v12 < 0 )
    {
      if ( !v9 )
        return (unsigned int)v12;
      *((_QWORD *)v9 + 35) = 0LL;
    }
    if ( v9 )
      (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x23u);
  }
  return (unsigned int)v12;
}
