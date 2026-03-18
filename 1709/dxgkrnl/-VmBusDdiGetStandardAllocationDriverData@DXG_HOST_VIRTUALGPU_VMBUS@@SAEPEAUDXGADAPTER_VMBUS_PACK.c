/*
 * XREFs of ?VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192700
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C008374C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetStandardAllocationDriverData(
        struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // edx
  int v5; // eax
  unsigned int v6; // esi
  void *v7; // rbx
  __int64 v8; // r14
  char *v9; // rcx
  __int64 v10; // r8
  int StandardAllocationDriverData; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  __int64 v15; // rax
  char v16[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+28h] [rbp-48h]
  char v18; // [rsp+30h] [rbp-40h]
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v19; // [rsp+38h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  if ( *(_DWORD *)(v1 + 28) >= 0xFFFFFFDC )
    return 0;
  v3 = *(_DWORD *)(v1 + 28) + 36;
  v5 = *(_DWORD *)(v1 + 32);
  if ( v5 + v3 < v3 )
    return 0;
  v6 = v5 + v3;
  v7 = operator new(v5 + v3, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v7 )
    return 0;
  memset(&v19, 0, sizeof(v19));
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  v19.StandardAllocationType = *(_DWORD *)(v1 + 24);
  v19.PhysicalAdapterIndex = *(_DWORD *)(v1 + 36);
  v9 = (char *)*(unsigned int *)(v1 + 28);
  v19.AllocationPrivateDriverDataSize = (unsigned int)v9;
  if ( (_DWORD)v9 )
    v19.pAllocationPrivateDriverData = (char *)v7 + 36;
  v19.ResourcePrivateDriverDataSize = *(_DWORD *)(v1 + 32);
  if ( v19.ResourcePrivateDriverDataSize )
  {
    v9 = &v9[(_QWORD)v7 + 36];
    v19.pResourcePrivateDriverData = v9;
  }
  if ( (unsigned int)(*(_DWORD *)(v1 + 24) - 1) <= 3 )
  {
    v17 = v8;
    v19.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v1 + 40);
    v18 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
    if ( *(_DWORD *)(v8 + 176) != 1 )
    {
      *(_DWORD *)v7 = -1073741130;
      goto LABEL_13;
    }
    StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
                                     *(ADAPTER_RENDER **)(v8 + 2312),
                                     &v19,
                                     v10);
    *(_DWORD *)v7 = StandardAllocationDriverData;
    if ( StandardAllocationDriverData < 0 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v13 + 24) = *(int *)v7;
      WdLogEvent5_WdAssertion(v13);
      goto LABEL_13;
    }
    *((_DWORD *)v7 + 1) = v19.AllocationPrivateDriverDataSize;
    *((_DWORD *)v7 + 2) = v19.ResourcePrivateDriverDataSize;
    if ( v19.StandardAllocationType != D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE )
    {
      switch ( v19.StandardAllocationType )
      {
        case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
          *(_OWORD *)((char *)v7 + 12) = *(_OWORD *)v19.pCreateSharedPrimarySurfaceData;
          break;
        case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
          pCreateSharedPrimarySurfaceData = v19.pCreateSharedPrimarySurfaceData;
          *(_QWORD *)((char *)v7 + 12) = *(_QWORD *)v19.pCreateSharedPrimarySurfaceData;
          *((_DWORD *)v7 + 5) = pCreateSharedPrimarySurfaceData->Format;
          break;
        case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
          goto LABEL_21;
        default:
          break;
      }
LABEL_13:
      if ( v18 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
      goto LABEL_25;
    }
LABEL_21:
    *(D3DKMDT_SHAREDPRIMARYSURFACEDATA *)((char *)v7 + 12) = *v19.pCreateSharedPrimarySurfaceData;
    goto LABEL_13;
  }
  v15 = WdLogNewEntry5_WdAssertion(v9);
  *(_QWORD *)(v15 + 24) = 1881LL;
  WdLogEvent5_WdAssertion(v15);
  *(_DWORD *)v7 = -1073741811;
LABEL_25:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v7, v6);
  ExFreePoolWithTag(v7, 0);
  return 1;
}
