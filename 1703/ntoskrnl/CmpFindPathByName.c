/*
 * XREFs of CmpFindPathByName @ 0x1404D4574
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1404D37D0 (CmpVirtualBranchIsReplicated.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1404D4394 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteOpenLogic @ 0x140538520 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140667D78 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpVirtualPathPresent @ 0x140667F7C (CmpVirtualPathPresent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404D2CDC (CmpFindSubKeyByNameWithStatus.c)
 */

char __fastcall CmpFindPathByName(__int64 a1, __m128i *a2, __int64 a3, _DWORD *a4, __int64 *a5)
{
  __int64 *v5; // rbx
  char result; // al
  unsigned __int16 v8; // r14
  unsigned __int16 v10; // di
  _WORD *v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rdx
  bool v14; // zf
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __m128i v19; // [rsp+20h] [rbp-20h]
  unsigned __int16 v20; // [rsp+30h] [rbp-10h] BYREF
  _WORD *v21; // [rsp+38h] [rbp-8h]
  unsigned int v22; // [rsp+88h] [rbp+48h] BYREF
  int v23; // [rsp+90h] [rbp+50h] BYREF
  int v24; // [rsp+94h] [rbp+54h]

  v5 = a5;
  result = 0;
  v8 = 0;
  v23 = -1;
  v24 = 0;
  *a5 = 0LL;
  *a4 = -1;
  if ( a3 )
  {
    *(_WORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  v10 = _mm_cvtsi128_si32(*a2);
  v19 = *a2;
  v19.m128i_i16[0] = v10;
  if ( v10 )
  {
    v11 = (_WORD *)v19.m128i_i64[1];
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 24);
      v13 = *(unsigned int *)(a1 + 32);
      *v5 = v12;
      *a4 = v13;
    }
    else
    {
      v12 = CmpMasterHive;
      v13 = *(unsigned int *)(*(_QWORD *)(CmpMasterHive + 64) + 36LL);
      do
      {
        if ( *v11 != 92 )
          break;
        ++v11;
        v14 = v10 == 2;
        v10 -= 2;
        v19.m128i_i16[0] = v10;
      }
      while ( !v14 );
      v19.m128i_i64[1] = (__int64)v11;
      if ( !v10 )
        goto LABEL_21;
      do
      {
        if ( *v11 == 92 )
          break;
        ++v11;
        v14 = v10 == 2;
        v10 -= 2;
        v19.m128i_i16[0] = v10;
      }
      while ( !v14 );
      v19.m128i_i64[1] = (__int64)v11;
    }
    while ( 1 )
    {
      if ( v10 )
      {
        do
        {
          if ( *v11 != 92 )
            break;
          ++v11;
          v14 = v10 == 2;
          v10 -= 2;
          v19.m128i_i16[0] = v10;
        }
        while ( !v14 );
        v19.m128i_i64[1] = (__int64)v11;
      }
LABEL_21:
      if ( a3 )
        *(__m128i *)a3 = v19;
      if ( !v10 )
        break;
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64))(v12 + 8))(v12, v13, &v23, 65534LL);
      if ( !v16 )
        return 0;
      v21 = v11;
      v20 = 0;
      do
      {
        if ( v11[(unsigned __int64)v8 >> 1] == 92 )
          break;
        v8 += 2;
      }
      while ( v8 < v10 );
      v20 = v8;
      if ( (*(_BYTE *)(v16 + 2) & 2) != 0 )
      {
        v17 = *(_DWORD *)(v16 + 28);
        v18 = v12;
        v12 = *(_QWORD *)(v16 + 36);
        (*(void (__fastcall **)(__int64, int *, __int64))(v18 + 16))(v18, &v23, 2LL);
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v12 + 8))(v12, v17, &v23);
        result = 0;
        if ( !v16 )
          return result;
        v5 = a5;
      }
      CmpFindSubKeyByNameWithStatus(v12, v16, (__int64)&v20, &v22);
      (*(void (__fastcall **)(__int64, int *))(v12 + 16))(v12, &v23);
      v13 = v22;
      if ( v22 == -1 )
        return 0;
      v10 -= v8;
      v15 = (unsigned __int64)v8 >> 1;
      v8 = 0;
      *a4 = v22;
      *v5 = v12;
      v19.m128i_i16[0] = v10;
      v11 += v15;
      v19.m128i_i64[1] = (__int64)v11;
      if ( !v10 )
        return 1;
    }
    return 1;
  }
  if ( a1 )
  {
    *v5 = *(_QWORD *)(a1 + 24);
    *a4 = *(_DWORD *)(a1 + 32);
    return 1;
  }
  return result;
}
