/*
 * XREFs of ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C00F2FB4
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00CBE30 (-PrepareIndependentFlipToken@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D07FC (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C002AB38 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C002BB1C (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall UpdatePostComposition(unsigned int a1, char a2, int a3, int a4, struct ADAPTER_DISPLAY *a5)
{
  __int64 v6; // r15
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // r10
  struct _LIST_ENTRY *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  v6 = a1;
  v9 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct ADAPTER_DISPLAY *)((char *)a5 + 280));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v10 = *((_QWORD *)a5 + 14);
  v11 = 3760 * v6;
  if ( a2 )
  {
    if ( *(_BYTE *)(v10 + v11 + 668) && *(_DWORD *)(v10 + v11 + 672) == a3 && *(_DWORD *)(v10 + v11 + 676) == a4 )
      goto LABEL_3;
    *(_DWORD *)(v10 + v11 + 672) = a3;
    *(_DWORD *)(*((_QWORD *)a5 + 14) + v11 + 676) = a4;
    *(_BYTE *)(*((_QWORD *)a5 + 14) + v11 + 668) = a2;
    goto LABEL_11;
  }
  if ( *(_BYTE *)(v10 + v11 + 668) )
  {
    *(_DWORD *)(v10 + v11 + 672) = 0;
    *(_DWORD *)(*((_QWORD *)a5 + 14) + v11 + 676) = 0;
    *(_BYTE *)(*((_QWORD *)a5 + 14) + v11 + 668) = 0;
LABEL_11:
    v9 = 1;
  }
LABEL_3:
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  if ( v9 )
  {
    v12 = (struct _LIST_ENTRY *)operator new(0x18uLL, 0x4B677844u, PagedPool);
    if ( v12 )
    {
      v12->Flink = 0LL;
      v12->Blink = 0LL;
      v12[1].Flink = 0LL;
      v12->Flink = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v12, *((struct DXGADAPTER **)a5 + 2));
      LODWORD(v12[1].Flink) = v6;
      Current = DXGPROCESS::GetCurrent(v14, v13);
      DXGWORKQUEUE::QueueWork(
        (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 88LL),
        (struct _LIST_ENTRY *)lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
        v12);
    }
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
}
