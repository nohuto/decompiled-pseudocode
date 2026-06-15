/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800978E0
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180097C70 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18009802C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180023C18 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800902A4 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x180097248 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x180097394 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, char *a2)
{
  CAppInstanceId *v3; // r15
  __int64 v4; // r9
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // r8
  char *v8; // rdx
  __int64 v9; // r9
  char *v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r8
  char *v14; // rdx
  __int64 v15; // r9
  char *v16; // rcx
  wchar_t *v17; // rbx
  volatile signed __int32 *v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 *v21; // rax
  unsigned __int16 *v22; // rcx
  char v23; // r14
  int *v25; // rbx
  wchar_t *v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+28h] [rbp-60h] BYREF
  __int64 v28; // [rsp+30h] [rbp-58h] BYREF
  __int64 v29; // [rsp+38h] [rbp-50h] BYREF
  __int64 v30; // [rsp+40h] [rbp-48h] BYREF
  wchar_t *EndPtr[2]; // [rsp+48h] [rbp-40h] BYREF
  ATL::CAtlException *v32; // [rsp+58h] [rbp-30h] BYREF
  int v34; // [rsp+98h] [rbp+10h] BYREF
  int v35; // [rsp+A0h] [rbp+18h]
  wchar_t *String; // [rsp+A8h] [rbp+20h] BYREF

  EndPtr[1] = (wchar_t *)-2LL;
  v3 = this;
  v35 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v27,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v26,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &String,
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
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v27, a2, v6, v4);
  }
  catch ( ATL::CAtlException *v32 )
  {
    v25 = (int *)v32;
    if ( *(_DWORD *)v32 == -1073741571 )
      _o__resetstkoflw();
    v34 = *v25;
    v5 = v34;
    if ( v34 < 0 )
      goto LABEL_36;
    v3 = this;
  }
  v34 = 0;
  v8 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  &v27,
                  &v28,
                  v7,
                  &v34);
  v10 = v8 - 24;
  v11 = (volatile signed __int32 *)(v26 - 12);
  if ( v8 - 24 != (char *)(v26 - 12) )
  {
    if ( *((int *)v11 + 4) >= 0 && *(_QWORD *)v10 == *(_QWORD *)v11 )
    {
      v12 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v10);
      if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11, v11);
      v26 = (wchar_t *)(v12 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&v26, v8, *((_DWORD *)v8 - 4), v9);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 24));
  if ( v34 == -1 )
  {
    v5 = -2147467259;
LABEL_36:
    v17 = String;
    goto LABEL_37;
  }
  v14 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v27,
                   &v29,
                   v13,
                   &v34);
  v16 = v14 - 24;
  v17 = String;
  v18 = (volatile signed __int32 *)(String - 12);
  if ( v14 - 24 != (char *)(String - 12) )
  {
    if ( *((int *)v18 + 4) >= 0 && *(_QWORD *)v16 == *(_QWORD *)v18 )
    {
      v19 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v16);
      if ( _InterlockedExchangeAdd(v18 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v18 + 8LL))(*(_QWORD *)v18, v18);
      v17 = (wchar_t *)(v19 + 24);
      String = v17;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&String, v14, *((_DWORD *)v14 - 4), v15);
      v17 = String;
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 24));
  if ( v34 == -1 )
    goto LABEL_26;
  v21 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v27,
          &v30,
          v20,
          &v34);
  v35 = 1;
  if ( ATL::operator!=(v22, v21) || (v23 = 0, v34 != -1) )
    v23 = 1;
  ATL::CStringData::Release((ATL::CStringData *)(v30 - 24));
  if ( v23 )
  {
LABEL_26:
    v5 = -2147467259;
LABEL_37:
    AudSrvTraceLoggingErrorHelper("CAppInstanceId::Initialize", 624, v5);
    goto LABEL_38;
  }
  if ( *((_DWORD *)v17 - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&String) == 35 )
  {
    *((_DWORD *)v3 + 2) = 1;
    *(_DWORD *)v3 = 0;
  }
  else
  {
    *(_DWORD *)v3 = wcstoul(v17, EndPtr, 10);
  }
  *((_DWORD *)v3 + 1) = wcstoul(v26, EndPtr, 10);
LABEL_38:
  ATL::CStringData::Release((ATL::CStringData *)(v17 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 24));
  return v5;
}
