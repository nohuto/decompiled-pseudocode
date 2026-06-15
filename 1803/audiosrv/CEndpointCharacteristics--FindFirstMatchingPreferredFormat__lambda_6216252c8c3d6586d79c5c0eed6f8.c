/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d___ @ 0x1800E7284
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800E7E64 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     _lambda_068f763f677867854f08eaa5008b23ee_::operator() @ 0x180099EF0 (_lambda_068f763f677867854f08eaa5008b23ee_--operator().c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800B8A0C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  char *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rsi
  char *v12; // rdi
  __int16 v13; // dx
  bool v14; // r13
  int v15; // r8d
  unsigned __int16 v16; // cx
  int v17; // ebx
  int v19; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-38h] BYREF
  LPCOLESTR lpsz; // [rsp+40h] [rbp-30h]
  __int64 v22; // [rsp+48h] [rbp-28h]
  GUID iid; // [rsp+50h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 148) )
  {
    v7 = *(_QWORD *)(a1 + 32);
    pvar = 0LL;
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_6216252c8c3d6586d79c5c0eed6f8f6d_>'::`2'::PreferredFormatsMicrophone;
    lpsz = 0LL;
    v6 = 8;
    v22 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
           v7,
           &PKEY_AudioEndpoint_JackSubType,
           &pvar) >= 0
      && (_WORD)pvar == 31
      && IIDFromString(lpsz, &iid) >= 0 )
    {
      v8 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
      if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1 )
        v8 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
      if ( v8 )
      {
        v9 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1;
        if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1 )
          v9 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4;
        if ( !v9 )
          v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_842ca742cbee8aba9251bc84064452f9_>'::`2'::PreferredFormatsLineIn;
      }
      else
      {
        v5 = 0LL;
        v6 = 0;
      }
    }
    PropVariantClear(&pvar);
  }
  else
  {
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_842ca742cbee8aba9251bc84064452f9_>'::`2'::PreferredFormatsRender;
    v6 = 4;
  }
  v10 = v6;
  if ( !v6 )
    return 0LL;
  v11 = 0LL;
  v12 = v5 + 4;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 + 2);
    v19 = 0;
    v14 = 0;
    *(_WORD *)(a2 + 2) = v13;
    v15 = *((_DWORD *)v12 - 1);
    *(_DWORD *)(a2 + 4) = v15;
    v16 = *(_WORD *)v12;
    *(_WORD *)(a2 + 14) = *(_WORD *)v12;
    *(_WORD *)(a2 + 18) = *((_WORD *)v12 + 1);
    *(_DWORD *)(a2 + 20) = *((_DWORD *)v12 + 2);
    *(_WORD *)(a2 + 12) = v13 * (v16 >> 3);
    *(_DWORD *)(a2 + 8) = v15 * (unsigned __int16)(v13 * (v16 >> 3));
    *(_WORD *)(a2 + 16) = 22;
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*a3 + 24LL))(
            *a3,
            a3[1],
            *(unsigned int *)a3[1],
            &v19);
    if ( v17 < 0 )
      break;
    if ( v19 && lambda_068f763f677867854f08eaa5008b23ee_::operator()((__int64)(a3 + 3), (unsigned __int16 *)a2) )
    {
      v17 = CloneWaveFormat((const struct tWAVEFORMATEX *)a2, (struct tWAVEFORMATEX **)a3[2]);
      v14 = v17 >= 0;
    }
    if ( v17 < 0 )
      break;
    if ( !v14 )
    {
      ++v11;
      v12 += 16;
      if ( v11 < v10 )
        continue;
    }
    return 0LL;
  }
  return (unsigned int)v17;
}
