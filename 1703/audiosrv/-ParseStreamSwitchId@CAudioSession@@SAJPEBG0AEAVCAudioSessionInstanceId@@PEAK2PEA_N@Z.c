/*
 * XREFs of ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18008E3A4
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180094AD0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180023C18 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x180089F30 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800902A4 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180097C70 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800985E0 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioSession::ParseStreamSwitchId(
        const unsigned __int16 *a1,
        char *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6)
{
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r8
  char *v11; // rdx
  __int64 v12; // r9
  char *v13; // rcx
  volatile signed __int32 *v14; // r14
  __int64 v15; // r15
  __int64 v16; // r8
  char *v17; // rdx
  __int64 v18; // r9
  char *v19; // rcx
  volatile signed __int32 *v20; // r14
  __int64 v21; // r15
  __int64 v22; // r8
  char *v23; // rdx
  __int64 v24; // r9
  char *v25; // rcx
  volatile signed __int32 *v26; // r14
  __int64 v27; // r15
  __int64 v28; // r8
  char *v29; // rdx
  __int64 v30; // r9
  char *v31; // rcx
  volatile signed __int32 *v32; // r14
  __int64 v33; // r15
  __int64 v34; // r8
  __int64 v35; // rax
  bool v36; // r14
  WCHAR *v37; // rdx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  int *v42; // rbx
  __int64 v43; // [rsp+20h] [rbp-98h] BYREF
  wchar_t *v44; // [rsp+28h] [rbp-90h] BYREF
  wchar_t *v45; // [rsp+30h] [rbp-88h] BYREF
  wchar_t *String; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int16 *v47; // [rsp+40h] [rbp-78h] BYREF
  int v48; // [rsp+48h] [rbp-70h]
  __int64 v49; // [rsp+50h] [rbp-68h] BYREF
  __int64 v50; // [rsp+58h] [rbp-60h] BYREF
  __int64 v51; // [rsp+60h] [rbp-58h] BYREF
  __int64 v52; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v53[2]; // [rsp+70h] [rbp-48h] BYREF
  ATL::CAtlException *v54; // [rsp+80h] [rbp-38h] BYREF
  ATL::CAtlException *v55; // [rsp+88h] [rbp-30h] BYREF
  int v57; // [rsp+C8h] [rbp+10h] BYREF
  CAudioSessionInstanceId *v58; // [rsp+D0h] [rbp+18h]
  unsigned int *v59; // [rsp+D8h] [rbp+20h]

  v59 = a4;
  v58 = a3;
  v53[1] = -2LL;
  v48 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v43,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v47,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &String,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v45,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v44,
    (volatile signed __int32 *)&ATL::g_strmgr);
  v8 = 0;
  try
  {
    if ( a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)&a2[2 * v9] );
    }
    else
    {
      LODWORD(v9) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v43, a2, v9, v7);
  }
  catch ( ATL::CAtlException *v54 )
  {
    v42 = (int *)v54;
    if ( *(_DWORD *)v54 == -1073741571 )
      _o__resetstkoflw();
    v57 = *v42;
    v8 = v57;
    if ( v57 < 0 )
      goto LABEL_47;
  }
  v57 = 0;
  v11 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v43,
                    &v49,
                    v10,
                    &v57);
  v13 = v11 - 24;
  v14 = (volatile signed __int32 *)(v47 - 12);
  if ( v11 - 24 != (char *)(v47 - 12) )
  {
    if ( *((int *)v14 + 4) >= 0 && *(_QWORD *)v13 == *(_QWORD *)v14 )
    {
      v15 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v13);
      if ( _InterlockedExchangeAdd(v14 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v14 + 8LL))(*(_QWORD *)v14, v14);
      v47 = (unsigned __int16 *)(v15 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&v47, v11, *((_DWORD *)v11 - 4), v12);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v49 - 24));
  if ( v57 == -1 )
    goto LABEL_43;
  v17 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v43,
                    &v50,
                    v16,
                    &v57);
  v19 = v17 - 24;
  v20 = (volatile signed __int32 *)(String - 12);
  if ( v17 - 24 != (char *)(String - 12) )
  {
    if ( *((int *)v20 + 4) >= 0 && *(_QWORD *)v19 == *(_QWORD *)v20 )
    {
      v21 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v19);
      if ( _InterlockedExchangeAdd(v20 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v20 + 8LL))(*(_QWORD *)v20, v20);
      String = (wchar_t *)(v21 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&String, v17, *((_DWORD *)v17 - 4), v18);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v50 - 24));
  if ( v57 == -1 )
    goto LABEL_43;
  v23 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v43,
                    &v51,
                    v22,
                    &v57);
  v25 = v23 - 24;
  v26 = (volatile signed __int32 *)(v45 - 12);
  if ( v23 - 24 != (char *)(v45 - 12) )
  {
    if ( *((int *)v26 + 4) >= 0 && *(_QWORD *)v25 == *(_QWORD *)v26 )
    {
      v27 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v25);
      if ( _InterlockedExchangeAdd(v26 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v26 + 8LL))(*(_QWORD *)v26, v26);
      v45 = (wchar_t *)(v27 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&v45, v23, *((_DWORD *)v23 - 4), v24);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v51 - 24));
  if ( v57 == -1 )
    goto LABEL_43;
  v29 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v43,
                    &v52,
                    v28,
                    &v57);
  v31 = v29 - 24;
  v32 = (volatile signed __int32 *)(v44 - 12);
  if ( v29 - 24 != (char *)(v44 - 12) )
  {
    if ( *((int *)v32 + 4) >= 0 && *(_QWORD *)v31 == *(_QWORD *)v32 )
    {
      v33 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v31);
      if ( _InterlockedExchangeAdd(v32 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v32 + 8LL))(*(_QWORD *)v32, v32);
      v44 = (wchar_t *)(v33 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&v44, v29, *((_DWORD *)v29 - 4), v30);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v52 - 24));
  if ( v57 == -1 )
    goto LABEL_43;
  v35 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v43,
          v53,
          v34,
          &v57);
  v36 = 1;
  v48 = 1;
  if ( !ATL::operator!=(v35, v37) )
    v36 = v57 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v53[0] - 24LL));
  if ( v36 )
  {
LABEL_43:
    v8 = -2147467259;
LABEL_47:
    AudSrvTraceLoggingErrorHelper("CAudioSession::ParseStreamSwitchId", 685, v8);
    goto LABEL_48;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v47);
    CAudioIdentifier::UnescapeIdentifierString(&String);
    CAudioIdentifier::UnescapeIdentifierString(&v45);
    CAudioIdentifier::UnescapeIdentifierString(&v44);
  }
  catch ( ATL::CAtlException *v55 )
  {
    v57 = *(_DWORD *)v55;
    v8 = v57;
  }
  if ( v8 < 0 )
    goto LABEL_47;
  v8 = CAudioSessionInstanceId::Initialize(v58, a1, v47);
  if ( v8 < 0 )
    goto LABEL_47;
  v38 = wcstoul(String, 0LL, 10);
  *v59 = v38;
  v39 = wcstoul(v45, 0LL, 10);
  *a5 = v39;
  v40 = wcstoul(v44, 0LL, 10);
  *a6 = v40 != 0;
LABEL_48:
  ATL::CStringData::Release((ATL::CStringData *)(v44 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v45 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(String - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v47 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v43 - 24));
  return (unsigned int)v8;
}
