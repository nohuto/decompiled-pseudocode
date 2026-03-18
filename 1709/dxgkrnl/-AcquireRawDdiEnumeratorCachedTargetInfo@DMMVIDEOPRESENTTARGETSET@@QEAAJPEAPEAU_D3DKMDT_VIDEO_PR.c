/*
 * XREFs of ?AcquireRawDdiEnumeratorCachedTargetInfo@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C011E454
 * Callers:
 *     ?CreateNewTargetInfo@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEAU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C011E3E0 (-CreateNewTargetInfo@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPR.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C000BBC4 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@SAPEAV12@QEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0012CB0 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET@@@.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::AcquireRawDdiEnumeratorCachedTargetInfo(
        DMMVIDEOPRESENTTARGETSET *this,
        struct _D3DKMDT_VIDEO_PRESENT_TARGET **a2)
{
  unsigned int v2; // ebx
  _QWORD *Instance; // rax
  struct _D3DKMDT_VIDEO_PRESENT_TARGET *v6; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v7; // ecx
  __int64 v9; // rax
  char *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  *a2 = 0LL;
  v10 = 0LL;
  Instance = Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>::CreateInstance(0LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v10, Instance);
  if ( v10 )
  {
    v6 = (struct _D3DKMDT_VIDEO_PRESENT_TARGET *)(v10 + 16);
    v7 = ++*((_DWORD *)this + 14);
    *a2 = v6;
    v6->Id = v7;
    v6->VideoOutputTechnology = D3DKMDT_VOT_UNINITIALIZED;
    *(_QWORD *)&v6->VideoOutputHpdAwareness = 0LL;
  }
  else
  {
    v2 = -1073741801;
  }
  operator delete(0LL);
  return v2;
}
