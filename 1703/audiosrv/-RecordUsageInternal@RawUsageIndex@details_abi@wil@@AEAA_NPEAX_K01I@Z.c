/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800297E0
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180029C98 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180029A9C (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180029FCC (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18002A07C (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x18002A128 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z @ 0x18002A14C (-AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18002A174 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     memcpy_s @ 0x18002A1B0 (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x180057F9A (memcmp_0.c)
 */

bool __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        unsigned __int64 this,
        unsigned __int64 Buf1,
        size_t Size,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  const void *v8; // r9
  unsigned __int64 v9; // rsi
  unsigned __int8 *InsertionPointOrIncrement; // rdi
  unsigned __int64 v11; // r12
  unsigned int v12; // r15d
  unsigned __int8 *v13; // r8
  unsigned __int64 v14; // r14
  unsigned __int8 *v15; // rbx
  unsigned __int16 v16; // ax
  int v17; // eax
  int v18; // ecx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  void *v21; // rbx
  bool result; // al
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r9
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int8 *v30; // rcx
  size_t v31; // rax
  size_t v32; // r8
  unsigned __int8 *v33; // r8
  unsigned int v34; // ebx
  unsigned __int8 *v35; // [rsp+38h] [rbp-39h]
  unsigned __int8 *v36; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int16 v37; // [rsp+48h] [rbp-29h] BYREF
  char v38; // [rsp+4Ah] [rbp-27h]
  int Destination; // [rsp+4Ch] [rbp-25h] BYREF
  unsigned __int16 v40; // [rsp+50h] [rbp-21h] BYREF
  __int128 v41; // [rsp+58h] [rbp-19h]
  __int16 v42; // [rsp+68h] [rbp-9h] BYREF
  char v43; // [rsp+6Ah] [rbp-7h]
  unsigned int v44; // [rsp+6Ch] [rbp-5h]
  __int16 v45; // [rsp+70h] [rbp-1h]
  __int128 v46; // [rsp+78h] [rbp+7h]
  char v47; // [rsp+C8h] [rbp+57h]
  unsigned __int64 v48; // [rsp+D0h] [rbp+5Fh]

  v48 = Buf1;
  v6 = *(_QWORD *)(this + 24);
  v8 = (const void *)Buf1;
  v9 = this;
  if ( !v6 )
    return 0;
  InsertionPointOrIncrement = (unsigned __int8 *)(v6 + 10);
  v11 = 0LL;
  v12 = 0;
  v37 = *(_WORD *)(this + 2);
  v38 = *(_BYTE *)(this + 4);
  v47 = 0;
  Destination = 0;
  v40 = 0;
  v41 = 0LL;
  while ( 1 )
  {
    v13 = InsertionPointOrIncrement;
    v14 = *(_QWORD *)(v9 + 32);
    v15 = InsertionPointOrIncrement;
    v35 = InsertionPointOrIncrement;
    v36 = InsertionPointOrIncrement;
    if ( v38 == 1 )
    {
      v15 = InsertionPointOrIncrement + 2;
      if ( (unsigned __int64)(InsertionPointOrIncrement + 2) > v14 )
        goto LABEL_22;
      *(_QWORD *)&v41 = InsertionPointOrIncrement;
      if ( InsertionPointOrIncrement )
      {
        LOWORD(v12) = *(_WORD *)InsertionPointOrIncrement;
      }
      else
      {
        LOWORD(v12) = 0;
        *(_DWORD *)_o__errno(this, Buf1, 0LL, v8) = 22;
        invalid_parameter_noinfo();
        v8 = (const void *)v48;
        v13 = 0LL;
      }
      v12 = (unsigned __int16)v12;
      Destination = (unsigned __int16)v12;
    }
    else if ( v38 == 2 )
    {
      v15 = InsertionPointOrIncrement + 4;
      if ( (unsigned __int64)(InsertionPointOrIncrement + 4) > v14 )
        goto LABEL_22;
      *(_QWORD *)&v41 = InsertionPointOrIncrement;
      memcpy_s(&Destination, 4uLL, InsertionPointOrIncrement, 4uLL);
      v8 = (const void *)v48;
      v13 = InsertionPointOrIncrement;
      v12 = Destination;
    }
    v16 = v37;
    v40 = v37;
    if ( !v37 )
    {
      if ( (unsigned __int64)(v15 + 2) > v14 )
      {
LABEL_22:
        v21 = a4;
        result = 0;
        *(_QWORD *)(v9 + 32) = InsertionPointOrIncrement;
        goto LABEL_23;
      }
      memcpy_s(&v40, 2uLL, v15, 2uLL);
      v16 = v40;
      v15 += 2;
      v12 = Destination;
      v8 = (const void *)v48;
      v13 = InsertionPointOrIncrement;
    }
    Buf1 = (unsigned __int64)&v15[v16];
    if ( Buf1 > v14 )
      goto LABEL_22;
    *((_QWORD *)&v41 + 1) = v15;
    InsertionPointOrIncrement = &v15[v16];
    if ( Size == v16 )
    {
      v17 = memcmp_0(v8, v15, Size);
      v8 = (const void *)v48;
      v18 = v17;
      v13 = v35;
    }
    else
    {
      v18 = Size - v16;
    }
    if ( v18 < 0 )
    {
      v21 = a4;
      InsertionPointOrIncrement = v13;
      v36 = v13;
      goto LABEL_24;
    }
    if ( !v18 )
      break;
    v19 = *(_QWORD *)(v9 + 16);
    v36 = InsertionPointOrIncrement;
    if ( v19 )
    {
      v20 = *(_QWORD *)(v9 + 32) - *(_QWORD *)(v9 + 24);
      if ( v19 == 4 )
      {
        this = v20 >> 2;
      }
      else
      {
        Buf1 = v20 % v19;
        this = v20 / v19;
      }
      if ( v12 > this )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v37, this);
        v8 = (const void *)v48;
        v12 = Destination;
      }
      InsertionPointOrIncrement += *(_QWORD *)(v9 + 16) * v12;
    }
    else
    {
      v42 = *(_WORD *)(v9 + 6);
      v34 = 0;
      v43 = *(_BYTE *)(v9 + 8);
      v44 = 0;
      v45 = 0;
      v46 = 0LL;
      if ( v12 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v42,
                  &v36,
                  *(unsigned __int8 **)(v9 + 32)) )
            break;
          ++v34;
        }
        while ( v34 < v12 );
        InsertionPointOrIncrement = v36;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v37, v34);
      v8 = (const void *)v48;
      v12 = Destination;
    }
  }
  v21 = a4;
  InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                (wil::details_abi::RawUsageIndex *)v9,
                                (struct wil::details_abi::UsageIndexProperty *)&v37,
                                InsertionPointOrIncrement,
                                a4,
                                a5,
                                a6);
  v36 = InsertionPointOrIncrement;
  result = 1;
  if ( !InsertionPointOrIncrement )
    return result;
  v8 = (const void *)v48;
  v47 = 1;
