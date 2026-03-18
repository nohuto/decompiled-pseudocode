/*
 * XREFs of ACPIIoctlEvalPreProcessingV1Ex @ 0x1C001AA2C
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C001B138 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C005088C (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsObjectInGivenScope @ 0x1C001A7FC (AMLIIsObjectInGivenScope.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C002965C (AcpiIoctlArgumentToPackageObjV1.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV1Ex(
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
  int *v14; // rsi
  _QWORD *v15; // rbp
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rax
  size_t v20; // rbx
  unsigned __int16 *v21; // rsi
  _WORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rbp
  char *v25; // r14
  __int16 v26; // ax
  unsigned int v27; // eax
  __int64 v28; // rax
  _WORD *v29; // rax

  v8 = *(_DWORD *)(a3 + 16);
  v9 = 0LL;
  v10 = *(_DWORD *)(a3 + 8);
  PoolWithTag = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  v12 = 0;
  if ( v8 < 0x104 )
    return 3221225476LL;
  if ( (unsigned int)(v10 - 1) <= 0x12 )
    return 3221225507LL;
  v14 = *(int **)(a2 + 24);
  v15 = *(_QWORD **)(ACPIInternalGetDeviceExtension(a1) + 712);
  if ( !v15 )
    return 3221225486LL;
  _strupr((char *)v14 + 4);
  v16 = AMLIGetNameSpaceObject(v14 + 1);
  if ( v16 >= 0 )
  {
    v16 = AMLIIsObjectInGivenScope(0LL, v15);
    if ( v16 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(a4, 0x28uLL, 0x52706341u);
      if ( PoolWithTag )
      {
        v17 = *v14;
        if ( *v14 == 1097426241 )
        {
LABEL_11:
          *a5 = 0LL;
          *a6 = PoolWithTag;
          *a7 = v9;
          *a8 = v12;
          return 0LL;
        }
        if ( v17 != 1147757889 )
        {
          if ( v17 == 1181312321 )
          {
            v18 = (unsigned int)v14[66];
            if ( !(_DWORD)v18 )
              goto LABEL_11;
            v20 = 40 * v18;
            v12 = v14[66];
            v21 = (unsigned __int16 *)(v14 + 67);
            v22 = ExAllocatePoolWithTag(a4, 40 * v18, 0x41706341u);
            v9 = v22;
            if ( v22 )
            {
              memset(v22, 0, v20);
              v24 = 0LL;
              if ( !v12 )
                goto LABEL_11;
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
                      v16 = AcpiIoctlArgumentToPackageObjV1(
                              v21,
                              (unsigned int)a4,
                              v23,
                              &v9[20 * v24 + 12],
                              &v9[20 * v24 + 16]);
                      if ( v16 < 0 )
                        goto LABEL_12;
                      goto LABEL_37;
                    }
                    *((_WORD *)v25 - 11) = 3;
                  }
                  *(_DWORD *)v25 = v21[1];
                  *((_QWORD *)v25 + 1) = (unsigned __int64)(v21 + 2) & -(__int64)(v21[1] != 0);
                }
                else
                {
                  *((_QWORD *)v25 - 1) = 0LL;
                  memmove(&v9[16 * v24 + 8 + 4 * v24], v21 + 2, v21[1]);
                }
LABEL_37:
                LOWORD(v28) = v21[1];
                if ( (unsigned __int16)v28 >= 4u )
                  v28 = (unsigned __int16)v28;
                else
                  v28 = 4LL;
                v21 = (unsigned __int16 *)((char *)v21 + v28 + 4);
                v24 = (unsigned int)(v24 + 1);
                v25 += 40;
                if ( (unsigned int)v24 >= v12 )
                  goto LABEL_11;
              }
            }
            goto LABEL_20;
          }
          if ( v17 != 1164535105 )
          {
            v16 = -1073741585;
            goto LABEL_12;
          }
        }
        v12 = 1;
        v29 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
        v9 = v29;
        if ( v29 )
        {
          memset(v29, 0, 0x28uLL);
          if ( *v14 == 1147757889 )
          {
            v9[1] = 1;
            *((_QWORD *)v9 + 2) = *((_QWORD *)v14 + 33);
          }
          else
          {
            v9[1] = 2;
            *((_DWORD *)v9 + 6) = v14[65];
            *((_QWORD *)v9 + 4) = v14 + 66;
          }
          goto LABEL_11;
        }
      }
LABEL_20:
      v16 = -1073741670;
    }
  }
LABEL_12:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x52706341u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x52706341u);
  return (unsigned int)v16;
}
