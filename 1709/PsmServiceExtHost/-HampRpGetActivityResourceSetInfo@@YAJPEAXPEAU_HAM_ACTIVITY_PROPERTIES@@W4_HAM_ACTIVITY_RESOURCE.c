/*
 * XREFs of ?HampRpGetActivityResourceSetInfo@@YAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_RESOURCE_SET_TYPE@@PEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180048478
 * Callers:
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HAM_ACTIVITY_RESOURCE_SET_TYPE@@@Z @ 0x180045834 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HAM_ACTIVITY_RESOURCE_SET_T.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800100E0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x1800480E0 (-ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetTyp.c)
 */

__int64 __fastcall HampRpGetActivityResourceSetInfo(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  int v6; // r9d
  __int64 v7; // r11
  unsigned int v8; // ebx
  const wchar_t *v9; // rdx
  int v10; // edx
  const GUID *v11; // r8
  const GUID *v12; // r9
  int v13; // edx
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v16; // edx
  const GUID *v17; // r8
  const GUID *v18; // r9
  _OWORD *v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v30[3]; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v31[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v32[40]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v33; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+240h] [rbp+140h] BYREF
  int *v35; // [rsp+260h] [rbp+160h]
  __int64 v36; // [rsp+268h] [rbp+168h]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v32);
  v8 = 0;
  if ( v6 )
  {
    if ( v6 != 1 )
      return (unsigned int)-1073741811;
    v9 = (const wchar_t *)(v7 + 132);
  }
  else
  {
    v9 = L"UiFrozen";
  }
  v29 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, _DWORD *))(*(_QWORD *)a1 + 24LL))(a1, v9, 0LL, v30);
  if ( v29 < 0 )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    {
      v36 = 4LL;
      v35 = &v29;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005BAB2, v11, v12, v10 - 29, &pData);
    }
    return (unsigned int)-1073741823;
  }
  v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, v30[0], v31);
  if ( v29 < 0 )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    {
      v36 = 4LL;
      v35 = &v29;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005BB26, v14, v15, v13 - 29, &pData);
    }
    return (unsigned int)-1073741823;
  }
  v29 = ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(v30[0], v31);
  if ( v29 < 0 )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    {
      v36 = 4LL;
      v35 = &v29;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005BB69, v17, v18, v16 - 29, &pData);
    }
    return (unsigned int)-1073741823;
  }
  v19 = v32;
  v33 |= 0x20u;
  v20 = 3LL;
  do
  {
    v21 = v19[1];
    *a4 = *v19;
    v22 = v19[2];
    a4[1] = v21;
    v23 = v19[3];
    a4[2] = v22;
    v24 = v19[4];
    a4[3] = v23;
    v25 = v19[5];
    a4[4] = v24;
    v26 = v19[6];
    a4[5] = v25;
    v27 = v19[7];
    v19 += 8;
    a4[6] = v26;
    a4 += 8;
    *(a4 - 1) = v27;
    --v20;
  }
  while ( v20 );
  return v8;
}
