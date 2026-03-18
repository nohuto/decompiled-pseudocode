/*
 * XREFs of CmpAddSecurityCellToCache @ 0x140475744
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1404746C0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpInsertSecurityCellList @ 0x1405912C8 (CmpInsertSecurityCellList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     CmpSecConvKey @ 0x1404774C4 (CmpSecConvKey.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404813C0 (CmpFindSecurityCellCacheIndex.c)
 */

__int64 CmpAddSecurityCellToCache(__int64 a1, __int64 a2, char a3, ...)
{
  unsigned int v4; // ebp
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // ecx
  int v13; // eax
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 **v17; // rdx
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rcx
  const void *v22; // rbx
  unsigned int v23; // esi
  int v24; // eax
  void *v25; // rax
  _DWORD v26[10]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v27 = va_arg(va1, _QWORD);
  v26[0] = -1;
  v26[1] = 0;
  v4 = a2;
  if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(a1, a2, (__int64 *)va) == 1 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 3044);
  if ( *(_DWORD *)(a1 + 3040) == v6 )
  {
    v22 = *(const void **)(a1 + 3056);
    v23 = 16 * v6;
    if ( a3 == 1 )
      v24 = v6 + 256;
    else
      v24 = v6 + 16;
    *(_DWORD *)(a1 + 3044) = v24;
    v25 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(
                    (unsigned int)(16 * v24),
                    0LL,
                    1666403651LL);
    *(_QWORD *)(a1 + 3056) = v25;
    if ( !v25 )
    {
      *(_DWORD *)(a1 + 3044) = *(_DWORD *)(a1 + 3040);
      *(_QWORD *)(a1 + 3056) = v22;
      return 3221225626LL;
    }
    memmove(v25, v22, 16LL * *(unsigned int *)(a1 + 3040));
    if ( v22 )
      (*(void (__fastcall **)(const void *, _QWORD))(a1 + 32))(v22, v23);
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v4, v26);
  v8 = v7;
  if ( v7 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v7 + 16) + 32);
    if ( *(_DWORD *)(v7 + 16) < 0xFFFFFFE0 && (_DWORD)v9 != 32 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(v9, 0LL, 1666403651LL);
      v11 = v10;
      if ( v10 )
      {
        memmove((void *)(v10 + 32), (const void *)(v8 + 20), *(unsigned int *)(v8 + 16));
        *(_DWORD *)v11 = v4;
        v12 = *(_DWORD *)(v8 + 16);
        *(_DWORD *)(v11 + 28) = 0;
        *(_DWORD *)(v11 + 24) = v12;
        v13 = CmpSecConvKey(*(unsigned int *)(v8 + 16), v8 + 20);
        *(_DWORD *)(v11 + 4) = v13;
        v14 = 16LL * (v13 & 0x3F);
        v15 = (__int64 *)(v11 + 8);
        v16 = v14 + a1 + 3064;
        v17 = *(__int64 ***)(v16 + 8);
        if ( *v17 != (__int64 *)v16 )
          __fastfail(3u);
        v18 = (unsigned int)v27;
        *v15 = v16;
        *(_QWORD *)(v11 + 16) = v17;
        *v17 = v15;
        *(_QWORD *)(v16 + 8) = v15;
        v19 = *(_DWORD *)(a1 + 3040);
        if ( (unsigned int)v18 < v19 )
          memmove(
            (void *)(*(_QWORD *)(a1 + 3056) + 16LL * (unsigned int)(v18 + 1)),
            (const void *)(*(_QWORD *)(a1 + 3056) + 16LL * (unsigned int)v18),
            16LL * (v19 - (unsigned int)v18));
        v20 = 2 * v18;
        *(_DWORD *)(*(_QWORD *)(a1 + 3056) + 8 * v20) = v4;
        *(_QWORD *)(*(_QWORD *)(a1 + 3056) + 8 * v20 + 8) = v11;
        ++*(_DWORD *)(a1 + 3040);
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v26);
        return 0LL;
      }
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v26);
  }
  return 3221225626LL;
}
