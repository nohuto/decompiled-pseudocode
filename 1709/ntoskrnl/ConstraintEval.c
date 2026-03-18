/*
 * XREFs of ConstraintEval @ 0x140580B24
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140580700 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     FilterEval @ 0x1405297BC (FilterEval.c)
 *     SimplifyFilter @ 0x140580DCC (SimplifyFilter.c)
 */

__int64 __fastcall ConstraintEval(unsigned int a1, _DWORD *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // r12
  int v11; // esi
  int *v12; // rdi
  int v13; // ebx
  __int64 v15; // rcx
  const wchar_t *v16; // rcx
  const wchar_t *v17; // rdx
  int v18; // ebx
  int v19; // ebx
  unsigned int v20; // r14d
  int *v21; // rbx
  __int64 v22; // rcx
  const wchar_t *v23; // rcx
  const wchar_t *v24; // rdx
  int v25; // esi
  unsigned int v26; // eax
  int v27; // ebx
  int v28; // eax
  void *v29; // rcx
  int v30; // [rsp+30h] [rbp-50h] BYREF
  int v31; // [rsp+34h] [rbp-4Ch] BYREF
  int v32; // [rsp+38h] [rbp-48h] BYREF
  _OWORD *v33; // [rsp+40h] [rbp-40h]
  _OWORD v34[3]; // [rsp+48h] [rbp-38h] BYREF

  v6 = a1;
  memset(v34, 0, sizeof(v34));
  v32 = 0;
  v33 = 0LL;
  v30 = 0;
  v31 = 0;
  if ( (a4 & 0xFF00000) != 0 )
    return (unsigned int)-1073741811;
  if ( !(_DWORD)v6 )
    return (unsigned int)-1073741823;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 56 * v6, 0x52544C46u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  if ( (*a2 & 0xFF00000) != 0 )
  {
    SimplifyFilter((unsigned int)v6, a2, &v30, PoolWithTag);
    LODWORD(v6) = v30;
  }
  else
  {
    memmove(PoolWithTag, a2, 56 * v6);
  }
  v11 = 0;
  if ( !(_DWORD)v6 )
    goto LABEL_9;
  while ( 1 )
  {
    v12 = &v10[14 * v11];
    if ( v12[6] == *(_DWORD *)(a3 + 16) )
    {
      v15 = *((_QWORD *)v12 + 1) - *(_QWORD *)a3;
      if ( !v15 )
        v15 = *((_QWORD *)v12 + 2) - *(_QWORD *)(a3 + 8);
      if ( !v15 && v12[7] == *(_DWORD *)(a3 + 20) )
      {
        v16 = (const wchar_t *)*((_QWORD *)v12 + 4);
        v17 = *(const wchar_t **)(a3 + 24);
        if ( (v16 == v17 || v16 && v17 && !wcsicmp(v16, v17)) && *v12 == a4 )
          break;
      }
    }
    if ( ++v11 >= (unsigned int)v6 )
      goto LABEL_9;
  }
  if ( !v12 )
    goto LABEL_9;
  v34[0] = *(_OWORD *)(v12 + 2);
  v34[1] = *(_OWORD *)(v12 + 6);
  v34[2] = *(_OWORD *)(v12 + 10);
  v18 = a4 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v27 = v19 - 0x10000;
      if ( v27 )
      {
        if ( v27 != 0x10000 )
          goto LABEL_9;
        v28 = v12[10];
        if ( v28 != 18 && v28 != 25 && v28 != 8210 )
          goto LABEL_9;
      }
      else
      {
        if ( LODWORD(v34[2]) != 17 )
          goto LABEL_9;
        v29 = &unk_1403A8140;
        if ( **((_BYTE **)&v34[2] + 1) != 0xFF )
          v29 = &unk_140359C60;
        *((_QWORD *)&v34[2] + 1) = v29;
      }
    }
  }
  else
  {
    *(_QWORD *)&v34[2] = 0x400000007LL;
    *((_QWORD *)&v34[2] + 1) = &unk_1403A813C;
  }
  v20 = 0;
  do
  {
    v21 = &v10[14 * v20];
    if ( v21 != v12 && v21[6] == v12[6] )
    {
      v22 = *((_QWORD *)v21 + 1) - *((_QWORD *)v12 + 1);
      if ( !v22 )
        v22 = *((_QWORD *)v21 + 2) - *((_QWORD *)v12 + 2);
      if ( !v22 && v21[7] == v12[7] )
      {
        v23 = (const wchar_t *)*((_QWORD *)v21 + 4);
        v24 = (const wchar_t *)*((_QWORD *)v12 + 4);
        if ( v23 == v24 || v23 && v24 && !wcsicmp(v23, v24) )
        {
          v25 = *v21;
          if ( *v21 != *v12 )
            goto LABEL_9;
          if ( v21[10] != v12[10] )
            goto LABEL_9;
          v26 = v21[11];
          if ( v26 != v12[11] || memcmp(*((const void **)v21 + 6), *((const void **)v12 + 6), v26) )
            goto LABEL_9;
          *v21 = v25 ^ 0x10000;
        }
      }
    }
    ++v20;
  }
  while ( v20 < (unsigned int)v6 );
  *v12 ^= 0x10000u;
  v33 = v34;
  v32 = 1;
  v13 = FilterEval((int)GetPropertyFromPropArray, (int)&v32, v6, v10, (__int64)&v31);
  if ( v13 < 0 )
    goto LABEL_10;
  if ( !v31 )
  {
    *(_OWORD *)a5 = *(_OWORD *)v12;
    *(_OWORD *)(a5 + 16) = *((_OWORD *)v12 + 1);
    *(_OWORD *)(a5 + 32) = *((_OWORD *)v12 + 2);
    *(_QWORD *)(a5 + 48) = *((_QWORD *)v12 + 6);
    *(_DWORD *)a5 ^= 0x10000u;
    goto LABEL_10;
  }
LABEL_9:
  v13 = -1073741823;
LABEL_10:
  ExFreePoolWithTag(v10, 0x52544C46u);
  return (unsigned int)v13;
}
