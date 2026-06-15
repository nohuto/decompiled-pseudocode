/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800B72F4
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800B768C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800B7A50 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A978 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180030C18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180030CF0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800ADB58 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x1800B6C48 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800B6D98 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, char *a2)
{
  CAppInstanceId *v3; // r15
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // r8
  char *v8; // rdx
  char *v9; // rcx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r8
  wchar_t *v13; // rbx
  char *v15; // rdx
  char *v16; // rcx
  volatile signed __int32 *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 *v20; // rax
  unsigned __int16 *v21; // rcx
  char v22; // r14
  int *v23; // rbx
  wchar_t *v24; // [rsp+20h] [rbp-68h] BYREF
  char *v25; // [rsp+28h] [rbp-60h] BYREF
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  __int64 v27; // [rsp+38h] [rbp-50h] BYREF
  __int64 v28; // [rsp+40h] [rbp-48h] BYREF
  wchar_t *EndPtr[2]; // [rsp+48h] [rbp-40h] BYREF
  ATL::CAtlException *v30; // [rsp+58h] [rbp-30h] BYREF
  int v32; // [rsp+98h] [rbp+10h] BYREF
  int v33; // [rsp+A0h] [rbp+18h]
  wchar_t *String; // [rsp+A8h] [rbp+20h] BYREF

  EndPtr[1] = (wchar_t *)-2LL;
  v3 = this;
  v4 = 0;
  v33 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v25, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v24, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&String, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
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
    ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v25, a2, (unsigned int)v6);
  }
  catch ( ATL::CAtlException *v30 )
  {
    v23 = (int *)v30;
    if ( *(_DWORD *)v30 == -1073741571 )
      _o__resetstkoflw();
    v32 = *v23;
    v5 = v32;
    v4 = 0;
    if ( v32 < 0 )
      goto LABEL_18;
    v3 = this;
  }
  v32 = 0;
  v8 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  (__int64 *)&v25,
                  &v26,
                  v7,
                  &v32);
  v9 = v8 - 24;
  v10 = (volatile signed __int32 *)(v24 - 12);
  if ( v8 - 24 != (char *)(v24 - 12) )
  {
    if ( *((int *)v10 + 4) >= 0 && *(_QWORD *)v9 == *(_QWORD *)v10 )
    {
      v11 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v9);
      if ( _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v10 + 8LL))(*(_QWORD *)v10, v10);
      v24 = (wchar_t *)(v11 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v24, v8, *((unsigned int *)v8 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v32 == -1 )
  {
    v5 = -2147467259;
LABEL_18:
    v13 = String;
LABEL_19:
    AudSrvTraceLoggingErrorHelper("CAppInstanceId::Initialize", 624, v5);
    goto LABEL_20;
  }
  v15 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   (__int64 *)&v25,
                   &v27,
                   v12,
                   &v32);
  v16 = v15 - 24;
  v13 = String;
  v17 = (volatile signed __int32 *)(String - 12);
  if ( v15 - 24 != (char *)(String - 12) )
  {
    if ( *((int *)v17 + 4) >= 0 && *(_QWORD *)v16 == *(_QWORD *)v17 )
    {
      v18 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v16);
      if ( _InterlockedExchangeAdd(v17 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v17 + 8LL))(*(_QWORD *)v17, v17);
      v13 = (wchar_t *)(v18 + 24);
      String = v13;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&String, v15, *((unsigned int *)v15 - 4));
      v13 = String;
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 24));
  if ( v32 == -1 )
    goto LABEL_29;
  v20 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          (__int64 *)&v25,
          &v28,
          v19,
          &v32);
  v33 = 1;
  if ( ATL::operator!=(v21, v20) || (v22 = 0, v32 != -1) )
    v22 = 1;
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 24));
  if ( v22 )
  {
LABEL_29:
    v5 = -2147467259;
    goto LABEL_19;
  }
  if ( *((_DWORD *)v13 - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&String) == 35 )
    *((_DWORD *)v3 + 2) = 1;
  else
    v4 = wcstoul(v13, EndPtr, 10);
  *(_DWORD *)v3 = v4;
  *((_DWORD *)v3 + 1) = wcstoul(v24, EndPtr, 10);
LABEL_20:
  ATL::CStringData::Release((ATL::CStringData *)(v13 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v24 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  return v5;
}
