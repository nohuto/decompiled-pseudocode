/*
 * XREFs of CmpFindPathByName @ 0x14069194C
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1404B85E0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140692878 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140692A38 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpVirtualBranchIsReplicated @ 0x140692C3C (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140692DDC (CmpVirtualPathPresent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1405BC634 (CmpFindSubKeyByNameWithStatus.c)
 */

char __fastcall CmpFindPathByName(__int64 a1, __m128i *a2, __int64 a3, unsigned int *a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  char result; // al
  unsigned __int16 v8; // r14
  unsigned __int16 v10; // di
  _WORD *v11; // rsi
  __int64 (__fastcall **v12)(PVOID, _QWORD, int *, __int64); // r15
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 (__fastcall **v17)(PVOID, _QWORD, int *, __int64); // rcx
  unsigned __int64 v18; // rax
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
      v12 = *(__int64 (__fastcall ***)(PVOID, _QWORD, int *, __int64))(a1 + 24);
      v13 = *(unsigned int *)(a1 + 32);
      *v5 = v12;
      *a4 = v13;
    }
    else
    {
      v12 = (__int64 (__fastcall **)(PVOID, _QWORD, int *, __int64))CmpMasterHive;
      v13 = *(unsigned int *)(*((_QWORD *)CmpMasterHive + 8) + 36LL);
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
    do
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
      v15 = v12[1](v12, v13, &v23, 65534LL);
      if ( !v15 )
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
      if ( (*(_BYTE *)(v15 + 2) & 2) != 0 )
      {
        v16 = *(_DWORD *)(v15 + 28);
        v17 = v12;
        v12 = *(__int64 (__fastcall ***)(PVOID, _QWORD, int *, __int64))(v15 + 36);
        ((void (__fastcall *)(__int64 (__fastcall **)(PVOID, _QWORD, int *, __int64), int *, __int64))v17[2])(
          v17,
          &v23,
          2LL);
        v15 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(PVOID, _QWORD, int *, __int64), _QWORD, int *))v12[1])(
                v12,
                v16,
                &v23);
        result = 0;
        if ( !v15 )
          return result;
        v5 = a5;
      }
      CmpFindSubKeyByNameWithStatus((__int64)v12, v15, &v20, &v22);
      ((void (__fastcall *)(__int64 (__fastcall **)(PVOID, _QWORD, int *, __int64), int *))v12[2])(v12, &v23);
      v13 = v22;
      if ( v22 == -1 )
        return 0;
      v10 -= v8;
      v18 = (unsigned __int64)v8 >> 1;
      v8 = 0;
      *a4 = v22;
      *v5 = v12;
      v19.m128i_i16[0] = v10;
      v11 += v18;
      v19.m128i_i64[1] = (__int64)v11;
    }
    while ( v10 );
  }
  else
  {
    if ( !a1 )
      return result;
    *v5 = *(_QWORD *)(a1 + 24);
    *a4 = *(_DWORD *)(a1 + 32);
  }
  return 1;
}
