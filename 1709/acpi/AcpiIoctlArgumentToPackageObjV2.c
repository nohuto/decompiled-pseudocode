/*
 * XREFs of AcpiIoctlArgumentToPackageObjV2 @ 0x1C0051914
 * Callers:
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0050EBC (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C005120C (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C0051914 (AcpiIoctlArgumentToPackageObjV2.c)
 * Callees:
 *     memset @ 0x1C002C4C0 (memset.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C0051914 (AcpiIoctlArgumentToPackageObjV2.c)
 */

__int64 __fastcall AcpiIoctlArgumentToPackageObjV2(__int64 a1, POOL_TYPE a2, char a3, unsigned int *a4, PVOID *a5)
{
  unsigned int *v6; // rdi
  __int64 v8; // r10
  unsigned int v9; // ebx
  unsigned __int16 *v10; // rsi
  unsigned __int64 v11; // r8
  unsigned __int16 *v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  PVOID PoolWithTag; // rax
  int v18; // ebx
  unsigned int v19; // ecx
  __int64 v20; // rdi
  int v21; // r8d
  char *v22; // rdx
  __int16 v23; // ax
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int v27; // [rsp+60h] [rbp+8h]
  int v31; // [rsp+80h] [rbp+28h]

  v6 = a4;
  *v6 = 0;
  *a5 = 0LL;
  if ( !a1 || (v8 = *(unsigned int *)(a1 + 4), (unsigned int)(v8 - 1) <= 0xA) || *(_WORD *)a1 != 4 )
  {
    v18 = -1073741811;
LABEL_36:
    if ( *a5 )
    {
      ExFreePoolWithTag(*a5, 0x41706341u);
      *v6 = 0;
      *a5 = 0LL;
    }
    return (unsigned int)v18;
  }
  v9 = 0;
  v10 = (unsigned __int16 *)(a1 + 8);
  v27 = 0;
  v11 = v8 + a1 + 8;
  v12 = v10;
  if ( (unsigned __int64)v10 >= v11 )
  {
LABEL_13:
    v16 = 40 * v9 + 8;
    *v6 = v16;
    PoolWithTag = ExAllocatePoolWithTag(a2, v16, 0x41706341u);
    *a5 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v18 = -1073741670;
      goto LABEL_36;
    }
    memset(PoolWithTag, 0, *v6);
    v19 = 0;
    v31 = 0;
    *(_DWORD *)*a5 = v9;
    if ( !v9 )
      return 0;
    v20 = 0LL;
    v21 = 4;
    while ( 1 )
    {
      v22 = (char *)*a5;
      v23 = *v10 == 4 ? 4 : *v10 + 1;
      *(_WORD *)&v22[v20 + 10] = v23;
      v24 = *v10;
      if ( !*v10 )
        break;
      if ( v24 > 2 )
      {
        if ( v24 == 4 )
        {
          LOBYTE(v21) = a3;
          v18 = AcpiIoctlArgumentToPackageObjV2((_DWORD)v10, a2, v21, (int)v20 + (int)v22 + 32, (__int64)&v22[v20 + 40]);
          if ( v18 < 0 )
          {
            v6 = a4;
            goto LABEL_36;
          }
          v9 = v27;
          v21 = 4;
          goto LABEL_29;
        }
        *(_WORD *)&v22[v20 + 10] = 3;
      }
      *(_DWORD *)&v22[v20 + 32] = *((_DWORD *)v10 + 1);
      *(_QWORD *)&v22[v20 + 40] = v10 + 4;
LABEL_30:
      v25 = *((unsigned int *)v10 + 1);
      if ( (unsigned int)v25 < 4 )
        v25 = 4LL;
      v20 += 40LL;
      v10 = (unsigned __int16 *)((char *)v10 + v25 + 8);
      v31 = ++v19;
      if ( v19 >= v9 )
        return 0;
    }
    *(_DWORD *)&v22[v20 + 32] = a3 != 0 ? 8 : 4;
    *(_QWORD *)&v22[v20 + 24] = *((unsigned int *)v10 + 2);
LABEL_29:
    v19 = v31;
    goto LABEL_30;
  }
  while ( *v12 <= 4u )
  {
    v13 = *((_DWORD *)v12 + 1);
    if ( v13 > (unsigned int)v8 )
      break;
    v14 = 4LL;
    if ( v13 >= 4 )
      v14 = v13;
    if ( (unsigned __int64)v12 + v14 + 8 > v11 )
      break;
    ++v9;
    v15 = 4LL;
    v27 = v9;
    if ( v13 >= 4 )
      v15 = *((unsigned int *)v12 + 1);
    v12 = (unsigned __int16 *)((char *)v12 + v15 + 8);
    if ( (unsigned __int64)v12 >= v11 )
      goto LABEL_13;
  }
  return (unsigned int)-1073741788;
}
