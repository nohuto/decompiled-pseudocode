/*
 * XREFs of ?AcquireRawDdiEnumeratorCachedModeInfo@DMMVIDPNTARGETMODESET@@QEAAJPEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00A30C8
 * Callers:
 *     ?CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D74E0 (-CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET.c)
 * Callees:
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C000E694 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireRawDdiEnumeratorCachedModeInfo(
        DMMVIDPNTARGETMODESET *this,
        struct _D3DKMDT_VIDPN_TARGET_MODE **a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  _QWORD *Instance; // rsi
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = 0;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  *a2 = 0LL;
  Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(0LL);
  if ( Instance )
  {
    operator delete(0LL);
    *((_DWORD *)Instance + 4) = ++*((_DWORD *)this + 20);
    *((_DWORD *)Instance + 20) = 0;
    *(_QWORD *)((char *)Instance + 28) = -1LL;
    *(_QWORD *)((char *)Instance + 36) = -1LL;
    *(_QWORD *)((char *)Instance + 44) = -1LL;
    Instance[8] = 0xFFFFFFFFLL;
    *((_DWORD *)Instance + 6) = 0;
    *((_DWORD *)Instance + 18) = 8;
    *a2 = (struct _D3DKMDT_VIDPN_TARGET_MODE *)(Instance + 2);
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v5);
    WdLogEvent5_WdLowResource(v9);
    v2 = -1073741801;
  }
  operator delete(0LL);
  return v2;
}
