/*
 * XREFs of ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C00BDE4C
 * Callers:
 *     ndisUpdateMinimumStackVersion @ 0x1C00BDDB8 (ndisUpdateMinimumStackVersion.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFindMinimumVersionDrivers(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  _NDIS_FILTER_BLOCK *LowestFilter; // r10
  unsigned __int8 MajorNdisVersion; // cl
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rcx
  unsigned __int8 MinorNdisVersion; // al
  _NDIS_OPEN_BLOCK *j; // rdx
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rcx
  unsigned __int8 v11; // al
  __int64 k; // r8
  unsigned int MinimumNdisMajorVersion; // eax
  __int64 i; // rdx

  DriverHandle = a1->DriverHandle;
  LowestFilter = a1->LowestFilter;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( MajorNdisVersion < 6u )
  {
    *(_WORD *)&a1->MinimumNdisMajorVersion = 6;
  }
  else
  {
    a1->MinimumNdisMajorVersion = MajorNdisVersion;
    a1->MinimumNdisMinorVersion = DriverHandle->MinorNdisVersion;
  }
  if ( a2 )
  {
    MinimumNdisMajorVersion = a1->MinimumNdisMajorVersion;
    if ( a2 < MinimumNdisMajorVersion || a2 == MinimumNdisMajorVersion && a3 < a1->MinimumNdisMinorVersion )
    {
      a1->MinimumNdisMajorVersion = a2;
      a1->MinimumNdisMinorVersion = a3;
    }
  }
  while ( LowestFilter )
  {
    if ( LowestFilter->FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion < a1->MinimumNdisMajorVersion )
    {
      for ( i = 0LL; i < 2; ++i )
        *(&a1->MinimumNdisMajorVersion + i) = *(&LowestFilter->FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion
                                              + i);
    }
    FilterDriver = LowestFilter->FilterDriver;
    if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion == a1->MinimumNdisMajorVersion )
    {
      MinorNdisVersion = FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion;
      if ( MinorNdisVersion < a1->MinimumNdisMinorVersion )
        a1->MinimumNdisMinorVersion = MinorNdisVersion;
    }
    LowestFilter = LowestFilter->HigherFilter;
  }
  for ( j = a1->OpenQueue; j; j = j->MiniportNextOpen )
  {
    if ( j->ProtocolHandle->MajorNdisVersion < a1->MinimumNdisMajorVersion )
    {
      for ( k = 0LL; k < 2; ++k )
        *(&a1->MinimumNdisMajorVersion + k) = *(&j->ProtocolHandle->MajorNdisVersion + k);
    }
    ProtocolHandle = j->ProtocolHandle;
    if ( ProtocolHandle->MajorNdisVersion == a1->MinimumNdisMajorVersion )
    {
      v11 = ProtocolHandle->MinorNdisVersion;
      if ( v11 < a1->MinimumNdisMinorVersion )
        a1->MinimumNdisMinorVersion = v11;
    }
  }
}
