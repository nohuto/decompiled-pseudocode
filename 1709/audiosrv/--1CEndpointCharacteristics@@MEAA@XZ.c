/*
 * XREFs of ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800AFDCC
 * Callers:
 *     ??_ECEndpointCharacteristics@@MEAAPEAXI@Z @ 0x1800B1120 (--_ECEndpointCharacteristics@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180032C98 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18005AFE0 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800B1080 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x1800C9234 (--1CSpatialProperties@@QEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::~CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  int i; // edi
  __int64 v3; // rcx
  unsigned int v4; // edx
  CConnectorProcessingModeCharacteristics *v5; // rcx
  int j; // edi
  __int64 v7; // rcx
  unsigned int v8; // edx
  CConnectorProcessingModeCharacteristics *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  *(_QWORD *)this = &CEndpointCharacteristics::`vftable';
  if ( *((_QWORD *)this + 23) )
  {
    for ( i = 0; ; ++i )
    {
      v3 = *((_QWORD *)this + 23);
      if ( i >= *(_DWORD *)(v3 + 8) )
        break;
      v5 = *(CConnectorProcessingModeCharacteristics **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                                          v3,
                                                          i);
      if ( v5 )
        CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v5, v4);
    }
  }
  if ( *((_QWORD *)this + 24) )
  {
    for ( j = 0; ; ++j )
    {
      v7 = *((_QWORD *)this + 24);
      if ( j >= *(_DWORD *)(v7 + 8) )
        break;
      v9 = *(CConnectorProcessingModeCharacteristics **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                                          v7,
                                                          j);
      if ( v9 )
        CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v9, v8);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 212);
  CSpatialProperties::~CSpatialProperties((CEndpointCharacteristics *)((char *)this + 1560));
  `eh vector destructor iterator'(
    (char *)this + 1496,
    16LL,
    4LL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  `eh vector destructor iterator'(
    (char *)this + 1400,
    24LL,
    4LL,
    (void (*)(void *))CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap);
  `eh vector destructor iterator'(
    (char *)this + 1000,
    96LL,
    4LL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  `eh vector destructor iterator'(
    (char *)this + 616,
    96LL,
    4LL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  `eh vector destructor iterator'(
    (char *)this + 232,
    96LL,
    4LL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  v10 = *((_QWORD *)this + 24);
  if ( v10 )
  {
    if ( *(_QWORD *)v10 )
    {
      free(*(void **)v10);
      *(_QWORD *)v10 = 0LL;
    }
    *(_DWORD *)(v10 + 8) = 0;
    *(_DWORD *)(v10 + 12) = 0;
    operator delete((void *)v10, (const struct std::nothrow_t *)0x10);
  }
  *((_QWORD *)this + 24) = 0LL;
  v11 = *((_QWORD *)this + 23);
  if ( v11 )
  {
    if ( *(_QWORD *)v11 )
    {
      free(*(void **)v11);
      *(_QWORD *)v11 = 0LL;
    }
    *(_DWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 12) = 0;
    operator delete((void *)v11, (const struct std::nothrow_t *)0x10);
  }
  *((_QWORD *)this + 23) = 0LL;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((char *)this + 128);
  `eh vector destructor iterator'(
    (char *)this + 64,
    16LL,
    4LL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  v12 = *((_QWORD *)this + 7);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 4);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 2);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  *((_DWORD *)this + 3) = -1073741823;
}
