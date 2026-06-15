/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800B768C
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800ABD70 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
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
  char *v8; // rdx
  char *v9; // rcx
  volatile signed __int32 *v10; // r14
  __int64 v11; // r15
  __int64 v12; // r8
  char *v13; // rdx
  char *v14; // rcx
  volatile signed __int32 *v15; // r14
  __int64 v16; // r15
  __int64 v17; // r8
  __int64 *v18; // rax
  bool v19; // r14
  WCHAR *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  int *v26; // rbx
  unsigned __int16 *v27; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int16 *v28; // [rsp+28h] [rbp-70h] BYREF
  char *v29; // [rsp+30h] [rbp-68h] BYREF
  __int64 v30; // [rsp+38h] [rbp-60h] BYREF
  __int64 v31; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32[2]; // [rsp+48h] [rbp-50h] BYREF
  ATL::CAtlException *v33; // [rsp+58h] [rbp-40h] BYREF
  ATL::CAtlException *v34; // [rsp+60h] [rbp-38h] BYREF
  int v37; // [rsp+B0h] [rbp+18h] BYREF
  int v38; // [rsp+B8h] [rbp+20h]

  v32[1] = -2LL;
  v4 = this;
  v38 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v28, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v27, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v29, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
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
    ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v29, a3, (unsigned int)v6);
  }
  catch ( ATL::CAtlException *v33 )
  {
    v26 = (int *)v33;
    if ( *(_DWORD *)v33 == -1073741571 )
      _o__resetstkoflw();
    v37 = *v26;
    v5 = v37;
    if ( v37 < 0 )
      goto LABEL_34;
    v4 = this;
  }
  v37 = 0;
  v8 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  (__int64 *)&v29,
                  &v30,
                  v7,
                  &v37);
  v9 = v8 - 24;
  v10 = (volatile signed __int32 *)(v28 - 12);
  if ( v8 - 24 != (char *)(v28 - 12) )
  {
    if ( *((int *)v10 + 4) >= 0 && *(_QWORD *)v9 == *(_QWORD *)v10 )
    {
      v11 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v9);
      if ( _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v10 + 8LL))(*(_QWORD *)v10, v10);
      v28 = (unsigned __int16 *)(v11 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v28, v8, *((unsigned int *)v8 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v30 - 24));
  if ( v37 == -1 )
    goto LABEL_28;
  v13 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   (__int64 *)&v29,
                   &v31,
                   v12,
                   &v37);
  v14 = v13 - 24;
  v15 = (volatile signed __int32 *)(v27 - 12);
  if ( v13 - 24 != (char *)(v27 - 12) )
  {
    if ( *((int *)v15 + 4) >= 0 && *(_QWORD *)v14 == *(_QWORD *)v15 )
    {
      v16 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v14);
      if ( _InterlockedExchangeAdd(v15 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v15 + 8LL))(*(_QWORD *)v15, v15);
      v27 = (unsigned __int16 *)(v16 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v27, v13, *((unsigned int *)v13 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v31 - 24));
  if ( v37 == -1 )
    goto LABEL_28;
  v18 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          (__int64 *)&v29,
          v32,
          v17,
          &v37);
  v19 = 1;
  v38 = 1;
  if ( !ATL::operator!=((__int64)v18, v20) )
    v19 = v37 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v32[0] - 24));
  if ( v19 )
  {
LABEL_28:
    v5 = -2147467259;
LABEL_34:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 858, v5);
    goto LABEL_35;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v28);
    CAudioIdentifier::UnescapeIdentifierString(&v27);
  }
  catch ( ATL::CAtlException *v34 )
  {
    v37 = *(_DWORD *)v34;
    v4 = this;
    v5 = v37;
  }
  if ( v5 < 0 )
    goto LABEL_34;
  v5 = CAudioEndpointId::Initialize(v4, a2, v21, v22);
  if ( v5 < 0 )
    goto LABEL_34;
  v5 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 8), (char *)v28);
  if ( v5 < 0 )
    goto LABEL_34;
  v5 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 56), (char *)v27);
  if ( v5 < 0 )
    goto LABEL_34;
  v5 = CAudioSessionInstanceId::CalculateStaticId(v4, v23, v24);
  if ( v5 < 0 )
    goto LABEL_34;
LABEL_35:
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 12));
  return (unsigned int)v5;
}
