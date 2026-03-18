/*
 * XREFs of ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C0035758
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C00358DC (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0025338 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C005B1B4 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C005B26C (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 */

__int64 __fastcall CTokenManager::ResolveCompositionHandleToken(
        CTokenManager *this,
        const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *a2)
{
  void *hPrivateData; // rsi
  int v3; // ebx
  _QWORD *v5; // rdi
  CTokenManager **v6; // rdx
  CTokenManager *v7; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  hPrivateData = (void *)a2->hPrivateData;
  v3 = 0;
  if ( a2->hPrivateData )
  {
    Object = 0LL;
    v3 = CompositionObject::ResolveHandle(hPrivateData, 2u, 1, 4, &Object);
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
        v6 = (CTokenManager **)*((_QWORD *)this + 27);
        v7 = (CTokenManager *)(v5 + 5);
        if ( *v6 != (CTokenManager *)((char *)this + 208) )
          __fastfail(3u);
        v5[6] = v6;
        *(_QWORD *)v7 = (char *)this + 208;
        *v6 = v7;
        *((_QWORD *)this + 27) = v7;
        DirectComposition::CSynchronizationManager::NotifyPresent(v5[14], 1);
      }
    }
    NtClose(hPrivateData);
  }
  return (unsigned int)v3;
}
