/*
 * XREFs of ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C016F668
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00C1D40 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00C30B0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D07FC (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::WaitForQueuedPresentLimit(
        DXGCONTEXT *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax

  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 104LL));
  if ( *((_BYTE *)this + 401) )
    return 0LL;
  LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 504LL)
                                                                               + 8LL)
                                                                   + 184LL))(
                   *(_QWORD *)(*((_QWORD *)this + 2) + 600LL),
                   a2,
                   0LL);
  if ( (_DWORD)v11 == -1071775486 )
  {
    if ( !a3 )
    {
LABEL_8:
      v17 = WdLogNewEntry5_WdEvent(v10, v9, v12, v13);
      *(_QWORD *)(v17 + 24) = (int)v11;
      *(_QWORD *)(v17 + 32) = this;
      WdLogEvent5_WdEvent(v17);
      if ( (_DWORD)v11 != -1071775486 && (_DWORD)v11 != -1073741130 && (_DWORD)v11 != -1071775232 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v18);
        *(_QWORD *)(v19 + 24) = 2790LL;
        WdLogEvent5_WdAssertion(v19);
      }
      return (unsigned int)v11;
    }
    COREDEVICEACCESS::Release(a4);
    LOBYTE(v14) = 1;
    v11 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 504LL)
                                                                     + 8LL)
                                                         + 184LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 600LL),
            a2,
            v14);
    v15 = COREDEVICEACCESS::AcquireShared(a4);
    if ( v15 < 0 )
    {
      v16 = WdLogNewEntry5_WdEvent(v10, v9, v12, v13);
      *(_QWORD *)(v16 + 24) = v11;
      WdLogEvent5_WdEvent(v16);
      COREDEVICEACCESS::AcquireSharedUncheck(a4);
      return (unsigned int)v15;
    }
  }
  if ( (int)v11 < 0 )
    goto LABEL_8;
  return (unsigned int)v11;
}
