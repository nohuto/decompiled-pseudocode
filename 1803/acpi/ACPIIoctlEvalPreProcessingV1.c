/*
 * XREFs of ACPIIoctlEvalPreProcessingV1 @ 0x1C002C1A0
 * Callers:
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002B29C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C002BDC4 (ACPIIoctlEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C002D628 (AcpiIoctlArgumentToPackageObjV1.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV1(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        POOL_TYPE a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  _WORD *v8; // rdi
  unsigned int v10; // r15d
  int v12; // ecx
  unsigned int v13; // eax
  __int64 result; // rax
  _DWORD *v15; // rbx
  PVOID PoolWithTag; // rbp
  int v17; // ebx
  int v18; // eax
  _WORD *v19; // rax
  __int64 v20; // rax
  unsigned __int16 *v21; // rsi
  size_t v22; // rbx
  _WORD *v23; // rax
  __int64 v24; // r13
  char *v25; // r14
  __int16 v26; // ax
  unsigned int v27; // eax
  __int64 v28; // rax
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
  v15 = *(_DWORD **)(a2 + 24);
  v31 = 0;
  Src = v15[1];
  if ( !*(_QWORD *)(ACPIInternalGetDeviceExtension(BugCheckParameter3) + 712) )
    return 3221225486LL;
  result = AMLIGetNameSpaceObject(&Src);
  if ( (int)result >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(a4, 0x28uLL, 0x52706341u);
    if ( !PoolWithTag )
      goto LABEL_9;
    v18 = *v15;
    if ( *v15 == 1114203457 )
    {
LABEL_23:
      *a5 = 0LL;
      *a6 = PoolWithTag;
      *a7 = v8;
      *a8 = v10;
      return 0LL;
    }
    if ( v18 != 1130980673 )
    {
      if ( v18 != 1231643969 && v18 != 1399416129 )
        return 3221225711LL;
      v10 = 1;
      v19 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
      v8 = v19;
      if ( !v19 )
        goto LABEL_9;
      memset(v19, 0, 0x28uLL);
      if ( *v15 == 1231643969 )
      {
        v8[1] = 1;
        *((_QWORD *)v8 + 2) = (unsigned int)v15[2];
      }
      else
      {
        v8[1] = 2;
        *((_DWORD *)v8 + 6) = v15[2];
        *((_QWORD *)v8 + 4) = (unsigned __int64)(v15 + 3) & -(__int64)(v15[2] != 0);
      }
      goto LABEL_23;
    }
    v20 = (unsigned int)v15[3];
    if ( !(_DWORD)v20 )
      goto LABEL_23;
    v21 = (unsigned __int16 *)(v15 + 4);
    v22 = 40 * v20;
    v10 = v20;
    v23 = ExAllocatePoolWithTag(a4, 40 * v20, 0x41706341u);
    v8 = v23;
    if ( !v23 )
    {
LABEL_9:
      v17 = -1073741670;
LABEL_10:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x52706341u);
      if ( v8 )
        ExFreePoolWithTag(v8, 0x52706341u);
      return (unsigned int)v17;
    }
    memset(v23, 0, v22);
    v24 = 0LL;
    v25 = (char *)(v8 + 12);
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
            v17 = AcpiIoctlArgumentToPackageObjV1(
                    (_DWORD)v21,
                    a4,
                    0,
                    (int)v8 + 8 * (5 * (int)v24 + 3),
                    (__int64)&v8[20 * v24 + 16]);
            if ( v17 < 0 )
              goto LABEL_10;
            goto LABEL_40;
          }
          *((_WORD *)v25 - 11) = 3;
        }
        *(_DWORD *)v25 = v21[1];
        *((_QWORD *)v25 + 1) = (unsigned __int64)(v21 + 2) & -(__int64)(v21[1] != 0);
      }
      else
      {
        *((_QWORD *)v25 - 1) = *((unsigned int *)v21 + 1);
      }
LABEL_40:
      LOWORD(v28) = v21[1];
      if ( (unsigned __int16)v28 >= 4u )
        v28 = (unsigned __int16)v28;
      else
        v28 = 4LL;
      v25 += 40;
      v21 = (unsigned __int16 *)((char *)v21 + v28 + 4);
      v24 = (unsigned int)(v24 + 1);
      if ( (unsigned int)v24 >= v10 )
        goto LABEL_23;
    }
  }
  return result;
}
