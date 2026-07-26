/*
 * XREFs of ??$MakePoolPtr@U_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@@YA?AV?$unique_ptr@U_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@U?$KFreePool@U_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@@@wistd@@K@Z @ 0x1C00DA944
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C003DD30 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MakePoolPtr<_NDIS_INTERFACE_ADDITIONAL_PROPERTIES>(_QWORD *a1)
{
  _QWORD *PoolWithTag; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6669444Eu);
  if ( PoolWithTag )
  {
    *a1 = PoolWithTag;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
