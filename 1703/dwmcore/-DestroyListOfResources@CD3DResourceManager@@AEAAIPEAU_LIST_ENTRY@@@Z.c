/*
 * XREFs of ?DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z @ 0x1800CF830
 * Callers:
 *     ?DestroySomeActiveResources@CD3DResourceManager@@AEAAIXZ @ 0x1800CF8BC (-DestroySomeActiveResources@CD3DResourceManager@@AEAAIXZ.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18004D0C0 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DResourceManager::DestroyListOfResources(CD3DResourceManager *this, struct _LIST_ENTRY *a2)
{
  unsigned int v2; // edi
  struct _LIST_ENTRY *v5; // r14
  struct _LIST_ENTRY *Flink; // rbp
  __int64 v7; // rsi

  v2 = 0;
  v5 = a2;
  while ( v5->Flink != a2 )
  {
    Flink = v5->Flink;
    v7 = (__int64)&v5->Flink[-2];
    if ( (**(unsigned int (__fastcall ***)(__int64))v7)(v7) == 1 )
    {
      *(_DWORD *)(v7 + 8) = 0;
      ++v2;
      v5 = Flink;
    }
    else
    {
      CD3DResourceManager::DestroyResource(this, (struct CD3DResource ***)v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return v2;
}
