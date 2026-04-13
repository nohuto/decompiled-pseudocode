/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000929C
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180008E74 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180008A5C (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180008B40 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180008FD0 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     memcmp_0 @ 0x1800B43A7 (memcmp_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *Buf1,
        size_t Size,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  unsigned __int8 *v12; // r8
  unsigned __int8 *v13; // rdi
  char v14; // al
  bool v15; // al
  size_t v16; // r12
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int *p_Source; // r8
  rsize_t v21; // r9
  unsigned int v22; // esi
  unsigned int v23; // eax
  bool v24; // zf
  rsize_t v25; // r9
  unsigned int *v26; // r8
  rsize_t v27; // rdx
  unsigned __int8 *v28; // r8
  bool v29; // si
  __int64 v30; // rcx
  __int64 v31; // rax
  char v32; // dl
  __int64 v33; // rsi
  __int16 v34; // r8
  rsize_t v35; // r9
  rsize_t v36; // rdx
  unsigned int *v37; // r8
  unsigned __int8 *InsertionPointOrIncrement; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int16 v39; // [rsp+40h] [rbp-41h] BYREF
  char v40; // [rsp+42h] [rbp-3Fh]
  unsigned int Source; // [rsp+44h] [rbp-3Dh] BYREF
  unsigned __int16 v42; // [rsp+48h] [rbp-39h]
  void *Buf2[2]; // [rsp+50h] [rbp-31h]
  __int16 v44; // [rsp+60h] [rbp-21h] BYREF
  __int16 v45; // [rsp+64h] [rbp-1Dh] BYREF
  __int16 v46; // [rsp+68h] [rbp-19h] BYREF
  char v47; // [rsp+6Ah] [rbp-17h]
  unsigned int v48; // [rsp+6Ch] [rbp-15h]
  __int16 v49; // [rsp+70h] [rbp-11h]
  __int64 v50; // [rsp+78h] [rbp-9h]
  void *v51; // [rsp+80h] [rbp-1h]
  __int16 v52; // [rsp+88h] [rbp+7h] BYREF
  char v53; // [rsp+8Ah] [rbp+9h]
  int v54; // [rsp+8Ch] [rbp+Bh]
  __int16 v55; // [rsp+90h] [rbp+Fh]
  __int128 v56; // [rsp+98h] [rbp+17h]
  __int16 v57; // [rsp+D8h] [rbp+57h] BYREF

  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v12 = (unsigned __int8 *)*((_QWORD *)this + 4);
  v13 = (unsigned __int8 *)(v6 + 10);
  v39 = *((_WORD *)this + 1);
  v14 = *((_BYTE *)this + 4);
  Source = 0;
  v42 = 0;
  LOBYTE(v57) = 0;
  v40 = v14;
  InsertionPointOrIncrement = v13;
  *(_OWORD *)Buf2 = 0LL;
  v15 = wil::details_abi::UsageIndexProperty::Read(
          (wil::details_abi::UsageIndexProperty *)&v39,
          &InsertionPointOrIncrement,
          v12);
  v16 = a5;
  while ( 1 )
  {
    v29 = v15;
    if ( !v15 )
    {
      v13 = InsertionPointOrIncrement;
      goto LABEL_31;
    }
    v17 = Size == v42 ? memcmp_0(Buf1, Buf2[1], Size) : Size - v42;
    if ( v17 < 0 )
      break;
    if ( !v17 )
    {
      InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                    this,
                                    (struct wil::details_abi::UsageIndexProperty *)&v39,
                                    InsertionPointOrIncrement,
                                    a4,
                                    v16,
                                    a6);
      v13 = InsertionPointOrIncrement;
      if ( InsertionPointOrIncrement )
      {
        LOBYTE(v57) = 1;
        goto LABEL_38;
      }
      return 1;
    }
    v13 = InsertionPointOrIncrement;
    if ( *((_QWORD *)this + 2) )
    {
      v18 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
      v19 = Source;
      if ( Source > v18 && Source != (_DWORD)v18 )
      {
        v19 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
        Source = v19;
        if ( v40 == 1 )
        {
          v44 = v18;
          p_Source = (unsigned int *)&v44;
          v21 = 2LL;
          goto LABEL_16;
        }
        if ( v40 == 2 )
        {
          v21 = 4LL;
          p_Source = &Source;
LABEL_16:
          memcpy_s(Buf2[0], v21, p_Source, v21);
          v19 = Source;
        }
      }
      v13 += *((_QWORD *)this + 2) * v19;
      goto LABEL_28;
    }
    v52 = *((_WORD *)this + 3);
    v22 = 0;
    v53 = *((_BYTE *)this + 8);
    v23 = Source;
    v54 = 0;
    v55 = 0;
    v56 = 0LL;
    if ( Source )
    {
      do
      {
        v24 = !wil::details_abi::UsageIndexProperty::Read(
                 (wil::details_abi::UsageIndexProperty *)&v52,
                 &InsertionPointOrIncrement,
                 *((unsigned __int8 **)this + 4));
        v23 = Source;
        if ( v24 )
          break;
        ++v22;
      }
      while ( v22 < Source );
      v13 = InsertionPointOrIncrement;
    }
    if ( v23 != v22 )
    {
      Source = v22;
      if ( v40 == 1 )
      {
        v45 = v22;
        v25 = 2LL;
        v26 = (unsigned int *)&v45;
        v27 = 2LL;
      }
      else
      {
        if ( v40 != 2 )
          goto LABEL_28;
        v27 = 4LL;
        v26 = &Source;
        v25 = 4LL;
      }
      memcpy_s(Buf2[0], v27, v26, v25);
    }
LABEL_28:
    v28 = (unsigned __int8 *)*((_QWORD *)this + 4);
    InsertionPointOrIncrement = v13;
    v15 = wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v39,
            &InsertionPointOrIncrement,
            v28);
  }
  InsertionPointOrIncrement = v13;
