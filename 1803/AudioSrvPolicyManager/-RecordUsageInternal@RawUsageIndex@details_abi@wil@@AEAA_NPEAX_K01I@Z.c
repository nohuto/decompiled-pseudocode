/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180004EB8
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180004A78 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x180001570 (memcpy_s.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18000464C (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180004744 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180004BD4 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     _invalid_parameter_noinfo @ 0x180035AB6 (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x1800362A7 (memcmp_0.c)
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
  char *v11; // rdi
  char v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // esi
  unsigned int v18; // r14d
  unsigned int v19; // esi
  unsigned __int8 *v20; // r8
  char v22; // si
  __int64 v23; // rcx
  int v24; // r13d
  _WORD *v25; // r14
  __int64 v26; // rax
  __int64 v27; // r15
  char *v28; // rcx
  size_t v29; // r8
  unsigned __int8 *v30; // r8
  void *Src; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v32; // [rsp+38h] [rbp-48h] BYREF
  char v33; // [rsp+3Ah] [rbp-46h]
  unsigned int Source; // [rsp+3Ch] [rbp-44h] BYREF
  unsigned __int16 v35; // [rsp+40h] [rbp-40h]
  void *Buf2[2]; // [rsp+48h] [rbp-38h]
  __int16 v37; // [rsp+58h] [rbp-28h] BYREF
  char v38; // [rsp+5Ah] [rbp-26h]
  unsigned int v39; // [rsp+5Ch] [rbp-24h]
  __int16 v40; // [rsp+60h] [rbp-20h]
  __int128 v41; // [rsp+68h] [rbp-18h]
  char v42; // [rsp+C0h] [rbp+40h]

  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v32 = *((_WORD *)this + 1);
    v11 = (char *)(v6 + 10);
    v12 = 0;
    v33 = *((_BYTE *)this + 4);
    Source = 0;
    v35 = 0;
    *(_OWORD *)Buf2 = 0LL;
    v42 = 0;
    while ( 1 )
    {
      v20 = (unsigned __int8 *)*((_QWORD *)this + 4);
      Src = v11;
      if ( !wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v32,
              (unsigned __int8 **)&Src,
              v20) )
      {
        v11 = (char *)Src;
        *((_QWORD *)this + 4) = Src;
        goto LABEL_33;
      }
      v14 = Size == v35 ? (unsigned int)memcmp_0(Buf1, Buf2[1], Size) : (unsigned int)Size - v35;
      if ( (int)v14 < 0 )
        break;
      if ( !(_DWORD)v14 )
      {
        Src = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                this,
                (struct wil::details_abi::UsageIndexProperty *)&v32,
                (unsigned __int8 *)Src,
                a4,
                a5,
                a6);
        v11 = (char *)Src;
        if ( Src )
        {
          v12 = 1;
          v42 = 1;
          goto LABEL_33;
        }
        return 1;
      }
      v11 = (char *)Src;
      if ( *((_QWORD *)this + 2) )
      {
        v15 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
        v16 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) % *((_QWORD *)this + 2);
        v17 = Source;
        if ( Source > v15 && Source != (_DWORD)v15 )
        {
          v17 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
          Source = v17;
          if ( v33 == 1 )
          {
            if ( Buf2[0] )
            {
              *(_WORD *)Buf2[0] = v15;
            }
            else
            {
              *(_DWORD *)_o__errno(0LL, v16) = 22;
              invalid_parameter_noinfo();
            }
          }
          else if ( v33 == 2 )
          {
            memcpy_s(Buf2[0], 4uLL, &Source, 4uLL);
            v17 = Source;
          }
        }
        v11 += *((_QWORD *)this + 2) * v17;
      }
      else
      {
        v18 = Source;
        v19 = 0;
        v37 = *((_WORD *)this + 3);
        v38 = *((_BYTE *)this + 8);
        v39 = 0;
        v40 = 0;
        v41 = 0LL;
        if ( Source )
        {
          v12 = 0;
          do
          {
            if ( !wil::details_abi::UsageIndexProperty::Read(
                    (wil::details_abi::UsageIndexProperty *)&v37,
                    (unsigned __int8 **)&Src,
                    *((unsigned __int8 **)this + 4)) )
              break;
            ++v19;
          }
          while ( v19 < v18 );
          v11 = (char *)Src;
        }
        if ( v18 != v19 )
        {
          Source = v19;
          if ( v33 == 1 )
          {
            if ( Buf2[0] )
            {
              *(_WORD *)Buf2[0] = v19;
            }
            else
            {
              *(_DWORD *)_o__errno(v14, v13) = 22;
              invalid_parameter_noinfo();
            }
          }
          else if ( v33 == 2 )
          {
            memcpy_s(Buf2[0], 4uLL, &Source, 4uLL);
          }
        }
      }
    }
    Src = v11;
