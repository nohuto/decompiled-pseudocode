/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0095E9C
 * Callers:
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C007D450 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     DxgkQueryResourceInfo @ 0x1C00F23A0 (DxgkQueryResourceInfo.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C01B60AC (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C01B6578 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002D40 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C00030B4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0014464 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C008374C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00F5CE0 (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__--_2_--ENSURE_SHARED_RESOURCE_DEREFEREN.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // r15
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  _QWORD *v14; // rax
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int64 v17; // rcx
  ADAPTER_RENDER *v18; // r15
  _QWORD *i; // r8
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r8
  int StandardAllocationDriverData; // eax
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rax
  int v30; // ebx
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // eax
  __int64 v34; // rax
  __int64 v35; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v36[16]; // [rsp+28h] [rbp-41h] BYREF
  DXGPUSHLOCK *v37[3]; // [rsp+38h] [rbp-31h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v38; // [rsp+50h] [rbp-19h] BYREF
  int v39; // [rsp+80h] [rbp+17h] BYREF
  __int64 v40; // [rsp+84h] [rbp+1Bh]
  __int64 v41; // [rsp+8Ch] [rbp+23h]
  int v42; // [rsp+94h] [rbp+2Bh]

  LODWORD(v3) = 0;
  v4 = a3;
  if ( a3 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v36);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
    Global = DXGGLOBAL::GetGlobal(v7);
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v4, 2);
    v13 = ObjectA;
    if ( !ObjectA )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
LABEL_8:
      v14[3] = a1;
      v14[4] = v4;
      v14[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v14);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
      return 3221225485LL;
    }
    _m_prefetchw((const void *)(ObjectA + 60));
    v15 = *(_DWORD *)(ObjectA + 60);
    do
    {
      if ( !v15 )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
        v14[6] = 7406LL;
        goto LABEL_8;
      }
      v11 = (unsigned int)(v15 + 1);
      v16 = v15;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 60), v11, v15);
    }
    while ( v16 != v15 );
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
    v18 = *(ADAPTER_RENDER **)(a1 + 16);
    v35 = v13;
    if ( *(ADAPTER_RENDER **)(v13 + 72) == v18 && *(_QWORD *)(v13 + 88) == *(_QWORD *)(a1 + 1672) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37, (struct _KTHREAD **)(v13 + 32));
      DXGAUTOPUSHLOCK::AcquireExclusive(v37);
      a2[5] = 0;
      for ( i = *(_QWORD **)(v13 + 128); ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)(v13 + 128) )
        {
          a2[6] = *(_DWORD *)(v13 + 120);
          a2[7] = *(_DWORD *)(v13 + 124);
          a2[4] = *(_DWORD *)(v13 + 104);
          goto LABEL_18;
        }
        v20 = (unsigned int)a2[5];
        v21 = -1;
        v22 = (unsigned int)(v20 + *((_DWORD *)i - 2));
        if ( (unsigned int)v22 >= (unsigned int)v20 )
          v21 = v20 + *((_DWORD *)i - 2);
        a2[5] = v21;
        v3 = (unsigned int)v22 < (unsigned int)v20 ? (int)0xC0000095 : 0;
        if ( (unsigned int)v22 < (unsigned int)v20 )
          break;
      }
      v23 = WdLogNewEntry5_WdWarning(v22, v20, i);
      *(_QWORD *)(v23 + 24) = a1;
      *(_QWORD *)(v23 + 32) = v3;
      WdLogEvent5_WdWarning(v23);
LABEL_18:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
      goto LABEL_30;
    }
    if ( (*(_DWORD *)(v13 + 12) & 0x20) != 0 )
    {
      v40 = 0LL;
      v41 = 0LL;
      v42 = 0;
      HIDWORD(v40) = *(_DWORD *)(v13 + 200);
      v39 = *(_DWORD *)(v13 + 192);
      LODWORD(v40) = *(_DWORD *)(v13 + 196);
      LODWORD(v41) = 7;
      memset(&v38, 0, sizeof(v38));
      v38.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      v38.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v39;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v18, &v38, v25);
      v28 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v29 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v29 + 24) = a1;
        *(_QWORD *)(v29 + 32) = v28;
        WdLogEvent5_WdError(v29);
        v30 = v28;
LABEL_28:
        LODWORD(v3) = v30;
LABEL_30:
        DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v35);
        return (unsigned int)v3;
      }
      AllocationPrivateDriverDataSize = v38.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v38.ResourcePrivateDriverDataSize;
      if ( v38.AllocationPrivateDriverDataSize || v38.ResourcePrivateDriverDataSize )
      {
        a2[7] = *(_DWORD *)(v13 + 124);
        a2[6] = ResourcePrivateDriverDataSize;
        a2[4] = *(_DWORD *)(v13 + 104);
        a2[5] = AllocationPrivateDriverDataSize;
        goto LABEL_30;
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v24[5] = 1LL;
    }
    v24[3] = a1;
    v30 = -1073741811;
    v24[4] = -1073741811LL;
    WdLogEvent5_WdError(v24);
    goto LABEL_28;
  }
  v34 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v34 + 24) = a1;
  *(_QWORD *)(v34 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v34);
  return 3221225485LL;
}
