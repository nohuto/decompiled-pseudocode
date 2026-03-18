/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00E9F40
 * Callers:
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00ABF30 (DxgkQueryResourceInfoFromNtHandle.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C016F270 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C01CAA40 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0015320 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C001A44C (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00A5E90 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00DBC58 (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__--_2_--ENSURE_SHARED_RESOUR.c)
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
  unsigned int v12; // r11d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // r8
  int StandardAllocationDriverData; // eax
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // eax
  __int64 v25; // rax
  volatile signed __int32 *v27; // [rsp+20h] [rbp-60h] BYREF
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v28; // [rsp+28h] [rbp-58h] BYREF
  DXGPUSHLOCK *v29; // [rsp+58h] [rbp-28h] BYREF
  __int64 v30; // [rsp+60h] [rbp-20h]
  __int64 v31; // [rsp+68h] [rbp-18h]

  LODWORD(v4) = 0;
  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdError(a1);
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
    if ( *(ADAPTER_RENDER **)(v8 + 72) == v10 && *(_QWORD *)(v8 + 88) == *(_QWORD *)(a1 + 1688) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v29, (struct _KTHREAD **)(v8 + 32), 0);
      DXGAUTOPUSHLOCK::AcquireExclusive(&v29);
      a2[7] = 0;
      v11 = *(_QWORD **)(v8 + 128);
      if ( v11 == (_QWORD *)(v8 + 128) )
      {
LABEL_12:
        a2[8] = *(_DWORD *)(v8 + 120);
        a2[9] = *(_DWORD *)(v8 + 124);
        a2[6] = *(_DWORD *)(v8 + 104);
      }
      else
      {
        v12 = 0;
        while ( 1 )
        {
          v13 = v12;
          v14 = v12 + *((_DWORD *)v11 - 2);
          v15 = v12;
          v12 = -1;
          if ( (unsigned int)v14 >= (unsigned int)v13 )
            v12 = v14;
          a2[7] = v12;
          v4 = (unsigned int)v14 < (unsigned int)v13 ? (int)0xC0000095 : 0;
          if ( (unsigned int)v14 < (unsigned int)v13 )
            break;
          v11 = (_QWORD *)*v11;
          if ( v11 == (_QWORD *)(v8 + 128) )
            goto LABEL_12;
        }
        v16 = WdLogNewEntry5_WdWarning(v13, v14, v15);
        *(_QWORD *)(v16 + 24) = a1;
        *(_QWORD *)(v16 + 32) = v4;
        WdLogEvent5_WdWarning(v16);
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v29);
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(v8 + 12) & 0x20) != 0 )
    {
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      LODWORD(v30) = *(_DWORD *)(v8 + 200);
      v29 = *(DXGPUSHLOCK **)(v8 + 192);
      HIDWORD(v30) = 7;
      memset(&v28, 0, sizeof(v28));
      v28.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      v28.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v29;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v10, &v28, v18);
      v21 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v20);
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
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v17[5] = 1LL;
    }
    v17[3] = a1;
    LODWORD(v4) = -1073741811;
    v17[4] = -1073741811LL;
    WdLogEvent5_WdError(v17);
    goto LABEL_24;
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
  LODWORD(v4) = -1073741811;
  v9[3] = a1;
  v9[4] = a4;
  v9[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v9);
  return (unsigned int)v4;
}
