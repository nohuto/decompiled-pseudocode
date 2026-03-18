/*
 * XREFs of ACPIIoctlEvalPreProcessing @ 0x1C0013E44
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C0013D34 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C005075C (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     AcpiIoctlArgumentToPackageObj @ 0x1C002895C (AcpiIoctlArgumentToPackageObj.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessing(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        POOL_TYPE a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  _WORD *v8; // rbx
  unsigned int v10; // r15d
  int v12; // ecx
  unsigned int v13; // eax
  _DWORD *v14; // rdi
  __int64 result; // rax
  PVOID PoolWithTag; // rbp
  int v17; // eax
  __int64 v18; // rax
  unsigned __int16 *v19; // rsi
  size_t v20; // rdi
  _WORD *v21; // rax
  __int64 v22; // r13
  char *v23; // r14
  __int16 v24; // ax
  unsigned int v25; // eax
  __int64 v26; // rax
  int v27; // edi
  _WORD *v28; // rax
  int Src; // [rsp+60h] [rbp-48h] BYREF
  char v31; // [rsp+64h] [rbp-44h]

  v8 = 0LL;
  v10 = 0;
  v12 = *(_DWORD *)(a3 + 8);
  v13 = *(_DWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v13 < 8 )
    return 3221225476LL;
  if ( (unsigned int)(v12 - 1) <= 0x12 )
    return 3221225507LL;
  v14 = *(_DWORD **)(a2 + 24);
  v31 = 0;
  Src = v14[1];
  if ( !*(_QWORD *)(ACPIInternalGetDeviceExtension(BugCheckParameter3) + 712) )
    return 3221225486LL;
  result = AMLIGetNameSpaceObject(&Src);
  if ( (int)result < 0 )
    return result;
  PoolWithTag = ExAllocatePoolWithTag(a4, 0x28uLL, 0x52706341u);
  if ( PoolWithTag )
  {
    v17 = *v14;
    if ( *v14 == 1114203457 )
    {
LABEL_7:
      *a5 = 0LL;
      *a6 = PoolWithTag;
      *a7 = v8;
      *a8 = v10;
      return 0LL;
    }
    if ( v17 == 1130980673 )
    {
      v18 = (unsigned int)v14[3];
      if ( !(_DWORD)v18 )
        goto LABEL_7;
      v19 = (unsigned __int16 *)(v14 + 4);
      v20 = 40 * v18;
      v10 = v18;
      v21 = ExAllocatePoolWithTag(a4, 40 * v18, 0x41706341u);
      v8 = v21;
      if ( v21 )
      {
        memset(v21, 0, v20);
        v22 = 0LL;
        v23 = (char *)(v8 + 12);
        while ( 1 )
        {
          if ( *v19 == 4 )
            v24 = 4;
          else
            v24 = *v19 + 1;
          *((_WORD *)v23 - 11) = v24;
          v25 = *v19;
          if ( *v19 )
          {
            if ( v25 > 2 )
            {
              if ( v25 == 4 )
              {
                v27 = AcpiIoctlArgumentToPackageObj(v19, (unsigned int)a4, 0LL, &v8[20 * v22 + 12], &v8[20 * v22 + 16]);
                if ( v27 < 0 )
                  goto LABEL_32;
                goto LABEL_16;
              }
              *((_WORD *)v23 - 11) = 3;
            }
            *(_DWORD *)v23 = v19[1];
            *((_QWORD *)v23 + 1) = (unsigned __int64)(v19 + 2) & -(__int64)(v19[1] != 0);
          }
          else
          {
            *((_QWORD *)v23 - 1) = *((unsigned int *)v19 + 1);
          }
LABEL_16:
          LOWORD(v26) = v19[1];
          if ( (unsigned __int16)v26 < 4u )
            v26 = 4LL;
          else
            v26 = (unsigned __int16)v26;
          v22 = (unsigned int)(v22 + 1);
          v19 = (unsigned __int16 *)((char *)v19 + v26 + 4);
          v23 += 40;
          if ( (unsigned int)v22 >= v10 )
            goto LABEL_7;
        }
      }
    }
    else
    {
      if ( v17 != 1231643969 && v17 != 1399416129 )
        return 3221225711LL;
      v10 = 1;
      v28 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
      v8 = v28;
      if ( v28 )
      {
        memset(v28, 0, 0x28uLL);
        if ( *v14 == 1231643969 )
        {
          v8[1] = 1;
          *((_QWORD *)v8 + 2) = (unsigned int)v14[2];
        }
        else
        {
          v8[1] = 2;
          *((_DWORD *)v8 + 6) = v14[2];
          *((_QWORD *)v8 + 4) = (unsigned __int64)(v14 + 3) & -(__int64)(v14[2] != 0);
        }
        goto LABEL_7;
      }
    }
  }
  v27 = -1073741670;
LABEL_32:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x52706341u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x52706341u);
  return (unsigned int)v27;
}
