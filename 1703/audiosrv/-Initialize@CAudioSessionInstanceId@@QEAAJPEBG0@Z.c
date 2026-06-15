/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180097C70
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18008E3A4 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
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

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        const unsigned __int16 *a2,
        char *a3)
{
  CAudioSessionInstanceId *v4; // rsi
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r8
  char *v9; // rdx
  __int64 v10; // r9
  char *v11; // rcx
  volatile signed __int32 *v12; // r14
  __int64 v13; // r15
  __int64 v14; // r8
  char *v15; // rdx
  __int64 v16; // r9
  char *v17; // rcx
  volatile signed __int32 *v18; // r14
  __int64 v19; // r15
  __int64 v20; // r8
  __int64 *v21; // rax
  bool v22; // r14
  WCHAR *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int *v27; // rbx
  unsigned __int16 *v28; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int16 *v29; // [rsp+28h] [rbp-70h] BYREF
  __int64 v30; // [rsp+30h] [rbp-68h] BYREF
  __int64 v31; // [rsp+38h] [rbp-60h] BYREF
  __int64 v32; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33[2]; // [rsp+48h] [rbp-50h] BYREF
  ATL::CAtlException *v34; // [rsp+58h] [rbp-40h] BYREF
  ATL::CAtlException *v35; // [rsp+60h] [rbp-38h] BYREF
  int v38; // [rsp+B0h] [rbp+18h] BYREF
  int v39; // [rsp+B8h] [rbp+20h]

  v33[1] = -2LL;
  v4 = this;
  v39 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v29,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v28,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v30,
    (volatile signed __int32 *)&ATL::g_strmgr);
  v6 = 0;
  try
  {
    if ( a3 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)&a3[2 * v7] );
    }
    else
    {
      LODWORD(v7) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v30, a3, v7, v5);
  }
  catch ( ATL::CAtlException *v34 )
  {
    v27 = (int *)v34;
    if ( *(_DWORD *)v34 == -1073741571 )
      _o__resetstkoflw();
    v38 = *v27;
    v6 = v38;
    if ( v38 < 0 )
      goto LABEL_34;
    v4 = this;
  }
  v38 = 0;
  v9 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  &v30,
                  &v31,
                  v8,
                  &v38);
  v11 = v9 - 24;
  v12 = (volatile signed __int32 *)(v29 - 12);
  if ( v9 - 24 != (char *)(v29 - 12) )
  {
    if ( *((int *)v12 + 4) >= 0 && *(_QWORD *)v11 == *(_QWORD *)v12 )
    {
      v13 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v11);
      if ( _InterlockedExchangeAdd(v12 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v12 + 8LL))(*(_QWORD *)v12, v12);
      v29 = (unsigned __int16 *)(v13 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&v29, v9, *((_DWORD *)v9 - 4), v10);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v31 - 24));
  if ( v38 == -1 )
    goto LABEL_28;
  v15 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v30,
                   &v32,
                   v14,
                   &v38);
  v17 = v15 - 24;
  v18 = (volatile signed __int32 *)(v28 - 12);
  if ( v15 - 24 != (char *)(v28 - 12) )
  {
    if ( *((int *)v18 + 4) >= 0 && *(_QWORD *)v17 == *(_QWORD *)v18 )
    {
      v19 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v17);
      if ( _InterlockedExchangeAdd(v18 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v18 + 8LL))(*(_QWORD *)v18, v18);
      v28 = (unsigned __int16 *)(v19 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&v28, v15, *((_DWORD *)v15 - 4), v16);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v32 - 24));
  if ( v38 == -1 )
    goto LABEL_28;
  v21 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v30,
          v33,
          v20,
          &v38);
  v22 = 1;
  v39 = 1;
  if ( !ATL::operator!=((__int64)v21, v23) )
    v22 = v38 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v33[0] - 24));
  if ( v22 )
  {
LABEL_28:
    v6 = -2147467259;
LABEL_34:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 854, v6);
    goto LABEL_35;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v29);
    CAudioIdentifier::UnescapeIdentifierString(&v28);
  }
  catch ( ATL::CAtlException *v35 )
  {
    v38 = *(_DWORD *)v35;
    v4 = this;
    v6 = v38;
  }
  if ( v6 < 0 )
    goto LABEL_34;
  v6 = CAudioEndpointId::Initialize(v4, a2, v24, v25);
  if ( v6 < 0 )
    goto LABEL_34;
  v6 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 8), (char *)v29);
  if ( v6 < 0 )
    goto LABEL_34;
  v6 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 56), (char *)v28);
  if ( v6 < 0 )
    goto LABEL_34;
  v6 = CAudioSessionInstanceId::CalculateStaticId(v4);
  if ( v6 < 0 )
    goto LABEL_34;
LABEL_35:
  ATL::CStringData::Release((ATL::CStringData *)(v30 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 12));
  return (unsigned int)v6;
}
