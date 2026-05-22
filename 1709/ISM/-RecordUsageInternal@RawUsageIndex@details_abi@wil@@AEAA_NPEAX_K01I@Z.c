/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000CA9C
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18000C64C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s_0 @ 0x18000ADE8 (memcpy_s_0.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18000C220 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000C31C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18000C7A8 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     _invalid_parameter_noinfo @ 0x1800CAA36 (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x1800CC371 (memcmp_0.c)
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
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // esi
  unsigned int v16; // r14d
  unsigned int v17; // esi
  unsigned __int8 *v18; // r8
  char v20; // si
  __int64 v21; // rcx
  int v22; // r13d
  _WORD *v23; // r14
  __int64 v24; // rax
  char v25; // dl
  __int64 v26; // r15
  char *v27; // rcx
  size_t v28; // r8
  void *Src; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v30; // [rsp+38h] [rbp-48h] BYREF
  char v31; // [rsp+3Ah] [rbp-46h]
  unsigned int Source; // [rsp+3Ch] [rbp-44h] BYREF
  unsigned __int16 v33; // [rsp+40h] [rbp-40h]
  void *Buf2[2]; // [rsp+48h] [rbp-38h]
  __int16 v35; // [rsp+58h] [rbp-28h] BYREF
  char v36; // [rsp+5Ah] [rbp-26h]
  unsigned int v37; // [rsp+5Ch] [rbp-24h]
  __int16 v38; // [rsp+60h] [rbp-20h]
  __int128 v39; // [rsp+68h] [rbp-18h]
  char v40; // [rsp+C0h] [rbp+40h]

  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v30 = *((_WORD *)this + 1);
    v11 = (char *)(v6 + 10);
    v12 = 0;
    v31 = *((_BYTE *)this + 4);
    Source = 0;
    v33 = 0;
    *(_OWORD *)Buf2 = 0LL;
    v40 = 0;
    while ( 1 )
    {
      v18 = (unsigned __int8 *)*((_QWORD *)this + 4);
      Src = v11;
      if ( !wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v30,
              (unsigned __int8 **)&Src,
              v18) )
      {
        v11 = (char *)Src;
        *((_QWORD *)this + 4) = Src;
        goto LABEL_33;
      }
      v13 = Size == v33 ? (unsigned int)memcmp_0(Buf1, Buf2[1], Size) : (unsigned int)Size - v33;
      if ( (int)v13 < 0 )
        break;
      if ( !(_DWORD)v13 )
      {
        Src = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                this,
                (struct wil::details_abi::UsageIndexProperty *)&v30,
                (unsigned __int8 *)Src,
                a4,
                a5,
                a6);
        v11 = (char *)Src;
        if ( Src )
        {
          v12 = 1;
          v40 = 1;
          goto LABEL_33;
        }
        return 1;
      }
      v11 = (char *)Src;
      if ( *((_QWORD *)this + 2) )
      {
        v14 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
        v15 = Source;
        if ( Source > v14 && Source != (_DWORD)v14 )
        {
          v15 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
          Source = v15;
          if ( v31 == 1 )
          {
            if ( Buf2[0] )
            {
              *(_WORD *)Buf2[0] = v14;
            }
            else
            {
              *(_DWORD *)_o__errno(0LL) = 22;
              invalid_parameter_noinfo();
            }
          }
          else if ( v31 == 2 )
          {
            memcpy_s_0(Buf2[0], 4uLL, &Source, 4uLL);
            v15 = Source;
          }
        }
        v11 += *((_QWORD *)this + 2) * v15;
      }
      else
      {
        v16 = Source;
        v17 = 0;
        v35 = *((_WORD *)this + 3);
        v36 = *((_BYTE *)this + 8);
        v37 = 0;
        v38 = 0;
        v39 = 0LL;
        if ( Source )
        {
          v12 = 0;
          do
          {
            if ( !wil::details_abi::UsageIndexProperty::Read(
                    (wil::details_abi::UsageIndexProperty *)&v35,
                    (unsigned __int8 **)&Src,
                    *((unsigned __int8 **)this + 4)) )
              break;
            ++v17;
          }
          while ( v17 < v16 );
          v11 = (char *)Src;
        }
        if ( v16 != v17 )
        {
          Source = v17;
          if ( v31 == 1 )
          {
            if ( Buf2[0] )
            {
              *(_WORD *)Buf2[0] = v17;
            }
            else
            {
              *(_DWORD *)_o__errno(v13) = 22;
              invalid_parameter_noinfo();
            }
          }
          else if ( v31 == 2 )
          {
            memcpy_s_0(Buf2[0], 4uLL, &Source, 4uLL);
          }
        }
      }
    }
    Src = v11;
LABEL_33:
    v20 = v31;
    v21 = 0LL;
    if ( v12 )
    {
      v23 = Buf2[0];
      v22 = Source;
    }
    else
    {
      v22 = 1;
      Source = 1;
      v23 = 0LL;
      v33 = Size;
      Buf2[0] = 0LL;
      Buf2[1] = Buf1;
      v21 = v30 ? v30 : (unsigned __int16)Size + 2LL;
      if ( v31 == 1 )
      {
        v21 += 2LL;
      }
      else if ( v31 == 2 )
      {
        v21 += 4LL;
      }
    }
    LOWORD(v24) = *((_WORD *)this + 3);
    v25 = *((_BYTE *)this + 8);
    v37 = a6;
    v38 = a5;
    v35 = v24;
    v36 = v25;
    *(_QWORD *)&v39 = 0LL;
    *((_QWORD *)&v39 + 1) = a4;
    v24 = (_WORD)v24 ? (unsigned __int16)v24 : (unsigned __int16)a5 + 2LL;
    if ( v25 == 1 )
    {
      v24 += 2LL;
    }
    else if ( v25 == 2 )
    {
      v24 += 4LL;
    }
    v26 = v24 + v21;
    if ( ((*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) & (unsigned __int64)-(__int64)(*((_QWORD *)this + 4) < *((_QWORD *)this + 5))) >= v24 + v21 )
    {
      v27 = &v11[v26];
      v28 = *((_QWORD *)this + 4) - (_QWORD)v11;
      if ( v28 )
      {
        if ( v27 && v11 )
        {
          if ( *((_QWORD *)this + 5) - v26 - (__int64)v11 >= v28 )
          {
            memmove(v27, v11, v28);
            goto LABEL_61;
          }
          *(_DWORD *)_o__errno(v27) = 34;
        }
        else
        {
          *(_DWORD *)_o__errno(v27) = 22;
        }
        invalid_parameter_noinfo();
      }
LABEL_61:
      *((_QWORD *)this + 4) += v26;
      if ( v40 )
      {
        if ( v20 )
        {
          Source = v22 + 1;
          if ( v20 == 1 )
          {
            if ( v23 )
            {
              *v23 = v22 + 1;
            }
            else
            {
              *(_DWORD *)_o__errno(v27) = 22;
              invalid_parameter_noinfo();
            }
          }
          else if ( v20 == 2 )
          {
            memcpy_s_0(v23, 4uLL, &Source, 4uLL);
          }
        }
      }
      else
      {
        wil::details_abi::UsageIndexProperty::Write(
          (wil::details_abi::UsageIndexProperty *)&v30,
          (unsigned __int8 **)&Src,
          *((unsigned __int8 **)this + 4));
      }
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v35,
        (unsigned __int8 **)&Src,
        *((unsigned __int8 **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
  }
  return 0;
}
