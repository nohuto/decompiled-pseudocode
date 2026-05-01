/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800FE564
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800FE448 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009917C (_invalid_parameter_noinfo.c)
 *     ?AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z @ 0x1800FC604 (-AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1800FC6E8 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x1800FCD48 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x1800FD148 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800FDBD8 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x1800FF430 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180100134 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        size_t a3,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  unsigned __int8 *v11; // rdi
  char v12; // r13
  bool v13; // al
  unsigned int v14; // r15d
  size_t v15; // r12
  int v16; // eax
  void *v17; // rsi
  __int16 v18; // cx
  __int64 Size; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int8 *v22; // rcx
  size_t v23; // r8
  unsigned __int8 *v24; // r8
  const void *v25; // [rsp+30h] [rbp-40h] BYREF
  __int16 v26; // [rsp+38h] [rbp-38h]
  __int128 v27; // [rsp+40h] [rbp-30h]
  __int16 v28; // [rsp+50h] [rbp-20h] BYREF
  char v29; // [rsp+52h] [rbp-1Eh]
  unsigned int v30; // [rsp+54h] [rbp-1Ch]
  __int16 v31; // [rsp+58h] [rbp-18h]
  __int64 v32; // [rsp+60h] [rbp-10h]
  void *v33; // [rsp+68h] [rbp-8h]
  unsigned __int8 *InsertionPointOrIncrement; // [rsp+B0h] [rbp+40h] BYREF
  void *v35; // [rsp+C8h] [rbp+58h]

  v35 = a4;
  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v11 = (unsigned __int8 *)(v6 + 10);
  LOWORD(v25) = *((_WORD *)this + 1);
  v12 = 0;
  BYTE2(v25) = *((_BYTE *)this + 4);
  InsertionPointOrIncrement = v11;
  HIDWORD(v25) = 0;
  v26 = 0;
  v27 = 0LL;
  while ( 1 )
  {
    v13 = wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v25,
            &InsertionPointOrIncrement,
            *((unsigned __int8 **)this + 4));
    v14 = a6;
    v15 = a5;
    if ( !v13 )
    {
      v11 = InsertionPointOrIncrement;
      *((_QWORD *)this + 4) = InsertionPointOrIncrement;
      goto LABEL_12;
    }
    v16 = wil::details_abi::UsageIndexProperty::Compare(&v25, a2, a3);
    if ( v16 < 0 )
    {
      InsertionPointOrIncrement = v11;
LABEL_12:
      *(_QWORD *)&v27 = 0LL;
      HIDWORD(v25) = 1;
      v26 = a3;
      *((_QWORD *)&v27 + 1) = a2;
      wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v25);
      v17 = v35;
      goto LABEL_13;
    }
    if ( !v16 )
      break;
    v11 = wil::details_abi::RawUsageIndex::SkipValues(
            this,
            (struct wil::details_abi::UsageIndexProperty *)&v25,
            InsertionPointOrIncrement);
    InsertionPointOrIncrement = v11;
  }
  v17 = v35;
  InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                this,
                                (struct wil::details_abi::UsageIndexProperty *)&v25,
                                InsertionPointOrIncrement,
                                v35,
                                v15,
                                v14);
  v11 = InsertionPointOrIncrement;
  if ( !InsertionPointOrIncrement )
    return 1;
  v12 = 1;
LABEL_13:
  v18 = *((_WORD *)this + 3);
  v32 = 0LL;
  v28 = v18;
  v29 = *((_BYTE *)this + 8);
  v30 = v14;
  v31 = v15;
  v33 = v17;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v28);
  v21 = v20 + Size;
  if ( ((*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) & (unsigned __int64)-(__int64)(*((_QWORD *)this + 4) < *((_QWORD *)this + 5))) < v20 + Size )
    return 0;
  v22 = &v11[v21];
  v23 = *((_QWORD *)this + 4) - (_QWORD)v11;
  if ( v23 )
  {
    if ( !v22 || !v11 )
    {
      *(_DWORD *)_o__errno() = 22;
      goto LABEL_17;
    }
    if ( *((_QWORD *)this + 5) - v21 - (__int64)v11 >= v23 )
    {
      memmove(v22, v11, v23);
    }
    else
    {
      *(_DWORD *)_o__errno() = 34;
LABEL_17:
      invalid_parameter_noinfo();
    }
  }
  v24 = (unsigned __int8 *)(*((_QWORD *)this + 4) + v21);
  *((_QWORD *)this + 4) = v24;
  if ( v12 )
    wil::details_abi::UsageIndexProperty::AddToCount((wil::details_abi::UsageIndexProperty *)&v25, 1);
  else
    wil::details_abi::UsageIndexProperty::Write(
      (wil::details_abi::UsageIndexProperty *)&v25,
      &InsertionPointOrIncrement,
      v24);
  wil::details_abi::UsageIndexProperty::Write(
    (wil::details_abi::UsageIndexProperty *)&v28,
    &InsertionPointOrIncrement,
    *((unsigned __int8 **)this + 4));
  *((_BYTE *)this + 56) = 1;
  return 1;
}
