/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18009802C
 * Callers:
 *     AudioSessionManagerGetExistingSession @ 0x180094980 (AudioSessionManagerGetExistingSession.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x180095360 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001FCA0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x1800237F0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180023C18 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x180089F30 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800902A4 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800973B4 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800978E0 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800985E0 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionInstanceId::Initialize(CAudioSessionInstanceId *this, char *a2)
{
  CAudioSessionInstanceId *v3; // r14
  __int64 v4; // r9
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r8
  char *v8; // rdx
  __int64 v9; // r9
  char *v10; // rcx
  volatile signed __int32 *v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r8
  char *v14; // rdx
  __int64 v15; // r9
  char *v16; // rcx
  volatile signed __int32 *v17; // rsi
  __int64 v18; // r15
  __int64 v19; // r8
  char *v20; // rdx
  __int64 v21; // r9
  char *v22; // rcx
  volatile signed __int32 *v23; // rsi
  __int64 v24; // r15
  __int64 v25; // r8
  __int64 *v26; // rax
  bool v27; // si
  WCHAR *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int *v32; // rbx
  unsigned __int16 *v33; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int16 *v34; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int16 *v35; // [rsp+30h] [rbp-68h] BYREF
  __int64 v36; // [rsp+38h] [rbp-60h] BYREF
  __int64 v37; // [rsp+40h] [rbp-58h] BYREF
  __int64 v38; // [rsp+48h] [rbp-50h] BYREF
  __int64 v39[2]; // [rsp+50h] [rbp-48h] BYREF
  ATL::CAtlException *v40; // [rsp+60h] [rbp-38h] BYREF
  ATL::CAtlException *v41; // [rsp+68h] [rbp-30h] BYREF
  int v43; // [rsp+A8h] [rbp+10h] BYREF
  int v44; // [rsp+B0h] [rbp+18h]
  __int64 v45; // [rsp+B8h] [rbp+20h] BYREF

  v39[1] = -2LL;
  v3 = this;
  v44 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v35,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v34,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v33,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v45,
    (volatile signed __int32 *)&ATL::g_strmgr);
  v5 = 0;
  try
  {
    if ( a2 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( *(_WORD *)&a2[2 * v6] );
    }
    else
    {
      LODWORD(v6) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v45, a2, v6, v4);
  }
  catch ( ATL::CAtlException *v40 )
  {
    v32 = (int *)v40;
    if ( *(_DWORD *)v40 == -1073741571 )
      _o__resetstkoflw();
    v43 = *v32;
    v5 = v43;
    if ( v43 < 0 )
      goto LABEL_43;
    v3 = this;
  }
  v43 = 0;
  v8 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  &v45,
                  &v36,
                  v7,
                  &v43);
  v10 = v8 - 24;
  v11 = (volatile signed __int32 *)(v35 - 12);
  if ( v8 - 24 != (char *)(v35 - 12) )
  {
    if ( *((int *)v11 + 4) >= 0 && *(_QWORD *)v10 == *(_QWORD *)v11 )
    {
      v12 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v10);
      if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11, v11);
      v35 = (unsigned __int16 *)(v12 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&v35, v8, *((_DWORD *)v8 - 4), v9);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v36 - 24));
  if ( v43 == -1 )
    goto LABEL_17;
  v14 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v45,
                   &v37,
                   v13,
                   &v43);
  v16 = v14 - 24;
  v17 = (volatile signed __int32 *)(v34 - 12);
  if ( v14 - 24 != (char *)(v34 - 12) )
  {
    if ( *((int *)v17 + 4) >= 0 && *(_QWORD *)v16 == *(_QWORD *)v17 )
    {
      v18 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v16);
      if ( _InterlockedExchangeAdd(v17 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v17 + 8LL))(*(_QWORD *)v17, v17);
      v34 = (unsigned __int16 *)(v18 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&v34, v14, *((_DWORD *)v14 - 4), v15);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v37 - 24));
  if ( v43 == -1 )
    goto LABEL_17;
  v20 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v45,
                   &v38,
                   v19,
                   &v43);
  v22 = v20 - 24;
  v23 = (volatile signed __int32 *)(v33 - 12);
  if ( v20 - 24 != (char *)(v33 - 12) )
  {
    if ( *((int *)v23 + 4) >= 0 && *(_QWORD *)v22 == *(_QWORD *)v23 )
    {
      v24 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v22);
      if ( _InterlockedExchangeAdd(v23 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v23 + 8LL))(*(_QWORD *)v23, v23);
      v33 = (unsigned __int16 *)(v24 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&v33, v20, *((_DWORD *)v20 - 4), v21);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v38 - 24));
  if ( v43 == -1 )
    goto LABEL_17;
  v26 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v45,
          v39,
          v25,
          &v43);
  v27 = 1;
  v44 = 1;
  if ( !ATL::operator!=((__int64)v26, v28) )
    v27 = v43 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v39[0] - 24));
  if ( v27 )
  {
LABEL_17:
    v5 = -2147467259;
LABEL_43:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 777, v5);
    goto LABEL_44;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v35);
    CAudioIdentifier::UnescapeIdentifierString(&v34);
    CAudioIdentifier::UnescapeIdentifierString(&v33);
  }
  catch ( ATL::CAtlException *v41 )
  {
    v43 = *(_DWORD *)v41;
    v3 = this;
    v5 = v43;
  }
  if ( v5 < 0 )
    goto LABEL_43;
  v5 = CAudioEndpointId::Initialize(v3, v35, v29, v30);
  if ( v5 < 0 )
    goto LABEL_43;
  v5 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 8), (char *)v34);
  if ( v5 < 0 )
    goto LABEL_43;
  v5 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 56), (char *)v33);
  if ( v5 < 0 )
    goto LABEL_43;
  v5 = CAudioSessionInstanceId::CalculateStaticId(v3);
  if ( v5 < 0 )
    goto LABEL_43;
LABEL_44:
  ATL::CStringData::Release((ATL::CStringData *)(v45 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v33 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v34 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 12));
  return (unsigned int)v5;
}
