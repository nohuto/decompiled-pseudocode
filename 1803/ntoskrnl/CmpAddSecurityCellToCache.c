/*
 * XREFs of CmpAddSecurityCellToCache @ 0x140516D50
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140516F4C (CmpValidateHiveSecurityDescriptors.c)
 *     CmpInsertSecurityCellList @ 0x14057CE50 (CmpInsertSecurityCellList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     CmpSecConvKey @ 0x1404A0B2C (CmpSecConvKey.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404A9B50 (CmpFindSecurityCellCacheIndex.c)
 */

__int64 CmpAddSecurityCellToCache(__int64 a1, unsigned int a2, char a3, ...)
{
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // ecx
  int v13; // eax
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 **v17; // rcx
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rcx
  const void *v22; // rbx
  unsigned int v23; // esi
  int v24; // ecx
  int v25; // ecx
  __int64 (__fastcall *v26)(_QWORD, _QWORD, __int64); // rax
  void *v27; // rax
  unsigned int v28; // ecx
  _DWORD v29[10]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v30; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v30 = va_arg(va1, _QWORD);
  v29[0] = -1;
  v29[1] = 0;
  if ( CmpFindSecurityCellCacheIndex(a1, a2, (unsigned int *)va) == 1 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 1868);
  if ( *(_DWORD *)(a1 + 1864) == v6 )
  {
    v22 = *(const void **)(a1 + 1880);
    v23 = 16 * v6;
    v24 = 256;
    if ( a3 != 1 )
      v24 = 16;
    v25 = v6 + v24;
    v26 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24);
    *(_DWORD *)(a1 + 1868) = v25;
    v27 = (void *)v26((unsigned int)(16 * v25), 0LL, 1666403651LL);
    v28 = *(_DWORD *)(a1 + 1864);
    *(_QWORD *)(a1 + 1880) = v27;
    if ( !v27 )
    {
      *(_QWORD *)(a1 + 1880) = v22;
      *(_DWORD *)(a1 + 1868) = v28;
      return 3221225626LL;
    }
    memmove(v27, v22, 16LL * v28);
    if ( v22 )
      (*(void (__fastcall **)(const void *, _QWORD))(a1 + 32))(v22, v23);
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, a2, v29);
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
        *(_DWORD *)v11 = a2;
        v12 = *(_DWORD *)(v8 + 16);
        *(_DWORD *)(v11 + 28) = 0;
        *(_DWORD *)(v11 + 24) = v12;
        v13 = CmpSecConvKey(*(_DWORD *)(v8 + 16), (_DWORD *)(v8 + 20));
        *(_DWORD *)(v11 + 4) = v13;
        v14 = v13 & 0x3F;
        v15 = (__int64 *)(v11 + 8);
        v16 = a1 + 16 * (v14 + 118);
        v17 = *(__int64 ***)(v16 + 8);
        if ( *v17 != (__int64 *)v16 )
          __fastfail(3u);
        v18 = (unsigned int)v30;
        *v15 = v16;
        *(_QWORD *)(v11 + 16) = v17;
        *v17 = v15;
        *(_QWORD *)(v16 + 8) = v15;
        v19 = *(_DWORD *)(a1 + 1864);
        if ( (unsigned int)v18 < v19 )
          memmove(
            (void *)(*(_QWORD *)(a1 + 1880) + 16LL * (unsigned int)(v18 + 1)),
            (const void *)(*(_QWORD *)(a1 + 1880) + 16LL * (unsigned int)v18),
            16LL * (v19 - (unsigned int)v18));
        v20 = 2 * v18;
        *(_DWORD *)(*(_QWORD *)(a1 + 1880) + 8 * v20) = a2;
        *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 8 * v20 + 8) = v11;
        ++*(_DWORD *)(a1 + 1864);
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v29);
        return 0LL;
      }
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v29);
  }
  return 3221225626LL;
}
