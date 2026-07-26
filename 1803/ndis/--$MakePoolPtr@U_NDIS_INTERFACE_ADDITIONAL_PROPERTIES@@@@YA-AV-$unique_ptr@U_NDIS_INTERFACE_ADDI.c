/*
 * XREFs of ??$MakePoolPtr@U_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@@YA?AV?$unique_ptr@U_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@U?$KFreePool@U_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@@@wistd@@K@Z @ 0x1C00DC4E4
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C003F080 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MakePoolPtr<_NDIS_INTERFACE_ADDITIONAL_PROPERTIES>(_QWORD *a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rdx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6669444Eu);
  v3 = 0LL;
  if ( PoolWithTag )
  {
    v3 = PoolWithTag;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
  }
  *a1 = v3;
  return a1;
}
