/*
 * XREFs of ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1C003DBC8
 * Callers:
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0021A78 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0004ED8 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 */

__int64 __fastcall ndisIfFindAvailableCompartmentId(const struct _GUID *a1)
{
  _LIST_ENTRY *Flink; // rdi
  unsigned int v2; // ebp
  int v3; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // eax

  Flink = ndisIfCompartmentList.Flink;
  v2 = 0;
  v3 = 1;
  v5 = 1;
  if ( ndisIfCompartmentList.Flink == &ndisIfCompartmentList )
    goto LABEL_12;
  while ( 1 )
  {
    if ( v5 == 1 )
    {
      v6 = (unsigned int)Flink[1].Flink;
      v7 = v3 + 1;
      if ( v3 != v6 )
        v7 = v3;
      v3 = v7;
      if ( v7 < v6 )
        v5 = v7;
    }
    if ( !(unsigned int)ndisCompareGuid((const struct _GUID *)&Flink[71].Blink, a1) )
      break;
    Flink = Flink->Flink;
    if ( Flink == &ndisIfCompartmentList )
      goto LABEL_11;
  }
  v5 = 0;
LABEL_11:
  if ( Flink == &ndisIfCompartmentList )
LABEL_12:
    v5 = v3;
  if ( v5 != -1 )
    return v5;
  return v2;
}
