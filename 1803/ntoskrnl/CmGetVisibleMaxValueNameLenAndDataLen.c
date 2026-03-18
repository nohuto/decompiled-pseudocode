/*
 * XREFs of CmGetVisibleMaxValueNameLenAndDataLen @ 0x140554020
 * Callers:
 *     CmpQueryKeyDataFromNode @ 0x1404AC0B0 (CmpQueryKeyDataFromNode.c)
 *     CmpQueryKeyDataFromCache @ 0x140553DC0 (CmpQueryKeyDataFromCache.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmGetVisibleMaxValueNameLenAndDataLen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int *a5)
{
  unsigned int *v5; // rsi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int16 v14; // dx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // [rsp+58h] [rbp+10h] BYREF
  int v18; // [rsp+5Ch] [rbp+14h]
  int v19; // [rsp+68h] [rbp+20h] BYREF
  int v20; // [rsp+6Ch] [rbp+24h]

  v5 = a5;
  *a4 = 0;
  v18 = 0;
  v17 = -1;
  *v5 = 0;
  v19 = -1;
  v20 = 0;
  if ( a2 )
  {
    *a4 = *(_DWORD *)(a2 + 60);
    *v5 = *(_DWORD *)(a2 + 64);
  }
  if ( !a1 )
    return 0LL;
  *a4 = *(unsigned __int16 *)(a1 + 170);
  *v5 = *(_DWORD *)(a1 + 172);
  if ( !a3 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 280);
  if ( !v9 )
    return 0LL;
  if ( v9 != a3 )
    return 0LL;
  *a4 = 0;
  *v5 = 0;
  if ( !*(_DWORD *)(a1 + 272) )
    return 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 24) + 8LL))(
          *(_QWORD *)(a1 + 24),
          *(unsigned int *)(a1 + 276),
          &v17);
  if ( v10 )
  {
    v11 = 0LL;
    if ( *(_DWORD *)(a1 + 272) )
    {
      while ( 1 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 24) + 8LL))(
                *(_QWORD *)(a1 + 24),
                *(unsigned int *)(v10 + 4 * v11),
                &v19);
        v13 = v12;
        if ( !v12 )
          break;
        v14 = *(_WORD *)(v12 + 2);
        if ( (*(_BYTE *)(v12 + 16) & 1) != 0 )
          v14 *= 2;
        if ( *a4 < (unsigned int)v14 )
          *a4 = v14;
        v15 = *(_DWORD *)(v12 + 4);
        v16 = v15 + 0x80000000;
        if ( v15 < 0x80000000 )
          v16 = *(_DWORD *)(v13 + 4);
        if ( *v5 < v16 )
          *v5 = v16;
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v19);
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 272) )
          goto LABEL_21;
      }
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v17);
      return 3221225626LL;
    }
LABEL_21:
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v17);
    return 0LL;
  }
  return 3221225626LL;
}
