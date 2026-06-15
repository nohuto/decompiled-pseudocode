/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c141487702b332cfbac99d1239064ae6___ @ 0x18004BA84
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004BC5C (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2_::operator() @ 0x18004C854 (_lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c141487702b332cfbac99d1239064ae6___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  char *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  char *v9; // r14
  __int16 v10; // dx
  bool v11; // r13
  int v12; // r8d
  unsigned __int16 v13; // cx
  int v14; // edi
  int v16; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-38h] BYREF
  LPCOLESTR lpsz; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h]
  GUID iid; // [rsp+50h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 148) )
  {
    v8 = *(_QWORD *)(a1 + 32);
    pvar = 0LL;
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_c141487702b332cfbac99d1239064ae6_>'::`2'::PreferredFormatsMicrophone;
    lpsz = 0LL;
    v19 = 0LL;
    v6 = 8LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
           v8,
           &PKEY_AudioEndpoint_JackSubType,
           &pvar) >= 0
      && (_WORD)pvar == 31
      && IIDFromString(lpsz, &iid) >= 0 )
    {
      if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1
        && *(_QWORD *)iid.Data4 == *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4 )
      {
        v5 = 0LL;
        v6 = 0LL;
      }
      else if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1
             && *(_QWORD *)iid.Data4 == *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4 )
      {
        v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_c141487702b332cfbac99d1239064ae6_>'::`2'::PreferredFormatsLineIn;
      }
    }
    PropVariantClear(&pvar);
    v7 = 0LL;
    if ( !v6 )
      return 0LL;
  }
  else
  {
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_c141487702b332cfbac99d1239064ae6_>'::`2'::PreferredFormatsRender;
    v6 = 4LL;
    v7 = 0LL;
  }
  v9 = v5 + 4;
  while ( 1 )
  {
    v10 = *((_WORD *)v9 + 2);
    v16 = 0;
    v11 = 0;
    *(_WORD *)(a2 + 2) = v10;
    v12 = *((_DWORD *)v9 - 1);
    *(_DWORD *)(a2 + 4) = v12;
    v13 = *(_WORD *)v9;
    *(_WORD *)(a2 + 14) = *(_WORD *)v9;
    *(_WORD *)(a2 + 18) = *((_WORD *)v9 + 1);
    *(_DWORD *)(a2 + 20) = *((_DWORD *)v9 + 2);
    *(_WORD *)(a2 + 12) = v10 * (v13 >> 3);
    *(_DWORD *)(a2 + 8) = v12 * (unsigned __int16)(v10 * (v13 >> 3));
    *(_WORD *)(a2 + 16) = 22;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*a3 + 24LL))(
            *a3,
            a3[1],
            *(unsigned int *)a3[1],
            &v16);
    if ( v14 < 0 )
      break;
    if ( v16 && (unsigned __int8)lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2_::operator()(a3 + 3, a2) )
    {
      v14 = CloneWaveFormat((const struct tWAVEFORMATEX *)a2, (struct tWAVEFORMATEX **)a3[2]);
      v11 = v14 >= 0;
    }
    if ( v14 < 0 )
      break;
    if ( !v11 )
    {
      ++v7;
      v9 += 16;
      if ( v7 < v6 )
        continue;
    }
    return 0LL;
  }
  return (unsigned int)v14;
}
