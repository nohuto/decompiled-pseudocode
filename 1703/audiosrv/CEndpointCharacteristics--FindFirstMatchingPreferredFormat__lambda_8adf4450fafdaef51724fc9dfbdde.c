/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_8adf4450fafdaef51724fc9dfbdde94a___ @ 0x1800B9C60
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BAB88 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator() @ 0x1800BB974 (_lambda_0a80d7e3d12d42377e48064cdd362aeb_--operator().c)
 */

__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_8adf4450fafdaef51724fc9dfbdde94a___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  char *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  char *v11; // r14
  __int16 v12; // dx
  bool v13; // r13
  int v14; // r8d
  unsigned __int16 v15; // cx
  int v16; // edi
  _BYTE v18[4]; // [rsp+30h] [rbp-40h] BYREF
  int v19; // [rsp+34h] [rbp-3Ch] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-38h] BYREF
  LPCOLESTR lpsz; // [rsp+40h] [rbp-30h]
  __int64 v22; // [rsp+48h] [rbp-28h]
  GUID iid; // [rsp+50h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 148) )
  {
    v8 = *(_QWORD *)(a1 + 32);
    pvar = 0LL;
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_6216252c8c3d6586d79c5c0eed6f8f6d_>'::`2'::PreferredFormatsMicrophone;
    lpsz = 0LL;
    v22 = 0LL;
    v6 = 8LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
           v8,
           &PKEY_AudioEndpoint_JackSubType,
           &pvar) >= 0
      && (_WORD)pvar == 31
      && IIDFromString(lpsz, &iid) >= 0 )
    {
      v9 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
      if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1 )
        v9 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
      if ( v9 )
      {
        v10 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1;
        if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1 )
          v10 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4;
        if ( !v10 )
          v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_8adf4450fafdaef51724fc9dfbdde94a_>'::`2'::PreferredFormatsLineIn;
      }
      else
      {
        v5 = 0LL;
        v6 = 0LL;
      }
    }
    PropVariantClear(&pvar);
    v7 = 0LL;
    if ( !v6 )
      return 0LL;
  }
  else
  {
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_8adf4450fafdaef51724fc9dfbdde94a_>'::`2'::PreferredFormatsRender;
    v6 = 4LL;
    v7 = 0LL;
  }
  v11 = v5 + 4;
  while ( 1 )
  {
    v12 = *((_WORD *)v11 + 2);
    v19 = 0;
    v13 = 0;
    *(_WORD *)(a2 + 2) = v12;
    v14 = *((_DWORD *)v11 - 1);
    *(_DWORD *)(a2 + 4) = v14;
    v15 = *(_WORD *)v11;
    *(_WORD *)(a2 + 14) = *(_WORD *)v11;
    *(_WORD *)(a2 + 18) = *((_WORD *)v11 + 1);
    *(_DWORD *)(a2 + 20) = *((_DWORD *)v11 + 2);
    *(_WORD *)(a2 + 12) = v12 * (v15 >> 3);
    *(_DWORD *)(a2 + 8) = v14 * (unsigned __int16)(v12 * (v15 >> 3));
    *(_WORD *)(a2 + 16) = 22;
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*a3 + 24LL))(
            *a3,
            a3[1],
            *(unsigned int *)a3[1],
            &v19);
    if ( v16 < 0 )
      break;
    if ( v19 )
    {
      v18[0] = 0;
      lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator()(a3 + 3, a2, v18);
      if ( v18[0] )
      {
        v16 = CloneWaveFormat((const struct tWAVEFORMATEX *)a2, (struct tWAVEFORMATEX **)a3[2]);
        v13 = v16 >= 0;
      }
    }
    if ( v16 < 0 )
      break;
    if ( !v13 )
    {
      ++v7;
      v11 += 16;
      if ( v7 < v6 )
        continue;
    }
    return 0LL;
  }
  return (unsigned int)v16;
}
