/*
 * XREFs of ?AcquireRawDdiEnumeratorCachedTargetInfo@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C011E6F4
 * Callers:
 *     ?CreateNewTargetInfo@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEAU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C011E680 (-CreateNewTargetInfo@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPR.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C00028F4 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@SAPEAV12@QEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0011C5C (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET@@@.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::AcquireRawDdiEnumeratorCachedTargetInfo(
        DMMVIDEOPRESENTTARGETSET *this,
        struct _D3DKMDT_VIDEO_PRESENT_TARGET **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD *Instance; // rax
  struct _D3DKMDT_VIDEO_PRESENT_TARGET *v8; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v9; // ecx
  __int64 v11; // rax
  char *v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  *a2 = 0LL;
  v12 = 0LL;
  Instance = Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>::CreateInstance(0LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v12, Instance);
  if ( v12 )
  {
    v8 = (struct _D3DKMDT_VIDEO_PRESENT_TARGET *)(v12 + 16);
    v9 = ++*((_DWORD *)this + 14);
    *a2 = v8;
    v8->Id = v9;
    v8->VideoOutputTechnology = D3DKMDT_VOT_UNINITIALIZED;
    *(_QWORD *)&v8->VideoOutputHpdAwareness = 0LL;
  }
  else
  {
    v4 = -1073741801;
  }
  operator delete(0LL);
  return v4;
}
