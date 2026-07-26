/*
 * XREFs of ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00B91C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfDereferenceMiniport @ 0x1C00091B0 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0009F38 (ndisIfReferenceMiniport.c)
 *     WPP_SF_LqL @ 0x1C004081C (WPP_SF_LqL.c)
 *     WPP_SF_DqLL @ 0x1C0040870 (WPP_SF_DqLL.c)
 *     ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C00B71B0 (-ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z @ 0x1C00B85FC (-ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C00B9290 (-ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z.c)
 */

__int64 __fastcall ndisIfQueryObject(struct _NDIS_IF_BLOCK *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int v6; // ebp
  unsigned int FilterObject; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int MiniportObject; // edi
  struct _NDIS_MINIPORT_BLOCK *v13; // rax
  __int64 v14; // rdx

  v6 = a2;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_LqL(0x40u, a2, a2, (__int64)a4);
  if ( !a1 )
    return 3221225485LL;
  if ( a1->IsNdisFilter )
  {
    FilterObject = ndisIfQueryFilterObject(a1->Filter, v6, a3, a4);
  }
  else
  {
    v13 = (struct _NDIS_MINIPORT_BLOCK *)ndisIfReferenceMiniport((__int64)a1);
    if ( v13 )
    {
      MiniportObject = ndisIfQueryMiniportObject(v13, v6, a3, (unsigned __int8 *)a4);
      ndisIfDereferenceMiniport((__int64)a1, v14, 2u);
      goto LABEL_7;
    }
    FilterObject = ndisIfQueryMiniportObjectNotPresent(a1, v6, a3, a4);
  }
  MiniportObject = FilterObject;
LABEL_7:
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_DqLL(v10, v9, v6, (__int64)a4);
  return MiniportObject;
}
