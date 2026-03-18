/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00C25BC
 * Callers:
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C009C690 (DxgkQueryResourceInfoFromNtHandle.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C0183130 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00136D0 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00A3518 (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__--_2_--ENSURE_SHARED_RESOUR.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00CFEFC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // rax
  ADAPTER_RENDER *v10; // r15
  _QWORD *v11; // r9
  _QWORD *i; // r8
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  int StandardAllocationDriverData; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // eax
  __int64 v25; // rax
  volatile signed __int32 *v27; // [rsp+20h] [rbp-60h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v28; // [rsp+28h] [rbp-58h] BYREF
  int v29; // [rsp+58h] [rbp-28h] BYREF
  __int64 v30; // [rsp+5Ch] [rbp-24h]
  __int64 v31; // [rsp+64h] [rbp-1Ch]
  int v32; // [rsp+6Ch] [rbp-14h]

  LODWORD(v4) = 0;
  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdError(a1, a2);
    LODWORD(v4) = -1073741811;
    *(_QWORD *)(v25 + 24) = a1;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    return (unsigned int)v4;
  }
  v8 = *(_QWORD *)(a4 + 16);
  if ( v8 )
  {
    v10 = *(ADAPTER_RENDER **)(a1 + 16);
    v27 = 0LL;
    if ( *(ADAPTER_RENDER **)(v8 + 72) == v10 && *(_QWORD *)(v8 + 88) == *(_QWORD *)(a1 + 1800) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v29, (struct _KTHREAD **)(v8 + 32), a3, a4);
      DXGAUTOPUSHLOCK::AcquireExclusive((DXGPUSHLOCK **)&v29);
      v11 = (_QWORD *)(v8 + 128);
      a2[7] = 0;
      for ( i = *(_QWORD **)(v8 + 128); ; i = (_QWORD *)*i )
      {
        if ( i == v11 )
        {
          a2[8] = *(_DWORD *)(v8 + 120);
          a2[9] = *(_DWORD *)(v8 + 124);
          a2[6] = *(_DWORD *)(v8 + 104);
          goto LABEL_13;
        }
        v13 = (unsigned int)a2[7];
        v14 = -1;
        v15 = (unsigned int)(v13 + *((_DWORD *)i - 2));
        if ( (unsigned int)v15 >= (unsigned int)v13 )
          v14 = v13 + *((_DWORD *)i - 2);
        a2[7] = v14;
        v4 = (unsigned int)v15 < (unsigned int)v13 ? (int)0xC0000095 : 0;
        if ( (unsigned int)v15 < (unsigned int)v13 )
          break;
      }
      v16 = WdLogNewEntry5_WdWarning(v15, v13, i, v11);
      *(_QWORD *)(v16 + 24) = a1;
      *(_QWORD *)(v16 + 32) = v4;
      WdLogEvent5_WdWarning(v16);
LABEL_13:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v29);
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(v8 + 12) & 0x20) != 0 )
    {
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0;
      HIDWORD(v30) = *(_DWORD *)(v8 + 184);
      v29 = *(_DWORD *)(v8 + 176);
      LODWORD(v30) = *(_DWORD *)(v8 + 180);
      LODWORD(v31) = 7;
      memset(&v28, 0, sizeof(v28));
      v28.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      v28.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v29;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v10, &v28);
      v21 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v22 + 24) = a1;
        *(_QWORD *)(v22 + 32) = v21;
        WdLogEvent5_WdError(v22);
        LODWORD(v4) = v21;
LABEL_24:
        DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v27);
        return (unsigned int)v4;
      }
      AllocationPrivateDriverDataSize = v28.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v28.ResourcePrivateDriverDataSize;
      if ( v28.AllocationPrivateDriverDataSize || v28.ResourcePrivateDriverDataSize )
      {
        a2[9] = *(_DWORD *)(v8 + 124);
        a2[8] = ResourcePrivateDriverDataSize;
        a2[6] = *(_DWORD *)(v8 + 104);
        a2[7] = AllocationPrivateDriverDataSize;
        goto LABEL_24;
      }
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v20, v28.AllocationPrivateDriverDataSize);
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
      v17[5] = 1LL;
    }
    v17[3] = a1;
    LODWORD(v4) = -1073741811;
    v17[4] = -1073741811LL;
    WdLogEvent5_WdError(v17);
    goto LABEL_24;
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
  LODWORD(v4) = -1073741811;
  v9[3] = a1;
  v9[4] = a4;
  v9[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v9);
  return (unsigned int)v4;
}
