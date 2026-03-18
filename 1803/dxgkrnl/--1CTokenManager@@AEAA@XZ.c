/*
 * XREFs of ??1CTokenManager@@AEAA@XZ @ 0x1C004A100
 * Callers:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C004A1E4 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1C000B41C (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C000E618 (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C004A448 (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllIndependentFlipTokens@CTokenManager@@IEAAXXZ @ 0x1C004A4AC (-DeleteAllIndependentFlipTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C004A534 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C004A5C4 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x1C004A680 (-DeleteOutstandingAnalogToken@CTokenManager@@UEAAXXZ.c)
 */

void __fastcall CTokenManager::~CTokenManager(CTokenManager *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &CTokenManager::`vftable';
  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
    ObCloseHandle(v2, 0);
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
    ObCloseHandle(v3, 0);
  v4 = (void *)*((_QWORD *)this + 9);
  if ( v4 )
    ObCloseHandle(v4, 0);
  v5 = (void *)*((_QWORD *)this + 5);
  if ( v5 )
    MmUnmapViewInSessionSpace(v5);
  *((_QWORD *)this + 6) = 0LL;
  v6 = (void *)*((_QWORD *)this + 4);
  if ( v6 )
    ObfDereferenceObject(v6);
  CTokenManager::DeleteOutstandingAnalogToken(this);
  CTokenManager::DeleteAllLegacyTokenBuffers(this);
  CTokenManager::DeleteAllCompositionTokens(this);
  CTokenManager::DeleteAllIndependentFlipTokens(this);
  CTokenManager::DeleteAllTokenQueues(this);
  CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)this + 304));
  CAdapterCollection::InternalDiscard((CTokenManager *)((char *)this + 104));
}
