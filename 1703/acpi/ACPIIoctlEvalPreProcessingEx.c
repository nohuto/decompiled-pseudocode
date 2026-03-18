/*
 * XREFs of ACPIIoctlEvalPreProcessingEx @ 0x1C00252E0
 * Callers:
 *     ACPIIoctlEvalControlMethodEx @ 0x1C00251F4 (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C0050910 (ACPIIoctlAsyncEvalControlMethodEx.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     AMLIIsObjectInGivenScope @ 0x1C002544C (AMLIIsObjectInGivenScope.c)
 *     AcpiIoctlArgumentToPackageObj @ 0x1C002895C (AcpiIoctlArgumentToPackageObj.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingEx(
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
  __int64 v15; // rbp
  __int64 v16; // rdx
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rax
  size_t v21; // rbx
  unsigned __int16 *v22; // rsi
  _WORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rbp
  char *v26; // r14
  __int16 v27; // ax
  unsigned int v28; // eax
  __int64 v29; // rax
  _WORD *v30; // rax
  volatile signed __int32 *v31; // [rsp+78h] [rbp+10h] BYREF
  POOL_TYPE v32; // [rsp+88h] [rbp+20h]

  v32 = a4;
  v8 = *(_DWORD *)(a3 + 16);
  v9 = 0LL;
  v10 = *(_DWORD *)(a3 + 8);
  PoolWithTag = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  v12 = 0;
  v31 = 0LL;
  if ( v8 < 0x104 )
    return 3221225476LL;
  if ( (unsigned int)(v10 - 1) <= 0x12 )
    return 3221225507LL;
  v14 = *(int **)(a2 + 24);
  v15 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 712);
  if ( !v15 )
    return 3221225486LL;
  _strupr((char *)v14 + 4);
  v17 = AMLIGetNameSpaceObject((_BYTE *)v14 + 4, v15, &v31);
  if ( v17 >= 0 )
  {
    v17 = AMLIIsObjectInGivenScope(v31, v15);
    if ( v17 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(a4, 0x28uLL, 0x52706341u);
      if ( PoolWithTag )
      {
        v18 = *v14;
        if ( *v14 == 1097426241 )
        {
LABEL_11:
          *a5 = v31;
          *a6 = PoolWithTag;
          *a7 = v9;
          *a8 = v12;
          return 0LL;
        }
        if ( v18 != 1147757889 )
        {
          if ( v18 == 1181312321 )
          {
            v19 = (unsigned int)v14[66];
            if ( !(_DWORD)v19 )
              goto LABEL_11;
            v21 = 40 * v19;
            v12 = v14[66];
            v22 = (unsigned __int16 *)(v14 + 67);
            v23 = ExAllocatePoolWithTag(a4, 40 * v19, 0x41706341u);
            v9 = v23;
            if ( v23 )
            {
              memset(v23, 0, v21);
              v25 = 0LL;
              if ( !v12 )
                goto LABEL_11;
              v26 = (char *)(v9 + 12);
              while ( 1 )
              {
                if ( *v22 == 4 )
                  v27 = 4;
                else
                  v27 = *v22 + 1;
                *((_WORD *)v26 - 11) = v27;
                v28 = *v22;
                if ( *v22 )
                {
                  if ( v28 > 2 )
                  {
                    if ( v28 == 4 )
                    {
                      LOBYTE(v24) = 1;
                      v17 = AcpiIoctlArgumentToPackageObj(
                              v22,
                              (unsigned int)v32,
                              v24,
                              &v9[20 * v25 + 12],
                              &v9[20 * v25 + 16]);
                      if ( v17 < 0 )
                        goto LABEL_12;
                      goto LABEL_39;
                    }
                    *((_WORD *)v26 - 11) = 3;
                  }
                  *(_DWORD *)v26 = v22[1];
                  *((_QWORD *)v26 + 1) = (unsigned __int64)(v22 + 2) & -(__int64)(v22[1] != 0);
                }
                else
                {
                  *((_QWORD *)v26 - 1) = 0LL;
                  memmove(&v9[16 * v25 + 8 + 4 * v25], v22 + 2, v22[1]);
                }
LABEL_39:
                LOWORD(v29) = v22[1];
                if ( (unsigned __int16)v29 >= 4u )
                  v29 = (unsigned __int16)v29;
                else
                  v29 = 4LL;
                v25 = (unsigned int)(v25 + 1);
                v22 = (unsigned __int16 *)((char *)v22 + v29 + 4);
                v26 += 40;
                if ( (unsigned int)v25 >= v12 )
                  goto LABEL_11;
              }
            }
            goto LABEL_22;
          }
          if ( v18 != 1164535105 )
          {
            v17 = -1073741585;
            goto LABEL_12;
          }
        }
        v12 = 1;
        v30 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
        v9 = v30;
        if ( v30 )
        {
          memset(v30, 0, 0x28uLL);
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
LABEL_22:
      v17 = -1073741670;
    }
  }
LABEL_12:
  if ( v31 )
    AMLIDereferenceHandleEx(v31, v16);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x52706341u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x52706341u);
  return (unsigned int)v17;
}
