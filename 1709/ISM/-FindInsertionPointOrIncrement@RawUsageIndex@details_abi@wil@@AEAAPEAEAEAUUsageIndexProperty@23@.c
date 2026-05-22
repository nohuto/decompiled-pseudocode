/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18000C7A8
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000CA9C (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s_0 @ 0x18000ADE8 (memcpy_s_0.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000C31C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800CAA36 (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x1800CC371 (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  char v6; // bl
  int v7; // r13d
  void *v8; // r14
  _DWORD *v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  _WORD *v16; // rax
  unsigned __int64 v17; // rsi
  size_t v18; // rdi
  __int64 v19; // rax
  unsigned __int8 *v20; // r8
  int v21; // ecx
  unsigned __int8 *v22; // r8
  __int64 v23; // rcx
  _DWORD *v24; // rdi
  int v25; // r14d
  unsigned __int8 *v26; // r8
  bool v27; // zf
  _WORD *v28; // rax
  bool v29; // di
  __int16 v30; // r8
  unsigned __int8 *v32; // [rsp+20h] [rbp-50h]
  __int16 v33; // [rsp+28h] [rbp-48h] BYREF
  char v34; // [rsp+2Ah] [rbp-46h]
  int Source; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned __int16 v36; // [rsp+30h] [rbp-40h]
  void *Destination[2]; // [rsp+38h] [rbp-38h]
  __int16 v38; // [rsp+48h] [rbp-28h] BYREF
  char v39; // [rsp+4Ah] [rbp-26h]
  int v40; // [rsp+4Ch] [rbp-24h]
  unsigned __int16 v41; // [rsp+50h] [rbp-20h]
  void *Buf2[2]; // [rsp+58h] [rbp-18h]
  unsigned __int8 *v43; // [rsp+B0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+C8h] [rbp+58h]

  Buf1 = a4;
  v6 = 0;
  v7 = -1;
  v33 = *((_WORD *)this + 3);
  v8 = a4;
  v34 = *((_BYTE *)this + 8);
  Source = 0;
  v36 = 0;
  *(_OWORD *)Destination = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (_DWORD *)((char *)a2 + 4);
    v13 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
    v14 = *((unsigned int *)a2 + 1);
    if ( v14 > v13 && (_DWORD)v14 != (_DWORD)v13 )
    {
      v27 = *((_BYTE *)a2 + 2) == 1;
      *v12 = v13;
      if ( v27 )
      {
        v15 = (unsigned __int16)v13;
        v16 = (_WORD *)*((_QWORD *)a2 + 2);
        if ( v16 )
        {
          *v16 = v15;
        }
        else
        {
          *(_DWORD *)_o__errno(v15) = 22;
          invalid_parameter_noinfo();
        }
      }
      else if ( *((_BYTE *)a2 + 2) == 2 )
      {
        memcpy_s_0(*((void *const *)a2 + 2), 4uLL, (char *)a2 + 4, 4uLL);
      }
    }
    v17 = (unsigned int)*v12;
    v18 = Size;
    v19 = v17 * *((_QWORD *)this + 2);
    *(_OWORD *)Buf2 = 0LL;
    v40 = 0;
    v41 = 0;
    v32 = &a3[v19];
    v38 = *((_WORD *)this + 3);
    v39 = *((_BYTE *)this + 8);
    if ( v17 )
    {
      do
      {
        v20 = (unsigned __int8 *)*((_QWORD *)this + 4);
        v43 = &a3[(v17 >> 1) * *((_QWORD *)this + 2)];
        wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v38, &v43, v20);
        if ( v18 == v41 )
          v21 = memcmp_0(Buf1, Buf2[1], v18);
        else
          v21 = v18 - v41;
        if ( v21 <= 0 )
        {
          v17 >>= 1;
        }
        else
        {
          a3 = v43;
          v17 += -1LL - (v17 >> 1);
        }
      }
      while ( v17 );
      v8 = Buf1;
    }
    if ( a3 < v32 )
    {
      v22 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v43 = a3;
      wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v33, &v43, v22);
      if ( v18 == v36 )
        v7 = memcmp_0(v8, Destination[1], v18);
      else
        v7 = v18 - v36;
      goto LABEL_38;
    }
    return a3;
  }
  v24 = (_DWORD *)((char *)a2 + 4);
  v25 = 0;
  if ( !*((_DWORD *)a2 + 1) )
    return a3;
  while ( 1 )
  {
    v26 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v43 = a3;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v33, &v43, v26) )
      break;
    if ( Size == v36 )
    {
      v7 = memcmp_0(Buf1, Destination[1], Size);
    }
    else
    {
      v23 = (unsigned int)Size - v36;
      v7 = Size - v36;
    }
    v27 = v7 == 0;
    if ( v7 <= 0 )
      goto LABEL_39;
    a3 = v43;
    if ( (unsigned int)++v25 >= *v24 )
      goto LABEL_38;
  }
  if ( *v24 != v25 )
  {
    v27 = *((_BYTE *)a2 + 2) == 1;
    *v24 = v25;
    if ( v27 )
    {
      v28 = (_WORD *)*((_QWORD *)a2 + 2);
      v23 = (unsigned __int16)v25;
      if ( v28 )
      {
        *v28 = v25;
      }
      else
      {
        *(_DWORD *)_o__errno((unsigned __int16)v25) = 22;
        invalid_parameter_noinfo();
      }
    }
    else if ( *((_BYTE *)a2 + 2) == 2 )
    {
      memcpy_s_0(*((void *const *)a2 + 2), 4uLL, v24, 4uLL);
    }
  }
LABEL_38:
  v27 = v7 == 0;
LABEL_39:
  if ( !v27 )
    return a3;
  v29 = v34 != 0;
  if ( v34 )
  {
    v30 = Source + a6;
    if ( Source != Source + a6 )
    {
      Source += a6;
      if ( v34 == 1 )
      {
        if ( Destination[0] )
        {
          *(_WORD *)Destination[0] = v30;
        }
        else
        {
          *(_DWORD *)_o__errno(v23) = 22;
          invalid_parameter_noinfo();
        }
      }
      else if ( v34 == 2 )
      {
        memcpy_s_0(Destination[0], 4uLL, &Source, 4uLL);
      }
    }
  }
  if ( v29 || *((_BYTE *)this + 56) )
    v6 = 1;
  *((_BYTE *)this + 56) = v6;
  return 0LL;
}
