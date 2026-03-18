/*
 * XREFs of ?VmBusSendDdiGetStandardAllocationDriverData@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C002FA90
 * Callers:
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00CFEFC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendDdiGetStandardAllocationDriverData(
        DXGADAPTER *this,
        struct DXGPROCESS *a2,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a3,
        __int64 a4)
{
  int v4; // eax
  D3DKMDT_STANDARDALLOCATION_TYPE StandardAllocationType; // edx
  __int64 ResourcePrivateDriverDataSize; // rcx
  UINT PhysicalAdapterIndex; // eax
  __int64 AllocationPrivateDriverDataSize; // r8
  __int32 v11; // edx
  __int32 v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v17; // rax
  unsigned int v18; // r14d
  int *v19; // rbx
  bool v20; // zf
  unsigned int v21; // esi
  struct VMBCHANNEL__ *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v27; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v28; // rcx
  __int64 v29; // rax
  struct _MDL *v30; // [rsp+28h] [rbp-48h]
  __int64 v31; // [rsp+30h] [rbp-40h] BYREF
  int v32; // [rsp+38h] [rbp-38h]
  int v33; // [rsp+3Ch] [rbp-34h]
  D3DKMDT_STANDARDALLOCATION_TYPE v34; // [rsp+40h] [rbp-30h]
  int v35; // [rsp+44h] [rbp-2Ch]
  int v36; // [rsp+48h] [rbp-28h]
  UINT v37; // [rsp+4Ch] [rbp-24h]
  __int128 v38; // [rsp+50h] [rbp-20h]
  __int64 v39; // [rsp+60h] [rbp-10h]
  unsigned int v40; // [rsp+98h] [rbp+28h] BYREF

  v4 = *((_DWORD *)a2 + 96);
  StandardAllocationType = a3->StandardAllocationType;
  ResourcePrivateDriverDataSize = a3->ResourcePrivateDriverDataSize;
  v31 = 0LL;
  v33 = v4;
  PhysicalAdapterIndex = a3->PhysicalAdapterIndex;
  AllocationPrivateDriverDataSize = a3->AllocationPrivateDriverDataSize;
  v34 = StandardAllocationType;
  v35 = AllocationPrivateDriverDataSize;
  v32 = 51;
  v37 = PhysicalAdapterIndex;
  v36 = ResourcePrivateDriverDataSize;
  v11 = StandardAllocationType - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      v38 = *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width;
      goto LABEL_9;
    }
    v13 = (unsigned int)(v12 - 1);
    if ( !(_DWORD)v13 )
    {
      pCreateSharedPrimarySurfaceData = a3->pCreateSharedPrimarySurfaceData;
      *(_QWORD *)&v38 = *(_QWORD *)&pCreateSharedPrimarySurfaceData->Width;
      DWORD2(v38) = pCreateSharedPrimarySurfaceData->Format;
      goto LABEL_9;
    }
    if ( (_DWORD)v13 != 1 )
    {
      v14 = WdLogNewEntry5_WdAssertion(ResourcePrivateDriverDataSize, v13, AllocationPrivateDriverDataSize, a4);
      *(_QWORD *)(v14 + 24) = 3843LL;
      WdLogEvent5_WdAssertion(v14);
      return 3221225485LL;
    }
  }
  v17 = a3->pCreateSharedPrimarySurfaceData;
  v38 = *(_OWORD *)&v17->Width;
  v39 = *(_QWORD *)&v17->RefreshRate.Denominator;
LABEL_9:
  v18 = (AllocationPrivateDriverDataSize + ResourcePrivateDriverDataSize + 43) & 0xFFFFFFF8;
  v19 = (int *)operator new[](v18, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( !v19 )
    return 3221225495LL;
  v20 = *((_BYTE *)this + 3880) == 0;
  v21 = -1073741823;
  v40 = v18;
  if ( v20 )
    v22 = 0LL;
  else
    v22 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  VmBusSendSyncMessage(v22, (struct DXGKVMB_COMMAND *)&v31, 0x38u, v19, &v40, v30);
  if ( v40 < v18 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
    *(_QWORD *)(v29 + 24) = *v19;
    WdLogEvent5_WdAssertion(v29);
  }
  else
  {
    v21 = *v19;
    if ( *v19 >= 0 )
    {
      switch ( a3->StandardAllocationType )
      {
        case D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE:
          goto LABEL_20;
        case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
          *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width = *(_OWORD *)(v19 + 3);
          break;
        case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
          v28 = a3->pCreateSharedPrimarySurfaceData;
          *(_QWORD *)&v28->Width = *(_QWORD *)(v19 + 3);
          v28->Format = v19[5];
          break;
        case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
LABEL_20:
          v27 = a3->pCreateSharedPrimarySurfaceData;
          *(_OWORD *)&v27->Width = *(_OWORD *)(v19 + 3);
          *(_QWORD *)&v27->RefreshRate.Denominator = *(_QWORD *)(v19 + 7);
          break;
      }
      if ( v35 )
        memmove(a3->pAllocationPrivateDriverData, v19 + 9, (unsigned int)v19[1]);
      else
        a3->AllocationPrivateDriverDataSize = v19[1];
      if ( v36 )
        memmove(a3->pResourcePrivateDriverData, (char *)v19 + (unsigned int)v19[1] + 36, (unsigned int)v19[2]);
      else
        a3->ResourcePrivateDriverDataSize = v19[2];
    }
  }
  operator delete[](v19);
  return v21;
}
