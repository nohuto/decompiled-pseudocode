/*
 * XREFs of ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C00AC3EC
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C008374C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct DXGADAPTER *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  UINT v16; // eax
  ADAPTER_RENDER *v17; // rcx
  __int64 v18; // r8
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v19; // [rsp+20h] [rbp-59h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v20; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v21[3]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v22; // [rsp+8Ch] [rbp+13h]
  unsigned int v23; // [rsp+94h] [rbp+1Bh]

  v5 = *((_QWORD *)this + 14);
  v7 = 3760LL * a2;
  v8 = *(_QWORD *)(v5 + v7 + 88);
  if ( v8 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 56LL);
    if ( !*(_DWORD *)(v5 + v7 + 1012) )
      goto LABEL_10;
    if ( !*((_QWORD *)a3 + 289) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v14 + 24) = 6811LL;
      WdLogEvent5_WdAssertion(v14);
    }
    if ( (*(_DWORD *)(v9 + 12) & 4) == 0 )
    {
      memset(&v20, 0, sizeof(v20));
      v20.hAllocation = *(HANDLE *)(*(_QWORD *)(v8 + 48) + 16LL);
      if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)a3 + 289), &v20, v10) >= 0 )
      {
        v12 = *((_QWORD *)this + 14);
        if ( v20.PrivateDriverFormatAttribute == *(_DWORD *)(v12 + v7 + 1064) )
          return;
        memset(&v19, 0, sizeof(v19));
        v15 = *(_QWORD *)(v8 + 48);
        v19.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v21;
        v19.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE;
        v21[1] = *(_DWORD *)(v12 + v7 + 1016);
        v21[0] = *(_DWORD *)(v12 + v7 + 1012);
        v22 = *(_QWORD *)(v12 + v7 + 1028);
        v21[2] = *(_DWORD *)(v12 + v7 + 1020);
        v23 = a2;
        v19.pAllocationPrivateDriverData = *(void **)(v15 + 32);
        v16 = *(_DWORD *)(v15 + 40);
        v17 = (ADAPTER_RENDER *)*((_QWORD *)a3 + 289);
        v19.AllocationPrivateDriverDataSize = v16;
        v19.pResourcePrivateDriverData = *(void **)(v9 + 112);
        v19.ResourcePrivateDriverDataSize = *(_DWORD *)(v9 + 120);
        if ( (int)ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v17, &v19, v18) >= 0 )
        {
          *(_DWORD *)(*((_QWORD *)this + 14) + v7 + 1064) = v20.PrivateDriverFormatAttribute;
          return;
        }
      }
      v13 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v13 + 24) = v8;
      WdLogEvent5_WdError(v13);
LABEL_10:
      *(_DWORD *)(v9 + 12) |= 4u;
    }
  }
}
