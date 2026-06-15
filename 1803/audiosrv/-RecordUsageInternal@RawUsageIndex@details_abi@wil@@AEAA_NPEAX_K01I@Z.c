/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800064D0
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800069A0 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180006790 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180006D70 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180006E20 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180006ECC (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z @ 0x180006EF0 (-AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180006F18 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     memcpy_s @ 0x180015EBC (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x1800657A9 (memcmp_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        unsigned __int64 this,
        void *Buf1,
        size_t Size,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  const void *v8; // r9
  unsigned __int64 v9; // r15
  unsigned __int8 *v10; // rdi
  __int64 v11; // r10
  unsigned int v12; // r12d
  unsigned __int8 *v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int8 *v15; // rbx
  unsigned __int16 v16; // r14
  unsigned __int16 v17; // ax
  unsigned __int8 *v18; // r14
  int v19; // eax
  int v20; // ecx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  void *v23; // rbx
  char v25; // r14
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r9
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int8 *v34; // rcx
  size_t v35; // rax
  size_t v36; // r8
  unsigned __int8 *v37; // r8
  unsigned int v38; // ebx
  unsigned __int8 *InsertionPointOrIncrement; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int16 v40; // [rsp+40h] [rbp-31h] BYREF
  char v41; // [rsp+42h] [rbp-2Fh]
  int Destination; // [rsp+44h] [rbp-2Dh] BYREF
  unsigned __int16 v43; // [rsp+48h] [rbp-29h] BYREF
  __int128 v44; // [rsp+50h] [rbp-21h]
  __int16 v45; // [rsp+60h] [rbp-11h] BYREF
  char v46; // [rsp+62h] [rbp-Fh]
  unsigned int v47; // [rsp+64h] [rbp-Dh]
  __int16 v48; // [rsp+68h] [rbp-9h]
  __int128 v49; // [rsp+70h] [rbp-1h]
  unsigned __int8 *v50; // [rsp+C8h] [rbp+57h] BYREF
  void *v51; // [rsp+D0h] [rbp+5Fh]
  void *v52; // [rsp+E0h] [rbp+6Fh]

  v52 = a4;
  v51 = Buf1;
  v6 = *(_QWORD *)(this + 24);
  v8 = Buf1;
  v9 = this;
  if ( !v6 )
    return 0;
  v10 = (unsigned __int8 *)(v6 + 10);
  v11 = 0LL;
  v12 = 0;
  v40 = *(_WORD *)(this + 2);
  v41 = *(_BYTE *)(this + 4);
  Destination = 0;
  v43 = 0;
  v44 = 0LL;
  while ( 1 )
  {
    v13 = v10;
    v14 = *(_QWORD *)(v9 + 32);
    v50 = v10;
    InsertionPointOrIncrement = v10;
    if ( v41 == 1 )
    {
      v15 = v10 + 2;
      if ( (unsigned __int64)(v10 + 2) > v14 )
        goto LABEL_33;
      *(_QWORD *)&v44 = v10;
      if ( v10 )
      {
        v16 = *(_WORD *)v10;
      }
      else
      {
        v16 = 0;
        *(_DWORD *)_o__errno(this, 0LL, 0LL, v8) = 22;
        invalid_parameter_noinfo();
        v13 = v50;
        v11 = 0LL;
        v8 = v51;
      }
      v12 = v16;
      Destination = v16;
    }
    else
    {
      v15 = v10;
      if ( v41 == 2 )
      {
        v15 = v10 + 4;
        if ( (unsigned __int64)(v10 + 4) > v14 )
          goto LABEL_33;
        *(_QWORD *)&v44 = v10;
        memcpy_s(&Destination, 4uLL, v10, 4uLL);
        v13 = v50;
        v11 = 0LL;
        v8 = v51;
        v12 = Destination;
      }
    }
    v17 = v40;
    v43 = v40;
    if ( !v40 )
    {
      if ( (unsigned __int64)(v15 + 2) > v14 )
      {
LABEL_33:
        v23 = v52;
        v25 = 0;
        *(_QWORD *)(v9 + 32) = v10;
        goto LABEL_23;
      }
      memcpy_s(&v43, 2uLL, v15, 2uLL);
      v17 = v43;
      v11 = 0LL;
      v13 = v50;
      v15 += 2;
      v8 = v51;
      v12 = Destination;
    }
    v18 = &v15[v17];
    if ( (unsigned __int64)v18 > v14 )
      goto LABEL_33;
    *((_QWORD *)&v44 + 1) = v15;
    v10 = &v15[v17];
    if ( Size == v17 )
    {
      v19 = memcmp_0(v8, v15, Size);
      v13 = v50;
      v20 = v19;
      v8 = v51;
      v11 = 0LL;
    }
    else
    {
      v20 = Size - v17;
    }
    if ( v20 < 0 )
      break;
    if ( !v20 )
    {
      v23 = v52;
      InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                    (wil::details_abi::RawUsageIndex *)v9,
                                    (struct wil::details_abi::UsageIndexProperty *)&v40,
                                    v18,
                                    v52,
                                    a5,
                                    a6);
      v10 = InsertionPointOrIncrement;
      if ( !InsertionPointOrIncrement )
        return 1;
      v8 = v51;
      v25 = 1;
      v11 = 0LL;
LABEL_23:
      if ( !v25 )
        goto LABEL_24;
      goto LABEL_25;
    }
    v21 = *(_QWORD *)(v9 + 16);
    v50 = v18;
    if ( v21 )
    {
      v22 = *(_QWORD *)(v9 + 32) - *(_QWORD *)(v9 + 24);
      if ( v21 == 4 )
        this = v22 >> 2;
      else
        this = v22 / v21;
      if ( v12 > this )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v40, this);
        v21 = *(_QWORD *)(v9 + 16);
        v11 = 0LL;
        v8 = v51;
        v12 = Destination;
      }
      v10 = &v18[v21 * v12];
    }
    else
    {
      v45 = *(_WORD *)(v9 + 6);
      v38 = 0;
      v46 = *(_BYTE *)(v9 + 8);
      v47 = 0;
      v48 = 0;
      v49 = 0LL;
      if ( v12 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v45,
                  &v50,
                  *(unsigned __int8 **)(v9 + 32)) )
            break;
          ++v38;
        }
        while ( v38 < v12 );
        v10 = v50;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v40, v38);
      v8 = v51;
      v11 = 0LL;
      v12 = Destination;
    }
  }
  v23 = v52;
  v10 = v13;
  InsertionPointOrIncrement = v13;
  v25 = 0;
