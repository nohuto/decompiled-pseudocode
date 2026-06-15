/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c___ @ 0x180063BF0
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x180063DC4 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _lambda_1a1596b8a660531830807c55faa94ced_::operator() @ 0x1800644F4 (_lambda_1a1596b8a660531830807c55faa94ced_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800B8A0C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  char *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rsi
  char *v10; // rdi
  __int16 v11; // dx
  bool v12; // r13
  int v13; // r8d
  unsigned __int16 v14; // cx
  int v15; // ebx
  int v17; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-38h] BYREF
  LPCOLESTR lpsz; // [rsp+40h] [rbp-30h]
  __int64 v20; // [rsp+48h] [rbp-28h]
  GUID iid; // [rsp+50h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 148) )
  {
    v7 = *(_QWORD *)(a1 + 32);
    pvar = 0LL;
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_cedc6ccb2a1b55ee01e4758a9e002f0c_>'::`2'::PreferredFormatsMicrophone;
    lpsz = 0LL;
    v6 = 8;
    v20 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
           v7,
           &PKEY_AudioEndpoint_JackSubType,
           &pvar) >= 0
      && (_WORD)pvar == 31
      && IIDFromString(lpsz, &iid) >= 0 )
    {
      if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1
        && *(_QWORD *)iid.Data4 == *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4 )
      {
        v5 = 0LL;
        v6 = 0;
      }
      else if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1
             && *(_QWORD *)iid.Data4 == *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4 )
      {
        v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_cedc6ccb2a1b55ee01e4758a9e002f0c_>'::`2'::PreferredFormatsLineIn;
      }
    }
    PropVariantClear(&pvar);
  }
  else
  {
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_cedc6ccb2a1b55ee01e4758a9e002f0c_>'::`2'::PreferredFormatsRender;
    v6 = 4;
  }
  v8 = v6;
  if ( !v6 )
    return 0LL;
  v9 = 0LL;
  v10 = v5 + 4;
  while ( 1 )
  {
    v11 = *((_WORD *)v10 + 2);
    v17 = 0;
    v12 = 0;
    *(_WORD *)(a2 + 2) = v11;
    v13 = *((_DWORD *)v10 - 1);
    *(_DWORD *)(a2 + 4) = v13;
    v14 = *(_WORD *)v10;
    *(_WORD *)(a2 + 14) = *(_WORD *)v10;
    *(_WORD *)(a2 + 18) = *((_WORD *)v10 + 1);
    *(_DWORD *)(a2 + 20) = *((_DWORD *)v10 + 2);
    *(_WORD *)(a2 + 12) = v11 * (v14 >> 3);
    *(_DWORD *)(a2 + 8) = v13 * (unsigned __int16)(v11 * (v14 >> 3));
    *(_WORD *)(a2 + 16) = 22;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*a3 + 24LL))(
            *a3,
            a3[1],
            *(unsigned int *)a3[1],
            &v17);
    if ( v15 < 0 )
      break;
    if ( v17 && (unsigned __int8)lambda_1a1596b8a660531830807c55faa94ced_::operator()(a3 + 3, a2) )
    {
      v15 = CloneWaveFormat((const struct tWAVEFORMATEX *)a2, (struct tWAVEFORMATEX **)a3[2]);
      v12 = v15 >= 0;
    }
    if ( v15 < 0 )
      break;
    if ( !v12 )
    {
      ++v9;
      v10 += 16;
      if ( v9 < v8 )
        continue;
    }
    return 0LL;
  }
  return (unsigned int)v15;
}
