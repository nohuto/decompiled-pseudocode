/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18007A2D8
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18007A5FC (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18007A4E8 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18007AA60 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18007AB10 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x18007ABBC (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z @ 0x18007ABE0 (-AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18007AC08 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18007AC48 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
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
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  void *v19; // r15
  unsigned __int8 *InsertionPointOrIncrement; // rax
  __int64 v21; // r8
  unsigned __int64 Size; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  unsigned __int8 *v26; // r8
  unsigned int v27; // esi
  __int16 v28; // [rsp+30h] [rbp-49h] BYREF
  char v29; // [rsp+32h] [rbp-47h]
  unsigned int v30; // [rsp+34h] [rbp-45h]
  __int16 v31; // [rsp+38h] [rbp-41h]
  __int128 v32; // [rsp+40h] [rbp-39h]
  __int16 v33; // [rsp+50h] [rbp-29h] BYREF
  char v34; // [rsp+52h] [rbp-27h]
  unsigned int v35; // [rsp+54h] [rbp-25h]
  __int16 v36; // [rsp+58h] [rbp-21h]
  __int64 v37; // [rsp+60h] [rbp-19h]
  void *v38; // [rsp+68h] [rbp-11h]
  __int16 v39; // [rsp+70h] [rbp-9h] BYREF
  char v40; // [rsp+72h] [rbp-7h]
  int v41; // [rsp+74h] [rbp-5h]
  __int16 v42; // [rsp+78h] [rbp-1h]
  __int128 v43; // [rsp+80h] [rbp+7h]
  void *Source; // [rsp+D0h] [rbp+57h] BYREF
  void *v45; // [rsp+E8h] [rbp+6Fh]

  v45 = a4;
  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v28 = *((_WORD *)this + 1);
  v10 = (char *)(v6 + 10);
  v11 = 0;
  v29 = *((_BYTE *)this + 4);
  v30 = 0;
  v31 = 0;
  v32 = 0LL;
  while ( 1 )
  {
    v12 = (unsigned __int8 *)*((_QWORD *)this + 4);
    Source = v10;
    v13 = wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v28,
            (unsigned __int8 **)&Source,
            v12);
    v14 = a6;
    v15 = a5;
    if ( !v13 )
    {
      v10 = (char *)Source;
      *((_QWORD *)this + 4) = Source;
LABEL_13:
      v30 = 1;
      v31 = a3;
      *(_QWORD *)&v32 = 0LL;
      *((_QWORD *)&v32 + 1) = a2;
      wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v28);
      v19 = v45;
      goto LABEL_14;
    }
    v16 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v28, a2, a3);
    if ( v16 < 0 )
    {
      Source = v10;
      goto LABEL_13;
    }
    if ( !v16 )
      break;
    v10 = (char *)Source;
    if ( *((_QWORD *)this + 2) )
    {
      v17 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
      v18 = v30;
      if ( v30 > v17 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v28, v17);
        v18 = v30;
      }
      v10 += *((_QWORD *)this + 2) * v18;
    }
    else
    {
      v27 = 0;
      v39 = *((_WORD *)this + 3);
      v40 = *((_BYTE *)this + 8);
      v41 = 0;
      v42 = 0;
      v43 = 0LL;
      if ( v30 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v39,
                  (unsigned __int8 **)&Source,
                  *((unsigned __int8 **)this + 4)) )
            break;
          ++v27;
        }
        while ( v27 < v30 );
        v10 = (char *)Source;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v28, v27);
    }
  }
  v19 = v45;
  InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                this,
                                (struct wil::details_abi::UsageIndexProperty *)&v28,
                                (unsigned __int8 *)Source,
                                v45,
                                v15,
                                v14);
  v21 = 0LL;
  Source = InsertionPointOrIncrement;
  v10 = (char *)InsertionPointOrIncrement;
  if ( !InsertionPointOrIncrement )
    return 1;
  v11 = 1;
LABEL_14:
  v33 = *((_WORD *)this + 3);
  v34 = *((_BYTE *)this + 8);
  v35 = v14;
  v36 = v15;
  v37 = v21;
  v38 = v19;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v33);
  v25 = v24 + Size;
  if ( ((*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) & (unsigned __int64)-(__int64)(*((_QWORD *)this + 4) < *((_QWORD *)this + 5))) >= v24 + Size )
  {
    memmove_s(&v10[v25], *((_QWORD *)this + 5) - v25 - (_QWORD)v10, v10, *((_QWORD *)this + 4) - (_QWORD)v10);
    v26 = (unsigned __int8 *)(v25 + *((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = v26;
    if ( v11 )
      wil::details_abi::UsageIndexProperty::AddToCount((wil::details_abi::UsageIndexProperty *)&v28, 1u);
    else
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v28,
        (unsigned __int8 **)&Source,
        v26);
    wil::details_abi::UsageIndexProperty::Write(
      (wil::details_abi::UsageIndexProperty *)&v33,
      (unsigned __int8 **)&Source,
      *((unsigned __int8 **)this + 4));
    *((_BYTE *)this + 56) = 1;
    return 1;
  }
  return 0;
}
