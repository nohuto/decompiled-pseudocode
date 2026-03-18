/*
 * XREFs of ?UpdatePostComposition@DXGCONTEXT@@QEAAXIEII@Z @ 0x1C016B760
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BA040 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B880C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C003A65C (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C003B698 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall DXGCONTEXT::UpdatePostComposition(DXGCONTEXT *this, unsigned int a2, char a3, int a4, unsigned int a5)
{
  __int64 v7; // r14
  char v9; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _LIST_ENTRY *v22; // rbx
  __int64 v23; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v25[24]; // [rsp+20h] [rbp-18h] BYREF

  v7 = a2;
  v9 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = 3157LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v25,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) + 2280LL) + 280LL),
    v12,
    v13);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  v16 = 3208 * v7;
  v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) + 2280LL);
  v18 = *(_QWORD *)(v17 + 112);
  if ( a3 )
  {
    if ( *(_BYTE *)(v16 + v18 + 668) && *(_DWORD *)(v16 + v18 + 672) == a4 && *(_DWORD *)(v16 + v18 + 676) == a5 )
      goto LABEL_11;
    *(_DWORD *)(v16 + v18 + 672) = a4;
    *(_DWORD *)(v16 + *(_QWORD *)(v17 + 112) + 676) = a5;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) + 2280LL) + 112LL) + v16 + 668) = a3;
    goto LABEL_10;
  }
  if ( *(_BYTE *)(v16 + v18 + 668) )
  {
    *(_DWORD *)(v16 + v18 + 672) = 0;
    *(_DWORD *)(v16 + *(_QWORD *)(v17 + 112) + 676) = 0;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) + 2280LL) + 112LL) + v16 + 668) = 0;
LABEL_10:
    v9 = 1;
  }
LABEL_11:
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, v16, v17, v15);
  if ( v9 )
  {
    v22 = (struct _LIST_ENTRY *)operator new(0x18uLL, 0x4B677844u, PagedPool);
    if ( v22 )
    {
      v22->Flink = 0LL;
      v22->Blink = 0LL;
      v22[1].Flink = 0LL;
      v22->Flink = 0LL;
    }
    else
    {
      v22 = 0LL;
    }
    if ( v22 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v22, *(struct DXGADAPTER **)(*((_QWORD *)this + 2) + 1800LL));
      LODWORD(v22[1].Flink) = v7;
      Current = DXGPROCESS::GetCurrent(v23);
      DXGWORKQUEUE::QueueWork(
        (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 88LL),
        (struct _LIST_ENTRY *)lambda_2c9284ca1958a319979d23566d67cec5_::_lambda_invoker_cdecl_,
        v22);
    }
  }
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, v19, v20, v21);
}