LABEL_33:
    v22 = v33;
    v23 = 0LL;
    if ( v12 )
    {
      v25 = Buf2[0];
      v24 = Source;
    }
    else
    {
      v24 = 1;
      Source = 1;
      v25 = 0LL;
      v35 = Size;
      Buf2[0] = 0LL;
      Buf2[1] = Buf1;
      v23 = v32 ? v32 : (unsigned __int16)Size + 2LL;
      if ( v33 == 1 )
      {
        v23 += 2LL;
      }
      else if ( v33 == 2 )
      {
        v23 += 4LL;
      }
    }
    LOWORD(v26) = *((_WORD *)this + 3);
    LOBYTE(v13) = *((_BYTE *)this + 8);
    v39 = a6;
    v40 = a5;
    v37 = v26;
    v38 = v13;
    *(_QWORD *)&v41 = 0LL;
    *((_QWORD *)&v41 + 1) = a4;
    v26 = (_WORD)v26 ? (unsigned __int16)v26 : (unsigned __int16)a5 + 2LL;
    if ( (_BYTE)v13 == 1 )
    {
      v26 += 2LL;
    }
    else if ( (_BYTE)v13 == 2 )
    {
      v26 += 4LL;
    }
    v27 = v26 + v23;
    if ( ((*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) & (unsigned __int64)-(__int64)(*((_QWORD *)this + 4) < *((_QWORD *)this + 5))) >= v26 + v23 )
    {
      v28 = &v11[v27];
      v29 = *((_QWORD *)this + 4) - (_QWORD)v11;
      if ( v29 )
      {
        if ( v28 && v11 )
        {
          if ( *((_QWORD *)this + 5) - v27 - (__int64)v11 >= v29 )
          {
            memmove(v28, v11, v29);
            goto LABEL_61;
          }
          *(_DWORD *)_o__errno(v28, v13) = 34;
        }
        else
        {
          *(_DWORD *)_o__errno(v28, v13) = 22;
        }
        invalid_parameter_noinfo();
      }
LABEL_61:
      v30 = (unsigned __int8 *)(*((_QWORD *)this + 4) + v27);
      *((_QWORD *)this + 4) = v30;
      if ( v42 )
      {
        if ( v22 )
        {
          Source = v24 + 1;
          if ( v22 == 1 )
          {
            if ( v25 )
            {
              *v25 = v24 + 1;
            }
            else
            {
              *(_DWORD *)_o__errno(v28, v13) = 22;
              invalid_parameter_noinfo();
            }
          }
          else if ( v22 == 2 )
          {
            memcpy_s(v25, 4uLL, &Source, 4uLL);
          }
        }
      }
      else
      {
        wil::details_abi::UsageIndexProperty::Write(
          (wil::details_abi::UsageIndexProperty *)&v32,
          (unsigned __int8 **)&Src,
          v30);
      }
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v37,
        (unsigned __int8 **)&Src,
        *((unsigned __int8 **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
  }
  return 0;
}
