/*
 * XREFs of ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA65C
 * Callers:
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C00DA9D8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DAB54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00DAC64 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x1C01FBF14 (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
 */

void __fastcall CCD_SET_STRING_ID::_ParseMonitorDescriptors(CCD_SET_STRING_ID *this)
{
  char v2; // di
  unsigned __int16 v3; // si
  unsigned int v4; // ebp
  char v5; // dl
  void *v6; // rcx
  SIZE_T v7; // rax
  PVOID v8; // rax
  __int64 v9; // rcx
  __int16 v10; // bp
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int i; // edi
  __int64 v14; // rcx
  bool v15; // zf
  void *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned int v22; // esi
  __int64 v23; // r14
  unsigned int v24; // ebp
  unsigned __int16 v25; // r13
  unsigned __int16 v26; // r12
  int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // r14
  __int64 v31; // [rsp+60h] [rbp+8h]
  __int64 v32; // [rsp+68h] [rbp+10h]

  if ( !*((_WORD *)this + 4) )
  {
    *((_WORD *)this + 16) = 0;
    v16 = (void *)*((_QWORD *)this + 3);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    *((_QWORD *)this + 3) = 0LL;
    return;
  }
  v2 = 0;
  v3 = 1;
  v4 = 0;
  do
  {
    v5 = *(_BYTE *)(v4 + *((_QWORD *)this + 2));
    if ( v5 < 42 )
      goto LABEL_7;
    if ( v5 <= 43 )
    {
      ++v3;
      if ( !v2 )
      {
        v2 = 43;
        goto LABEL_7;
      }
      v15 = v2 == 43;
    }
    else
    {
      if ( v5 != 94 && v5 != 126 )
        goto LABEL_7;
      ++v3;
      if ( !v2 )
      {
        v2 = *(_BYTE *)(v4 + *((_QWORD *)this + 2));
        goto LABEL_7;
      }
      v15 = v2 == v5;
    }
    if ( !v15 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v17);
    }
LABEL_7:
    ++v4;
  }
  while ( v4 < *((unsigned __int16 *)this + 4) );
  if ( v3 <= *((_WORD *)this + 16) )
    goto LABEL_14;
  v6 = (void *)*((_QWORD *)this + 3);
  *((_WORD *)this + 16) = 0;
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = 8LL * v3;
  if ( !is_mul_ok(v3, 8uLL) )
    v7 = -1LL;
  v8 = operator new(v7, 0x63644356u, PagedPool);
  *((_QWORD *)this + 3) = v8;
  if ( v8 )
  {
LABEL_14:
    v10 = 0;
    v11 = 0;
    **((_QWORD **)this + 3) = 0LL;
    *((_WORD *)this + 16) = 1;
    if ( *((_WORD *)this + 4) )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v11 + *((_QWORD *)this + 2)) == 42 )
          goto LABEL_26;
        if ( *(_BYTE *)(v11 + *((_QWORD *)this + 2)) == 43
          || *(_BYTE *)(v11 + *((_QWORD *)this + 2)) == 94
          || *(_BYTE *)(v11 + *((_QWORD *)this + 2)) == 126 )
        {
          break;
        }
LABEL_19:
        if ( ++v11 >= *((unsigned __int16 *)this + 4) )
          goto LABEL_20;
      }
      ++v10;
LABEL_26:
      v14 = *((unsigned __int16 *)this + 4);
      if ( v11 + 1 == (_DWORD)v14 )
      {
        *((_WORD *)this + 4) = v14 - 1;
      }
      else
      {
        v19 = *((_WORD *)this + 16);
        if ( v19 < v3
          || (v20 = WdLogNewEntry5_WdAssertion(v14), WdLogEvent5_WdAssertion(v20), v19 = *((_WORD *)this + 16), v19 < v3) )
        {
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v19) = v11 + 1;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 2) = v10;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 4) = 0;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 6) = (*((_WORD *)this + 16))++;
        }
      }
      goto LABEL_19;
    }
LABEL_20:
    v12 = *((unsigned __int16 *)this + 16) - 1;
    if ( *((_WORD *)this + 16) != 1 )
    {
      v21 = v12;
      v22 = 1;
      v31 = v12;
      v23 = 6LL;
      do
      {
        v24 = v22;
        if ( v22 <= v12 )
        {
          do
          {
            v32 = *((_QWORD *)this + 3);
            v25 = *(_WORD *)(v23 + v32);
            v26 = *(_WORD *)(v32 + 8LL * v24 + 6);
            v27 = CCD_SET_STRING_ID::_CompareDescriptors(this, v25, v26);
            if ( v27 > 0 || !v27 && v25 > v26 )
            {
              *(_WORD *)(v23 + v32) = v26;
              *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v24 + 6) = v25;
            }
            ++v24;
          }
          while ( v24 <= v12 );
          v21 = v31;
        }
        ++v22;
        v23 += 8LL;
        v31 = --v21;
      }
      while ( v21 );
    }
    for ( i = 1; i < *((unsigned __int16 *)this + 16); ++i )
    {
      v28 = *((_QWORD *)this + 3);
      v29 = *(unsigned __int16 *)(v28 + 8LL * (i - 1) + 6);
      v30 = *(unsigned __int16 *)(v28 + 8LL * i + 6);
      if ( !(unsigned int)CCD_SET_STRING_ID::_CompareDescriptors(
                            this,
                            *(unsigned __int16 *)(v28 + 8LL * i + 6),
                            *(unsigned __int16 *)(v28 + 8LL * (i - 1) + 6)) )
        *(_WORD *)(v28 + 8 * v30 + 4) = *(_WORD *)(v28 + 8 * v29 + 4) + 1;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v18 + 24) = v3;
    WdLogEvent5_WdLowResource(v18);
    *(_DWORD *)this = -1073741801;
  }
}
