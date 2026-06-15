/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180006790
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800064D0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180006D70 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180006F18 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     memcpy_s @ 0x180015EBC (memcpy_s.c)
 *     memcmp_0 @ 0x1800657A9 (memcmp_0.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x180098A8C (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  unsigned __int64 v6; // r14
  unsigned int v7; // edi
  void *v8; // r10
  unsigned __int8 v9; // r9
  __int16 v11; // r8
  unsigned __int8 *v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  size_t v17; // rdx
  unsigned __int64 v18; // r13
  unsigned __int8 *v19; // r14
  unsigned __int64 v20; // r12
  unsigned __int8 *v21; // rbx
  unsigned __int8 *v22; // rsi
  int v23; // eax
  int v24; // ecx
  unsigned __int8 *v25; // r8
  int v26; // r12d
  char v27; // al
  void *v29; // r14
  unsigned __int8 *v30; // r8
  unsigned __int8 v31; // [rsp+20h] [rbp-60h]
  __int16 v32; // [rsp+22h] [rbp-5Eh]
  unsigned __int16 Destination; // [rsp+24h] [rbp-5Ch] BYREF
  __int16 v34; // [rsp+28h] [rbp-58h]
  unsigned __int8 v35; // [rsp+2Ah] [rbp-56h]
  int v36; // [rsp+2Ch] [rbp-54h] BYREF
  __int16 v37; // [rsp+30h] [rbp-50h] BYREF
  void *Buf2[2]; // [rsp+38h] [rbp-48h]
  __int16 v39; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 v40; // [rsp+4Ah] [rbp-36h]
  int v41; // [rsp+4Ch] [rbp-34h]
  unsigned __int16 v42; // [rsp+50h] [rbp-30h]
  void *v43[2]; // [rsp+58h] [rbp-28h]
  unsigned __int8 *v44; // [rsp+68h] [rbp-18h]
  unsigned __int8 *v45; // [rsp+70h] [rbp-10h]
  unsigned __int8 *v46; // [rsp+C0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+D8h] [rbp+58h]

  Buf1 = a4;
  v46 = (unsigned __int8 *)this;
  v6 = *((_QWORD *)this + 2);
  v7 = 0;
  v8 = a4;
  v41 = 0;
  v9 = *((_BYTE *)this + 8);
  v11 = *((_WORD *)this + 3);
  v32 = v11;
  v39 = v11;
  v31 = v9;
  v13 = (unsigned __int8 *)this;
  v40 = v9;
  v42 = 0;
  *(_OWORD *)v43 = 0LL;
  if ( v6 )
  {
    v14 = *((_QWORD *)this + 4) - *((_QWORD *)this + 3);
    if ( v6 == 4 )
      v15 = v14 >> 2;
    else
      v15 = v14 / v6;
    v16 = *((unsigned int *)a2 + 1);
    if ( v16 > v15 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v15);
      v11 = *((_WORD *)v13 + 3);
      v9 = v13[8];
      LODWORD(v16) = *((_DWORD *)a2 + 1);
      v6 = *((_QWORD *)v13 + 2);
      v8 = Buf1;
      v32 = v11;
      v31 = v9;
    }
    v17 = Size;
    v18 = (unsigned int)v16;
    *(_OWORD *)Buf2 = 0LL;
    v34 = v11;
    v19 = &a3[(unsigned int)v16 * v6];
    v35 = v9;
    v45 = v19;
    v36 = 0;
    v37 = 0;
    if ( (_DWORD)v16 )
    {
      while ( 1 )
      {
        v20 = *((_QWORD *)v13 + 4);
        v21 = &a3[(v18 >> 1) * *((_QWORD *)v13 + 2)];
        v22 = v21;
        if ( v9 == 1 )
        {
          v22 = v21 + 2;
          if ( (unsigned __int64)(v21 + 2) > v20 )
            goto LABEL_12;
          Buf2[0] = v21;
          memcpy_s(&Destination, 2uLL, v21, 2uLL);
          v11 = v32;
          v9 = v31;
          v36 = Destination;
        }
        else
        {
          if ( v9 != 2 )
            goto LABEL_9;
          v22 = v21 + 4;
          if ( (unsigned __int64)(v21 + 4) > v20 )
            goto LABEL_12;
          Buf2[0] = v21;
          memcpy_s(&v36, 4uLL, v21, 4uLL);
          v9 = v35;
          v11 = v34;
          v31 = v35;
          v32 = v34;
        }
        v8 = Buf1;
        v17 = Size;
LABEL_9:
        v37 = v11;
        LOWORD(v7) = v11;
        if ( v11 )
          goto LABEL_10;
        v44 = v22 + 2;
        if ( (unsigned __int64)(v22 + 2) <= v20 )
        {
          memcpy_s(&v37, 2uLL, v22, 2uLL);
          v9 = v35;
          v11 = v34;
          v22 = v44;
          LOWORD(v7) = v37;
          v17 = Size;
          v8 = Buf1;
          v31 = v35;
          v32 = v34;
LABEL_10:
          if ( (unsigned __int64)&v22[(unsigned __int16)v7] <= v20 )
          {
            Buf2[1] = v22;
            v21 = &v22[(unsigned __int16)v7];
          }
        }
LABEL_12:
        if ( v17 == (unsigned __int16)v7 )
        {
          v23 = memcmp_0(v8, Buf2[1], v17);
          v17 = Size;
          v24 = v23;
          v11 = v32;
          v9 = v31;
          v8 = Buf1;
        }
        else
        {
          v24 = v17 - (unsigned __int16)v7;
        }
        if ( v24 <= 0 )
          v18 >>= 1;
        else
          v18 += -1LL - (v18 >> 1);
        v13 = v46;
        if ( v24 <= 0 )
          v21 = a3;
        a3 = v21;
        if ( !v18 )
        {
          v19 = v45;
          break;
        }
      }
    }
    if ( a3 >= v19 )
      return a3;
    v25 = (unsigned __int8 *)*((_QWORD *)v13 + 4);
    v46 = a3;
    wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v39, &v46, v25);
    if ( Size == v42 )
      v26 = memcmp_0(Buf1, v43[1], Size);
    else
      v26 = Size - v42;
  }
  else
  {
    if ( !*((_DWORD *)a2 + 1) )
      return a3;
    v29 = Buf1;
    v26 = -1;
    while ( 1 )
    {
      v30 = (unsigned __int8 *)*((_QWORD *)v13 + 4);
      v46 = a3;
      if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v39, &v46, v30) )
        break;
      v26 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v39, v29, Size);
      if ( v26 > 0 )
      {
        a3 = v46;
        if ( ++v7 < *((_DWORD *)a2 + 1) )
          continue;
      }
      goto LABEL_23;
    }
    wil::details_abi::UsageIndexProperty::UpdateCount(a2, v7);
  }
LABEL_23:
  if ( !v26 )
  {
    if ( v40 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v39, v41 + a6);
    }
    else if ( !v13[56] )
    {
      v27 = 0;
LABEL_27:
      v13[56] = v27;
      return 0LL;
    }
    v27 = 1;
    goto LABEL_27;
  }
  return a3;
}
