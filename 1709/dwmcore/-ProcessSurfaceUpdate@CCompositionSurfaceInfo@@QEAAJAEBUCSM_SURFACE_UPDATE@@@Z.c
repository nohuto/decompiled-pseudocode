/*
 * XREFs of ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18004BDE0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x18002B2F0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z @ 0x180076560 (-FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180076594 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180076684 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0nxxxqqxqqqqqqqqx @ 0x18017CE68 (McTemplateU0nxxxqqxqqqqqqqqx.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::ProcessSurfaceUpdate(
        CCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2)
{
  int v4; // ebp
  unsigned __int64 v5; // rdx
  __int64 (__fastcall ***v6)(CBitmapRealization *, const struct _GUID *, void **); // r14
  CMILCOMBase *RealizationNoRef; // rsi
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 (__fastcall *v10)(CMILCOMBase *); // rax
  __int64 (__fastcall *v11)(CBitmapRealization *); // rax
  int v13; // eax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0nxxxqqxqqqqqqqqx(
      *((_DWORD *)a2 + 7),
      (*((_DWORD *)a2 + 47) >> 2) & 1,
      *((_DWORD *)this + 19) >= 2,
      (_DWORD)a2 + 4,
      *((_QWORD *)a2 + 2),
      *((_DWORD *)a2 + 7));
  v4 = 0;
  if ( *((_QWORD *)this + 7) != *((_QWORD *)a2 + 2) )
  {
    CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 48));
    CCompositionSurfaceInfo::UpdateRenderingRealization(this, 0LL, 0LL, 0LL, 0LL, 1);
  }
  v5 = *((_QWORD *)a2 + 2);
  if ( v5 )
  {
    v6 = 0LL;
    if ( *((_QWORD *)this + 7) == v5 )
    {
      RealizationNoRef = 0LL;
      v8 = 0LL;
      if ( *((_DWORD *)this + 26) )
      {
        v9 = *((_QWORD *)this + 10);
        while ( *(_DWORD *)(*(_QWORD *)(v9 + 8 * v8) + 276LL) != *((_DWORD *)a2 + 6) )
        {
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *((_DWORD *)this + 26) )
            goto LABEL_11;
        }
        RealizationNoRef = *(CMILCOMBase **)(v9 + 8 * v8);
      }
LABEL_11:
      if ( RealizationNoRef )
        goto LABEL_12;
    }
    v13 = CCompositionSurfaceInfo::CBindInfo::Initialize((CCompositionSurfaceInfo *)((char *)this + 48), v5);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1B1u);
    }
    else
    {
      RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
                           (CCompositionSurfaceInfo *)((char *)this + 48),
                           *((_DWORD *)a2 + 6));
      if ( RealizationNoRef )
      {
LABEL_12:
        v10 = *(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)RealizationNoRef + 8LL);
        if ( v10 == CMILCOMBase::InternalAddRef )
          CMILCOMBase::InternalAddRef(RealizationNoRef);
        else
          v10(RealizationNoRef);
        v6 = (__int64 (__fastcall ***)(CBitmapRealization *, const struct _GUID *, void **))RealizationNoRef;
      }
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x172u);
    }
    else
    {
      *((_DWORD *)this + 18) = *((_DWORD *)a2 + 7);
      *((_DWORD *)this + 19) = *((_DWORD *)a2 + 48);
      CCompositionSurfaceInfo::UpdateRenderingRealization(
        this,
        v6,
        (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 72),
        *((HRGN *)a2 + 4),
        (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 40),
        0);
    }
    if ( v6 )
    {
      v11 = (__int64 (__fastcall *)(CBitmapRealization *))(*v6)[2];
      if ( v11 == CBitmapRealization::Release )
        CBitmapRealization::Release((CBitmapRealization *)v6);
      else
        v11((CBitmapRealization *)v6);
    }
  }
  return (unsigned int)v4;
}
