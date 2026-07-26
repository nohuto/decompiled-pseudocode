/*
 * XREFs of ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00AE720
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfReferenceMiniport @ 0x1C000DF28 (ndisIfReferenceMiniport.c)
 *     ndisIfDereferenceMiniport @ 0x1C0021310 (ndisIfDereferenceMiniport.c)
 *     WPP_SF_DqLL @ 0x1C00418FC (WPP_SF_DqLL.c)
 *     WPP_SF_LqL @ 0x1C0041AFC (WPP_SF_LqL.c)
 *     ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C00AE7F0 (-ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z @ 0x1C00AF508 (-ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C00C5D00 (-ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z.c)
 */

__int64 __fastcall ndisIfQueryObject(struct _NDIS_IF_BLOCK *a1, __int64 a2, unsigned int *a3, void *a4)
{
  unsigned int v6; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int FilterObject; // edi
  struct _NDIS_MINIPORT_BLOCK *v12; // rax
  __int64 v13; // rdx

  v6 = a2;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_LqL(0x40u, a2, a2, (__int64)a4);
  if ( !a1 )
    return 3221225485LL;
  if ( a1->IsNdisFilter )
  {
    FilterObject = ndisIfQueryFilterObject(a1->Filter, v6, a3, a4);
  }
  else
  {
    v12 = (struct _NDIS_MINIPORT_BLOCK *)ndisIfReferenceMiniport((__int64)a1, 2u);
    if ( v12 )
    {
      FilterObject = ndisIfQueryMiniportObject(v12, v6, a3, a4);
      ndisIfDereferenceMiniport((__int64)a1, v13, 2u);
    }
    else
    {
      FilterObject = ndisIfQueryMiniportObjectNotPresent(a1, v6, a3, a4);
    }
  }
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_DqLL(v9, v8, v6, (__int64)a4);
  return FilterObject;
}
