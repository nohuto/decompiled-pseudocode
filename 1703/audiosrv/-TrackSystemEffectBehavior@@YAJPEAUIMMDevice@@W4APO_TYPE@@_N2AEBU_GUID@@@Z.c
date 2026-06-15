/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1800CE058
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BB0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1800CE2E8 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, __int64 a3, char a4, __int64 a5)
{
  char v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // r10d
  __int64 v11; // rdx
  int v12; // edi
  __int64 v13; // r14
  unsigned __int8 *Data4; // rdx
  int v15; // eax
  unsigned __int8 *v16; // rdx
  PROPVARIANT v18; // [rsp+28h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h]
  __int64 v20; // [rsp+38h] [rbp-28h]
  PROPVARIANT pvar; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h]
  __int64 v23; // [rsp+50h] [rbp-10h]

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = 0LL;
  a5 = 0LL;
  v10 = dword_18012C7AC;
  if ( (dword_18012C7AC & 1) == 0 )
  {
    v10 = dword_18012C7AC | 1;
    dword_18012C7AC |= 1u;
    xmmword_18012C744 = PKEY_Endpoint_LFX_FailCount;
    dword_18012C754 = 9;
    xmmword_18012C758 = PKEY_Endpoint_GFX_FailCount;
    dword_18012C768 = 8;
    xmmword_18012C76C = PKEY_Endpoint_EFX_FailCount;
    dword_18012C77C = 31;
  }
  v11 = 2LL;
  if ( (v10 & 2) == 0 )
  {
    dword_18012C7AC = v10 | 2;
    xmmword_18012C6F4 = PKEY_Endpoint_LFX_ExceptionCount;
    dword_18012C704 = 33;
    xmmword_18012C708 = PKEY_Endpoint_GFX_ExceptionCount;
    dword_18012C718 = 34;
    xmmword_18012C71C = PKEY_Endpoint_EFX_ExceptionCount;
    dword_18012C72C = 35;
  }
  if ( !(_DWORD)v7 )
  {
    v12 = 0;
    goto LABEL_29;
  }
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, 2LL, &a5);
  if ( v12 >= 0 )
  {
    v13 = 20 * v7;
    Data4 = g_SqmSession.Data4;
    if ( !a4 )
      Data4 = (unsigned __int8 *)&unk_18012C730;
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
            a5,
            &Data4[v13],
            &v18);
    if ( !v6 )
    {
      if ( (_WORD)v18 == 19 )
      {
        v15 = v19;
      }
      else
      {
        LOWORD(v18) = 19;
        v15 = 0;
      }
      LODWORD(v19) = v15 + 10;
LABEL_25:
      v16 = g_SqmSession.Data4;
      if ( !a4 )
        v16 = (unsigned __int8 *)&unk_18012C730;
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, PROPVARIANT *))(*(_QWORD *)a5 + 48LL))(
              a5,
              &v16[v13],
              &v18);
      goto LABEL_28;
    }
    if ( ((_WORD)v18 != 19 || (_DWORD)v19) && (_WORD)v18 )
    {
      LOWORD(v18) = 19;
      if ( a4 )
      {
        pvar = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
          a5,
          &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
          &pvar);
        if ( (_WORD)pvar != 19 || (_DWORD)v22 != 1 || (unsigned int)v19 > 1 )
          LODWORD(v19) = v19 - 1;
        PropVariantClear(&pvar);
      }
      else
      {
        LODWORD(v19) = 0;
      }
      goto LABEL_25;
    }
  }
LABEL_28:
  PropVariantClear(&v18);
  v9 = a5;
LABEL_29:
  if ( v9 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v11, a3, v8, -2LL);
  return (unsigned int)v12;
}
