/*
 * XREFs of AcpiIoctlArgumentToPackageObjV2 @ 0x1C002D86C
 * Callers:
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C002C82C (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C002CB7C (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C002D86C (AcpiIoctlArgumentToPackageObjV2.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C002D86C (AcpiIoctlArgumentToPackageObjV2.c)
 */

__int64 __fastcall AcpiIoctlArgumentToPackageObjV2(__int64 a1, POOL_TYPE a2, char a3, unsigned int *a4, PVOID *a5)
{
  unsigned int *v5; // rdi
  __int64 v8; // r10
  unsigned int v9; // ebx
  unsigned __int16 *v10; // rsi
  unsigned __int64 v11; // r9
  bool v12; // cf
  unsigned __int64 i; // rcx
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // eax
  PVOID PoolWithTag; // rax
  int v19; // ebx
  unsigned int v20; // ecx
  __int64 v21; // rdi
  int v22; // r8d
  char *v23; // rdx
  __int16 v24; // ax
  unsigned int v25; // eax
  __int64 v26; // rax
  unsigned int v28; // [rsp+60h] [rbp+8h]
  int v32; // [rsp+80h] [rbp+28h]

  *a4 = 0;
  v5 = a4;
  *a5 = 0LL;
  if ( a1 )
  {
    v8 = *(unsigned int *)(a1 + 4);
    if ( (unsigned int)(v8 - 1) > 0xA && *(_WORD *)a1 == 4 )
    {
      v9 = 0;
      v10 = (unsigned __int16 *)(a1 + 8);
      v11 = v8 + a1 + 8;
      v12 = a1 + 8 < v11;
      for ( i = a1 + 8; ; v12 = i < v11 )
      {
        v28 = v9;
        if ( !v12 )
          break;
        if ( *(_WORD *)i > 4u )
          return (unsigned int)-1073741788;
        v14 = *(_DWORD *)(i + 4);
        if ( v14 > (unsigned int)v8 )
          return (unsigned int)-1073741788;
        v15 = v14;
        v16 = v14;
        if ( v14 < 4 )
          v15 = 4LL;
        if ( i + v15 + 8 > v11 )
          return (unsigned int)-1073741788;
        ++v9;
        if ( v14 < 4 )
          v16 = 4LL;
        i += v16 + 8;
      }
      v17 = 40 * v9 + 8;
      *v5 = v17;
      PoolWithTag = ExAllocatePoolWithTag(a2, v17, 0x41706341u);
      *a5 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v19 = -1073741670;
        goto LABEL_37;
      }
      memset(PoolWithTag, 0, *v5);
      v20 = 0;
      v32 = 0;
      *(_DWORD *)*a5 = v9;
      if ( !v9 )
        return 0;
      v21 = 0LL;
      v22 = 4;
      while ( 1 )
      {
        v23 = (char *)*a5;
        v24 = *v10 == 4 ? 4 : *v10 + 1;
        *(_WORD *)&v23[v21 + 10] = v24;
        v25 = *v10;
        if ( !*v10 )
          break;
        if ( v25 > 2 )
        {
          if ( v25 == 4 )
          {
            LOBYTE(v22) = a3;
            v19 = AcpiIoctlArgumentToPackageObjV2(
                    (_DWORD)v10,
                    a2,
                    v22,
                    (int)v21 + (int)v23 + 32,
                    (__int64)&v23[v21 + 40]);
            if ( v19 < 0 )
            {
              v5 = a4;
              goto LABEL_37;
            }
            v9 = v28;
            v22 = 4;
            goto LABEL_30;
          }
          *(_WORD *)&v23[v21 + 10] = 3;
        }
        *(_DWORD *)&v23[v21 + 32] = *((_DWORD *)v10 + 1);
        *(_QWORD *)&v23[v21 + 40] = v10 + 4;
LABEL_31:
        v26 = *((unsigned int *)v10 + 1);
        if ( (unsigned int)v26 < 4 )
          v26 = 4LL;
        v21 += 40LL;
        v10 = (unsigned __int16 *)((char *)v10 + v26 + 8);
        v32 = ++v20;
        if ( v20 >= v9 )
          return 0;
      }
      *(_DWORD *)&v23[v21 + 32] = a3 != 0 ? 8 : 4;
      *(_QWORD *)&v23[v21 + 24] = *((unsigned int *)v10 + 2);
LABEL_30:
      v20 = v32;
      goto LABEL_31;
    }
  }
  v19 = -1073741811;
LABEL_37:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0x41706341u);
    *v5 = 0;
    *a5 = 0LL;
  }
  return (unsigned int)v19;
}
