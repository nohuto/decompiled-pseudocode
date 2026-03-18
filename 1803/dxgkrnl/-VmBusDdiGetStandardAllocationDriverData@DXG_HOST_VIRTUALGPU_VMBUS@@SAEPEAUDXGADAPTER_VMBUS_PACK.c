/*
 * XREFs of ?VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017E640
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEALLOCATION@@@@YAPEAUDXGKVMB_COMMAND_CREATEALLOCATION@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D31C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEALLOCATION@@@@YAPEAUDXGKVMB_COMMAND_CREATEALLOCATIO.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00A5E90 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetStandardAllocationDriverData(
        struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // r15d
  int *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  int StandardAllocationDriverData; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  UINT v27; // eax
  __int64 v28; // rax
  int v29; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  _BYTE v31[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v32; // [rsp+28h] [rbp-48h]
  char v33; // [rsp+30h] [rbp-40h]
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v34; // [rsp+38h] [rbp-38h] BYREF

  v3 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEALLOCATION>((__int64)a1);
  if ( !v3 )
    return 0;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  if ( *(_DWORD *)(v3 + 36) >= *(_DWORD *)(v6 + 248) )
  {
    v7 = WdLogNewEntry5_WdWarning(v6, v2, v4);
    *(_QWORD *)(v7 + 24) = 2042LL;
    WdLogEvent5_WdWarning(v7);
    return 0;
  }
  if ( *(_DWORD *)(v3 + 28) >= 0xFFFFFFDC )
    return 0;
  v8 = *(_DWORD *)(v3 + 28) + 36;
  v9 = *(_DWORD *)(v3 + 32);
  if ( v9 + v8 < v8 )
    return 0;
  v10 = v9 + v8;
  v11 = (int *)operator new(v9 + v8, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v11 )
    return 0;
  memset(&v34, 0, sizeof(v34));
  v14 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  v34.StandardAllocationType = *(_DWORD *)(v3 + 24);
  v34.PhysicalAdapterIndex = *(_DWORD *)(v3 + 36);
  v15 = (unsigned int)(*(_DWORD *)(v3 + 24) - 1);
  if ( *(_DWORD *)(v3 + 24) == 1 )
  {
    v19 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v3 + 40);
    if ( !*(_DWORD *)(v3 + 44)
      || !v19->Width
      || (v15 = *(unsigned int *)(v3 + 48), !(_DWORD)v15)
      || (int)v15 > 199
      || !*(_DWORD *)(v3 + 52)
      || !*(_DWORD *)(v3 + 56)
      || *(_DWORD *)(v3 + 60) )
    {
      v20 = WdLogNewEntry5_WdWarning(v15, v12, v13);
      *(_QWORD *)(v20 + 24) = 2134LL;
      goto LABEL_65;
    }
LABEL_39:
    v34.pCreateSharedPrimarySurfaceData = v19;
    v32 = v14;
    v33 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
    if ( *(_DWORD *)(v14 + 176) != 1 )
    {
      *v11 = -1073741130;
      goto LABEL_41;
    }
    if ( *(_DWORD *)(v3 + 28) || (LODWORD(v22) = 0, *(_DWORD *)(v3 + 32)) )
    {
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
                                       *(ADAPTER_RENDER **)(v14 + 2464),
                                       &v34,
                                       v21);
      *v11 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
LABEL_46:
        v26 = WdLogNewEntry5_WdAssertion(v25);
        *(_QWORD *)(v26 + 24) = *v11;
        WdLogEvent5_WdAssertion(v26);
        goto LABEL_41;
      }
      if ( (v22 = *(unsigned int *)(v3 + 28), (_DWORD)v22) && v34.AllocationPrivateDriverDataSize < (unsigned int)v22
        || (v27 = *(_DWORD *)(v3 + 32)) != 0 && v34.ResourcePrivateDriverDataSize < v27 )
      {
        v28 = WdLogNewEntry5_WdWarning(v22, v24, v21);
        *(_QWORD *)(v28 + 24) = 2173LL;
        WdLogEvent5_WdWarning(v28);
        *v11 = -1073741811;
        goto LABEL_41;
      }
    }
    v34.AllocationPrivateDriverDataSize = v22;
    if ( (_DWORD)v22 )
      v34.pAllocationPrivateDriverData = v11 + 9;
    v34.ResourcePrivateDriverDataSize = *(_DWORD *)(v3 + 32);
    if ( v34.ResourcePrivateDriverDataSize )
      v34.pResourcePrivateDriverData = (char *)v11 + (unsigned int)v22 + 36;
    v29 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(*(ADAPTER_RENDER **)(v14 + 2464), &v34, v21);
    *v11 = v29;
    if ( v29 < 0 )
      goto LABEL_46;
    v11[1] = v34.AllocationPrivateDriverDataSize;
    v11[2] = v34.ResourcePrivateDriverDataSize;
    if ( v34.StandardAllocationType != D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE )
    {
      switch ( v34.StandardAllocationType )
      {
        case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
          *(_OWORD *)(v11 + 3) = *(_OWORD *)v34.pCreateSharedPrimarySurfaceData;
          break;
        case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
          pCreateSharedPrimarySurfaceData = v34.pCreateSharedPrimarySurfaceData;
          *(_QWORD *)(v11 + 3) = *(_QWORD *)v34.pCreateSharedPrimarySurfaceData;
          v11[5] = pCreateSharedPrimarySurfaceData->Format;
          break;
        case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
          goto LABEL_61;
        default:
          break;
      }
LABEL_41:
      if ( v33 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
      goto LABEL_67;
    }
LABEL_61:
    *(D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v11 + 3) = *v34.pCreateSharedPrimarySurfaceData;
    goto LABEL_41;
  }
  v16 = (unsigned int)(*(_DWORD *)(v3 + 24) - 2);
  if ( *(_DWORD *)(v3 + 24) == 2 )
  {
    v19 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v3 + 40);
    if ( !*(_DWORD *)(v3 + 44)
      || !v19->Width
      || *(_DWORD *)(v3 + 52)
      || (v16 = *(unsigned int *)(v3 + 48), !(_DWORD)v16)
      || (int)v16 > 199 )
    {
      v20 = WdLogNewEntry5_WdWarning(v16, v12, v13);
      *(_QWORD *)(v20 + 24) = 2093LL;
      goto LABEL_65;
    }
    goto LABEL_39;
  }
  v17 = (unsigned int)(*(_DWORD *)(v3 + 24) - 3);
  if ( *(_DWORD *)(v3 + 24) == 3 )
  {
    v19 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v3 + 40);
    if ( !*(_DWORD *)(v3 + 44) || !v19->Width || *(_DWORD *)(v3 + 48) )
    {
      v20 = WdLogNewEntry5_WdWarning(v17, v12, v13);
      *(_QWORD *)(v20 + 24) = 2075LL;
      goto LABEL_65;
    }
    goto LABEL_39;
  }
  if ( *(_DWORD *)(v3 + 24) == 4 )
  {
    v19 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v3 + 40);
    if ( !*(_DWORD *)(v3 + 44)
      || !v19->Width
      || (v17 = *(unsigned int *)(v3 + 52), !(_DWORD)v17)
      || (int)v17 > 8
      || *(_DWORD *)(v3 + 60)
      || (v17 = *(unsigned int *)(v3 + 48), !(_DWORD)v17)
      || (int)v17 > 199
      || *(_DWORD *)(v3 + 56) )
    {
      v20 = WdLogNewEntry5_WdWarning(v17, v12, v13);
      *(_QWORD *)(v20 + 24) = 2114LL;
LABEL_65:
      WdLogEvent5_WdWarning(v20);
      goto LABEL_66;
    }
    goto LABEL_39;
  }
  v18 = WdLogNewEntry5_WdAssertion(v17);
  *(_QWORD *)(v18 + 24) = 2145LL;
  WdLogEvent5_WdAssertion(v18);
LABEL_66:
  *v11 = -1073741811;
LABEL_67:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v11, v10);
  operator delete[](v11);
  return 1;
}
