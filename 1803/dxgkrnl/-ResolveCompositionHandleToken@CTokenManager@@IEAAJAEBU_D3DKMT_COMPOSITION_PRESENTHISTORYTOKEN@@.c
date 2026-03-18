/*
 * XREFs of ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C000F9D8
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000FF30 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C000DCA0 (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::ResolveCompositionHandleToken(
        CTokenManager *this,
        const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *a2)
{
  void *hPrivateData; // rsi
  int v3; // edi
  _QWORD *v5; // rbx
  CTokenManager **v6; // rcx
  CTokenManager *v7; // rdx
  __int64 v8; // rbx
  struct DXGGLOBAL *Global; // rax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  hPrivateData = (void *)a2->hPrivateData;
  v3 = 0;
  if ( a2->hPrivateData )
  {
    Object = 0LL;
    v3 = DxgkCompositionObject::ResolveHandle(hPrivateData, 2u, 1, 2, &Object);
    if ( v3 >= 0 )
    {
      v5 = Object;
      v3 = CompositionTokenObject::MarkCompleted((CompositionTokenObject *)Object);
      if ( v3 < 0 )
      {
        ObfDereferenceObject(v5);
      }
      else
      {
        v6 = (CTokenManager **)*((_QWORD *)this + 34);
        v7 = (CTokenManager *)(v5 + 5);
        if ( *v6 != (CTokenManager *)((char *)this + 264) )
          __fastfail(3u);
        *(_QWORD *)v7 = (char *)this + 264;
        v5[6] = v6;
        *v6 = v7;
        *((_QWORD *)this + 34) = v7;
        v8 = v5[14];
        Global = DXGGLOBAL::GetGlobal();
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)Global + 219) + 24LL))(v8, 1LL);
      }
    }
    NtClose(hPrivateData);
  }
  return (unsigned int)v3;
}
