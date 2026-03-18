/*
 * XREFs of ?ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA@@@Z @ 0x1801BDC28
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x1801BDCE4 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 *     ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x1801C0D20 (-ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z.c)
 *     ?Create@CHolographicExclusivePresentData@@SAJ_K0PEAXIIPEAPEAUIHolographicExclusivePresentData@@@Z @ 0x1801C2430 (-Create@CHolographicExclusivePresentData@@SAJ_K0PEAXIIPEAPEAUIHolographicExclusivePresentData@@@.c)
 */

__int64 __fastcall CHolographicExclusiveView::ProcessSetViewData(
        CHolographicExclusiveView *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA *a3)
{
  bool v6; // zf
  CHolographicManager *v7; // rcx
  __int64 v8; // rcx
  void *v9; // r8
  unsigned int v10; // r9d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  struct IHolographicExclusivePresentData *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  if ( *((_QWORD *)this + 10) )
    return 2147942487LL;
  v6 = *((_QWORD *)this + 14) == 0LL;
  *((_BYTE *)this + 75) = 1;
  if ( !v6 )
  {
    v7 = (CHolographicManager *)*((_QWORD *)this + 7);
    if ( v7 )
      CHolographicManager::ReleaseExclusivePresentData(v7, *((_DWORD *)this + 16));
    v8 = *((_QWORD *)this + 14);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      *((_QWORD *)this + 14) = 0LL;
    }
  }
  v9 = (void *)*((_QWORD *)a3 + 3);
  if ( v9 )
  {
    v10 = *((_DWORD *)this + 17);
    v11 = *((_QWORD *)a3 + 1);
    v12 = *((_QWORD *)a3 + 2);
    v13 = 0LL;
    if ( (int)CHolographicExclusivePresentData::Create(v12, v11, v9, v10, *((_DWORD *)this + 16), &v13) < 0 )
    {
      CloseHandle(*((HANDLE *)a3 + 3));
    }
    else
    {
      *((_QWORD *)this + 14) = v13;
      CHolographicExclusiveView::PublishPresentData(this);
    }
  }
  return 0LL;
}
