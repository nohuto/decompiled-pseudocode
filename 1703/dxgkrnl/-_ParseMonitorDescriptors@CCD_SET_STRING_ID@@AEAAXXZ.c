/*
 * XREFs of ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B0FE4
 * Callers:
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00B1474 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C00B1584 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00B15E8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x1C01DEE54 (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
 */

void __fastcall CCD_SET_STRING_ID::_ParseMonitorDescriptors(
        CCD_SET_STRING_ID *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // di
  unsigned __int16 v6; // si
  unsigned int v7; // ebp
  void *v8; // rcx
  unsigned __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rcx
  __int16 v12; // bp
  unsigned int v13; // edi
  __int64 v14; // rdx
  unsigned int v15; // edi
  unsigned int i; // edi
  __int64 v17; // rcx
  bool v18; // zf
  void *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // r14
  unsigned int v25; // esi
  __int64 v26; // r15
  unsigned int v27; // ebp
  unsigned __int16 v28; // r13
  unsigned __int16 v29; // r12
  int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // rbp
  __int64 v33; // r14
  __int64 v34; // [rsp+60h] [rbp+8h]
  __int64 v35; // [rsp+68h] [rbp+10h]

  if ( !*((_WORD *)this + 4) )
  {
    *((_WORD *)this + 16) = 0;
    v19 = (void *)*((_QWORD *)this + 3);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    *((_QWORD *)this + 3) = 0LL;
    return;
  }
  v5 = 0;
  v6 = 1;
  v7 = 0;
  do
  {
    LOBYTE(a2) = *(_BYTE *)(v7 + *((_QWORD *)this + 2));
    if ( (char)a2 < 42 )
      goto LABEL_7;
    if ( (char)a2 <= 43 )
    {
      ++v6;
      if ( !v5 )
      {
        v5 = 43;
        goto LABEL_7;
      }
      v18 = v5 == 43;
    }
    else
    {
      if ( (_BYTE)a2 != 94 && (_BYTE)a2 != 126 )
        goto LABEL_7;
      ++v6;
      if ( !v5 )
      {
        v5 = *(_BYTE *)(v7 + *((_QWORD *)this + 2));
        goto LABEL_7;
      }
      v18 = v5 == (char)a2;
    }
    if ( !v18 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v7, a2, a3, a4);
      WdLogEvent5_WdAssertion(v20);
    }
LABEL_7:
    ++v7;
  }
  while ( v7 < *((unsigned __int16 *)this + 4) );
  if ( v6 <= *((_WORD *)this + 16) )
    goto LABEL_14;
  v8 = (void *)*((_QWORD *)this + 3);
  *((_WORD *)this + 16) = 0;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = 8LL * v6;
  if ( !is_mul_ok(v6, 8uLL) )
    v9 = -1LL;
  v10 = operator new(v9, 0x63644356u, PagedPool);
  *((_QWORD *)this + 3) = v10;
  if ( v10 )
  {
LABEL_14:
    v12 = 0;
    v13 = 0;
    **((_QWORD **)this + 3) = 0LL;
    *((_WORD *)this + 16) = 1;
    if ( *((_WORD *)this + 4) )
    {
      while ( 1 )
      {
        v14 = (unsigned int)(*(char *)(v13 + *((_QWORD *)this + 2)) - 42);
        if ( *(_BYTE *)(v13 + *((_QWORD *)this + 2)) == 42 )
          goto LABEL_26;
        v14 = (unsigned int)(*(char *)(v13 + *((_QWORD *)this + 2)) - 43);
        if ( *(_BYTE *)(v13 + *((_QWORD *)this + 2)) == 43 )
          break;
        v14 = (unsigned int)(*(char *)(v13 + *((_QWORD *)this + 2)) - 94);
        if ( *(_BYTE *)(v13 + *((_QWORD *)this + 2)) == 94 || *(_BYTE *)(v13 + *((_QWORD *)this + 2)) == 126 )
          break;
LABEL_19:
        if ( ++v13 >= *((unsigned __int16 *)this + 4) )
          goto LABEL_20;
      }
      ++v12;
LABEL_26:
      v17 = *((unsigned __int16 *)this + 4);
      if ( v13 + 1 == (_DWORD)v17 )
      {
        *((_WORD *)this + 4) = v17 - 1;
      }
      else
      {
        v22 = *((_WORD *)this + 16);
        if ( v22 < v6
          || (v23 = WdLogNewEntry5_WdAssertion(v17, v14, a3, a4),
              WdLogEvent5_WdAssertion(v23),
              v22 = *((_WORD *)this + 16),
              v22 < v6) )
        {
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v22) = v13 + 1;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 2) = v12;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 4) = 0;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 6) = (*((_WORD *)this + 16))++;
        }
      }
      goto LABEL_19;
    }
LABEL_20:
    v15 = *((unsigned __int16 *)this + 16) - 1;
    if ( *((_WORD *)this + 16) != 1 )
    {
      v24 = 0LL;
      v25 = 1;
      v26 = v15;
      v34 = v15;
      do
      {
        v27 = v25;
        if ( v25 <= v15 )
        {
          do
          {
            v35 = *((_QWORD *)this + 3);
            v28 = *(_WORD *)(v24 + v35 + 6);
            v29 = *(_WORD *)(v35 + 8LL * v27 + 6);
            v30 = CCD_SET_STRING_ID::_CompareDescriptors(this, v28, v29);
            if ( v30 > 0 || !v30 && v28 > v29 )
            {
              *(_WORD *)(v24 + v35 + 6) = v29;
              *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v27 + 6) = v28;
            }
            ++v27;
          }
          while ( v27 <= v15 );
          v26 = v34;
        }
        ++v25;
        v24 += 8LL;
        v34 = --v26;
      }
      while ( v26 );
    }
    for ( i = 1; i < *((unsigned __int16 *)this + 16); ++i )
    {
      v31 = *((_QWORD *)this + 3);
      v32 = *(unsigned __int16 *)(v31 + 8LL * (i - 1) + 6);
      v33 = *(unsigned __int16 *)(v31 + 8LL * i + 6);
      if ( !(unsigned int)CCD_SET_STRING_ID::_CompareDescriptors(
                            this,
                            *(unsigned __int16 *)(v31 + 8LL * i + 6),
                            *(unsigned __int16 *)(v31 + 8LL * (i - 1) + 6)) )
        *(_WORD *)(v31 + 8 * v33 + 4) = *(_WORD *)(v31 + 8 * v32 + 4) + 1;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v21 + 24) = v6;
    WdLogEvent5_WdLowResource(v21);
    *(_DWORD *)this = -1073741801;
  }
}
