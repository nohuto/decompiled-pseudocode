/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18002F9B8
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18002FCC4 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18002FBC0 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800301FC (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1800302AC (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180030358 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18003037C (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1800620E8 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
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
  char *v10; // rdi
  char v11; // r13
  unsigned __int8 *v12; // r8
  bool v13; // al
  unsigned int v14; // esi
  unsigned __int64 v15; // r14
  int v16; // eax
  void *v17; // r15
  unsigned __int8 *InsertionPointOrIncrement; // rax
  __int64 v19; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // edx
  unsigned __int64 Size; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned __int8 *v27; // r8
  unsigned int v28; // esi
  __int16 v29; // [rsp+30h] [rbp-49h] BYREF
  char v30; // [rsp+32h] [rbp-47h]
  unsigned int v31; // [rsp+34h] [rbp-45h]
  __int16 v32; // [rsp+38h] [rbp-41h]
  __int128 v33; // [rsp+40h] [rbp-39h]
  __int16 v34; // [rsp+50h] [rbp-29h] BYREF
  char v35; // [rsp+52h] [rbp-27h]
  unsigned int v36; // [rsp+54h] [rbp-25h]
  __int16 v37; // [rsp+58h] [rbp-21h]
  __int64 v38; // [rsp+60h] [rbp-19h]
  void *v39; // [rsp+68h] [rbp-11h]
  __int16 v40; // [rsp+70h] [rbp-9h] BYREF
  char v41; // [rsp+72h] [rbp-7h]
  int v42; // [rsp+74h] [rbp-5h]
  __int16 v43; // [rsp+78h] [rbp-1h]
  __int128 v44; // [rsp+80h] [rbp+7h]
  void *Source; // [rsp+D0h] [rbp+57h] BYREF
  void *v46; // [rsp+E8h] [rbp+6Fh]

  v46 = a4;
  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v29 = *((_WORD *)this + 1);
  v10 = (char *)(v6 + 10);
  v11 = 0;
  v30 = *((_BYTE *)this + 4);
  v31 = 0;
  v32 = 0;
  v33 = 0LL;
  while ( 1 )
  {
    v12 = (unsigned __int8 *)*((_QWORD *)this + 4);
    Source = v10;
    v13 = wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v29,
            (unsigned __int8 **)&Source,
            v12);
    v14 = a6;
    v15 = a5;
    if ( !v13 )
    {
      v10 = (char *)Source;
      *((_QWORD *)this + 4) = Source;
LABEL_14:
      v31 = 1;
      v32 = a3;
      *(_QWORD *)&v33 = 0LL;
      *((_QWORD *)&v33 + 1) = a2;
      wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v29);
      v17 = v46;
      goto LABEL_15;
    }
    v16 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v29, a2, a3);
    if ( v16 < 0 )
    {
      Source = v10;
      goto LABEL_14;
    }
    if ( !v16 )
      break;
    v21 = *((_QWORD *)this + 2);
    v10 = (char *)Source;
    if ( v21 )
    {
      v22 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / v21;
      v23 = v31;
      if ( v31 > v22 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v29, v22);
        v21 = *((_QWORD *)this + 2);
        v23 = v31;
      }
      v10 += v21 * v23;
    }
    else
    {
      v28 = 0;
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
          ++v28;
        }
        while ( v28 < v31 );
        v10 = (char *)Source;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v29, v28);
    }
  }
  v17 = v46;
  InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                this,
                                (struct wil::details_abi::UsageIndexProperty *)&v29,
                                (unsigned __int8 *)Source,
                                v46,
                                v15,
                                v14);
  v19 = 0LL;
  Source = InsertionPointOrIncrement;
  v10 = (char *)InsertionPointOrIncrement;
  if ( !InsertionPointOrIncrement )
    return 1;
  v11 = 1;
LABEL_15:
  v34 = *((_WORD *)this + 3);
  v35 = *((_BYTE *)this + 8);
  v36 = v14;
  v37 = v15;
  v38 = v19;
  v39 = v17;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v34);
  v26 = v25 + Size;
  if ( ((*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) & (unsigned __int64)-(__int64)(*((_QWORD *)this + 4) < *((_QWORD *)this + 5))) >= v25 + Size )
  {
    memmove_s(&v10[v26], *((_QWORD *)this + 5) - v26 - (_QWORD)v10, v10, *((_QWORD *)this + 4) - (_QWORD)v10);
    v27 = (unsigned __int8 *)(v26 + *((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = v27;
    if ( v11 )
    {
      if ( v30 )
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v29, v31 + 1);
    }
    else
    {
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v29,
        (unsigned __int8 **)&Source,
        v27);
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
