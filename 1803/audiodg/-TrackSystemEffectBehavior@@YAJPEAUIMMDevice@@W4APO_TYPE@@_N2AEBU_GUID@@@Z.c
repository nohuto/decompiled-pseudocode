/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1400067A0
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1400066A0 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140009AE0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x14001D288 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x14001D2E8 (_Init_thread_header.c)
 *     IsSkipAPOFailureCheck @ 0x14001D53C (IsSkipAPOFailureCheck.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, char a3, char a4, __int64 a5)
{
  __int64 v7; // r14
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // r14
  char *v13; // rdx
  bool v14; // zf
  __int64 v15; // rdx
  PROPVARIANT v17; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h]
  __int64 v19; // [rsp+38h] [rbp-28h]
  PROPVARIANT pvar; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h]
  __int64 v22; // [rsp+50h] [rbp-10h]

  v7 = a2;
  v9 = 0;
  a5 = 0LL;
  v10 = 4LL;
  if ( dword_140088274 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_140088274);
    if ( dword_140088274 == -1 )
    {
      xmmword_140088234 = PKEY_Endpoint_LFX_FailCount;
      dword_140088244 = 9;
      xmmword_140088248 = PKEY_Endpoint_GFX_FailCount;
      dword_140088258 = 8;
      xmmword_14008825C = PKEY_Endpoint_EFX_FailCount;
      dword_14008826C = 31;
      xmmword_1400881E4 = PKEY_Endpoint_LFX_ExceptionCount;
      dword_1400881F4 = 33;
      xmmword_1400881F8 = PKEY_Endpoint_GFX_ExceptionCount;
      dword_140088208 = 34;
      xmmword_14008820C = PKEY_Endpoint_EFX_ExceptionCount;
      dword_14008821C = 35;
      Init_thread_footer(&dword_140088274);
    }
  }
  if ( !(_DWORD)v7 )
  {
    v11 = 0;
    goto LABEL_29;
  }
  if ( (unsigned __int8)IsSkipAPOFailureCheck(v10) )
  {
    v11 = 0;
    goto LABEL_29;
  }
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, &a5);
  if ( v11 >= 0 )
  {
    v12 = 20 * v7;
    v13 = (char *)&unk_1400881D0;
    if ( !a4 )
      v13 = (char *)&unk_140088220;
    v11 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(a5, &v13[v12], &v17);
    if ( a3 )
    {
      if ( (_WORD)v17 == 19 )
        v14 = (_DWORD)v18 == 0;
      else
        v14 = (_WORD)v17 == 0;
      if ( v14 )
        goto LABEL_28;
      LOWORD(v17) = 19;
      if ( !a4 )
      {
        LODWORD(v18) = 0;
        goto LABEL_26;
      }
      pvar = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
        a5,
        &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
        &pvar);
      if ( (_WORD)pvar != 19 || (_DWORD)v21 != 1 || (unsigned int)v18 > 1 )
        LODWORD(v18) = v18 - 1;
      PropVariantClear(&pvar);
    }
    else
    {
      if ( (_WORD)v17 == 19 )
        v9 = v18;
      else
        LOWORD(v17) = 19;
      LODWORD(v18) = v9 + 10;
    }
    v15 = v12 + 557520;
    if ( a4 )
    {
LABEL_27:
      v11 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)a5 + 48LL))(
              a5,
              (char *)&_ImageBase + v15,
              &v17);
      goto LABEL_28;
    }
LABEL_26:
    v15 = v12 + 557600;
    goto LABEL_27;
  }
LABEL_28:
  PropVariantClear(&v17);
LABEL_29:
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  return (unsigned int)v11;
}
