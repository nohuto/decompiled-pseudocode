/*
 * XREFs of ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C016B93C
 * Callers:
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00B1B40 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00BCAF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B880C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::WaitForQueuedPresentLimit(
        DXGCONTEXT *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax

  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 104LL));
  if ( *((_BYTE *)this + 369) )
    return 0LL;
  LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 408LL)
                                                                               + 8LL)
                                                                   + 184LL))(
                   *(_QWORD *)(*((_QWORD *)this + 2) + 600LL),
                   a2,
                   0LL);
  if ( (_DWORD)v10 == -1071775486 )
  {
    if ( !a3 )
    {
LABEL_8:
      v14 = WdLogNewEntry5_WdEvent(v9);
      *(_QWORD *)(v14 + 24) = (int)v10;
      *(_QWORD *)(v14 + 32) = this;
      WdLogEvent5_WdEvent(v14);
      if ( (_DWORD)v10 != -1071775486 && (_DWORD)v10 != -1073741130 && (_DWORD)v10 != -1071775232 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
        *(_QWORD *)(v19 + 24) = 2241LL;
        WdLogEvent5_WdAssertion(v19);
      }
      return (unsigned int)v10;
    }
    COREDEVICEACCESS::Release(a4);
    LOBYTE(v11) = 1;
    v10 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 408LL)
                                                                     + 8LL)
                                                         + 184LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 600LL),
            a2,
            v11);
    v12 = COREDEVICEACCESS::AcquireShared(a4);
    if ( v12 < 0 )
    {
      v13 = WdLogNewEntry5_WdEvent(v9);
      *(_QWORD *)(v13 + 24) = v10;
      WdLogEvent5_WdEvent(v13);
      return (unsigned int)v12;
    }
  }
  if ( (int)v10 < 0 )
    goto LABEL_8;
  return (unsigned int)v10;
}
