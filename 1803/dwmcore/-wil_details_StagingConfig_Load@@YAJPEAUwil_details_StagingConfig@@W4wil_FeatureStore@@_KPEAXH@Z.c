/*
 * XREFs of ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1800BB5B8
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180055170 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180055680 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x1800BB3F4 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x1800BC078 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall wil_details_StagingConfig_Load(unsigned int *a1, unsigned int a2, __int64 a3, void *a4)
{
  const struct __WIL__WNF_TYPE_ID *v7; // rdx
  const void *v8; // r8
  unsigned int v9; // edi
  __int64 v10; // r13
  char *v11; // r15
  __int64 v12; // rax
  char *v13; // rbx
  SIZE_T v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // r12d
  const struct __WIL__WNF_TYPE_ID *v17; // r8
  char *v18; // rdx
  __int64 result; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v21; // rax
  const struct __WIL__WNF_TYPE_ID *v22; // rdx
  const void *v23; // r8
  __int64 v24; // r10
  const struct __WIL__WNF_TYPE_ID *v25; // rdx
  unsigned int v26; // r9d
  __int64 v27; // rax
  HANDLE v28; // rax
  unsigned int v29; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v31[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+48h] [rbp-18h] BYREF

  LODWORD(v32) = a2;
  *(_QWORD *)v31 = a4;
  memset_0(a1, 0, 0x58uLL);
  v9 = 0;
  *a1 = a2;
  a1[1] = 0;
  v10 = 200LL;
  v11 = 0LL;
  v12 = 0x418A073AA3BC88F5LL;
  v13 = 0LL;
  v14 = -(__int64)(a4 != 0LL) & 0xC8;
  if ( !(_DWORD)v32 )
    v12 = 0x418A073AA3BC7C75LL;
  v33 = v12;
  v29 = a4 != 0LL ? 0xC8 : 0;
  v15 = wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v33, v7, v8, a1 + 2, a4, &v29);
  v16 = v15;
  if ( !v15 )
  {
    v13 = *(char **)v31;
    if ( !*(_QWORD *)v31 )
      goto LABEL_15;
  }
  while ( v15 == -1073741789 )
  {
LABEL_15:
    if ( v14 < 0xC8 )
      v14 = 200LL;
    if ( v14 < v29 )
      v14 = v29;
    if ( v14 < 0x10 )
      v14 = 16LL;
    if ( v11 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v11);
    }
    v21 = GetProcessHeap();
    v11 = (char *)HeapAlloc(v21, 0, v14);
    if ( !v11 )
      return 3221225626LL;
    v29 = v14;
    v15 = wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v33, v22, v23, a1 + 2, v11, &v29);
    v16 = v15;
    v13 = v11;
  }
  if ( v16 || !v13 )
  {
    if ( v11 )
    {
      v28 = GetProcessHeap();
      HeapFree(v28, 0, v11);
    }
    return v16;
  }
  else
  {
    v17 = (const struct __WIL__WNF_TYPE_ID *)v29;
    if ( v29 > 4 )
      *((_BYTE *)a1 + 12) = *v13;
    if ( (unsigned int)v17 >= 0x10
      && *((_BYTE *)a1 + 12) == 2
      && *((_WORD *)v13 + 1) >= 0x10u
      && (v24 = *((unsigned __int16 *)v13 + 2),
          v25 = (const struct __WIL__WNF_TYPE_ID *)(*((unsigned __int16 *)v13 + 1)
                                                  + 16LL * *((unsigned __int16 *)v13 + 3)
                                                  + 12 * v24),
          v17 >= v25) )
    {
      v30 = 0;
      v26 = 0;
      if ( (_WORD)v24 )
      {
        v27 = 0x418A073AA3BC90F5LL;
        if ( !(_DWORD)v32 )
          v27 = 0x418A073AA3BC8075LL;
        v32 = v27;
        v31[0] = 0;
        wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v32, v25, v17, &v30, 0LL, v31);
        LODWORD(v17) = v29;
        v26 = v30;
      }
      *((_QWORD *)a1 + 3) = v13;
      *((_QWORD *)a1 + 4) = v13 + 16;
      *((_QWORD *)a1 + 5) = &v13[12 * *((unsigned __int16 *)v13 + 2) + 16];
      a1[12] = v26 != 0;
      if ( *v13 == 2 && (unsigned __int8)v13[1] < 2u )
      {
        LODWORD(v17) = *((unsigned __int16 *)v13 + 1)
                     + 16 * *((unsigned __int16 *)v13 + 3)
                     + 12 * *((unsigned __int16 *)v13 + 2);
        a1[4] = 1;
      }
    }
    else
    {
      v29 = 16;
      *(_QWORD *)v13 = 0LL;
      *((_QWORD *)v13 + 1) = 0LL;
      *((_WORD *)v13 + 1) = 16;
      *v13 = 2;
      v13[1] = 2;
      LODWORD(v17) = v29;
      *((_QWORD *)a1 + 3) = v13;
      v18 = &v13[*((unsigned __int16 *)v13 + 1)];
      *((_QWORD *)a1 + 4) = v18;
      *((_QWORD *)a1 + 5) = &v18[12 * *((unsigned __int16 *)v13 + 2)];
    }
    *((_QWORD *)a1 + 8) = (unsigned int)v17;
    if ( v11 )
      v10 = v14;
    *((_QWORD *)a1 + 7) = v13;
    *((_QWORD *)a1 + 9) = v10;
    LOBYTE(v9) = v13 == v11;
    result = 0LL;
    a1[20] = v9;
  }
  return result;
}