LABEL_23:
  if ( result )
    goto LABEL_25;
LABEL_24:
  Destination = 1;
  v40 = Size;
  *(_QWORD *)&v41 = 0LL;
  *((_QWORD *)&v41 + 1) = v8;
  wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v37);
LABEL_25:
  v42 = *(_WORD *)(v9 + 6);
  v43 = *(_BYTE *)(v9 + 8);
  v44 = a6;
  v45 = a5;
  *(_QWORD *)&v46 = 0LL;
  *((_QWORD *)&v46 + 1) = v21;
  v23 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v42);
  v26 = *(_QWORD *)(v9 + 40);
  v27 = v24 + v23;
  v28 = *(_QWORD *)(v9 + 32);
  if ( v28 < v26 )
    v11 = v26 - v28;
  if ( v11 < v27 )
    return 0;
  v29 = v26 - v27;
  v30 = &InsertionPointOrIncrement[v27];
  v31 = v29 - (_QWORD)InsertionPointOrIncrement;
  v32 = *(_QWORD *)(v9 + 32) - (_QWORD)InsertionPointOrIncrement;
  if ( v32 )
  {
    if ( v30 && InsertionPointOrIncrement )
    {
      if ( v31 >= v32 )
      {
        memmove(v30, InsertionPointOrIncrement, v32);
        goto LABEL_29;
      }
      *(_DWORD *)_o__errno(v30, v24, v32, v25) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v30, v24, v32, v25) = 22;
    }
    invalid_parameter_noinfo();
  }
LABEL_29:
  v33 = (unsigned __int8 *)(v27 + *(_QWORD *)(v9 + 32));
  *(_QWORD *)(v9 + 32) = v33;
  if ( v47 )
    wil::details_abi::UsageIndexProperty::AddToCount((wil::details_abi::UsageIndexProperty *)&v37, 1u);
  else
    wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v37, &v36, v33);
  wil::details_abi::UsageIndexProperty::Write(
    (wil::details_abi::UsageIndexProperty *)&v42,
    &v36,
    *(unsigned __int8 **)(v9 + 32));
  result = 1;
  *(_BYTE *)(v9 + 56) = 1;
  return result;
}
