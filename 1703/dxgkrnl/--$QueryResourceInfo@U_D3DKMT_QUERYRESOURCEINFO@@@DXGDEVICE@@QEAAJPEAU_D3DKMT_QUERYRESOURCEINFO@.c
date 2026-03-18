/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00C27FC
 * Callers:
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C008B680 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     DxgkQueryResourceInfo @ 0x1C009CCD0 (DxgkQueryResourceInfo.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C019F49C (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C019F968 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C01ADE74 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C000706C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00136D0 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00CFEFC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00FE2C8 (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__--_2_--ENSURE_SHARED_RESOURCE_DEREFEREN.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // r9
  __int64 ObjectA; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  _QWORD *v15; // rax
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  ADAPTER_RENDER *v22; // r15
  _QWORD *v23; // r9
  _QWORD *i; // r8
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rax
  int StandardAllocationDriverData; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r15
  __int64 v34; // rax
  int v35; // ebx
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // eax
  __int64 v39; // rax
  __int64 v40; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v41[16]; // [rsp+28h] [rbp-41h] BYREF
  DXGPUSHLOCK *v42[3]; // [rsp+38h] [rbp-31h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v43; // [rsp+50h] [rbp-19h] BYREF
  int v44; // [rsp+80h] [rbp+17h] BYREF
  __int64 v45; // [rsp+84h] [rbp+1Bh]
  __int64 v46; // [rsp+8Ch] [rbp+23h]
  int v47; // [rsp+94h] [rbp+2Bh]

  LODWORD(v3) = 0;
  v4 = a3;
  if ( a3 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v41);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)v4, 2LL, v8);
    v14 = ObjectA;
    if ( !ObjectA )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
LABEL_8:
      v15[3] = a1;
      v15[4] = v4;
      v15[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v15);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v41);
      return 3221225485LL;
    }
    _m_prefetchw((const void *)(ObjectA + 60));
    v16 = *(_DWORD *)(ObjectA + 60);
    do
    {
      if ( !v16 )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
        v15[6] = 6744LL;
        goto LABEL_8;
      }
      v11 = (unsigned int)(v16 + 1);
      v17 = v16;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 60), v11, v16);
    }
    while ( v17 != v16 );
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v41);
    v22 = *(ADAPTER_RENDER **)(a1 + 16);
    v40 = v14;
    if ( *(ADAPTER_RENDER **)(v14 + 72) == v22 && *(_QWORD *)(v14 + 88) == *(_QWORD *)(a1 + 1800) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42, (struct _KTHREAD **)(v14 + 32), v20, v21);
      DXGAUTOPUSHLOCK::AcquireExclusive(v42);
      v23 = (_QWORD *)(v14 + 128);
      a2[5] = 0;
      for ( i = *(_QWORD **)(v14 + 128); ; i = (_QWORD *)*i )
      {
        if ( i == v23 )
        {
          a2[6] = *(_DWORD *)(v14 + 120);
          a2[7] = *(_DWORD *)(v14 + 124);
          a2[4] = *(_DWORD *)(v14 + 104);
          goto LABEL_18;
        }
        v25 = (unsigned int)a2[5];
        v26 = -1;
        v27 = (unsigned int)(v25 + *((_DWORD *)i - 2));
        if ( (unsigned int)v27 >= (unsigned int)v25 )
          v26 = v25 + *((_DWORD *)i - 2);
        a2[5] = v26;
        v3 = (unsigned int)v27 < (unsigned int)v25 ? (int)0xC0000095 : 0;
        if ( (unsigned int)v27 < (unsigned int)v25 )
          break;
      }
      v28 = WdLogNewEntry5_WdWarning(v27, v25, i, v23);
      *(_QWORD *)(v28 + 24) = a1;
      *(_QWORD *)(v28 + 32) = v3;
      WdLogEvent5_WdWarning(v28);
LABEL_18:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42);
      goto LABEL_30;
    }
    if ( (*(_DWORD *)(v14 + 12) & 0x20) != 0 )
    {
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0;
      HIDWORD(v45) = *(_DWORD *)(v14 + 184);
      v44 = *(_DWORD *)(v14 + 176);
      LODWORD(v45) = *(_DWORD *)(v14 + 180);
      LODWORD(v46) = 7;
      memset(&v43, 0, sizeof(v43));
      v43.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      v43.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v44;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v22, &v43);
      v33 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v34 = WdLogNewEntry5_WdError(v32, v31);
        *(_QWORD *)(v34 + 24) = a1;
        *(_QWORD *)(v34 + 32) = v33;
        WdLogEvent5_WdError(v34);
        v35 = v33;
LABEL_28:
        LODWORD(v3) = v35;
LABEL_30:
        DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v40);
        return (unsigned int)v3;
      }
      AllocationPrivateDriverDataSize = v43.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v43.ResourcePrivateDriverDataSize;
      if ( v43.AllocationPrivateDriverDataSize || v43.ResourcePrivateDriverDataSize )
      {
        a2[7] = *(_DWORD *)(v14 + 124);
        a2[6] = ResourcePrivateDriverDataSize;
        a2[4] = *(_DWORD *)(v14 + 104);
        a2[5] = AllocationPrivateDriverDataSize;
        goto LABEL_30;
      }
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v32, v43.AllocationPrivateDriverDataSize);
    }
    else
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
      v29[5] = 1LL;
    }
    v29[3] = a1;
    v35 = -1073741811;
    v29[4] = -1073741811LL;
    WdLogEvent5_WdError(v29);
    goto LABEL_28;
  }
  v39 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v39 + 24) = a1;
  *(_QWORD *)(v39 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v39);
  return 3221225485LL;
}
