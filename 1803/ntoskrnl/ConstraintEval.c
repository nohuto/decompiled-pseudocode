/*
 * XREFs of ConstraintEval @ 0x14056C1DC
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     FilterEval @ 0x14050ACAC (FilterEval.c)
 *     SimplifyFilter @ 0x14056C490 (SimplifyFilter.c)
 */

__int64 __fastcall ConstraintEval(unsigned int a1, _DWORD *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // r12
  int v11; // esi
  int *v12; // rdi
  int v13; // ebx
  __int64 v14; // rcx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rdx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // eax
  unsigned int v21; // r14d
  int *v22; // rbx
  __int64 v24; // rcx
  const wchar_t *v25; // rcx
  const wchar_t *v26; // rdx
  int v27; // esi
  unsigned int v28; // eax
  void *v29; // rcx
  int v30; // [rsp+30h] [rbp-50h] BYREF
  int v31; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v32; // [rsp+38h] [rbp-48h] BYREF
  _OWORD *v33; // [rsp+40h] [rbp-40h]
  _OWORD v34[3]; // [rsp+48h] [rbp-38h] BYREF

  v6 = a1;
  memset(v34, 0, sizeof(v34));
  v30 = 0;
  v31 = 0;
  v32 = 0LL;
  v33 = 0LL;
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
      v14 = *((_QWORD *)v12 + 1) - *(_QWORD *)a3;
      if ( !v14 )
        v14 = *((_QWORD *)v12 + 2) - *(_QWORD *)(a3 + 8);
      if ( !v14 && v12[7] == *(_DWORD *)(a3 + 20) )
      {
        v15 = (const wchar_t *)*((_QWORD *)v12 + 4);
        v16 = *(const wchar_t **)(a3 + 24);
        if ( (v15 == v16 || v15 && v16 && !wcsicmp(v15, v16)) && *v12 == a4 )
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
  v17 = a4 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 0x10000;
      if ( v19 )
      {
        if ( v19 != 0x10000 )
          goto LABEL_9;
        v20 = v12[10];
        if ( v20 != 18 && v20 != 25 && v20 != 8210 )
          goto LABEL_9;
      }
      else
      {
        if ( LODWORD(v34[2]) != 17 )
          goto LABEL_9;
        v29 = &unk_1403EFB08;
        if ( **((_BYTE **)&v34[2] + 1) != 0xFF )
          v29 = &unk_14039D2E0;
        *((_QWORD *)&v34[2] + 1) = v29;
      }
    }
  }
  else
  {
    *(_QWORD *)&v34[2] = 0x400000007LL;
    *((_QWORD *)&v34[2] + 1) = &unk_1403EFB0C;
  }
  v21 = 0;
  do
  {
    v22 = &v10[14 * v21];
    if ( v22 != v12 && v22[6] == v12[6] )
    {
      v24 = *((_QWORD *)v22 + 1) - *((_QWORD *)v12 + 1);
      if ( !v24 )
        v24 = *((_QWORD *)v22 + 2) - *((_QWORD *)v12 + 2);
      if ( !v24 && v22[7] == v12[7] )
      {
        v25 = (const wchar_t *)*((_QWORD *)v22 + 4);
        v26 = (const wchar_t *)*((_QWORD *)v12 + 4);
        if ( v25 == v26 || v25 && v26 && !wcsicmp(v25, v26) )
        {
          v27 = *v22;
          if ( *v22 != *v12 )
            goto LABEL_9;
          if ( v22[10] != v12[10] )
            goto LABEL_9;
          v28 = v22[11];
          if ( v28 != v12[11] || memcmp(*((const void **)v22 + 6), *((const void **)v12 + 6), v28) )
            goto LABEL_9;
          *v22 = v27 ^ 0x10000;
        }
      }
    }
    ++v21;
  }
  while ( v21 < (unsigned int)v6 );
  *v12 ^= 0x10000u;
  v33 = v34;
  LODWORD(v32) = 1;
  v13 = FilterEval(
          (__int64 (__fastcall *)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *))GetPropertyFromPropArray,
          (__int64)&v32,
          v6,
          v10,
          &v31);
  if ( v13 < 0 )
    goto LABEL_29;
  if ( !v31 )
  {
    *(_OWORD *)a5 = *(_OWORD *)v12;
    *(_OWORD *)(a5 + 16) = *((_OWORD *)v12 + 1);
    *(_OWORD *)(a5 + 32) = *((_OWORD *)v12 + 2);
    *(_QWORD *)(a5 + 48) = *((_QWORD *)v12 + 6);
    *(_DWORD *)a5 ^= 0x10000u;
    goto LABEL_29;
  }
LABEL_9:
  v13 = -1073741823;
LABEL_29:
  ExFreePoolWithTag(v10, 0x52544C46u);
  return (unsigned int)v13;
}
