/*
 * XREFs of ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01F2EF4
 * Callers:
 *     ?CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01F3F40 (-CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEA.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C000BBC4 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0035EA8 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SAP.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireRawDdiEnumeratorCachedPathInfo(
        DMMVIDPNTOPOLOGY *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH **a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  _QWORD *Instance; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  char *v8; // rax
  char *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = (char *)this;
  v2 = 0;
  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v10 = 0LL;
  Instance = Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(0LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v10, Instance);
  if ( v10 )
  {
    v8 = v10 + 16;
    *a2 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)(v10 + 16);
    *((_QWORD *)v8 + 1) = 0LL;
    *(_DWORD *)v8 = -1;
    *((_DWORD *)v8 + 1) = -1;
    *((_DWORD *)v8 + 5) = 0;
    *(_QWORD *)(v8 + 28) = 0LL;
    *(_QWORD *)(v8 + 36) = 0LL;
    *(_QWORD *)(v8 + 44) = 0LL;
    *(_QWORD *)(v8 + 52) = 0LL;
    *(_QWORD *)(v8 + 60) = 0LL;
    *(_QWORD *)(v8 + 68) = 0LL;
    *((_DWORD *)v8 + 84) = 0;
    *((_QWORD *)v8 + 43) = 0LL;
    *((_QWORD *)v8 + 44) = 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(v6);
    WdLogEvent5_WdLowResource(v7);
    v2 = -1073741801;
  }
  operator delete(0LL);
  return v2;
}
