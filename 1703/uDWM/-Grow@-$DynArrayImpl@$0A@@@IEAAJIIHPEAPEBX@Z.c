/*
 * XREFs of ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002C510
 * Callers:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruction@@I@Z @ 0x180014D80 (-AddMultipleAndSet@-$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruct.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x1800151F4 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180015288 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x18001C760 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x18001D7E0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180020C90 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180021D3C (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002BFA0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureCount@CMILResourceCache@@IEAAJI@Z @ 0x1800400D4 (-EnsureCount@CMILResourceCache@@IEAAJI@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x1800458A4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x18006E5BC (-InsertAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x18006E7E0 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x180075144 (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 * Callees:
 *     ?Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z @ 0x18002C7F0 (-Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004DE8A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<0>::Grow(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  void *v6; // r10
  unsigned int v9; // r11d
  unsigned int v10; // ecx
  unsigned __int64 v11; // r8
  unsigned int v12; // eax
  int v13; // r9d
  unsigned int v14; // edx
  unsigned int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // edi
  void *(__fastcall *v18)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v19; // rax
  int v20; // eax
  int (*v22)(WPF::ProcessHeapImpl *__hidden, void **, unsigned __int64); // rax
  int v23; // eax
  const void *v24; // rdx
  unsigned __int64 v25; // r9
  void *v26; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 24);
  v6 = 0LL;
  v26 = 0LL;
  v9 = v5 + a3;
  if ( v5 + a3 < v5 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE7u);
    return 2147942934LL;
  }
  v10 = *(_DWORD *)(a1 + 20);
  if ( v9 <= v10 )
    return 0LL;
  v11 = a2 * (unsigned __int64)v9;
  if ( v11 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xF0u);
    return 2147942934LL;
  }
  if ( a4 )
    goto LABEL_41;
  v12 = v9 - v10;
  if ( v10 <= 0x10 )
  {
    v13 = 16;
LABEL_7:
    v14 = v13;
    goto LABEL_8;
  }
  v14 = 8092;
  v13 = v10;
  if ( v10 < 0x1F9C )
    goto LABEL_7;
LABEL_8:
  if ( v12 <= v14 )
    v12 = v14;
  v15 = v10 + v12;
  if ( v10 + v12 < v10 || a2 * (unsigned __int64)v15 > 0xFFFFFFFF )
  {
LABEL_41:
    v15 = v9;
    goto LABEL_13;
  }
  LODWORD(v11) = a2 * v15;
LABEL_13:
  if ( a2 == 16 )
    v16 = 0xFFFFFFF;
  else
    v16 = 0xFFFFFFFF / a2;
  if ( v15 <= v16 )
  {
    if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
    {
      v17 = 0;
      if ( (_DWORD)v11 )
      {
        v18 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL);
        if ( v18 == WPF::ProcessHeapImpl::Alloc )
          v19 = HeapAlloc(g_hProcessHeap, 0, (unsigned int)v11);
        else
          v19 = v18(WPF::g_pProcessHeap, (unsigned int)v11);
        v26 = v19;
        v6 = v19;
        if ( !v19 )
          v17 = -2147024882;
      }
      else
      {
        v17 = -2147024809;
      }
      if ( (v17 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x111u);
        return v17;
      }
      v20 = *(_DWORD *)(a1 + 24);
      if ( v20 )
      {
        memcpy_0(v6, *(const void **)a1, a2 * v20);
        v6 = v26;
      }
    }
    else
    {
      v26 = *(void **)a1;
      v22 = *(int (**)(WPF::ProcessHeapImpl *__hidden, void **, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 24LL);
      if ( v22 == WPF::ProcessHeapImpl::Realloc )
        v23 = WPF::ProcessHeapImpl::Realloc(WPF::g_pProcessHeap, &v26, (unsigned int)v11);
      else
        v23 = ((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, void **))v22)(WPF::g_pProcessHeap, &v26);
      v17 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x12Au);
        return v17;
      }
      v24 = *(const void **)a1;
      v6 = v26;
      if ( v26 != *(void **)a1 )
      {
        if ( a5 )
        {
          v25 = *a5;
          if ( *a5 >= (unsigned __int64)v24 && v25 < (unsigned __int64)v24 + a2 * *(_DWORD *)(a1 + 20) )
            *a5 = (unsigned __int64)v26 + v25 - (_QWORD)v24;
        }
      }
    }
    *(_DWORD *)(a1 + 20) = v15;
    *(_QWORD *)a1 = v6;
    return v17;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x10Au);
  return 2147942934LL;
}