LABEL_38:
  if ( !v29 )
LABEL_31:
    *((_QWORD *)this + 4) = v13;
  v30 = 0LL;
  if ( !(_BYTE)v57 )
  {
    Source = 1;
    v42 = Size;
    Buf2[0] = 0LL;
    Buf2[1] = Buf1;
    if ( v39 )
      v30 = v39;
    else
      v30 = (unsigned __int16)Size + 2LL;
    if ( v40 == 1 )
    {
      v30 += 2LL;
    }
    else if ( v40 == 2 )
    {
      v30 += 4LL;
    }
  }
  LOWORD(v31) = *((_WORD *)this + 3);
  v32 = *((_BYTE *)this + 8);
  v46 = v31;
  v47 = v32;
  v48 = a6;
  v49 = v16;
  v50 = 0LL;
  v51 = a4;
  if ( (_WORD)v31 )
    v31 = (unsigned __int16)v31;
  else
    v31 = (unsigned __int16)v16 + 2LL;
  if ( v32 == 1 )
  {
    v31 += 2LL;
  }
  else if ( v32 == 2 )
  {
    v31 += 4LL;
  }
  v33 = v31 + v30;
  if ( ((*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) & (unsigned __int64)-(__int64)(*((_QWORD *)this + 4) < *((_QWORD *)this + 5))) >= v31 + v30 )
  {
    memmove_s(&v13[v33], *((_QWORD *)this + 5) - v33 - (_QWORD)v13, v13, *((_QWORD *)this + 4) - (_QWORD)v13);
    *((_QWORD *)this + 4) += v33;
    if ( !(_BYTE)v57 )
    {
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v39,
        (char **)&InsertionPointOrIncrement,
        *((char **)this + 4));
LABEL_62:
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v46,
        (char **)&InsertionPointOrIncrement,
        *((char **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
    if ( !v40 )
      goto LABEL_62;
    v34 = Source + 1;
    if ( Source == Source + 1 )
      goto LABEL_62;
    ++Source;
    if ( v40 == 1 )
    {
      v35 = 2LL;
      v57 = v34;
      v36 = 2LL;
      v37 = (unsigned int *)&v57;
    }
    else
    {
      if ( v40 != 2 )
        goto LABEL_62;
      v37 = &Source;
      v35 = 4LL;
      v36 = 4LL;
    }
    memcpy_s(Buf2[0], v36, v37, v35);
    goto LABEL_62;
  }
  return 0;
}
