/*
 * XREFs of ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800742F4
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x18007B170 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800146FC (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18005B588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18006FF00 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800768B4 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x18007E6CC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007F1C8 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
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
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  bool v19; // bl
  __int64 v20; // rdx
  wchar_t *v21; // rbx
  unsigned int v22; // eax
  wchar_t *v23; // rdi
  unsigned int v24; // eax
  wchar_t *v25; // rsi
  unsigned int v26; // eax
  int *v28; // rbx
  __int64 v29; // [rsp+20h] [rbp-78h] BYREF
  __int64 v30; // [rsp+28h] [rbp-70h] BYREF
  wchar_t *String; // [rsp+30h] [rbp-68h] BYREF
  wchar_t *v32; // [rsp+38h] [rbp-60h] BYREF
  wchar_t *v33; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int16 *v34; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-48h] BYREF
  ATL::CAtlException *v36; // [rsp+60h] [rbp-38h] BYREF
  ATL::CAtlException *v37; // [rsp+68h] [rbp-30h] BYREF
  int v39; // [rsp+A8h] [rbp+10h] BYREF
  CAudioSessionInstanceId *v40; // [rsp+B0h] [rbp+18h]
  unsigned int *v41; // [rsp+B8h] [rbp+20h]

  v41 = a4;
  v40 = a3;
  v35[1] = -2LL;
  LODWORD(v29) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v30, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v34, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&String, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v32, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v33, (__int64)&ATL::g_strmgr);
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
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v30, a2, v8);
  }
  catch ( ATL::CAtlException *v36 )
  {
    v28 = (int *)v36;
    if ( *(_DWORD *)v36 == -1073741571 )
      _o__resetstkoflw();
    v39 = *v28;
    v7 = v39;
    if ( v39 < 0 )
      goto LABEL_20;
  }
  v39 = 0;
  v10 = (_QWORD *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v30,
                    &v29,
                    v9,
                    &v39);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v34, v10);
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 24));
  if ( v39 == -1 )
    goto LABEL_9;
  v12 = (_QWORD *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v30,
                    &v29,
                    v11,
                    &v39);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&String, v12);
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 24));
  if ( v39 == -1 )
    goto LABEL_9;
  v14 = (_QWORD *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v30,
                    &v29,
                    v13,
                    &v39);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v32, v14);
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 24));
  if ( v39 == -1 )
    goto LABEL_9;
  v16 = (_QWORD *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v30,
                    &v29,
                    v15,
                    &v39);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v33, v16);
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 24));
  if ( v39 == -1 )
    goto LABEL_9;
  v18 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v30,
          v35,
          v17,
          &v39);
  v19 = 1;
  LODWORD(v29) = 1;
  if ( !ATL::operator!=(v18, v20) )
    v19 = v39 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v35[0] - 24LL));
  if ( v19 )
  {
LABEL_9:
    v7 = -2147467259;
LABEL_20:
    AudSrvTraceLoggingErrorHelper("CAudioSession::ParseStreamSwitchId", 648, v7);
    v21 = String;
    v23 = v32;
    v25 = v33;
    goto LABEL_21;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v34);
    CAudioIdentifier::UnescapeIdentifierString(&String);
    CAudioIdentifier::UnescapeIdentifierString(&v32);
    CAudioIdentifier::UnescapeIdentifierString(&v33);
  }
  catch ( ATL::CAtlException *v37 )
  {
    v39 = *(_DWORD *)v37;
    v7 = v39;
  }
  if ( v7 < 0 )
    goto LABEL_20;
  v7 = CAudioSessionInstanceId::Initialize(v40, a1, v34);
  if ( v7 < 0 )
    goto LABEL_20;
  v21 = String;
  v22 = wcstoul(String, 0LL, 10);
  *v41 = v22;
  v23 = v32;
  v24 = wcstoul(v32, 0LL, 10);
  *a5 = v24;
  v25 = v33;
  v26 = wcstoul(v33, 0LL, 10);
  *a6 = v26 != 0;
LABEL_21:
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v23 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v21 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v34 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v30 - 24));
  return (unsigned int)v7;
}
