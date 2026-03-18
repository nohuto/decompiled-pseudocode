/*
 * XREFs of ?VmBusDdiGetStandardAllocationDriverData@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CB90
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00CFEFC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

unsigned __int8 __fastcall VmBusDdiGetStandardAllocationDriverData(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // edx
  int v5; // eax
  unsigned int v6; // esi
  int *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  char *v12; // rcx
  int StandardAllocationDriverData; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  __int64 v20; // rax
  char v21[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+28h] [rbp-48h]
  char v23; // [rsp+30h] [rbp-40h]
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v24; // [rsp+38h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  if ( *(_DWORD *)(v1 + 20) >= 0xFFFFFFDC )
    return 0;
  v3 = *(_DWORD *)(v1 + 20) + 36;
  v5 = *(_DWORD *)(v1 + 24);
  if ( v5 + v3 < v3 )
    return 0;
  v6 = v5 + v3;
  v7 = (int *)operator new(v5 + v3, v3, 1, (enum _POOL_TYPE)512);
  if ( !v7 )
    return 0;
  memset(&v24, 0, sizeof(v24));
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL);
  v24.StandardAllocationType = *(_DWORD *)(v1 + 16);
  v24.PhysicalAdapterIndex = *(_DWORD *)(v1 + 28);
  v12 = (char *)*(unsigned int *)(v1 + 20);
  v24.AllocationPrivateDriverDataSize = (unsigned int)v12;
  if ( (_DWORD)v12 )
    v24.pAllocationPrivateDriverData = v7 + 9;
  v24.ResourcePrivateDriverDataSize = *(_DWORD *)(v1 + 24);
  if ( v24.ResourcePrivateDriverDataSize )
  {
    v12 = &v12[(_QWORD)v7 + 36];
    v24.pResourcePrivateDriverData = v12;
  }
  if ( (unsigned int)(*(_DWORD *)(v1 + 16) - 1) <= 3 )
  {
    v22 = v11;
    v24.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v1 + 32);
    v23 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
    if ( *(_DWORD *)(v11 + 176) != 1 )
    {
      *v7 = -1073741130;
      goto LABEL_13;
    }
    StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
                                     *(ADAPTER_RENDER **)(v11 + 2288),
                                     &v24);
    *v7 = StandardAllocationDriverData;
    if ( StandardAllocationDriverData < 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
      *(_QWORD *)(v18 + 24) = *v7;
      WdLogEvent5_WdAssertion(v18);
      goto LABEL_13;
    }
    v7[1] = v24.AllocationPrivateDriverDataSize;
    v7[2] = v24.ResourcePrivateDriverDataSize;
    if ( v24.StandardAllocationType != D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE )
    {
      switch ( v24.StandardAllocationType )
      {
        case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
          *(_OWORD *)(v7 + 3) = *(_OWORD *)v24.pCreateSharedPrimarySurfaceData;
          break;
        case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
          pCreateSharedPrimarySurfaceData = v24.pCreateSharedPrimarySurfaceData;
          *(_QWORD *)(v7 + 3) = *(_QWORD *)v24.pCreateSharedPrimarySurfaceData;
          v7[5] = pCreateSharedPrimarySurfaceData->Format;
          break;
        case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
          goto LABEL_21;
        default:
          break;
      }
LABEL_13:
      if ( v23 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
      goto LABEL_25;
    }
LABEL_21:
    *(D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v7 + 3) = *v24.pCreateSharedPrimarySurfaceData;
    goto LABEL_13;
  }
  v20 = WdLogNewEntry5_WdAssertion(v12, v8, v9, v10);
  *(_QWORD *)(v20 + 24) = 5434LL;
  WdLogEvent5_WdAssertion(v20);
  *v7 = -1073741811;
LABEL_25:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v7, v6);
  operator delete[](v7);
  return 1;
}
