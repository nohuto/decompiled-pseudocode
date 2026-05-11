/*
 * XREFs of FilterCreateFilterFactory @ 0x1C0018328
 * Callers:
 *     DeviceStart @ 0x1C0017260 (DeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000A580 (memset.c)
 *     FilterInitComponentId @ 0x1C00180CC (FilterInitComponentId.c)
 *     FilterCreateFilterPropertySets @ 0x1C00181C4 (FilterCreateFilterPropertySets.c)
 *     PinBuildDescriptors @ 0x1C001926C (PinBuildDescriptors.c)
 *     TopologyBuildFilterTopology @ 0x1C001BA04 (TopologyBuildFilterTopology.c)
 */

__int64 __fastcall FilterCreateFilterFactory(__int64 a1)
{
  __int64 v1; // rbp
  int FilterPropertySets; // ebx
  _QWORD **v4; // r14
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  PKSFILTERFACTORY FilterFactory; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v1 + 88) = v1 + 80;
  *(_QWORD *)(v1 + 80) = v1 + 80;
  FilterPropertySets = (*(__int64 (**)(void))(pExtBusDeviceDispatchTable + 56))();
  if ( FilterPropertySets >= 0 )
  {
    FilterPropertySets = (*(__int64 (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 64))(a1);
    if ( FilterPropertySets >= 0 )
    {
      memset((void *)(v1 + 128), 0, 0x68uLL);
      FilterPropertySets = TopologyBuildFilterTopology(a1, v1 + 128);
      if ( FilterPropertySets >= 0 )
      {
        FilterPropertySets = PinBuildDescriptors(a1, v1 + 168, v1 + 160, v1 + 164);
        if ( FilterPropertySets >= 0 )
        {
          *(_DWORD *)(v1 + 144) = -1;
          *(_DWORD *)(v1 + 148) = 0;
          *(_QWORD *)(v1 + 128) = FilterDispatch;
          *(_QWORD *)(v1 + 136) = v1 + 304;
          *(_QWORD *)(v1 + 152) = &KSNAME_Filter;
          *(_DWORD *)(v1 + 308) = 72;
          FilterPropertySets = FilterCreateFilterPropertySets(a1, (_DWORD *)(v1 + 304), (_QWORD *)(v1 + 312));
        }
      }
    }
  }
  v4 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 80LL);
  while ( 1 )
  {
    v6 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v6[1] != v4 || (v5 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v4 = v5;
    v5[1] = v4;
    ExFreePool(v6);
  }
  if ( FilterPropertySets >= 0 )
  {
    FilterPropertySets = FilterInitComponentId(a1, v1 + 232);
    if ( FilterPropertySets >= 0 )
    {
      *(_QWORD *)(v1 + 224) = v1 + 232;
      if ( !*(_DWORD *)(v1 + 844) )
      {
        FilterPropertySets = KsCreateFilterFactory(
                               *(PDEVICE_OBJECT *)(a1 + 24),
                               (const KSFILTER_DESCRIPTOR *)(v1 + 128),
                               (PWSTR)L"GLOBAL",
                               0LL,
                               8u,
                               0LL,
                               0LL,
                               &FilterFactory);
        if ( FilterPropertySets >= 0 )
          *(_QWORD *)(v1 + 120) = FilterFactory;
      }
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 16))(a1);
  }
  return (unsigned int)FilterPropertySets;
}
