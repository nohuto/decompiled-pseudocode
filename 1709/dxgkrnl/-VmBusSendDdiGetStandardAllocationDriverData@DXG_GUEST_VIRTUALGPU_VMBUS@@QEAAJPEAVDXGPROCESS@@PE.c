/*
 * XREFs of ?VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0196044
 * Callers:
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C008374C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a3)
{
  UINT AllocationPrivateDriverDataSize; // r9d
  UINT ResourcePrivateDriverDataSize; // r8d
  int v7; // eax
  D3DKMDT_STANDARDALLOCATION_TYPE StandardAllocationType; // ecx
  UINT PhysicalAdapterIndex; // eax
  __int32 v10; // ecx
  __int32 v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v15; // rax
  unsigned int v16; // r14d
  int *v17; // rbx
  struct VMBCHANNEL__ *v19; // rcx
  unsigned int v20; // esi
  __int64 v21; // rcx
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v22; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v23; // rcx
  __int64 v24; // rax
  struct _MDL *v25; // [rsp+28h] [rbp-48h]
  __int64 v26; // [rsp+30h] [rbp-40h] BYREF
  int v27; // [rsp+38h] [rbp-38h]
  int v28; // [rsp+3Ch] [rbp-34h]
  int v29; // [rsp+40h] [rbp-30h]
  D3DKMDT_STANDARDALLOCATION_TYPE v30; // [rsp+48h] [rbp-28h]
  UINT v31; // [rsp+4Ch] [rbp-24h]
  UINT v32; // [rsp+50h] [rbp-20h]
  UINT v33; // [rsp+54h] [rbp-1Ch]
  __int128 v34; // [rsp+58h] [rbp-18h]
  __int64 v35; // [rsp+68h] [rbp-8h]
  unsigned int v36; // [rsp+A0h] [rbp+30h] BYREF

  AllocationPrivateDriverDataSize = a3->AllocationPrivateDriverDataSize;
  if ( AllocationPrivateDriverDataSize > 0x20000
    || (ResourcePrivateDriverDataSize = a3->ResourcePrivateDriverDataSize, ResourcePrivateDriverDataSize > 0x20000) )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 5506LL;
    goto LABEL_31;
  }
  v7 = *((_DWORD *)a2 + 106);
  StandardAllocationType = a3->StandardAllocationType;
  v26 = 0LL;
  v28 = 0;
  v27 = v7;
  PhysicalAdapterIndex = a3->PhysicalAdapterIndex;
  v30 = StandardAllocationType;
  v33 = PhysicalAdapterIndex;
  v29 = 39;
  v32 = ResourcePrivateDriverDataSize;
  v31 = AllocationPrivateDriverDataSize;
  v10 = StandardAllocationType - 1;
  if ( !v10 )
    goto LABEL_10;
  v11 = v10 - 1;
  if ( !v11 )
  {
    v34 = *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width;
    goto LABEL_11;
  }
  v12 = (unsigned int)(v11 - 1);
  if ( !(_DWORD)v12 )
  {
    pCreateSharedPrimarySurfaceData = a3->pCreateSharedPrimarySurfaceData;
    *(_QWORD *)&v34 = *(_QWORD *)&pCreateSharedPrimarySurfaceData->Width;
    DWORD2(v34) = pCreateSharedPrimarySurfaceData->Format;
    goto LABEL_11;
  }
  if ( (_DWORD)v12 == 1 )
  {
LABEL_10:
    v15 = a3->pCreateSharedPrimarySurfaceData;
    v34 = *(_OWORD *)&v15->Width;
    v35 = *(_QWORD *)&v15->RefreshRate.Denominator;
LABEL_11:
    v16 = (ResourcePrivateDriverDataSize + AllocationPrivateDriverDataSize + 43) & 0xFFFFFFF8;
    v17 = (int *)operator new[](v16, 0x4B677844u, (POOL_TYPE)512);
    if ( !v17 )
      return 3221225495LL;
    v19 = *this;
    v36 = v16;
    v20 = -1073741823;
    VmBusSendSyncMessage(v19, (struct DXGKVMB_COMMAND_BASE *)&v26, 0x40u, v17, &v36, v25);
    if ( v36 < v16 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v24 + 24) = *v17;
      WdLogEvent5_WdAssertion(v24);
    }
    else
    {
      v20 = *v17;
      if ( *v17 >= 0 )
      {
        switch ( a3->StandardAllocationType )
        {
          case D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE:
            goto LABEL_19;
          case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
            *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width = *(_OWORD *)(v17 + 3);
            break;
          case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
            v23 = a3->pCreateSharedPrimarySurfaceData;
            *(_QWORD *)&v23->Width = *(_QWORD *)(v17 + 3);
            v23->Format = v17[5];
            break;
          case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
LABEL_19:
            v22 = a3->pCreateSharedPrimarySurfaceData;
            *(_OWORD *)&v22->Width = *(_OWORD *)(v17 + 3);
            *(_QWORD *)&v22->RefreshRate.Denominator = *(_QWORD *)(v17 + 7);
            break;
        }
        if ( v31 )
          memmove(a3->pAllocationPrivateDriverData, v17 + 9, (unsigned int)v17[1]);
        else
          a3->AllocationPrivateDriverDataSize = v17[1];
        if ( v32 )
          memmove(a3->pResourcePrivateDriverData, (char *)v17 + (unsigned int)v17[1] + 36, (unsigned int)v17[2]);
        else
          a3->ResourcePrivateDriverDataSize = v17[2];
      }
    }
    ExFreePoolWithTag(v17, 0);
    return v20;
  }
  v13 = WdLogNewEntry5_WdAssertion(v12);
  *(_QWORD *)(v13 + 24) = 5530LL;
LABEL_31:
  WdLogEvent5_WdAssertion(v13);
  return 3221225485LL;
}
