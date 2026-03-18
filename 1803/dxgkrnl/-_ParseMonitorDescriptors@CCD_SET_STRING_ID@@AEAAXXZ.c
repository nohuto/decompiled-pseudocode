/*
 * XREFs of ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B25A0
 * Callers:
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00B23F8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C00B2908 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00B2A84 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x1C022992C (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
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
  unsigned __int16 v12; // ax
  unsigned int v13; // r8d
  unsigned int v14; // edi
  unsigned int v15; // edi
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int16 v20; // ax
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned int v23; // esi
  __int64 v24; // r14
  unsigned int v25; // ebp
  unsigned __int16 v26; // r13
  unsigned __int16 v27; // r12
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rbp
  __int64 v31; // r14
  __int64 v32; // [rsp+60h] [rbp+8h]
  __int64 v33; // [rsp+68h] [rbp+10h]

  if ( !*((_WORD *)this + 4) )
  {
    *((_WORD *)this + 16) = 0;
    operator delete[](*((void **)this + 3));
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
      v17 = v2 == 43;
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
      v17 = v2 == v5;
    }
    if ( !v17 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v18);
    }
LABEL_7:
    ++v4;
  }
  while ( v4 < *((unsigned __int16 *)this + 4) );
  if ( v3 > *((_WORD *)this + 16) )
  {
    v6 = (void *)*((_QWORD *)this + 3);
    *((_WORD *)this + 16) = 0;
    operator delete[](v6);
    v7 = 8LL * v3;
    if ( !is_mul_ok(v3, 8uLL) )
      v7 = -1LL;
    v8 = operator new[](v7, 0x63644356u, PagedPool);
    *((_QWORD *)this + 3) = v8;
    if ( !v8 )
    {
      v19 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v19 + 24) = v3;
      WdLogEvent5_WdLowResource(v19);
      *(_DWORD *)this = -1073741801;
      return;
    }
  }
  v10 = 0;
  v11 = 0;
  **((_QWORD **)this + 3) = 0LL;
  v12 = 1;
  LOWORD(v13) = *((_WORD *)this + 4);
  *((_WORD *)this + 16) = 1;
  if ( !(_WORD)v13 )
    goto LABEL_19;
  while ( 2 )
  {
    if ( *(_BYTE *)(v11 + *((_QWORD *)this + 2)) != 42 )
    {
      if ( *(_BYTE *)(v11 + *((_QWORD *)this + 2)) != 43
        && *(_BYTE *)(v11 + *((_QWORD *)this + 2)) != 94
        && *(_BYTE *)(v11 + *((_QWORD *)this + 2)) != 126 )
      {
        goto LABEL_17;
      }
      ++v10;
    }
    v16 = v11 + 1;
    if ( (_DWORD)v16 == (unsigned __int16)v13 )
    {
      *((_WORD *)this + 4) = v13 - 1;
    }
    else
    {
      v20 = *((_WORD *)this + 16);
      if ( v20 < v3
        || (v21 = WdLogNewEntry5_WdAssertion(v16), WdLogEvent5_WdAssertion(v21), v20 = *((_WORD *)this + 16), v20 < v3) )
      {
        *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v20) = v11 + 1;
        *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 2) = v10;
        *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 4) = 0;
        *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 6) = (*((_WORD *)this + 16))++;
      }
    }
LABEL_17:
    v13 = *((unsigned __int16 *)this + 4);
    if ( ++v11 < v13 )
      continue;
    break;
  }
  v12 = *((_WORD *)this + 16);
LABEL_19:
  v14 = v12 - 1;
  if ( v12 != 1 )
  {
    v22 = v14;
    v23 = 1;
    v32 = v14;
    v24 = 6LL;
    do
    {
      v25 = v23;
      if ( v23 <= v14 )
      {
        do
        {
          v33 = *((_QWORD *)this + 3);
          v26 = *(_WORD *)(v33 + v24);
          v27 = *(_WORD *)(v33 + 8LL * v25 + 6);
          v28 = CCD_SET_STRING_ID::_CompareDescriptors(this, v26, v27);
          if ( v28 > 0 || !v28 && v26 > v27 )
          {
            *(_WORD *)(v33 + v24) = v27;
            *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v25 + 6) = v26;
          }
          ++v25;
        }
        while ( v25 <= v14 );
        v22 = v32;
      }
      ++v23;
      v24 += 8LL;
      v32 = --v22;
    }
    while ( v22 );
    v12 = *((_WORD *)this + 16);
  }
  v15 = 1;
  if ( v12 > 1u )
  {
    do
    {
      v29 = *((_QWORD *)this + 3);
      v30 = *(unsigned __int16 *)(v29 + 8LL * (v15 - 1) + 6);
      v31 = *(unsigned __int16 *)(v29 + 8LL * v15 + 6);
      if ( !CCD_SET_STRING_ID::_CompareDescriptors(
              this,
              *(unsigned __int16 *)(v29 + 8LL * v15 + 6),
              *(unsigned __int16 *)(v29 + 8LL * (v15 - 1) + 6)) )
        *(_WORD *)(v29 + 8 * v31 + 4) = *(_WORD *)(v29 + 8 * v30 + 4) + 1;
      ++v15;
    }
    while ( v15 < *((unsigned __int16 *)this + 16) );
  }
}
