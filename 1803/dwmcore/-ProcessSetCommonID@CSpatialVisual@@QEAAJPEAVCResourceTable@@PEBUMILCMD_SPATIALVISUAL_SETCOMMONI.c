/*
 * XREFs of ?ProcessSetCommonID@CSpatialVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPATIALVISUAL_SETCOMMONID@@@Z @ 0x1801A40F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004E420 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@AEBQEAVCProjectedShadowCaster@@@?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@QEAAXAEBQEAVCProjectedShadowCaster@@@Z @ 0x1801A1C04 (--$emplace_back@AEBQEAVCProjectedShadowCaster@@@-$vector@PEAVCProjectedShadowCaster@@V-$allocato.c)
 *     ?UnregisterContent@CSpatialVisualContentManager@@QEAAXPEAVCSpatialVisualContent@@@Z @ 0x1801AD608 (-UnregisterContent@CSpatialVisualContentManager@@QEAAXPEAVCSpatialVisualContent@@@Z.c)
 */

__int64 __fastcall CSpatialVisual::ProcessSetCommonID(
        CSpatialVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_SPATIALVISUAL_SETCOMMONID *a3)
{
  struct CSpatialVisualContent *v3; // rdx
  __int64 v5; // rbp
  int v6; // eax
  unsigned int v7; // edi
  struct CContent *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  struct CContent *v13; // [rsp+50h] [rbp+8h] BYREF
  struct CResourceTable *v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  v3 = (struct CSpatialVisualContent *)*((_QWORD *)this + 31);
  v5 = *((unsigned int *)a3 + 2);
  if ( !v3 )
    goto LABEL_5;
  if ( *((_QWORD *)v3 + 7) == v5 )
    return 0;
  CSpatialVisualContentManager::UnregisterContent(*(CSpatialVisualContentManager **)(*((_QWORD *)this + 2) + 152LL), v3);
  v6 = CVisual::SetContent(this, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
LABEL_5:
    if ( v5 )
    {
      v8 = (struct CContent *)WPF::ProcessHeapImpl::AllocClear(0x48uLL);
      if ( v8 )
      {
        v9 = *((_QWORD *)this + 2);
        *((_DWORD *)v8 + 2) = 0;
        *((_QWORD *)v8 + 2) = v9;
        *((_QWORD *)v8 + 3) = 0LL;
        *((_QWORD *)v8 + 5) = 0LL;
        *((_DWORD *)v8 + 8) = 0;
        *(_QWORD *)v8 = &CSpatialVisualContent::`vftable';
        *((_QWORD *)v8 + 7) = v5;
        *((_QWORD *)v8 + 8) = 0LL;
      }
      else
      {
        v8 = 0LL;
      }
      v14 = v8;
      if ( v8 )
      {
        (*(void (__fastcall **)(struct CContent *))(*(_QWORD *)v8 + 8LL))(v8);
        v10 = CVisual::SetContent(this, v8);
        v7 = v10;
        if ( v10 >= 0 )
        {
          v11 = *((_QWORD *)this + 2);
          v13 = v8;
          std::vector<CProjectedShadowCaster *>::emplace_back<CProjectedShadowCaster * const &>(
            *(_QWORD *)(v11 + 152),
            (__int64 *)&v13);
          (*(void (__fastcall **)(struct CContent *))(*(_QWORD *)v8 + 8LL))(v8);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v14);
          return 0;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x43u);
      }
      else
      {
        v7 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x41u);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v14);
      return v7;
    }
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x39u);
  return v7;
}
