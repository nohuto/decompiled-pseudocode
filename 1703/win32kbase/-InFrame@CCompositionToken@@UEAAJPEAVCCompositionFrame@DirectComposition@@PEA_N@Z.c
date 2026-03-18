/*
 * XREFs of ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C0011B90
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C0011A4C (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?FindObject@?$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@QEAAPEAVCBatch@2@_K@Z @ 0x1C0027984 (-FindObject@-$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@QEAA.c)
 */

__int64 __fastcall CCompositionToken::InFrame(
        CCompositionToken *this,
        struct DirectComposition::CCompositionFrame *a2,
        bool *a3)
{
  unsigned int updated; // esi
  __int64 v6; // r12
  char v7; // r15
  __int64 v8; // rdi
  struct _ERESOURCE *v9; // rbx
  __int64 v10; // rcx
  __int64 Object; // rax

  updated = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    v6 = *((_QWORD *)a2 + 9);
    v7 = 0;
    v8 = *((_QWORD *)this + 10);
    v9 = DirectComposition::CSynchronizationManager::s_pSyncTableLock;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v9, 1u);
    Object = DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::FindObject(
               v10,
               v8);
    if ( Object && (*(_BYTE *)(Object + 32) & 2) == 0 && (*(int *)(Object + 48) > 0 || *(_QWORD *)(Object + 56) != v6) )
      v7 = 1;
    ExReleaseResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    KeLeaveCriticalRegion();
    if ( v7 )
    {
      ++*((_DWORD *)this + 7);
      *a3 = 0;
    }
    else
    {
      *((_DWORD *)this + 6) = 3;
      updated = CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
      *a3 = 1;
    }
  }
  return updated;
}
