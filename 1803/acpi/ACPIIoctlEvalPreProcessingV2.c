/*
 * XREFs of ACPIIoctlEvalPreProcessingV2 @ 0x1C002C82C
 * Callers:
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002B29C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C002BDC4 (ACPIIoctlEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C002D86C (AcpiIoctlArgumentToPackageObjV2.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV2(
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
  int v17; // eax
  __int64 v18; // rax
  unsigned __int16 *v19; // rsi
  size_t v20; // rbx
  _WORD *v21; // rax
  __int64 v22; // r13
  char *v23; // r14
  __int16 v24; // ax
  unsigned int v25; // eax
  int v26; // ebx
  __int64 v27; // rax
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
  if ( (unsigned int)(v12 - 1) <= 0x16 )
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
    if ( PoolWithTag )
    {
      v17 = *v15;
      if ( *v15 == 1265198401 )
        goto LABEL_42;
      if ( v17 != 1281975617 && v17 != 1298752833 )
      {
        if ( v17 != 1315530049 )
          return 3221225711LL;
        v18 = (unsigned int)v15[3];
        if ( (_DWORD)v18 )
        {
          v19 = (unsigned __int16 *)(v15 + 4);
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
                    v26 = AcpiIoctlArgumentToPackageObjV2(
                            (_DWORD)v19,
                            a4,
                            0,
                            (int)v8 + 8 * (5 * (int)v22 + 3),
                            (__int64)&v8[20 * v22 + 16]);
                    if ( v26 < 0 )
                      goto LABEL_34;
                    goto LABEL_28;
                  }
                  *((_WORD *)v23 - 11) = 3;
                }
                *(_DWORD *)v23 = *((_DWORD *)v19 + 1);
                *((_QWORD *)v23 + 1) = (unsigned __int64)(v19 + 4) & -(__int64)(*((_DWORD *)v19 + 1) != 0);
              }
              else
              {
                *((_QWORD *)v23 - 1) = *((unsigned int *)v19 + 2);
              }
LABEL_28:
              v27 = *((unsigned int *)v19 + 1);
              if ( (unsigned int)v27 < 4 )
                v27 = 4LL;
              v23 += 40;
              v19 = (unsigned __int16 *)((char *)v19 + v27 + 8);
              v22 = (unsigned int)(v22 + 1);
              if ( (unsigned int)v22 >= v10 )
                goto LABEL_42;
            }
          }
          goto LABEL_33;
        }
LABEL_42:
        *a5 = 0LL;
        *a6 = PoolWithTag;
        *a7 = v8;
        *a8 = v10;
        return 0LL;
      }
      v10 = 1;
      v28 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
      v8 = v28;
      if ( v28 )
      {
        memset(v28, 0, 0x28uLL);
        if ( *v15 == 1281975617 )
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
        goto LABEL_42;
      }
    }
LABEL_33:
    v26 = -1073741670;
LABEL_34:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x52706341u);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x52706341u);
    return (unsigned int)v26;
  }
  return result;
}
