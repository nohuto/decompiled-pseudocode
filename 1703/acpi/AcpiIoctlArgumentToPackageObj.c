/*
 * XREFs of AcpiIoctlArgumentToPackageObj @ 0x1C002895C
 * Callers:
 *     ACPIIoctlEvalPreProcessing @ 0x1C0013E44 (ACPIIoctlEvalPreProcessing.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C00252E0 (ACPIIoctlEvalPreProcessingEx.c)
 *     AcpiIoctlArgumentToPackageObj @ 0x1C002895C (AcpiIoctlArgumentToPackageObj.c)
 * Callees:
 *     AcpiIoctlArgumentToPackageObj @ 0x1C002895C (AcpiIoctlArgumentToPackageObj.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall AcpiIoctlArgumentToPackageObj(_WORD *a1, POOL_TYPE a2, char a3, unsigned int *a4, PVOID *a5)
{
  unsigned int *v6; // rdi
  unsigned __int16 v8; // r10
  unsigned int v9; // ebx
  unsigned __int16 *v10; // rsi
  unsigned __int64 v11; // r8
  _WORD *v12; // rcx
  unsigned int v13; // eax
  PVOID PoolWithTag; // rax
  unsigned int v15; // ecx
  int v16; // ebx
  unsigned __int16 v18; // dx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r8
  char *v23; // rdx
  __int16 v24; // ax
  unsigned int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // [rsp+60h] [rbp+8h]
  unsigned int v31; // [rsp+80h] [rbp+28h]

  v6 = a4;
  *v6 = 0;
  *a5 = 0LL;
  if ( !a1 || (v8 = a1[1], (unsigned __int16)(v8 - 1) <= 6u) || *a1 != 4 )
  {
    v16 = -1073741811;
LABEL_40:
    if ( *a5 )
    {
      ExFreePoolWithTag(*a5, 0x41706341u);
      *v6 = 0;
      *a5 = 0LL;
    }
    return (unsigned int)v16;
  }
  v9 = 0;
  v10 = a1 + 2;
  v11 = (unsigned __int64)a1 + v8 + 4;
  v27 = 0;
  v12 = v10;
  if ( (unsigned __int64)v10 >= v11 )
  {
LABEL_5:
    v13 = 40 * v9 + 8;
    *v6 = v13;
    PoolWithTag = ExAllocatePoolWithTag(a2, v13, 0x41706341u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, *v6);
      v15 = 0;
      v31 = 0;
      *(_DWORD *)*a5 = v9;
      if ( !v9 )
        return 0;
      v21 = 0LL;
      v22 = 4LL;
      while ( 1 )
      {
        v23 = (char *)*a5;
        if ( *v10 == 4 )
          v24 = 4;
        else
          v24 = *v10 + 1;
        *(_WORD *)&v23[v21 + 10] = v24;
        v25 = *v10;
        if ( *v10 )
        {
          if ( v25 <= 2 )
            goto LABEL_37;
          if ( v25 != 4 )
          {
            *(_WORD *)&v23[v21 + 10] = 3;
LABEL_37:
            *(_DWORD *)&v23[v21 + 32] = v10[1];
            *(_QWORD *)&v23[v21 + 40] = v10 + 2;
            goto LABEL_24;
          }
          LOBYTE(v22) = a3;
          v16 = AcpiIoctlArgumentToPackageObj(v10, (unsigned int)a2, v22, &v23[v21 + 32], &v23[v21 + 40]);
          if ( v16 < 0 )
          {
            v6 = a4;
            goto LABEL_40;
          }
          v9 = v27;
          v22 = 4LL;
        }
        else
        {
          *(_DWORD *)&v23[v21 + 32] = a3 != 0 ? 8 : 4;
          *(_QWORD *)&v23[v21 + 24] = *((unsigned int *)v10 + 1);
        }
        v15 = v31;
LABEL_24:
        LOWORD(v26) = v10[1];
        if ( (unsigned __int16)v26 < 4u )
          v26 = 4LL;
        else
          v26 = (unsigned __int16)v26;
        ++v15;
        v10 = (unsigned __int16 *)((char *)v10 + v26 + 4);
        v31 = v15;
        v21 += 40LL;
        if ( v15 >= v9 )
          return 0;
      }
    }
    v16 = -1073741670;
    goto LABEL_40;
  }
  while ( *v12 <= 4u )
  {
    v18 = v12[1];
    if ( v18 > v8 )
      break;
    v19 = 4LL;
    if ( v18 >= 4u )
      v19 = v18;
    if ( (unsigned __int64)v12 + v19 + 4 > v11 )
      break;
    ++v9;
    v20 = 4LL;
    v27 = v9;
    if ( v18 >= 4u )
      v20 = v18;
    v12 = (_WORD *)((char *)v12 + v20 + 4);
    if ( (unsigned __int64)v12 >= v11 )
      goto LABEL_5;
  }
  return (unsigned int)-1073741788;
}
