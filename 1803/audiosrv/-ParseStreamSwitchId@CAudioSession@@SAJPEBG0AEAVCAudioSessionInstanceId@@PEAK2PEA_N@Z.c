/*
 * XREFs of ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800ABD70
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800B45B0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A978 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180030C18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180030CF0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x1800A8510 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800ADB58 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800B768C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800B8014 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
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
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r8
  char *v10; // rdx
  char *v11; // rcx
  volatile signed __int32 *v12; // r14
  __int64 v13; // r15
  __int64 v14; // r8
  char *v15; // rdx
  char *v16; // rcx
  volatile signed __int32 *v17; // r14
  __int64 v18; // r15
  __int64 v19; // r8
  char *v20; // rdx
  char *v21; // rcx
  volatile signed __int32 *v22; // r14
  __int64 v23; // r15
  __int64 v24; // r8
  char *v25; // rdx
  char *v26; // rcx
  volatile signed __int32 *v27; // r14
  __int64 v28; // r15
  __int64 v29; // r8
  __int64 v30; // rax
  bool v31; // r14
  WCHAR *v32; // rdx
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  int *v37; // rbx
  char *v38; // [rsp+20h] [rbp-98h] BYREF
  wchar_t *v39; // [rsp+28h] [rbp-90h] BYREF
  wchar_t *v40; // [rsp+30h] [rbp-88h] BYREF
  wchar_t *String; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int16 *v42; // [rsp+40h] [rbp-78h] BYREF
  int v43; // [rsp+48h] [rbp-70h]
  __int64 v44; // [rsp+50h] [rbp-68h] BYREF
  __int64 v45; // [rsp+58h] [rbp-60h] BYREF
  __int64 v46; // [rsp+60h] [rbp-58h] BYREF
  __int64 v47; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v48[2]; // [rsp+70h] [rbp-48h] BYREF
  ATL::CAtlException *v49; // [rsp+80h] [rbp-38h] BYREF
  ATL::CAtlException *v50; // [rsp+88h] [rbp-30h] BYREF
  int v52; // [rsp+C8h] [rbp+10h] BYREF
  CAudioSessionInstanceId *v53; // [rsp+D0h] [rbp+18h]
  unsigned int *v54; // [rsp+D8h] [rbp+20h]

  v54 = a4;
  v53 = a3;
  v48[1] = -2LL;
  v43 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v38, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v42, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&String, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v40, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v39, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v7 = 0;
  try
  {
    if ( a2 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)&a2[2 * v8] );
    }
    else
    {
      LODWORD(v8) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v38, a2, (unsigned int)v8);
  }
  catch ( ATL::CAtlException *v49 )
  {
    v37 = (int *)v49;
    if ( *(_DWORD *)v49 == -1073741571 )
      _o__resetstkoflw();
    v52 = *v37;
    v7 = v52;
    if ( v52 < 0 )
      goto LABEL_44;
  }
  v52 = 0;
  v10 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v38,
                    &v44,
                    v9,
                    &v52);
  v11 = v10 - 24;
  v12 = (volatile signed __int32 *)(v42 - 12);
  if ( v10 - 24 != (char *)(v42 - 12) )
  {
    if ( *((int *)v12 + 4) >= 0 && *(_QWORD *)v11 == *(_QWORD *)v12 )
    {
      v13 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v11);
      if ( _InterlockedExchangeAdd(v12 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v12 + 8LL))(*(_QWORD *)v12, v12);
      v42 = (unsigned __int16 *)(v13 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v42, v10, *((unsigned int *)v10 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v44 - 24));
  if ( v52 == -1 )
    goto LABEL_43;
  v15 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v38,
                    &v45,
                    v14,
                    &v52);
  v16 = v15 - 24;
  v17 = (volatile signed __int32 *)(String - 12);
  if ( v15 - 24 != (char *)(String - 12) )
  {
    if ( *((int *)v17 + 4) >= 0 && *(_QWORD *)v16 == *(_QWORD *)v17 )
    {
      v18 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v16);
      if ( _InterlockedExchangeAdd(v17 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v17 + 8LL))(*(_QWORD *)v17, v17);
      String = (wchar_t *)(v18 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&String, v15, *((unsigned int *)v15 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v45 - 24));
  if ( v52 == -1 )
    goto LABEL_43;
  v20 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v38,
                    &v46,
                    v19,
                    &v52);
  v21 = v20 - 24;
  v22 = (volatile signed __int32 *)(v40 - 12);
  if ( v20 - 24 != (char *)(v40 - 12) )
  {
    if ( *((int *)v22 + 4) >= 0 && *(_QWORD *)v21 == *(_QWORD *)v22 )
    {
      v23 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v21);
      if ( _InterlockedExchangeAdd(v22 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v22 + 8LL))(*(_QWORD *)v22, v22);
      v40 = (wchar_t *)(v23 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v40, v20, *((unsigned int *)v20 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v46 - 24));
  if ( v52 == -1 )
    goto LABEL_43;
  v25 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v38,
                    &v47,
                    v24,
                    &v52);
  v26 = v25 - 24;
  v27 = (volatile signed __int32 *)(v39 - 12);
  if ( v25 - 24 != (char *)(v39 - 12) )
  {
    if ( *((int *)v27 + 4) >= 0 && *(_QWORD *)v26 == *(_QWORD *)v27 )
    {
      v28 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v26);
      if ( _InterlockedExchangeAdd(v27 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v27 + 8LL))(*(_QWORD *)v27, v27);
      v39 = (wchar_t *)(v28 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v39, v25, *((unsigned int *)v25 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v47 - 24));
  if ( v52 == -1 )
    goto LABEL_43;
  v30 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v38,
          v48,
          v29,
          &v52);
  v31 = 1;
  v43 = 1;
  if ( !ATL::operator!=(v30, v32) )
    v31 = v52 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v48[0] - 24LL));
  if ( v31 )
  {
LABEL_43:
    v7 = -2147467259;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v42);
      CAudioIdentifier::UnescapeIdentifierString(&String);
      CAudioIdentifier::UnescapeIdentifierString(&v40);
      CAudioIdentifier::UnescapeIdentifierString(&v39);
    }
    catch ( ATL::CAtlException *v50 )
    {
      v52 = *(_DWORD *)v50;
      v7 = v52;
    }
    if ( v7 >= 0 )
    {
      v7 = CAudioSessionInstanceId::Initialize(v53, a1, v42);
      if ( v7 >= 0 )
      {
        v34 = wcstoul(String, 0LL, 10);
        *v54 = v34;
        v35 = wcstoul(v40, 0LL, 10);
        *a5 = v35;
        v36 = wcstoul(v39, 0LL, 10);
        *a6 = v36 != 0;
        goto LABEL_45;
      }
    }
  }
LABEL_44:
  AudSrvTraceLoggingErrorHelper("CAudioSession::ParseStreamSwitchId", 630, v7);
LABEL_45:
  ATL::CStringData::Release((ATL::CStringData *)(v39 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v40 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(String - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v42 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v38 - 24));
  return (unsigned int)v7;
}
