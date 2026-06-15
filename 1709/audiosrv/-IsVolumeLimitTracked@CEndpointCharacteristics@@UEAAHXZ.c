/*
 * XREFs of ?IsVolumeLimitTracked@CEndpointCharacteristics@@UEAAHXZ @ 0x1800B6CC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::IsVolumeLimitTracked(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  PROPVARIANT pvar; // [rsp+20h] [rbp-38h] BYREF
  LPCOLESTR lpsz; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  GUID iid; // [rsp+38h] [rbp-20h] BYREF

  if ( !*((_DWORD *)this + 41) )
  {
    *((_DWORD *)this + 40) = 0;
    v2 = *((_QWORD *)this + 4);
    pvar = 0LL;
    lpsz = 0LL;
    v10 = 0LL;
    iid = GUID_00000000_0000_0000_0000_000000000000;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
           v2,
           &PKEY_AudioEndpoint_JackSubType,
           &pvar) >= 0
      && (_WORD)pvar == 31
      && IIDFromString(lpsz, &iid) >= 0 )
    {
      v3 = *(_QWORD *)&GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data1 - *(_QWORD *)&iid.Data1;
      if ( *(_QWORD *)&GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data1 == *(_QWORD *)&iid.Data1 )
        v3 = *(_QWORD *)GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data4 - *(_QWORD *)iid.Data4;
      if ( !v3 )
        goto LABEL_17;
      v4 = *(_QWORD *)&GUID_1ccf610b_f3db_47c1_834c_b19bc76ce5ab.Data1 - *(_QWORD *)&iid.Data1;
      if ( *(_QWORD *)&GUID_1ccf610b_f3db_47c1_834c_b19bc76ce5ab.Data1 == *(_QWORD *)&iid.Data1 )
        v4 = *(_QWORD *)GUID_1ccf610b_f3db_47c1_834c_b19bc76ce5ab.Data4 - *(_QWORD *)iid.Data4;
      if ( !v4 )
        goto LABEL_17;
      v5 = *(_QWORD *)&GUID_a79d957d_5cd5_458a_b3f1_af8e789b1f3b.Data1 - *(_QWORD *)&iid.Data1;
      if ( *(_QWORD *)&GUID_a79d957d_5cd5_458a_b3f1_af8e789b1f3b.Data1 == *(_QWORD *)&iid.Data1 )
        v5 = *(_QWORD *)GUID_a79d957d_5cd5_458a_b3f1_af8e789b1f3b.Data4 - *(_QWORD *)iid.Data4;
      if ( !v5 )
        goto LABEL_17;
      v6 = *(_QWORD *)&GUID_dff21ce2_f70f_11d0_b917_00a0c9223196.Data1 - *(_QWORD *)&iid.Data1;
      if ( *(_QWORD *)&GUID_dff21ce2_f70f_11d0_b917_00a0c9223196.Data1 == *(_QWORD *)&iid.Data1 )
        v6 = *(_QWORD *)GUID_dff21ce2_f70f_11d0_b917_00a0c9223196.Data4 - *(_QWORD *)iid.Data4;
      if ( !v6 )
LABEL_17:
        *((_DWORD *)this + 40) = 1;
      *((_DWORD *)this + 41) = 1;
    }
    PropVariantClear(&pvar);
  }
  return *((unsigned int *)this + 40);
}
