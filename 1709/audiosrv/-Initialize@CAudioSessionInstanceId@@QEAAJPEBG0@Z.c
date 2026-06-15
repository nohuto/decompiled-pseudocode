/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x18007E6CC
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800742F4 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
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

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        const unsigned __int16 *a2,
        char *a3)
{
  CAudioSessionInstanceId *v4; // rsi
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rax
  bool v13; // r14
  __int64 v14; // rdx
  int *v16; // rbx
  __int64 v17; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int16 *v18; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int16 *v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20[2]; // [rsp+38h] [rbp-50h] BYREF
  ATL::CAtlException *v21; // [rsp+48h] [rbp-40h] BYREF
  ATL::CAtlException *v22; // [rsp+50h] [rbp-38h] BYREF
  int v25; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+20h] BYREF

  v20[1] = -2LL;
  v4 = this;
  LODWORD(v26) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v19, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v18, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v17, (__int64)&ATL::g_strmgr);
  v5 = 0;
  try
  {
    if ( a3 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( *(_WORD *)&a3[2 * v6] );
    }
    else
    {
      LODWORD(v6) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v17, a3, v6);
  }
  catch ( ATL::CAtlException *v21 )
  {
    v16 = (int *)v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    v25 = *v16;
    v5 = v25;
    if ( v25 < 0 )
      goto LABEL_20;
    v4 = this;
  }
  v25 = 0;
  v8 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v17,
         &v26,
         v7,
         &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v19, v8);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_14;
  v10 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v17,
          &v26,
          v9,
          &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v18, v10);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_14;
  v12 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v17,
          v20,
          v11,
          &v25);
  v13 = 1;
  LODWORD(v26) = 1;
  if ( !ATL::operator!=((__int64)v12, v14) )
    v13 = v25 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v20[0] - 24));
  if ( v13 )
  {
LABEL_14:
    v5 = -2147467259;
LABEL_20:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 858, v5);
    goto LABEL_21;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v19);
    CAudioIdentifier::UnescapeIdentifierString(&v18);
  }
  catch ( ATL::CAtlException *v22 )
  {
    v25 = *(_DWORD *)v22;
    v4 = this;
    v5 = v25;
  }
  if ( v5 < 0 )
    goto LABEL_20;
  v5 = CAudioEndpointId::Initialize(v4, a2);
  if ( v5 < 0 )
    goto LABEL_20;
  v5 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 8), (char *)v19);
  if ( v5 < 0 )
    goto LABEL_20;
  v5 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 56), (char *)v18);
  if ( v5 < 0 )
    goto LABEL_20;
  v5 = CAudioSessionInstanceId::CalculateStaticId(v4);
  if ( v5 < 0 )
    goto LABEL_20;
LABEL_21:
  ATL::CStringData::Release((ATL::CStringData *)(v17 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v18 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v19 - 12));
  return (unsigned int)v5;
}
