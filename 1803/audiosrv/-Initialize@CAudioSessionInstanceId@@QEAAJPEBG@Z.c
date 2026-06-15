/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800B7A50
 * Callers:
 *     AudioSessionManagerGetExistingSession @ 0x1800B4440 (AudioSessionManagerGetExistingSession.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x1800B4D20 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A978 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180016560 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180030C18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180030CF0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180030E30 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x1800A8510 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800ADB58 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800B6DB8 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800B72F4 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800B8014 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionInstanceId::Initialize(CAudioSessionInstanceId *this, char *a2)
{
  CAudioSessionInstanceId *v3; // r14
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r8
  char *v7; // rdx
  char *v8; // rcx
  volatile signed __int32 *v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r8
  char *v12; // rdx
  char *v13; // rcx
  volatile signed __int32 *v14; // rsi
  __int64 v15; // r15
  __int64 v16; // r8
  char *v17; // rdx
  char *v18; // rcx
  volatile signed __int32 *v19; // rsi
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 *v22; // rax
  bool v23; // si
  WCHAR *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  int *v30; // rbx
  unsigned __int16 *v31; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int16 *v32; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int16 *v33; // [rsp+30h] [rbp-68h] BYREF
  __int64 v34; // [rsp+38h] [rbp-60h] BYREF
  __int64 v35; // [rsp+40h] [rbp-58h] BYREF
  __int64 v36; // [rsp+48h] [rbp-50h] BYREF
  __int64 v37[2]; // [rsp+50h] [rbp-48h] BYREF
  ATL::CAtlException *v38; // [rsp+60h] [rbp-38h] BYREF
  ATL::CAtlException *v39; // [rsp+68h] [rbp-30h] BYREF
  int v41; // [rsp+A8h] [rbp+10h] BYREF
  int v42; // [rsp+B0h] [rbp+18h]
  char *v43; // [rsp+B8h] [rbp+20h] BYREF

  v37[1] = -2LL;
  v3 = this;
  v42 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v33, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v32, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v31, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v43, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v4 = 0;
  try
  {
    if ( a2 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)&a2[2 * v5] );
    }
    else
    {
      LODWORD(v5) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v43, a2, (unsigned int)v5);
  }
  catch ( ATL::CAtlException *v38 )
  {
    v30 = (int *)v38;
    if ( *(_DWORD *)v38 == -1073741571 )
      _o__resetstkoflw();
    v41 = *v30;
    v4 = v41;
    if ( v41 < 0 )
      goto LABEL_43;
    v3 = this;
  }
  v41 = 0;
  v7 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  (__int64 *)&v43,
                  &v34,
                  v6,
                  &v41);
  v8 = v7 - 24;
  v9 = (volatile signed __int32 *)(v33 - 12);
  if ( v7 - 24 != (char *)(v33 - 12) )
  {
    if ( *((int *)v9 + 4) >= 0 && *(_QWORD *)v8 == *(_QWORD *)v9 )
    {
      v10 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v8);
      if ( _InterlockedExchangeAdd(v9 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v9 + 8LL))(*(_QWORD *)v9, v9);
      v33 = (unsigned __int16 *)(v10 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v33, v7, *((unsigned int *)v7 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v34 - 24));
  if ( v41 == -1 )
    goto LABEL_17;
  v12 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   (__int64 *)&v43,
                   &v35,
                   v11,
                   &v41);
  v13 = v12 - 24;
  v14 = (volatile signed __int32 *)(v32 - 12);
  if ( v12 - 24 != (char *)(v32 - 12) )
  {
    if ( *((int *)v14 + 4) >= 0 && *(_QWORD *)v13 == *(_QWORD *)v14 )
    {
      v15 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v13);
      if ( _InterlockedExchangeAdd(v14 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v14 + 8LL))(*(_QWORD *)v14, v14);
      v32 = (unsigned __int16 *)(v15 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v32, v12, *((unsigned int *)v12 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v41 == -1 )
    goto LABEL_17;
  v17 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   (__int64 *)&v43,
                   &v36,
                   v16,
                   &v41);
  v18 = v17 - 24;
  v19 = (volatile signed __int32 *)(v31 - 12);
  if ( v17 - 24 != (char *)(v31 - 12) )
  {
    if ( *((int *)v19 + 4) >= 0 && *(_QWORD *)v18 == *(_QWORD *)v19 )
    {
      v20 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v18);
      if ( _InterlockedExchangeAdd(v19 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v19 + 8LL))(*(_QWORD *)v19, v19);
      v31 = (unsigned __int16 *)(v20 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v31, v17, *((unsigned int *)v17 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v36 - 24));
  if ( v41 == -1 )
    goto LABEL_17;
  v22 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          (__int64 *)&v43,
          v37,
          v21,
          &v41);
  v23 = 1;
  v42 = 1;
  if ( !ATL::operator!=((__int64)v22, v24) )
    v23 = v41 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v37[0] - 24));
  if ( v23 )
  {
LABEL_17:
    v4 = -2147467259;
LABEL_43:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 781, v4);
    goto LABEL_44;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v33);
    CAudioIdentifier::UnescapeIdentifierString(&v32);
    CAudioIdentifier::UnescapeIdentifierString(&v31);
  }
  catch ( ATL::CAtlException *v39 )
  {
    v41 = *(_DWORD *)v39;
    v3 = this;
    v4 = v41;
  }
  if ( v4 < 0 )
    goto LABEL_43;
  v4 = CAudioEndpointId::Initialize(v3, v33, v25, v26);
  if ( v4 < 0 )
    goto LABEL_43;
  v4 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 8), (char *)v32);
  if ( v4 < 0 )
    goto LABEL_43;
  v4 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 56), (char *)v31);
  if ( v4 < 0 )
    goto LABEL_43;
  v4 = CAudioSessionInstanceId::CalculateStaticId(v3, v27, v28);
  if ( v4 < 0 )
    goto LABEL_43;
LABEL_44:
  ATL::CStringData::Release((ATL::CStringData *)(v43 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v31 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v32 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v33 - 12));
  return (unsigned int)v4;
}
