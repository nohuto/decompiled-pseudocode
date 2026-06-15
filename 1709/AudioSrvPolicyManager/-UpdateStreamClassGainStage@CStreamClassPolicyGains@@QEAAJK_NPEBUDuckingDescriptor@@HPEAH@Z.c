/*
 * XREFs of ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180024798
 * Callers:
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180019BB8 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AB14 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddHead@?$CAtlList@PEAVCTrackedEndpoint@@V?$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCTrackedEndpoint@@@Z @ 0x180011208 (-AddHead@-$CAtlList@PEAVCTrackedEndpoint@@V-$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QE.c)
 *     WPP_SF__guid_d @ 0x180024AB8 (WPP_SF__guid_d.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        char a3,
        const struct DuckingDescriptor *a4,
        int a5,
        int *a6)
{
  float *v6; // r12
  __int64 v8; // rdi
  unsigned int v10; // r15d
  __int64 v11; // r8
  int *v12; // r13
  __int64 *v13; // rdi
  __int64 *v14; // rcx
  __int64 v15; // rsi
  HANDLE ProcessHeap; // rax
  _DWORD *v17; // rax
  int v18; // ebx
  __int64 *v19; // r14
  volatile signed __int32 *v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 result; // rax
  ATL::CAtlException *v25; // rbx
  ATL::CAtlException *v26; // rbx
  ATL::CAtlException *v27; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v28; // [rsp+48h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-48h] BYREF
  char v30; // [rsp+58h] [rbp-40h]
  _DWORD *v31; // [rsp+A0h] [rbp+8h] BYREF
  int v32; // [rsp+B0h] [rbp+18h]
  const struct DuckingDescriptor *v33; // [rsp+B8h] [rbp+20h]

  v33 = a4;
  v6 = (float *)a4;
  v8 = a2;
  v10 = 0;
  lpCriticalSection = this;
  v30 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v12 = a6;
  *a6 = 0;
  v13 = (__int64 *)((char *)&this[1] + 48 * v8 + (a3 != 0 ? 0x3F0 : 0));
  v14 = (__int64 *)*v13;
  if ( a5 )
  {
    do
    {
      if ( !v14 )
        goto LABEL_42;
      v19 = v14;
      v20 = (volatile signed __int32 *)v14[2];
      v14 = (__int64 *)*v14;
    }
    while ( v6 != *((float **)v20 + 6) );
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v18 = 1;
    }
    else
    {
      v18 = 1;
      WPP_SF__guid_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, v11, v20 + 4, *((_DWORD *)v20 + 9) - 1);
    }
    if ( _InterlockedExchangeAdd(v20 + 9, 0xFFFFFFFF) != 1 )
      goto LABEL_42;
    v10 = 0;
    try
    {
      v21 = *v19;
      if ( v19 == (__int64 *)*v13 )
        *v13 = v21;
      else
        *(_QWORD *)v19[1] = v21;
      v22 = (_QWORD *)v19[1];
      if ( v19 == (__int64 *)v13[1] )
        v13[1] = (__int64)v22;
      else
        *(_QWORD *)(*v19 + 8) = v22;
      *v19 = v13[4];
      v13[4] = (__int64)v19;
      if ( v13[2]-- == 1 )
        ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)v13);
    }
    catch ( ATL::CAtlException *v28 )
    {
      v26 = v28;
      if ( *(_DWORD *)v28 == -1073741571 )
        o__resetstkoflw_0();
      v32 = *(_DWORD *)v26;
      v10 = v32;
      if ( v32 < 0 )
        goto LABEL_42;
      v18 = 1;
      v12 = a6;
      v6 = (float *)v33;
    }
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v20 + 8LL))(v20, 1LL);
    }
    goto LABEL_39;
  }
  while ( v14 )
  {
    v15 = v14[2];
    v14 = (__int64 *)*v14;
    if ( v6 == *(float **)(v15 + 48) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF__guid_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, v11, v15 + 16, *(_DWORD *)(v15 + 36) + 1);
      }
      _InterlockedAdd((volatile signed __int32 *)(v15 + 36), 1u);
      goto LABEL_42;
    }
  }
  ProcessHeap = GetProcessHeap();
  v17 = HeapAlloc(ProcessHeap, 0, 0x38uLL);
  v31 = v17;
  v18 = 1;
  if ( v17 )
  {
    v17[2] = 1;
    *(_QWORD *)v17 = &CGainStage::`vftable';
    *((_OWORD *)v17 + 1) = StreamClassVolumePolicyGuid;
    *((_BYTE *)v17 + 32) = 0;
    v17[9] = 1;
    *((_QWORD *)v17 + 5) = 0LL;
    *(_QWORD *)v17 = &CPBMStreamClassVolumeGainStage::`vftable';
    *((_QWORD *)v17 + 6) = v6;
  }
  v31 = v17;
  if ( !v17 )
  {
    v10 = -2147024882;
    goto LABEL_42;
  }
  v10 = 0;
  try
  {
    ATL::CAtlList<CTrackedEndpoint *,ATL::CElementTraits<CTrackedEndpoint *>>::AddHead(v13, &v31);
  }
  catch ( ATL::CAtlException *v27 )
  {
    v25 = v27;
    if ( *(_DWORD *)v27 == -1073741571 )
      o__resetstkoflw_0();
    v32 = *(_DWORD *)v25;
    v10 = v32;
    if ( v32 >= 0 )
    {
      v18 = 1;
      v12 = a6;
      v6 = (float *)v33;
      goto LABEL_39;
    }
LABEL_42:
    if ( v30 )
      LeaveCriticalSection(lpCriticalSection);
    result = v10;
  }
LABEL_39:
  if ( *v6 == 0.0 )
    v18 = 0;
  *v12 = v18;
  goto LABEL_42;
}
