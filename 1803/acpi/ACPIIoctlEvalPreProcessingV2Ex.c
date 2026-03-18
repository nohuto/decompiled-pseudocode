/*
 * XREFs of ACPIIoctlEvalPreProcessingV2Ex @ 0x1C002CB7C
 * Callers:
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002B29C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C002BDC4 (ACPIIoctlEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C002D86C (AcpiIoctlArgumentToPackageObjV2.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 *     AMLIIsObjectInGivenScope @ 0x1C0043E0C (AMLIIsObjectInGivenScope.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV2Ex(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        POOL_TYPE a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  unsigned int v8; // eax
  _WORD *v9; // rdi
  int v10; // r10d
  PVOID PoolWithTag; // r15
  unsigned int v12; // r12d
  int *v15; // rsi
  __int64 v16; // rbp
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rax
  size_t v20; // rbx
  unsigned __int16 *v21; // rsi
  _WORD *v22; // rax
  int v23; // r8d
  __int64 v24; // rbp
  char *v25; // r14
  __int16 v26; // ax
  unsigned int v27; // eax
  __int64 v28; // rax
  _WORD *v29; // rax
  _QWORD *v30; // rcx

  v8 = *(_DWORD *)(a3 + 16);
  v9 = 0LL;
  v10 = *(_DWORD *)(a3 + 8);
  PoolWithTag = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  v12 = 0;
  if ( v8 < 0x104 )
    return 3221225476LL;
  if ( (unsigned int)(v10 - 1) <= 0x16 )
    return 3221225507LL;
  v15 = *(int **)(a2 + 24);
  v16 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 712);
  if ( !v16 )
    return 3221225486LL;
  _strupr((char *)v15 + 4);
  v17 = AMLIGetNameSpaceObject(v15 + 1);
  if ( v17 < 0 )
    goto LABEL_11;
  v17 = AMLIIsObjectInGivenScope(0LL, v16);
  if ( v17 < 0 )
    goto LABEL_11;
  PoolWithTag = ExAllocatePoolWithTag(a4, 0x28uLL, 0x52706341u);
  if ( !PoolWithTag )
    goto LABEL_10;
  v18 = *v15;
  if ( *v15 == 1332307265 )
    goto LABEL_43;
  if ( v18 == 1349084481 || v18 == 1365861697 )
  {
    v12 = 1;
    v29 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
    v9 = v29;
    if ( !v29 )
      goto LABEL_10;
    memset(v29, 0, 0x28uLL);
    v30 = v15 + 66;
    if ( *v15 == 1349084481 )
    {
      v9[1] = 1;
      *((_QWORD *)v9 + 2) = *v30;
    }
    else
    {
      v9[1] = 2;
      *((_DWORD *)v9 + 6) = v15[65];
      *((_QWORD *)v9 + 4) = v30;
    }
LABEL_43:
    *a5 = 0LL;
    *a6 = PoolWithTag;
    *a7 = v9;
    *a8 = v12;
    return 0LL;
  }
  if ( v18 != 1382638913 )
  {
    v17 = -1073741585;
    goto LABEL_11;
  }
  v19 = (unsigned int)v15[66];
  if ( !(_DWORD)v19 )
    goto LABEL_43;
  v20 = 40 * v19;
  v12 = v15[66];
  v21 = (unsigned __int16 *)(v15 + 67);
  v22 = ExAllocatePoolWithTag(a4, 40 * v19, 0x41706341u);
  v9 = v22;
  if ( v22 )
  {
    memset(v22, 0, v20);
    v24 = 0LL;
    v25 = (char *)(v9 + 12);
    while ( 1 )
    {
      if ( *v21 == 4 )
        v26 = 4;
      else
        v26 = *v21 + 1;
      *((_WORD *)v25 - 11) = v26;
      v27 = *v21;
      if ( *v21 )
      {
        if ( v27 > 2 )
        {
          if ( v27 == 4 )
          {
            LOBYTE(v23) = 1;
            v17 = AcpiIoctlArgumentToPackageObjV2(
                    (_DWORD)v21,
                    a4,
                    v23,
                    (int)v9 + 8 * (5 * (int)v24 + 3),
                    (__int64)&v9[20 * v24 + 16]);
            if ( v17 < 0 )
              goto LABEL_11;
            goto LABEL_35;
          }
          *((_WORD *)v25 - 11) = 3;
        }
        *(_DWORD *)v25 = *((_DWORD *)v21 + 1);
        *((_QWORD *)v25 + 1) = (unsigned __int64)(v21 + 4) & -(__int64)(*((_DWORD *)v21 + 1) != 0);
      }
      else
      {
        *((_QWORD *)v25 - 1) = 0LL;
        memmove(&v9[16 * v24 + 8 + 4 * (unsigned int)v24], v21 + 4, *((unsigned int *)v21 + 1));
      }
LABEL_35:
      v28 = *((unsigned int *)v21 + 1);
      if ( (unsigned int)v28 < 4 )
        v28 = 4LL;
      v21 = (unsigned __int16 *)((char *)v21 + v28 + 8);
      v24 = (unsigned int)(v24 + 1);
      v25 += 40;
      if ( (unsigned int)v24 >= v12 )
        goto LABEL_43;
    }
  }
LABEL_10:
  v17 = -1073741670;
LABEL_11:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x52706341u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x52706341u);
  return (unsigned int)v17;
}
