/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007E9E0
 * Callers:
 *     AudioSessionManagerGetExistingSession @ 0x18007AF90 (AudioSessionManagerGetExistingSession.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x18007BD80 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180013458 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800146FC (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180017800 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18005B588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18006FF00 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800768B4 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18007DFC4 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18007E3F0 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007F1C8 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionInstanceId::Initialize(CAudioSessionInstanceId *this, char *a2)
{
  CAudioSessionInstanceId *v3; // rsi
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rax
  bool v14; // r14
  __int64 v15; // rdx
  int *v17; // rbx
  unsigned __int16 *v18; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int16 *v19; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int16 *v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21[2]; // [rsp+38h] [rbp-50h] BYREF
  ATL::CAtlException *v22; // [rsp+48h] [rbp-40h] BYREF
  ATL::CAtlException *v23; // [rsp+50h] [rbp-38h] BYREF
  int v25; // [rsp+98h] [rbp+10h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+20h] BYREF

  v21[1] = -2LL;
  v3 = this;
  LODWORD(v26) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v20, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v19, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v18, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v27, (__int64)&ATL::g_strmgr);
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
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v27, a2, v5);
  }
  catch ( ATL::CAtlException *v22 )
  {
    v17 = (int *)v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _o__resetstkoflw();
    v25 = *v17;
    v4 = v25;
    if ( v25 < 0 )
      goto LABEL_22;
    v3 = this;
  }
  v25 = 0;
  v7 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v27,
         &v26,
         v6,
         &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v20, v7);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_10;
  v9 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v27,
         &v26,
         v8,
         &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v19, v9);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_10;
  v11 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v27,
          &v26,
          v10,
          &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v18, v11);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_10;
  v13 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v27,
          v21,
          v12,
          &v25);
  v14 = 1;
  LODWORD(v26) = 1;
  if ( !ATL::operator!=((__int64)v13, v15) )
    v14 = v25 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v21[0] - 24));
  if ( v14 )
  {
LABEL_10:
    v4 = -2147467259;
LABEL_22:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 781, v4);
    goto LABEL_23;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v20);
    CAudioIdentifier::UnescapeIdentifierString(&v19);
    CAudioIdentifier::UnescapeIdentifierString(&v18);
  }
  catch ( ATL::CAtlException *v23 )
  {
    v25 = *(_DWORD *)v23;
    v3 = this;
    v4 = v25;
  }
  if ( v4 < 0 )
    goto LABEL_22;
  v4 = CAudioEndpointId::Initialize(v3, v20);
  if ( v4 < 0 )
    goto LABEL_22;
  v4 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 8), (char *)v19);
  if ( v4 < 0 )
    goto LABEL_22;
  v4 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 56), (char *)v18);
  if ( v4 < 0 )
    goto LABEL_22;
  v4 = CAudioSessionInstanceId::CalculateStaticId(v3);
  if ( v4 < 0 )
    goto LABEL_22;
LABEL_23:
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v18 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v19 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v20 - 12));
  return (unsigned int)v4;
}
