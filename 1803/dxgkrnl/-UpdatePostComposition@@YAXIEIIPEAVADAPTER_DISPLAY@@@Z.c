/*
 * XREFs of ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01DB434
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CCDE0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D8C08 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000B224 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C0036C3C (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall UpdatePostComposition(unsigned int a1, char a2, int a3, int a4, struct ADAPTER_DISPLAY *a5)
{
  __int64 v7; // r15
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // r9
  char v12; // cl
  struct _LIST_ENTRY *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  v7 = a1;
  v9 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct ADAPTER_DISPLAY *)((char *)a5 + 280), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v10 = *((_QWORD *)a5 + 14);
  v11 = 3760 * v7;
  v12 = *(_BYTE *)(v10 + 3760 * v7 + 668);
  if ( a2 )
  {
    if ( v12 && *(_DWORD *)(v10 + v11 + 672) == a3 && *(_DWORD *)(v10 + v11 + 676) == a4 )
      goto LABEL_9;
    *(_DWORD *)(v10 + v11 + 672) = a3;
    *(_DWORD *)(*((_QWORD *)a5 + 14) + v11 + 676) = a4;
    *(_BYTE *)(*((_QWORD *)a5 + 14) + v11 + 668) = a2;
    goto LABEL_8;
  }
  if ( v12 )
  {
    *(_DWORD *)(v10 + v11 + 672) = 0;
    *(_DWORD *)(*((_QWORD *)a5 + 14) + v11 + 676) = 0;
    *(_BYTE *)(*((_QWORD *)a5 + 14) + v11 + 668) = 0;
LABEL_8:
    v9 = 1;
  }
LABEL_9:
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  if ( v9 )
  {
    v13 = (struct _LIST_ENTRY *)operator new[](0x18uLL, 0x4B677844u, PagedPool);
    if ( v13 )
    {
      v13->Flink = 0LL;
      v13->Blink = 0LL;
      v13[1].Flink = 0LL;
      v13->Flink = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v13, *((struct DXGADAPTER **)a5 + 2));
      LODWORD(v13[1].Flink) = v7;
      Current = DXGPROCESS::GetCurrent(v15, v14);
      DXGWORKQUEUE::QueueWork(
        (PLIST_ENTRY)(*((_QWORD *)Current + 9) + 88LL),
        (struct _LIST_ENTRY *)lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
        v13);
    }
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
}
