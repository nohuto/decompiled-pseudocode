/*
 * XREFs of ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C010E944
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010E280 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@PEAVD.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B040C (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B0B9C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C01B3D28 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01BF3F4 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::AcquireDmaBuffer(
        DXGCONTEXT *this,
        struct _VIDMM_DMA_BUFFER **a2,
        struct COREDEVICEACCESS *a3,
        char a4)
{
  __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax

  if ( *((_BYTE *)this + 401) )
  {
    *a2 = 0LL;
    return 0LL;
  }
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 104LL));
  v9 = 3;
  if ( *((_DWORD *)this + 18) > 3u )
    v9 = *((_DWORD *)this + 18);
  if ( !*((_QWORD *)this + 28) )
  {
    v16 = *((_DWORD *)this + 26);
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 432LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
            *((unsigned int *)this + 90),
            *(_QWORD *)(*((_QWORD *)this + 2) + 608LL),
            this,
            1,
            *((_DWORD *)this + 48),
            v9,
            v16,
            *((_DWORD *)this + 49),
            *((_DWORD *)this + 50));
    *((_QWORD *)this + 28) = v17;
    if ( v17 )
    {
      LODWORD(v14) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 544LL)
                                                                    + 8LL)
                                                        + 440LL))(v17);
      if ( (int)v14 < 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                       + 448LL))(*((_QWORD *)this + 28));
        *((_QWORD *)this + 28) = 0LL;
      }
      else
      {
        *((_DWORD *)this + 51) = v9;
        *((_DWORD *)this + 52) = v16;
      }
      if ( (int)v14 >= 0 )
        goto LABEL_5;
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(v18, 0LL, v19);
      LODWORD(v14) = -1073741801;
      *(_QWORD *)(v22 + 24) = this;
      *(_QWORD *)(v22 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v22);
    }
    v23 = WdLogNewEntry5_WdWarning(v20, v8, v21);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdWarning(v23);
    return (unsigned int)v14;
  }
LABEL_5:
  v10 = *((_QWORD *)this + 28);
  LOBYTE(v8) = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                         + 488LL))(
          v10,
          v8,
          0LL,
          a2);
  v14 = v11;
  if ( v11 != -1071775486 )
  {
    if ( v11 < 0 )
    {
      v30 = WdLogNewEntry5_WdEvent(v13, v12);
      *(_QWORD *)(v30 + 24) = this;
      *(_QWORD *)(v30 + 32) = v14;
      WdLogEvent5_WdEvent(v30);
    }
    return (unsigned int)v14;
  }
  if ( !a3 )
    return (unsigned int)v14;
  COREDEVICEACCESS::Release(a3);
  LOBYTE(v24) = a4;
  LODWORD(v14) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                                  + 488LL))(
                   v10,
                   0LL,
                   v24,
                   a2);
  v25 = COREDEVICEACCESS::AcquireShared(a3);
  v28 = v25;
  if ( v25 >= 0 )
    return (unsigned int)v14;
  v29 = WdLogNewEntry5_WdEvent(v27, v26);
  *(_QWORD *)(v29 + 24) = this;
  *(_QWORD *)(v29 + 32) = v28;
  WdLogEvent5_WdEvent(v29);
  COREDEVICEACCESS::AcquireSharedUncheck(a3);
  return (unsigned int)v28;
}
