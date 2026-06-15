/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800973B4
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180097C70 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18009802C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001F000 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180023C18 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800902A4 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x180097190 (--$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x180097248 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x180097394 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800985E0 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppAudioSessionId::Initialize(CAppAudioSessionId *this, char *a2)
{
  CAppAudioSessionId *v3; // rsi
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // ebx
  char *v8; // rdx
  __int64 v9; // r9
  char *v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r8
  char *v14; // rdx
  __int64 v15; // r9
  char *v16; // rcx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // r14
  __int64 v19; // r8
  __int64 *v20; // rax
  unsigned __int16 *v21; // rcx
  char v22; // bl
  __int64 v23; // rbx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r9
  size_t v27; // r8
  __int64 v28; // r9
  unsigned __int16 *v29; // rcx
  volatile signed __int32 *v30; // rbx
  __int64 v31; // r14
  int *v33; // rbx
  int *v34; // rbx
  int *v35; // rbx
  int v36; // [rsp+20h] [rbp-1A8h] BYREF
  int v37; // [rsp+24h] [rbp-1A4h]
  unsigned __int16 *v38; // [rsp+28h] [rbp-1A0h] BYREF
  void *Src; // [rsp+30h] [rbp-198h] BYREF
  __int64 v40; // [rsp+38h] [rbp-190h] BYREF
  int v41; // [rsp+40h] [rbp-188h]
  CAppAudioSessionId *v42; // [rsp+48h] [rbp-180h]
  __int64 v43; // [rsp+50h] [rbp-178h] BYREF
  __int64 v44; // [rsp+58h] [rbp-170h] BYREF
  __int64 v45[2]; // [rsp+60h] [rbp-168h] BYREF
  ATL::CAtlException *v46; // [rsp+70h] [rbp-158h] BYREF
  ATL::CAtlException *v47; // [rsp+78h] [rbp-150h] BYREF
  ATL::CAtlException *v48; // [rsp+80h] [rbp-148h] BYREF
  LPCOLESTR lpsz; // [rsp+90h] [rbp-138h] BYREF
  _BYTE v50[264]; // [rsp+98h] [rbp-130h] BYREF

  v45[1] = -2LL;
  v3 = this;
  v42 = this;
  v41 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v38,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &Src,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v40,
    (volatile signed __int32 *)&ATL::g_strmgr);
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
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v40, a2, v5, v4);
  }
  catch ( ATL::CAtlException *v46 )
  {
    v33 = (int *)v46;
    if ( *(_DWORD *)v46 == -1073741571 )
      _o__resetstkoflw();
    v37 = *v33;
    v7 = v37;
    if ( v37 < 0 )
      goto LABEL_56;
    v3 = v42;
  }
  *((GUID *)v3 + 1) = GUID_00000000_0000_0000_0000_000000000000;
  v36 = 0;
  v8 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  &v40,
                  &v43,
                  v6,
                  &v36);
  v10 = v8 - 24;
  v11 = (volatile signed __int32 *)(v38 - 12);
  if ( v8 - 24 != (char *)(v38 - 12) )
  {
    if ( *((int *)v11 + 4) >= 0 && *(_QWORD *)v10 == *(_QWORD *)v11 )
    {
      v12 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v10);
      if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11, v11);
      v38 = (unsigned __int16 *)(v12 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&v38, v8, *((_DWORD *)v8 - 4), v9);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v43 - 24));
  if ( v36 == -1 )
    goto LABEL_17;
  v14 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v40,
                   &v44,
                   v13,
                   &v36);
  v16 = v14 - 24;
  v17 = (volatile signed __int32 *)((char *)Src - 24);
  if ( v14 - 24 != (char *)Src - 24 )
  {
    if ( *((int *)v17 + 4) >= 0 && *(_QWORD *)v16 == *(_QWORD *)v17 )
    {
      v18 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v16);
      if ( _InterlockedExchangeAdd(v17 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v17 + 8LL))(*(_QWORD *)v17, v17);
      Src = (void *)(v18 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&Src, v14, *((_DWORD *)v14 - 4), v15);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v44 - 24));
  if ( v36 == -1 )
    goto LABEL_17;
  v20 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v40,
          v45,
          v19,
          &v36);
  v41 = 1;
  if ( ATL::operator!=(v21, v20) || (v22 = 0, v36 != -1) )
    v22 = 1;
  ATL::CStringData::Release((ATL::CStringData *)(v45[0] - 24));
  if ( v22 )
  {
LABEL_17:
    v7 = -2147467259;
    goto LABEL_56;
  }
  if ( *((_DWORD *)v38 - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&v38) == 35 )
  {
    *((_DWORD *)v3 + 10) = 1;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v38);
    }
    catch ( ATL::CAtlException *v47 )
    {
      v34 = (int *)v47;
      if ( *(_DWORD *)v47 == -1073741571 )
        _o__resetstkoflw();
      v37 = *v34;
      v7 = v37;
      if ( v37 < 0 )
        goto LABEL_56;
      v3 = v42;
    }
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&Src);
  }
  catch ( ATL::CAtlException *v48 )
  {
    v35 = (int *)v48;
    if ( *(_DWORD *)v48 == -1073741571 )
      _o__resetstkoflw();
    v37 = *v35;
    v7 = v37;
    if ( v37 < 0 )
      goto LABEL_56;
    v3 = v42;
  }
  lpsz = (LPCOLESTR)v50;
  if ( Src )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *((_WORD *)Src + v23) );
    v24 = v23 + 1;
    ATL::AtlConvAllocMemory<unsigned short>((void **)&lpsz, v24, v50);
    v27 = 2LL * v24;
    if ( v27 )
    {
      if ( !lpsz )
      {
        *(_DWORD *)_o__errno(0LL, v25, v27, v26) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memcpy_0((void *)lpsz, Src, v27);
    }
  }
  else
  {
    lpsz = 0LL;
  }
  v7 = CLSIDFromString(lpsz, (LPCLSID)v3 + 1);
  if ( lpsz != (LPCOLESTR)v50 )
    free((void *)lpsz);
  if ( v7 < 0 )
    goto LABEL_56;
  v29 = v38 - 12;
  v30 = (volatile signed __int32 *)(*(_QWORD *)v3 - 24LL);
  if ( v38 - 12 != (unsigned __int16 *)v30 )
  {
    if ( *((int *)v30 + 4) >= 0 && *(_QWORD *)v29 == *(_QWORD *)v30 )
    {
      v31 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v29);
      if ( _InterlockedExchangeAdd(v30 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v30 + 8LL))(*(_QWORD *)v30, v30);
      *(_QWORD *)v3 = v31 + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v3, (char *)v38, *((_DWORD *)v38 - 4), v28);
    }
  }
  v7 = CAppAudioSessionId::CalculateStaticId((const GUID *)v3);
  if ( v7 < 0 )
LABEL_56:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 450, v7);
  ATL::CStringData::Release((ATL::CStringData *)(v40 - 24));
  ATL::CStringData::Release((ATL::CStringData *)((char *)Src - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v38 - 12));
  return (unsigned int)v7;
}
