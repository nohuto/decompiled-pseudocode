/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180029A9C
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800297E0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180029FCC (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18002A174 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     memcpy_s @ 0x18002A1B0 (memcpy_s.c)
 *     memcmp_0 @ 0x180057F9A (memcmp_0.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18007CFE4 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
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
  int v7; // r12d
  void *v8; // r13
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int16 v14; // r8
  unsigned __int16 v15; // dx
  char v16; // r9
  size_t v17; // rsi
  __int64 v18; // rax
  unsigned __int8 *v19; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int8 *v22; // r14
  unsigned __int8 *v23; // r13
  int v24; // eax
  int v25; // ecx
  unsigned __int8 *v26; // r8
  unsigned int v28; // r14d
  unsigned __int8 *v29; // r8
  __int16 v30; // [rsp+20h] [rbp-59h]
  unsigned __int16 Destination; // [rsp+24h] [rbp-55h] BYREF
  __int16 v32; // [rsp+28h] [rbp-51h]
  char v33; // [rsp+2Ah] [rbp-4Fh]
  int v34; // [rsp+2Ch] [rbp-4Dh] BYREF
  unsigned __int16 v35; // [rsp+30h] [rbp-49h] BYREF
  void *Buf2[2]; // [rsp+38h] [rbp-41h]
  unsigned __int64 v37; // [rsp+48h] [rbp-31h]
  unsigned __int64 v38; // [rsp+50h] [rbp-29h]
  __int16 v39; // [rsp+58h] [rbp-21h] BYREF
  char v40; // [rsp+5Ah] [rbp-1Fh]
  int v41; // [rsp+5Ch] [rbp-1Dh]
  unsigned __int16 v42; // [rsp+60h] [rbp-19h]
  void *v43[2]; // [rsp+68h] [rbp-11h]
  unsigned __int64 v44; // [rsp+78h] [rbp-1h]
  unsigned __int8 *v45; // [rsp+80h] [rbp+7h]
  unsigned __int8 *v46; // [rsp+88h] [rbp+Fh]
  unsigned __int8 *v47; // [rsp+D0h] [rbp+57h] BYREF
  void *Buf1; // [rsp+E8h] [rbp+6Fh]

  Buf1 = a4;
  v6 = 0;
  v39 = *((_WORD *)this + 3);
  v7 = -1;
  v8 = a4;
  v40 = *((_BYTE *)this + 8);
  v41 = 0;
  v42 = 0;
  *(_OWORD *)v43 = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
    if ( *((unsigned int *)a2 + 1) > v12 )
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v12);
    v13 = *((unsigned int *)a2 + 1);
    v14 = *((_WORD *)this + 3);
    v15 = 0;
    v16 = *((_BYTE *)this + 8);
    v17 = Size;
    v18 = v13 * *((_QWORD *)this + 2);
    *(_OWORD *)Buf2 = 0LL;
    v38 = v13;
    v19 = &a3[v18];
    v30 = v14;
    v46 = v19;
    v32 = v14;
    LOBYTE(v47) = v16;
    v33 = v16;
    v34 = 0;
    v35 = 0;
    if ( v13 )
    {
      while ( 1 )
      {
        v20 = (v13 >> 1) * *((_QWORD *)this + 2);
        v44 = v13 >> 1;
        v21 = *((_QWORD *)this + 4);
        v22 = &a3[v20];
        v37 = v21;
        v23 = v22;
        if ( v16 == 1 )
        {
          v23 = v22 + 2;
          if ( (unsigned __int64)(v22 + 2) > v21 )
            goto LABEL_10;
          Buf2[0] = v22;
          memcpy_s(&Destination, 2uLL, v22, 2uLL);
          v14 = v30;
          v34 = Destination;
        }
        else
        {
          if ( v16 != 2 )
            goto LABEL_7;
          v23 = v22 + 4;
          if ( (unsigned __int64)(v22 + 4) > v21 )
            goto LABEL_10;
          Buf2[0] = v22;
          memcpy_s(&v34, 4uLL, v22, 4uLL);
          v14 = v32;
          LOBYTE(v47) = v33;
          v30 = v32;
        }
        v21 = v37;
LABEL_7:
        v15 = v14;
        v35 = v14;
        if ( v14 )
          goto LABEL_8;
        v45 = v23 + 2;
        if ( (unsigned __int64)(v23 + 2) <= v21 )
        {
          memcpy_s(&v35, 2uLL, v23, 2uLL);
          v23 = v45;
          v15 = v35;
          LOBYTE(v47) = v33;
          v30 = v32;
LABEL_8:
          if ( (unsigned __int64)&v23[v15] <= v37 )
          {
            Buf2[1] = v23;
            v22 = &v23[v15];
          }
        }
LABEL_10:
        v8 = Buf1;
        if ( v17 == v15 )
        {
          v24 = memcmp_0(Buf1, Buf2[1], v17);
          v15 = v35;
          v25 = v24;
        }
        else
        {
          v25 = v17 - v15;
        }
        if ( v25 <= 0 )
        {
          v13 = v44;
        }
        else
        {
          a3 = v22;
          v13 = -1LL - v44 + v38;
        }
        v14 = v30;
        v16 = (char)v47;
        v38 = v13;
        if ( !v13 )
        {
          v19 = v46;
          break;
        }
      }
    }
    if ( a3 >= v19 )
      return a3;
    v26 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v47 = a3;
    wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v39, &v47, v26);
    if ( v17 == v42 )
      v7 = memcmp_0(v8, v43[1], v17);
    else
      v7 = v17 - v42;
  }
  else
  {
    v28 = 0;
    if ( !*((_DWORD *)a2 + 1) )
      return a3;
    while ( 1 )
    {
      v29 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v47 = a3;
      if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v39, &v47, v29) )
        break;
      v7 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v39, v8, Size);
      if ( v7 > 0 )
      {
        a3 = v47;
        if ( ++v28 < *((_DWORD *)a2 + 1) )
          continue;
      }
      goto LABEL_19;
    }
    wil::details_abi::UsageIndexProperty::UpdateCount(a2, v28);
  }
LABEL_19:
  if ( !v7 )
  {
    if ( v40 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v39, a6 + v41);
    }
    else if ( !*((_BYTE *)this + 56) )
    {
LABEL_22:
      *((_BYTE *)this + 56) = v6;
      return 0LL;
    }
    v6 = 1;
    goto LABEL_22;
  }
  return a3;
}
