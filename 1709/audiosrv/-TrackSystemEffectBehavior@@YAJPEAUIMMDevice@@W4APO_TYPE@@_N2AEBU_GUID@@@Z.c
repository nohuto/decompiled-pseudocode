/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1800DA05C
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1800DA318 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800333A8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180033408 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, char a3, char a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r14
  char *v12; // rdx
  int v13; // eax
  char *v14; // rdx
  PROPVARIANT v16; // [rsp+28h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h]
  __int64 v18; // [rsp+38h] [rbp-28h]
  PROPVARIANT pvar; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]

  v7 = a2;
  v9 = 0LL;
  a5 = 0LL;
  if ( dword_18014CC04 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18014CC04);
    if ( dword_18014CC04 == -1 )
    {
      xmmword_18014CB64 = PKEY_Endpoint_LFX_FailCount;
      dword_18014CB74 = 9;
      xmmword_18014CB78 = PKEY_Endpoint_GFX_FailCount;
      dword_18014CB88 = 8;
      xmmword_18014CB8C = PKEY_Endpoint_EFX_FailCount;
      dword_18014CB9C = 31;
      xmmword_18014CB14 = PKEY_Endpoint_LFX_ExceptionCount;
      dword_18014CB24 = 33;
      xmmword_18014CB28 = PKEY_Endpoint_GFX_ExceptionCount;
      dword_18014CB38 = 34;
      xmmword_18014CB3C = PKEY_Endpoint_EFX_ExceptionCount;
      dword_18014CB4C = 35;
      Init_thread_footer(&dword_18014CC04);
    }
    v9 = a5;
  }
  if ( !(_DWORD)v7 )
  {
    v10 = 0;
    goto LABEL_29;
  }
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, &a5);
  if ( v10 >= 0 )
  {
    v11 = 20 * v7;
    v12 = (char *)&unk_18014CB00;
    if ( !a4 )
      v12 = (char *)&unk_18014CB50;
    v10 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(a5, &v12[v11], &v16);
    if ( !a3 )
    {
      if ( (_WORD)v16 == 19 )
      {
        v13 = v17;
      }
      else
      {
        LOWORD(v16) = 19;
        v13 = 0;
      }
      LODWORD(v17) = v13 + 10;
LABEL_25:
      v14 = (char *)&unk_18014CB00;
      if ( !a4 )
        v14 = (char *)&unk_18014CB50;
      v10 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)a5 + 48LL))(a5, &v14[v11], &v16);
      goto LABEL_28;
    }
    if ( ((_WORD)v16 != 19 || (_DWORD)v17) && (_WORD)v16 )
    {
      LOWORD(v16) = 19;
      if ( a4 )
      {
        pvar = 0LL;
        v20 = 0LL;
        v21 = 0LL;
        (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
          a5,
          &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
          &pvar);
        if ( (_WORD)pvar != 19 || (_DWORD)v20 != 1 || (unsigned int)v17 > 1 )
          LODWORD(v17) = v17 - 1;
        PropVariantClear(&pvar);
      }
      else
      {
        LODWORD(v17) = 0;
      }
      goto LABEL_25;
    }
  }
LABEL_28:
  PropVariantClear(&v16);
  v9 = a5;
LABEL_29:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v10;
}
