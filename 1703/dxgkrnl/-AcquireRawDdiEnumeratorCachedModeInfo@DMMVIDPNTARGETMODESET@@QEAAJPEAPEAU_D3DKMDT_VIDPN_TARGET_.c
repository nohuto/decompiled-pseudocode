/*
 * XREFs of ?AcquireRawDdiEnumeratorCachedModeInfo@DMMVIDPNTARGETMODESET@@QEAAJPEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00DE180
 * Callers:
 *     ?CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00F91F0 (-CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET.c)
 * Callees:
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0002344 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireRawDdiEnumeratorCachedModeInfo(
        DMMVIDPNTARGETMODESET *this,
        struct _D3DKMDT_VIDPN_TARGET_MODE **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rcx
  _QWORD *Instance; // rsi
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = 0;
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v10);
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
    v11 = WdLogNewEntry5_WdLowResource(v7);
    WdLogEvent5_WdLowResource(v11);
    v4 = -1073741801;
  }
  operator delete(0LL);
  return v4;
}
