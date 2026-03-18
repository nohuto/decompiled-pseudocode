/*
 * XREFs of ?CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z @ 0x1801295E4
 * Callers:
 *     ?CreateCoRenderVisual@CoRenderHost@@UEAAJPEAXPEAPEAUIDWMCoRenderVisualProxy@@@Z @ 0x180125700 (-CreateCoRenderVisual@CoRenderHost@@UEAAJPEAXPEAPEAUIDWMCoRenderVisualProxy@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z @ 0x1801296E0 (-Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z.c)
 *     ??2CCoRenderVisualProxy@@SAPEAX_K@Z @ 0x180146720 (--2CCoRenderVisualProxy@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::CreateForForeignVisual(
        struct CComposition *a1,
        void *a2,
        struct CCoRenderVisualProxy **a3)
{
  CCoRenderVisualProxy *v6; // rax
  CCoRenderVisualProxy *v7; // rbx
  unsigned int v8; // edi
  signed int v9; // eax

  v6 = (CCoRenderVisualProxy *)CCoRenderVisualProxy::operator new((unsigned __int64)a1);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 4) = 0;
    *(_QWORD *)v6 = &CCoRenderVisualProxy::`vftable'{for `IDWMCoRenderVisualProxy'};
    *((_QWORD *)v6 + 1) = &CCoRenderVisualProxy::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_DWORD *)v6 + 12) = 0;
    *((_DWORD *)v6 + 13) = 0;
    *((_DWORD *)v6 + 14) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(CCoRenderVisualProxy *))(*(_QWORD *)v7 + 8LL))(v7);
    v9 = CCoRenderVisualProxy::Initialize(v7, a1, a2);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x27u);
      (*(void (__fastcall **)(CCoRenderVisualProxy *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x24u);
  }
  return v8;
}
