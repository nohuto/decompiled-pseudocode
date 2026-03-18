/*
 * XREFs of ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180145010
 * Callers:
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x180145104 (--1CSurfaceManager@@MEAA@XZ.c)
 *     ??_ECLegacySurfaceManager@@UEAAPEAXI@Z @ 0x1801452E0 (--_ECLegacySurfaceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800B0300 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x180133B80 (-ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ.c)
 */

void __fastcall CLegacySurfaceManager::~CLegacySurfaceManager(CLegacySurfaceManager *this)
{
  int i; // edi
  PVOID v3; // rax
  struct _RTL_GENERIC_TABLE *j; // rbx
  PVOID v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CLegacySurfaceManager::`vftable';
  CLegacySurfaceManager::ReleaseCaptureBitsResponse(this);
  CLegacySurfaceManager::ProcessPostPresentResponseItems(this);
  for ( i = *((_DWORD *)this + 32); i > 0; --i )
    WPF::ProcessHeapImpl::Free(*(void **)(*((_QWORD *)this + 13) + 16LL * (unsigned int)(i - 1) + 8));
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 104, 0x10u);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 31);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 27);
  while ( 1 )
  {
    RestartKey = 0LL;
    v3 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 136), &RestartKey);
    if ( !v3 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 136), v3);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 13);
  *(_QWORD *)this = &CLogicalSurfaceHandleMap::`vftable';
  for ( j = (struct _RTL_GENERIC_TABLE *)((char *)this + 8); ; RtlDeleteElementGenericTable(j, v5) )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(j, &RestartKey);
    if ( !v5 )
      break;
  }
}
