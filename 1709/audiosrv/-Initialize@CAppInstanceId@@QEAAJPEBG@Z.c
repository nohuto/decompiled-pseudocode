/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18007E3F0
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x18007E6CC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007E9E0 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800146FC (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18005B588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800768B4 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x18007DD7C (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x18007DF64 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, char *a2)
{
  CAppInstanceId *v3; // r14
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rax
  unsigned __int16 *v12; // rcx
  char v13; // bl
  wchar_t *v14; // rbx
  wchar_t *v15; // rdi
  int *v17; // rbx
  wchar_t *String; // [rsp+20h] [rbp-58h] BYREF
  wchar_t *v19; // [rsp+28h] [rbp-50h] BYREF
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  wchar_t *EndPtr[2]; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v22; // [rsp+48h] [rbp-30h] BYREF
  int v24; // [rsp+88h] [rbp+10h] BYREF
  __int64 v25; // [rsp+90h] [rbp+18h] BYREF
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF

  EndPtr[1] = (wchar_t *)-2LL;
  v3 = this;
  LODWORD(v25) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v26, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v19, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&String, (__int64)&ATL::g_strmgr);
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
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v26, a2, v5);
  }
  catch ( ATL::CAtlException *v22 )
  {
    v17 = (int *)v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _o__resetstkoflw();
    v24 = *v17;
    v4 = v24;
    if ( v24 < 0 )
      goto LABEL_21;
    v3 = this;
  }
  v24 = 0;
  v7 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v26,
         &v25,
         v6,
         &v24);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v19, v7);
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  if ( v24 == -1 )
    goto LABEL_10;
  v9 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v26,
         &v25,
         v8,
         &v24);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&String, v9);
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  if ( v24 == -1 )
    goto LABEL_10;
  v11 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v26,
          &v20,
          v10,
          &v24);
  LODWORD(v25) = 1;
  if ( ATL::operator!=(v12, v11) || (v13 = 0, v24 != -1) )
    v13 = 1;
  ATL::CStringData::Release((ATL::CStringData *)(v20 - 24));
  if ( v13 )
  {
LABEL_10:
    v4 = -2147467259;
LABEL_21:
    AudSrvTraceLoggingErrorHelper("CAppInstanceId::Initialize", 624, v4);
    v15 = v19;
    v14 = String;
    goto LABEL_22;
  }
  v14 = String;
  if ( *((_DWORD *)String - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&String) == 35 )
  {
    *((_DWORD *)v3 + 2) = 1;
    *(_DWORD *)v3 = 0;
  }
  else
  {
    *(_DWORD *)v3 = wcstoul(v14, EndPtr, 10);
  }
  v15 = v19;
  *((_DWORD *)v3 + 1) = wcstoul(v19, EndPtr, 10);
LABEL_22:
  ATL::CStringData::Release((ATL::CStringData *)(v14 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v15 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  return v4;
}
