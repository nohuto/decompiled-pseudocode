/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180017D94
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800180B0 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180017FA0 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180018514 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1800185C4 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180018670 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x180018694 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1800813B4 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  char *v11; // rdi
  unsigned __int8 *v12; // r8
  int v13; // eax
  unsigned __int8 *InsertionPointOrIncrement; // rax
  __int64 v15; // r8
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  char v19; // r15
  unsigned __int64 Size; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  unsigned __int8 *v26; // r8
  unsigned int v27; // esi
  void *Source; // [rsp+38h] [rbp-49h] BYREF
  __int16 v29; // [rsp+40h] [rbp-41h] BYREF
  char v30; // [rsp+42h] [rbp-3Fh]
  unsigned int v31; // [rsp+44h] [rbp-3Dh]
  __int16 v32; // [rsp+48h] [rbp-39h]
  __int128 v33; // [rsp+50h] [rbp-31h]
  __int16 v34; // [rsp+60h] [rbp-21h] BYREF
  char v35; // [rsp+62h] [rbp-1Fh]
  unsigned int v36; // [rsp+64h] [rbp-1Dh]
  __int16 v37; // [rsp+68h] [rbp-19h]
  __int64 v38; // [rsp+70h] [rbp-11h]
  void *v39; // [rsp+78h] [rbp-9h]
  __int16 v40; // [rsp+80h] [rbp-1h] BYREF
  char v41; // [rsp+82h] [rbp+1h]
  int v42; // [rsp+84h] [rbp+3h]
  __int16 v43; // [rsp+88h] [rbp+7h]
  __int128 v44; // [rsp+90h] [rbp+Fh]

  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v29 = *((_WORD *)this + 1);
  v11 = (char *)(v6 + 10);
  v30 = *((_BYTE *)this + 4);
  v31 = 0;
  v32 = 0;
  v33 = 0LL;
  while ( 1 )
  {
    v12 = (unsigned __int8 *)*((_QWORD *)this + 4);
    Source = v11;
    if ( !wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v29,
            (unsigned __int8 **)&Source,
            v12) )
    {
      v11 = (char *)Source;
      *((_QWORD *)this + 4) = Source;
LABEL_14:
      v31 = 1;
      v32 = a3;
      *(_QWORD *)&v33 = 0LL;
      *((_QWORD *)&v33 + 1) = a2;
      wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v29);
      v19 = 0;
      goto LABEL_15;
    }
    v13 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v29, a2, a3);
    if ( v13 < 0 )
    {
      Source = v11;
      goto LABEL_14;
    }
    if ( !v13 )
      break;
    v11 = (char *)Source;
    if ( *((_QWORD *)this + 2) )
    {
      v17 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
      v18 = v31;
      if ( v31 > v17 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v29, v17);
        v18 = v31;
      }
      v11 += *((_QWORD *)this + 2) * v18;
    }
    else
    {
      v27 = 0;
      v40 = *((_WORD *)this + 3);
      v41 = *((_BYTE *)this + 8);
      v42 = 0;
      v43 = 0;
      v44 = 0LL;
      if ( v31 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v40,
                  (unsigned __int8 **)&Source,
                  *((unsigned __int8 **)this + 4)) )
            break;
          ++v27;
        }
        while ( v27 < v31 );
        v11 = (char *)Source;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v29, v27);
    }
  }
  InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                this,
                                (struct wil::details_abi::UsageIndexProperty *)&v29,
                                (unsigned __int8 *)Source,
                                a4,
                                a5,
                                a6);
  v15 = 0LL;
  Source = InsertionPointOrIncrement;
  v11 = (char *)InsertionPointOrIncrement;
  if ( !InsertionPointOrIncrement )
    return 1;
  v19 = 1;
LABEL_15:
  v34 = *((_WORD *)this + 3);
  v35 = *((_BYTE *)this + 8);
  v36 = a6;
  v37 = a5;
  v38 = v15;
  v39 = a4;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v34);
  v22 = *((_QWORD *)this + 5);
  v24 = v23 + Size;
  if ( *((_QWORD *)this + 4) >= v22 )
    v25 = v21;
  else
    v25 = v22 - *((_QWORD *)this + 4);
  if ( v25 >= v24 )
  {
    memmove_s(&v11[v24], *((_QWORD *)this + 5) - v24 - (_QWORD)v11, v11, *((_QWORD *)this + 4) - (_QWORD)v11);
    v26 = (unsigned __int8 *)(v24 + *((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = v26;
    if ( v19 )
    {
      if ( v30 )
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v29, v31 + 1);
    }
    else
    {
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v29,
        (unsigned __int8 **)&Source,
        v26);
    }
    wil::details_abi::UsageIndexProperty::Write(
      (wil::details_abi::UsageIndexProperty *)&v34,
      (unsigned __int8 **)&Source,
      *((unsigned __int8 **)this + 4));
    *((_BYTE *)this + 56) = 1;
    return 1;
  }
  return 0;
}
