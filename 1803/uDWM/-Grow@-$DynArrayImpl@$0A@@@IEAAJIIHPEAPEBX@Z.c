/*
 * XREFs of ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180020DC0
 * Callers:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x180012370 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DD20 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180020750 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180023690 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18002F980 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x18002FA18 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruction@@I@Z @ 0x180033620 (-AddMultipleAndSet@-$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruct.c)
 *     ?InsertAt@?$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z @ 0x1800336B8 (-InsertAt@-$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x180047544 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x1800706E4 (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x18009025C (-InsertAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?EnsureCount@CMILResourceCache@@IEAAJI@Z @ 0x1800AAF04 (-EnsureCount@CMILResourceCache@@IEAAJI@Z.c)
 * Callees:
 *     ?Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z @ 0x180021020 (-Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004B35A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<0>::Grow(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  void *v6; // r10
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned int v12; // edx
  int v13; // r9d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // esi
  void *(__fastcall *v18)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v19; // rax
  int v20; // eax
  int (*v22)(WPF::ProcessHeapImpl *__hidden, void **, unsigned __int64); // rax
  int v23; // eax
  const void *v24; // rdx
  unsigned __int64 v25; // r9
  void *v26; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 24);
  v6 = 0LL;
  v26 = 0LL;
  v9 = v5 + a3;
  if ( v5 + a3 < v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xE7u);
    return 2147942934LL;
  }
  v10 = *(_DWORD *)(a1 + 20);
  if ( v9 <= v10 )
    return 0LL;
  v11 = a2 * (unsigned __int64)v9;
  if ( v11 <= 0xFFFFFFFF )
  {
    if ( a4 )
    {
LABEL_13:
      if ( a2 == 16 )
        v16 = 0xFFFFFFF;
      else
        v16 = 0xFFFFFFFF / a2;
      if ( v9 <= v16 )
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
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x111u);
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
          v22 = *(int (**)(WPF::ProcessHeapImpl *__hidden, void **, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 24LL);
          if ( v22 == WPF::ProcessHeapImpl::Realloc )
            v23 = WPF::ProcessHeapImpl::Realloc(WPF::g_pProcessHeap, &v26, (unsigned int)v11);
          else
            v23 = ((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, void **, _QWORD))v22)(
                    WPF::g_pProcessHeap,
                    &v26,
                    (unsigned int)v11);
          v17 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x12Au);
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
        *(_DWORD *)(a1 + 20) = v9;
        *(_QWORD *)a1 = v6;
        return v17;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Au);
      return 2147942934LL;
    }
    v12 = v9 - v10;
    if ( v10 > 0x10 )
    {
      v14 = 8092;
      v13 = v10;
      if ( v10 >= 0x1F9C )
        goto LABEL_8;
    }
    else
    {
      v13 = 16;
    }
    v14 = v13;
LABEL_8:
    if ( v12 <= v14 )
      v12 = v14;
    v15 = v12 + v10;
    if ( v12 + v10 >= v10 && a2 * (unsigned __int64)v15 <= 0xFFFFFFFF )
    {
      LODWORD(v11) = a2 * v15;
      v9 = v12 + v10;
    }
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xF0u);
  return 2147942934LL;
}
