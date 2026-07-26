/*
 * XREFs of ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C00BE9A4
 * Callers:
 *     ndisUpdateMinimumStackVersion @ 0x1C00BE954 (ndisUpdateMinimumStackVersion.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFindMinimumVersionDrivers(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  _NDIS_FILTER_BLOCK *LowestFilter; // r10
  unsigned __int8 MajorNdisVersion; // cl
  unsigned __int8 MinorNdisVersion; // al
  unsigned __int8 v8; // al
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rcx
  bool v10; // zf
  unsigned __int8 v11; // dl
  _NDIS_OPEN_BLOCK *OpenQueue; // rdx
  unsigned __int8 v13; // al
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rcx
  bool v15; // zf
  unsigned __int8 v16; // r8
  __int64 i; // rdx
  __int64 j; // r8
  unsigned int MinimumNdisMajorVersion; // eax

  DriverHandle = a1->DriverHandle;
  LowestFilter = a1->LowestFilter;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( MajorNdisVersion < 6u )
  {
    a1->MinimumNdisMajorVersion = 6;
    MinorNdisVersion = 0;
  }
  else
  {
    a1->MinimumNdisMajorVersion = MajorNdisVersion;
    MinorNdisVersion = DriverHandle->MinorNdisVersion;
  }
  a1->MinimumNdisMinorVersion = MinorNdisVersion;
  if ( a2 )
  {
    MinimumNdisMajorVersion = a1->MinimumNdisMajorVersion;
    if ( a2 < MinimumNdisMajorVersion || a2 == MinimumNdisMajorVersion && a3 < a1->MinimumNdisMinorVersion )
    {
      a1->MinimumNdisMajorVersion = a2;
      a1->MinimumNdisMinorVersion = a3;
    }
  }
  if ( LowestFilter )
  {
    v8 = a1->MinimumNdisMajorVersion;
    do
    {
      FilterDriver = LowestFilter->FilterDriver;
      v10 = FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion == v8;
      if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion < v8 )
      {
        for ( i = 0LL; i < 2; ++i )
          *(&a1->MinimumNdisMajorVersion + i) = *(&LowestFilter->FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion
                                                + i);
        FilterDriver = LowestFilter->FilterDriver;
        v8 = a1->MinimumNdisMajorVersion;
        v10 = FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion == v8;
      }
      if ( v10 )
      {
        v11 = FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion;
        if ( v11 < a1->MinimumNdisMinorVersion )
          a1->MinimumNdisMinorVersion = v11;
      }
      LowestFilter = LowestFilter->HigherFilter;
    }
    while ( LowestFilter );
  }
  OpenQueue = a1->OpenQueue;
  if ( OpenQueue )
  {
    v13 = a1->MinimumNdisMajorVersion;
    do
    {
      ProtocolHandle = OpenQueue->ProtocolHandle;
      v15 = ProtocolHandle->MajorNdisVersion == v13;
      if ( ProtocolHandle->MajorNdisVersion < v13 )
      {
        for ( j = 0LL; j < 2; ++j )
          *(&a1->MinimumNdisMajorVersion + j) = *(&OpenQueue->ProtocolHandle->MajorNdisVersion + j);
        ProtocolHandle = OpenQueue->ProtocolHandle;
        v13 = a1->MinimumNdisMajorVersion;
        v15 = ProtocolHandle->MajorNdisVersion == v13;
      }
      if ( v15 )
      {
        v16 = ProtocolHandle->MinorNdisVersion;
        if ( v16 < a1->MinimumNdisMinorVersion )
          a1->MinimumNdisMinorVersion = v16;
      }
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
    while ( OpenQueue );
  }
}