LABEL_24:
  Destination = 1;
  v43 = Size;
  *(_QWORD *)&v44 = 0LL;
  *((_QWORD *)&v44 + 1) = v8;
  wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v40);
LABEL_25:
  v45 = *(_WORD *)(v9 + 6);
  v46 = *(_BYTE *)(v9 + 8);
  v47 = a6;
  v48 = a5;
  *(_QWORD *)&v49 = v11;
  *((_QWORD *)&v49 + 1) = v23;
  v26 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v45);
  v30 = *(_QWORD *)(v9 + 40);
  v31 = v27 + v26;
  v32 = *(_QWORD *)(v9 + 32);
  if ( v32 < v30 )
    v29 = v30 - v32;
  if ( v29 >= v31 )
  {
    v33 = v30 - v31;
    v34 = &v10[v31];
    v35 = v33 - (_QWORD)v10;
    v36 = *(_QWORD *)(v9 + 32) - (_QWORD)v10;
    if ( !v36 )
      goto LABEL_29;
    if ( v34 && v10 )
    {
      if ( v35 < v36 )
      {
        *(_DWORD *)_o__errno(v34, v27, v36, v28) = 34;
        goto LABEL_55;
      }
      memmove(v34, v10, v36);
    }
    else
    {
      *(_DWORD *)_o__errno(v34, v27, v36, v28) = 22;
LABEL_55:
      invalid_parameter_noinfo();
    }
LABEL_29:
    v37 = (unsigned __int8 *)(v31 + *(_QWORD *)(v9 + 32));
    *(_QWORD *)(v9 + 32) = v37;
    if ( v25 )
      wil::details_abi::UsageIndexProperty::AddToCount((wil::details_abi::UsageIndexProperty *)&v40, 1u);
    else
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v40,
        &InsertionPointOrIncrement,
        v37);
    wil::details_abi::UsageIndexProperty::Write(
      (wil::details_abi::UsageIndexProperty *)&v45,
      &InsertionPointOrIncrement,
      *(unsigned __int8 **)(v9 + 32));
    *(_BYTE *)(v9 + 56) = 1;
    return 1;
  }
  return 0;
}
