/*
 * XREFs of ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C00E6C44
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00CFEFC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        ADAPTER_RENDER **a3,
        __int64 a4)
{
  int v4; // r12d
  __int64 v6; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rcx
  UINT v17; // eax
  ADAPTER_RENDER *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v21; // [rsp+20h] [rbp-59h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v22; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v23[3]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v24; // [rsp+8Ch] [rbp+13h]
  int v25; // [rsp+94h] [rbp+1Bh]

  v4 = a2;
  v6 = *((_QWORD *)this + 14);
  v8 = 3208LL * (unsigned int)a2;
  v9 = *(_QWORD *)(v6 + v8 + 88);
  if ( v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 56LL);
    if ( !*(_DWORD *)(v6 + v8 + 972) )
    {
LABEL_3:
      *(_DWORD *)(v10 + 12) |= 4u;
      return;
    }
    if ( !a3[286] )
    {
      v11 = WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
      *(_QWORD *)(v11 + 24) = 6162LL;
      WdLogEvent5_WdAssertion(v11);
    }
    if ( (*(_DWORD *)(v10 + 12) & 4) == 0 )
    {
      memset(&v22, 0, sizeof(v22));
      v22.hAllocation = *(HANDLE *)(*(_QWORD *)(v9 + 48) + 16LL);
      if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(a3[286], &v22, v12) < 0 )
      {
LABEL_12:
        v20 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v20 + 24) = v9;
        WdLogEvent5_WdError(v20);
        goto LABEL_3;
      }
      v15 = *((_QWORD *)this + 14);
      if ( v22.PrivateDriverFormatAttribute != *(_DWORD *)(v15 + v8 + 1024) )
      {
        memset(&v21, 0, sizeof(v21));
        v16 = *(_QWORD *)(v9 + 48);
        v21.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v23;
        v21.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE;
        v23[1] = *(_DWORD *)(v15 + v8 + 976);
        v23[0] = *(_DWORD *)(v15 + v8 + 972);
        v24 = *(_QWORD *)(v15 + v8 + 988);
        v23[2] = *(_DWORD *)(v15 + v8 + 980);
        v25 = v4;
        v21.pAllocationPrivateDriverData = *(void **)(v16 + 32);
        v17 = *(_DWORD *)(v16 + 40);
        v18 = a3[286];
        v21.AllocationPrivateDriverDataSize = v17;
        v21.pResourcePrivateDriverData = *(void **)(v10 + 112);
        v21.ResourcePrivateDriverDataSize = *(_DWORD *)(v10 + 120);
        if ( (int)ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v18, &v21, v19) >= 0 )
        {
          *(_DWORD *)(*((_QWORD *)this + 14) + v8 + 1024) = v22.PrivateDriverFormatAttribute;
          return;
        }
        goto LABEL_12;
      }
    }
  }
}
