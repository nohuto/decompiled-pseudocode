/*
 * XREFs of ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0008F30
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00C1650 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C01900A8 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4654 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4D4C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B5800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     DxgkPresentRedirected @ 0x1C01B8440 (DxgkPresentRedirected.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01BD78C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D07FC (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0001924 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  __int64 v2; // rbx
  int v3; // edi
  PSLIST_ENTRY v4; // r9
  unsigned int VidSchSibmitDataSize; // eax
  void *v6; // r9
  DXGADAPTER *v7; // rcx
  unsigned __int8 IsDxgmms2; // al
  __int64 v9; // r8
  int v10; // r9d
  unsigned int v11; // eax

  v2 = *((_QWORD *)this + 1) + 1104LL;
  v3 = 1;
  ++*(_DWORD *)(v2 + 20);
  v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v2);
  if ( !v4 )
  {
    ++*(_DWORD *)(v2 + 24);
    v4 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v2 + 48))(
                         *(unsigned int *)(v2 + 36),
                         *(unsigned int *)(v2 + 44),
                         *(unsigned int *)(v2 + 40),
                         v2);
  }
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize(*((DXGADAPTER ***)this + 1));
    memset(v6, 0, VidSchSibmitDataSize);
    v7 = *(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL);
    if ( *((int *)v7 + 492) >= 0x2000 )
      v3 = *((_DWORD *)v7 + 62);
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(v7);
    *(_BYTE *)(v9 + 348) = IsDxgmms2;
    if ( IsDxgmms2 )
    {
      *(_DWORD *)(v9 + 444) = v10;
      *(_DWORD *)(v9 + 448) = v3;
      *(_DWORD *)(v9 + 452) = v10 * (48 * v3 + ((8 * v3 + 175) & 0xFFFFFFF8)) + 16;
      v11 = v10 * (48 * v3 + ((8 * v3 + 175) & 0xFFFFFFF8)) + 456;
      *(_DWORD *)(v9 + 424) = v11;
      *(_DWORD *)(v9 + 428) = 8 * v3 + v11;
    }
  }
}
