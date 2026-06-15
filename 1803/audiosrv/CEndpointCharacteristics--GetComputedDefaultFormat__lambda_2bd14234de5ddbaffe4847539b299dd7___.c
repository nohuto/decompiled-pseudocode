/*
 * XREFs of CEndpointCharacteristics::GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800E83B8
 * Callers:
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800E8A98 (CEndpointCharacteristics--GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800E7128 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_2bd14234de5ddbaffe4847539b299dd7__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9___ @ 0x1800E7464 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc8406445.c)
 *     ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800E9CF0 (-AllocateBytes@-$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x1800EFDC8 (-LogEPCError@@YAXPEBDHJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___(
        __int64 a1,
        int a2,
        __int128 *a3,
        struct tWAVEFORMATEX **a4)
{
  GUID fmtid; // xmm0
  int FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9; // edi
  __int64 v9; // rcx
  __int64 v10; // rdi
  char *v11; // rbx
  void *v12; // rcx
  __int64 v13; // rcx
  LPVOID v15; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v23[80]; // [rsp+80h] [rbp-80h]
  PROPVARIANT pvar; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-28h]
  __int64 v26; // [rsp+E0h] [rbp-20h]
  PROPVARIANT v27; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  __int64 v30; // [rsp+100h] [rbp+0h]
  _OWORD v31[6]; // [rsp+110h] [rbp+10h] BYREF
  GUID v32; // [rsp+170h] [rbp+70h] BYREF
  DWORD pid; // [rsp+180h] [rbp+80h]
  GUID v34; // [rsp+188h] [rbp+88h] BYREF
  int v35; // [rsp+198h] [rbp+98h]

  v30 = -2LL;
  ppv = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  *a4 = 0LL;
  pvar = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  *(_QWORD *)&v32.Data1 = 0x4C7D1B2C233164C8LL;
  *(_QWORD *)v32.Data4 = 0x67257A6871B668BCLL;
  v35 = 1;
  v34 = v32;
  if ( a2 == 3 )
  {
    fmtid = PKEY_Endpoint_KeywordDetector_ConnectorId.fmtid;
    pid = PKEY_Endpoint_KeywordDetector_ConnectorId.pid;
  }
  else
  {
    *(_QWORD *)&v32.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v32.Data4 = 0xFC181731B718BA83uLL;
    fmtid = v32;
    pid = 1;
  }
  v32 = fmtid;
  FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
                                                                            *(_QWORD *)(a1 + 32),
                                                                            &v34,
                                                                            &pvar);
  if ( FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
                                                                            *(_QWORD *)(a1 + 32),
                                                                            &v32,
                                                                            &v27);
  if ( FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = CoCreateInstance(
                                                                            &CLSID_MMDeviceEnumerator,
                                                                            0LL,
                                                                            0x17u,
                                                                            &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                                                                            &ppv);
  if ( FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(
                                                                            ppv,
                                                                            v25,
                                                                            &v20);
  if ( FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 24LL))(
                                                                            v20,
                                                                            &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                                                                            23LL,
                                                                            0LL,
                                                                            &v19);
  if ( FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 56LL))(
                                                                            v19,
                                                                            (unsigned int)v28,
                                                                            &v17);
  if ( FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 < 0 )
    goto LABEL_30;
  v15 = 0LL;
  FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, LPVOID *))(*(_QWORD *)v17 + 104LL))(
                                                                            v17,
                                                                            1LL,
                                                                            &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                                                                            &v15);
  if ( FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 < 0 )
    goto LABEL_11;
  pv = 0LL;
  if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v15 + 32LL))(v15, &pv) >= 0 )
  {
    v22 = *a3;
    *(_OWORD *)v23 = a3[1];
    *(_OWORD *)&v23[16] = a3[2];
    *(_OWORD *)&v23[32] = a3[3];
    *(_QWORD *)&v23[48] = *((_QWORD *)a3 + 8);
    FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_2bd14234de5ddbaffe4847539b299dd7___(
                                                                              v9,
                                                                              (__int64)&v22,
                                                                              (unsigned int *)pv,
                                                                              a4);
    if ( FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
LABEL_11:
      if ( v15 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15 + 16LL))(v15);
      goto LABEL_30;
    }
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15 + 16LL))(v15);
  FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v17 + 104LL))(
                                                                            v17,
                                                                            1LL,
                                                                            &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                                                                            &v18);
  if ( FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 >= 0 && !*a4 )
  {
    v10 = v18;
    v15 = 0LL;
    ATL::CHeapPtrBase<KSDATAFORMAT,ATL::CComAllocator>::AllocateBytes(&v15);
    v11 = (char *)v15;
    if ( !v15 )
    {
      FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = -2147024882;
      v12 = 0LL;
LABEL_22:
      CoTaskMemFree(v12);
      goto LABEL_30;
    }
    *(_DWORD *)v15 = 104;
    *((GUID *)v11 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
    *((GUID *)v11 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
    *((GUID *)v11 + 2) = GUID_00000001_0000_0010_8000_00aa00389b71;
    *((_WORD *)v11 + 32) = -2;
    *(GUID *)(v11 + 88) = GUID_00000000_0000_0010_8000_00aa00389b71;
    *((_DWORD *)v11 + 22) = 1;
    *(_QWORD *)&v22 = v10;
    *((_QWORD *)&v22 + 1) = v11;
    *(_QWORD *)v23 = a4;
    *(_OWORD *)&v23[8] = *a3;
    *(_OWORD *)&v23[24] = a3[1];
    *(_OWORD *)&v23[40] = a3[2];
    *(_OWORD *)&v23[56] = a3[3];
    *(_QWORD *)&v23[72] = *((_QWORD *)a3 + 8);
    v31[0] = v22;
    v31[1] = *(_OWORD *)v23;
    v31[2] = *(_OWORD *)&v23[16];
    v31[3] = *(_OWORD *)&v23[32];
    v31[4] = *(_OWORD *)&v23[48];
    v31[5] = *(_OWORD *)&v23[64];
    FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9___(
                                                                              a1,
                                                                              (__int64)(v11 + 64),
                                                                              v31);
    v12 = v11;
    if ( FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 < 0 )
      goto LABEL_22;
    CoTaskMemFree(v11);
    if ( *a4 )
      goto LABEL_30;
    v15 = 0LL;
    FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v18 + 32LL))(
                                                                              v18,
                                                                              &v15);
    if ( FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 < 0 )
    {
      v12 = v15;
      goto LABEL_22;
    }
    v22 = *a3;
    *(_OWORD *)v23 = a3[1];
    *(_OWORD *)&v23[16] = a3[2];
    *(_OWORD *)&v23[32] = a3[3];
    *(_QWORD *)&v23[48] = *((_QWORD *)a3 + 8);
    FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_2bd14234de5ddbaffe4847539b299dd7___(
                                                                              v13,
                                                                              (__int64)&v22,
                                                                              (unsigned int *)v15,
                                                                              a4);
    v12 = v15;
    if ( FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 < 0 )
      goto LABEL_22;
    CoTaskMemFree(v15);
    if ( !*a4 )
      FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9 = -2004287480;
  }
LABEL_30:
  PropVariantClear(&pvar);
  PropVariantClear(&v27);
  LogEPCError(
    "CEndpointCharacteristics::GetComputedDefaultFormat",
    5964,
    FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)FirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9;
}
