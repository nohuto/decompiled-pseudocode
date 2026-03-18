/*
 * XREFs of ??1CTokenManager@@AEAA@XZ @ 0x1C003648C
 * Callers:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0036614 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C0035568 (-DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C0035590 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C0035628 (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C003566C (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C0037ADC (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::~CTokenManager(CTokenManager *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  unsigned int v7; // edx
  CTokenManager **v8; // rsi
  CTokenManager **v9; // rax
  CTokenManager *v10; // rcx
  CTokenManager **v11; // rbx

  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
    ObCloseHandle(v2, 0);
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
    ObCloseHandle(v3, 0);
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
    ObCloseHandle(v4, 0);
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
    MmUnmapViewInSessionSpace(v5);
  *((_QWORD *)this + 4) = 0LL;
  v6 = (void *)*((_QWORD *)this + 2);
  if ( v6 )
    ObfDereferenceObject(v6);
  CTokenManager::DeleteOutstandingAnalogTokenInternal(this);
  CTokenManager::DeleteAllLegacyTokenBuffers(this, v7);
  CTokenManager::DeleteAllCompositionTokens(this);
  v8 = (CTokenManager **)((char *)this + 232);
  v9 = (CTokenManager **)*((_QWORD *)this + 29);
  if ( v9[1] != (CTokenManager *)((char *)this + 232) || (v10 = *v9, *((CTokenManager ***)*v9 + 1) != v9) )
    __fastfail(3u);
  while ( 1 )
  {
    *v8 = v10;
    *((_QWORD *)v10 + 1) = v8;
    if ( v9 == v8 )
      break;
    v11 = v9 - 1;
    (*((void (__fastcall **)(CTokenManager **))*(v9 - 1) + 7))(v9 - 1);
    (*(void (__fastcall **)(CTokenManager **, __int64))*v11)(v11, 1LL);
    v9 = (CTokenManager **)*v8;
    if ( *((CTokenManager ***)*v8 + 1) == v8 )
    {
      v10 = *v9;
      if ( *((CTokenManager ***)*v9 + 1) == v9 )
        continue;
    }
    __fastfail(3u);
  }
  CTokenManager::DeleteAllTokenQueues(this);
  CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)this + 248));
}
