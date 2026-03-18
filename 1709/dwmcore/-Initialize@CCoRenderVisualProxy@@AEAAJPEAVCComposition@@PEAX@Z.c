/*
 * XREFs of ?Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z @ 0x1801296E0
 * Callers:
 *     ?CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z @ 0x1801295E4 (-CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x180050740 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??2CVisual@@KAPEAX_K@Z @ 0x1801292D0 (--2CVisual@@KAPEAX_K@Z.c)
 *     ??2CAnimationTrigger@@SAPEAX_K@Z @ 0x180146338 (--2CAnimationTrigger@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::Initialize(CCoRenderVisualProxy *this, struct CComposition *a2, void *a3)
{
  _DWORD *v6; // rbx
  CVisual *v7; // rax
  CVisual *v8; // rdi
  unsigned int v9; // esi
  unsigned __int64 v10; // rcx
  _DWORD *v11; // rax
  signed int v12; // eax

  v6 = 0LL;
  v7 = (CVisual *)CVisual::operator new();
  if ( v7 )
    v8 = CVisual::CVisual(v7, a2);
  else
    v8 = 0LL;
  if ( v8 )
  {
    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v8 + 8LL))(v8);
    v11 = CAnimationTrigger::operator new(v10);
    v6 = v11;
    if ( v11 )
    {
      v11[2] = 0;
      *((_QWORD *)v11 + 2) = a2;
      *((_QWORD *)v11 + 3) = 0LL;
      *((_QWORD *)v11 + 5) = 0LL;
      v11[8] = 0;
      *(_QWORD *)v11 = &CCoRenderContent::`vftable'{for `CContent'};
      *((_QWORD *)v11 + 7) = &CCoRenderContent::`vftable'{for `ID2D1PrivateCompositorRenderer'};
      *((_QWORD *)v11 + 8) = a3;
      v11[18] = 0;
      v11[19] = 0;
      v11[20] = 0;
      v11[21] = 0;
      *((_QWORD *)v11 + 11) = (char *)this + 32;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
      v12 = (*(__int64 (__fastcall **)(CVisual *, _DWORD *))(*(_QWORD *)v8 + 288LL))(v8, v6);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x8Eu);
      }
      else
      {
        *((_QWORD *)this + 3) = v8;
        v8 = 0LL;
      }
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x8Bu);
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x87u);
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v8);
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
