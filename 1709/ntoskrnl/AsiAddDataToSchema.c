/*
 * XREFs of AsiAddDataToSchema @ 0x14028B238
 * Callers:
 *     ApiSetComposeSchema @ 0x14028AF34 (ApiSetComposeSchema.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AsiAddDataToSchema(
        __int64 a1,
        unsigned int *a2,
        const void *a3,
        unsigned int a4,
        _DWORD *a5,
        char *a6)
{
  char v6; // r12
  size_t v7; // r14
  unsigned int v8; // ecx
  unsigned int v9; // eax
  _DWORD *v10; // r13
  unsigned int v11; // esi
  size_t v12; // rbx
  __int64 v13; // r15
  unsigned int v14; // eax
  unsigned int v15; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rdi

  v6 = 0;
  v7 = a4;
  if ( !a4 )
    return (unsigned int)-1073741675;
  v9 = (a4 + 3) & 0xFFFFFFFC;
  if ( v9 < a4 )
    return (unsigned int)-1073741675;
  v10 = *(_DWORD **)a1;
  v11 = -1;
  v12 = *a2;
  v13 = *(unsigned int *)(*(_QWORD *)a1 + 4LL);
  v14 = v13 + v9;
  if ( v14 >= (unsigned int)v13 )
    v11 = v14;
  v8 = v14 < (unsigned int)v13 ? 0xC0000095 : 0;
  if ( v14 >= (unsigned int)v13 )
  {
    if ( v11 <= (unsigned int)v12 )
    {
      v17 = v10;
LABEL_13:
      v17[1] = v11;
      memmove((char *)v17 + v13, a3, v7);
      if ( a5 )
        *a5 = v13;
      if ( a6 )
        *a6 = v6;
      return 0;
    }
    v15 = (v11 + 4095) & 0xFFFFF000;
    if ( v15 >= v11 )
    {
      v6 = 1;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x68635341u);
      v17 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, v10, v12);
      memset((char *)v17 + v12, 0, v15 - (unsigned int)v12);
      ExFreePoolWithTag(v10, 0);
      *(_QWORD *)a1 = v17;
      *a2 = v15;
      goto LABEL_13;
    }
    return (unsigned int)-1073741675;
  }
  return v8;
}
