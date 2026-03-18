/*
 * XREFs of AcpiIoctlArgumentToPackageObjV1 @ 0x1C002D628
 * Callers:
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C002C1A0 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C002C4F0 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C002D628 (AcpiIoctlArgumentToPackageObjV1.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C002D628 (AcpiIoctlArgumentToPackageObjV1.c)
 */

__int64 __fastcall AcpiIoctlArgumentToPackageObjV1(_WORD *a1, POOL_TYPE a2, char a3, unsigned int *a4, PVOID *a5)
{
  unsigned int *v5; // rdi
  unsigned __int16 v8; // r10
  unsigned __int16 *v9; // rsi
  unsigned __int64 v10; // r9
  unsigned int v11; // ebx
  _WORD *v12; // rcx
  bool i; // cf
  unsigned __int16 v14; // dx
  __int64 v15; // r8
  __int64 v16; // rax
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
    v8 = a1[1];
    if ( (unsigned __int16)(v8 - 1) > 6u && *a1 == 4 )
    {
      v9 = a1 + 2;
      v10 = (unsigned __int64)a1 + v8 + 4;
      v11 = 0;
      v12 = v9;
      for ( i = (unsigned __int64)v9 < v10; ; i = (unsigned __int64)v12 < v10 )
      {
        v28 = v11;
        if ( !i )
          break;
        if ( *v12 > 4u )
          return (unsigned int)-1073741788;
        v14 = v12[1];
        if ( v14 > v8 )
          return (unsigned int)-1073741788;
        v15 = v14;
        v16 = v14;
        if ( v14 < 4u )
          v16 = 4LL;
        if ( (unsigned __int64)v12 + v16 + 4 > v10 )
          return (unsigned int)-1073741788;
        ++v11;
        if ( v14 < 4u )
          v15 = 4LL;
        v12 = (_WORD *)((char *)v12 + v15 + 4);
      }
      v17 = 40 * v11 + 8;
      *v5 = v17;
      PoolWithTag = ExAllocatePoolWithTag(a2, v17, 0x41706341u);
      *a5 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v19 = -1073741670;
        goto LABEL_38;
      }
      memset(PoolWithTag, 0, *v5);
      v20 = 0;
      v32 = 0;
      *(_DWORD *)*a5 = v11;
      if ( !v11 )
        return 0;
      v21 = 0LL;
      v22 = 4;
      while ( 1 )
      {
        v23 = (char *)*a5;
        v24 = *v9 == 4 ? 4 : *v9 + 1;
        *(_WORD *)&v23[v21 + 10] = v24;
        v25 = *v9;
        if ( !*v9 )
          break;
        if ( v25 > 2 )
        {
          if ( v25 == 4 )
          {
            LOBYTE(v22) = a3;
            v19 = AcpiIoctlArgumentToPackageObjV1(
                    (_DWORD)v9,
                    a2,
                    v22,
                    (int)v21 + (int)v23 + 32,
                    (__int64)&v23[v21 + 40]);
            if ( v19 < 0 )
            {
              v5 = a4;
              goto LABEL_38;
            }
            v11 = v28;
            v22 = 4;
            goto LABEL_30;
          }
          *(_WORD *)&v23[v21 + 10] = 3;
        }
        *(_DWORD *)&v23[v21 + 32] = v9[1];
        *(_QWORD *)&v23[v21 + 40] = v9 + 2;
LABEL_31:
        LOWORD(v26) = v9[1];
        if ( (unsigned __int16)v26 >= 4u )
          v26 = (unsigned __int16)v26;
        else
          v26 = 4LL;
        v21 += 40LL;
        v9 = (unsigned __int16 *)((char *)v9 + v26 + 4);
        v32 = ++v20;
        if ( v20 >= v11 )
          return 0;
      }
      *(_DWORD *)&v23[v21 + 32] = a3 != 0 ? 8 : 4;
      *(_QWORD *)&v23[v21 + 24] = *((unsigned int *)v9 + 1);
LABEL_30:
      v20 = v32;
      goto LABEL_31;
    }
  }
  v19 = -1073741811;
LABEL_38:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0x41706341u);
    *v5 = 0;
    *a5 = 0LL;
  }
  return (unsigned int)v19;
}
