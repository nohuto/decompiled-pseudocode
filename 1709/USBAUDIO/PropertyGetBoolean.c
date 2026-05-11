/*
 * XREFs of PropertyGetBoolean @ 0x1C0018850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetBoolean(IRP *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // edi
  unsigned int v7; // ebx
  PKSFILTER FilterFromIrp; // rdx
  __int64 v9; // rcx

  v3 = *(_DWORD *)(a2 + 32);
  v7 = -1073741808;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( FilterFromIrp )
  {
    v9 = (__int64)FilterFromIrp->Descriptor->NodeDescriptors + 152 * *(unsigned int *)(a2 + 24);
    if ( v3 < *(_DWORD *)(v9 + 92) )
    {
      v7 = 0;
      *a3 = *(unsigned __int8 *)(*(_QWORD *)(v9 + 128) + 16LL * v3 + 12);
      a1->IoStatus.Information = 4LL;
    }
  }
  return v7;
}
