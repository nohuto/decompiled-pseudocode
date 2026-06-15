/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140014890
 * Callers:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140007700 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140012250 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x14001E1C8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x14001E228 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, char a3, char a4, __int64 a5)
{
  __int64 v7; // rdi
  int v9; // r15d
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rdi
  char *v13; // rdx
  char *v15; // rdx
  PROPVARIANT pvar; // [rsp+28h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h]
  __int64 v18; // [rsp+38h] [rbp-28h]
  PROPVARIANT v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]

  v7 = a2;
  v9 = 0;
  v10 = 0LL;
  a5 = 0LL;
  if ( dword_14008A250 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_14008A250);
    if ( dword_14008A250 == -1 )
    {
      xmmword_14008A214 = PKEY_Endpoint_LFX_FailCount;
      dword_14008A224 = 9;
      xmmword_14008A228 = PKEY_Endpoint_GFX_FailCount;
      dword_14008A238 = 8;
      xmmword_14008A23C = PKEY_Endpoint_EFX_FailCount;
      dword_14008A24C = 31;
      xmmword_14008A1C4 = PKEY_Endpoint_LFX_ExceptionCount;
      dword_14008A1D4 = 33;
      xmmword_14008A1D8 = PKEY_Endpoint_GFX_ExceptionCount;
      dword_14008A1E8 = 34;
      xmmword_14008A1EC = PKEY_Endpoint_EFX_ExceptionCount;
      dword_14008A1FC = 35;
      Init_thread_footer(&dword_14008A250);
    }
    v10 = a5;
  }
  if ( (_DWORD)v7 )
  {
    pvar = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, &a5);
    if ( v11 < 0 )
    {
LABEL_9:
      PropVariantClear(&pvar);
      v10 = a5;
      goto LABEL_10;
    }
    v12 = 20 * v7;
    v13 = (char *)&unk_14008A1B0;
    if ( !a4 )
      v13 = (char *)&unk_14008A200;
    v11 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(a5, &v13[v12], &pvar);
    if ( a3 )
    {
      if ( (_WORD)pvar == 19 )
      {
        if ( !(_DWORD)v17 )
          goto LABEL_9;
      }
      else if ( !(_WORD)pvar )
      {
        goto LABEL_9;
      }
      LOWORD(pvar) = 19;
      if ( !a4 )
      {
        LODWORD(v17) = 0;
        goto LABEL_30;
      }
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
        a5,
        &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
        &v19);
      if ( (_WORD)v19 != 19 || (_DWORD)v20 != 1 || (unsigned int)v17 > 1 )
        LODWORD(v17) = v17 - 1;
      PropVariantClear(&v19);
    }
    else
    {
      if ( (_WORD)pvar == 19 )
        v9 = v17;
      else
        LOWORD(pvar) = 19;
      LODWORD(v17) = v9 + 10;
    }
    v15 = (char *)&unk_14008A1B0;
    if ( a4 )
    {
LABEL_31:
      v11 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)a5 + 48LL))(a5, &v15[v12], &pvar);
      goto LABEL_9;
    }
LABEL_30:
    v15 = (char *)&unk_14008A200;
    goto LABEL_31;
  }
  v11 = 0;
LABEL_10:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v11;
}
