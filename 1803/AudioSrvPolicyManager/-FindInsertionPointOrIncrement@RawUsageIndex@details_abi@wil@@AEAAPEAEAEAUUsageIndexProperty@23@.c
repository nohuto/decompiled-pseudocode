/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180004BD4
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180004EB8 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x180001570 (memcpy_s.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180004744 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     _invalid_parameter_noinfo @ 0x180035AB6 (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x1800362A7 (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  _DWORD *v6; // rdi
  char v7; // bl
  int v8; // r12d
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  _WORD *v16; // rax
  unsigned __int64 v17; // rsi
  size_t v18; // rdi
  __int64 v19; // rax
  unsigned __int8 *v20; // r8
  int v21; // ecx
  unsigned __int8 *v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // esi
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
  v6 = (_DWORD *)((char *)a2 + 4);
  v7 = 0;
  v33 = *((_WORD *)this + 3);
  v8 = -1;
  v34 = *((_BYTE *)this + 8);
  Source = 0;
  v36 = 0;
  *(_OWORD *)Destination = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
    v13 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) % *((_QWORD *)this + 2);
    v14 = (unsigned int)*v6;
    if ( v14 > v12 && (_DWORD)v14 != (_DWORD)v12 )
    {
      v27 = *((_BYTE *)a2 + 2) == 1;
      *v6 = v12;
      if ( v27 )
      {
        v15 = (unsigned __int16)v12;
        v16 = (_WORD *)*((_QWORD *)a2 + 2);
        if ( v16 )
        {
          *v16 = v15;
        }
        else
        {
          *(_DWORD *)_o__errno(v15, v13) = 22;
          invalid_parameter_noinfo();
        }
      }
      else if ( *((_BYTE *)a2 + 2) == 2 )
      {
        memcpy_s(*((void *const *)a2 + 2), 4uLL, v6, 4uLL);
      }
    }
    v17 = (unsigned int)*v6;
    v18 = Size;
    v19 = v17 * *((_QWORD *)this + 2);
    *(_OWORD *)Buf2 = 0LL;
    v40 = 0;
    v41 = 0;
    v32 = &a3[v19];
    v38 = *((_WORD *)this + 3);
    v39 = *((_BYTE *)this + 8);
    while ( v17 )
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
    if ( a3 < v32 )
    {
      v22 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v43 = a3;
      wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v33, &v43, v22);
      if ( v18 == v36 )
        v8 = memcmp_0(Buf1, Destination[1], v18);
      else
        v8 = v18 - v36;
      goto LABEL_37;
    }
    return a3;
  }
  v25 = 0;
  if ( !*v6 )
    return a3;
  while ( 1 )
  {
    v26 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v43 = a3;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v33, &v43, v26) )
      break;
    if ( Size == v36 )
    {
      v8 = memcmp_0(Buf1, Destination[1], Size);
    }
    else
    {
      v24 = (unsigned int)Size - v36;
      v8 = Size - v36;
    }
    v27 = v8 == 0;
    if ( v8 <= 0 )
      goto LABEL_38;
    a3 = v43;
    if ( (unsigned int)++v25 >= *v6 )
      goto LABEL_37;
  }
  if ( *v6 != v25 )
  {
    v27 = *((_BYTE *)a2 + 2) == 1;
    *v6 = v25;
    if ( v27 )
    {
      v28 = (_WORD *)*((_QWORD *)a2 + 2);
      if ( v28 )
      {
        *v28 = v25;
      }
      else
      {
        *(_DWORD *)((__int64 (*)(void))_o__errno)() = 22;
        invalid_parameter_noinfo();
      }
    }
    else if ( *((_BYTE *)a2 + 2) == 2 )
    {
      memcpy_s(*((void *const *)a2 + 2), 4uLL, v6, 4uLL);
    }
  }
LABEL_37:
  v27 = v8 == 0;
LABEL_38:
  if ( !v27 )
    return a3;
  LOBYTE(v23) = v34;
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
          *(_DWORD *)_o__errno(v24, v23) = 22;
          invalid_parameter_noinfo();
        }
      }
      else if ( v34 == 2 )
      {
        memcpy_s(Destination[0], 4uLL, &Source, 4uLL);
      }
    }
  }
  if ( v29 || *((_BYTE *)this + 56) )
    v7 = 1;
  *((_BYTE *)this + 56) = v7;
  return 0LL;
}
