/*
 * XREFs of ACPIIoctlEvalPreProcessingV2 @ 0x1C0050EBC
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C001B138 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C005088C (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C0051914 (AcpiIoctlArgumentToPackageObjV2.c)
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
  _WORD *v8; // rbx
  unsigned int v10; // r15d
  int v12; // ecx
  unsigned int v13; // eax
  __int64 result; // rax
  _DWORD *v15; // rdi
  __int64 *v16; // rdx
  PVOID PoolWithTag; // rbp
  int v18; // eax
  __int64 v19; // rax
  unsigned __int16 *v20; // rsi
  size_t v21; // rdi
  _WORD *v22; // rax
  __int64 v23; // r13
  char *v24; // r14
  __int16 v25; // ax
  unsigned int v26; // eax
  int v27; // edi
  __int64 v28; // rax
  _WORD *v29; // rax
  __int64 v31; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v32; // [rsp+40h] [rbp-68h]
  _QWORD *v33; // [rsp+48h] [rbp-60h]
  _QWORD *v34; // [rsp+50h] [rbp-58h]
  unsigned int *v35; // [rsp+58h] [rbp-50h]
  int Src; // [rsp+60h] [rbp-48h] BYREF
  char v37; // [rsp+64h] [rbp-44h]

  v8 = 0LL;
  v31 = 0LL;
  v32 = a5;
  v10 = 0;
  v33 = a6;
  v34 = a7;
  v12 = *(_DWORD *)(a3 + 8);
  v35 = a8;
  v13 = *(_DWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v13 < 8 )
    return 3221225476LL;
  if ( (unsigned int)(v12 - 1) <= 0x16 )
    return 3221225507LL;
  v15 = *(_DWORD **)(a2 + 24);
  v37 = 0;
  Src = v15[1];
  v16 = *(__int64 **)(ACPIInternalGetDeviceExtension(BugCheckParameter3) + 712);
  if ( !v16 )
    return 3221225486LL;
  result = AMLIGetNameSpaceObject(&Src, v16, &v31, 1);
  if ( (int)result >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(a4, 0x28uLL, 0x52706341u);
    if ( PoolWithTag )
    {
      v18 = *v15;
      if ( *v15 == 1265198401 )
        goto LABEL_44;
      if ( v18 != 1281975617 && v18 != 1298752833 )
      {
        if ( v18 != 1315530049 )
          return 3221225711LL;
        v19 = (unsigned int)v15[3];
        if ( (_DWORD)v19 )
        {
          v20 = (unsigned __int16 *)(v15 + 4);
          v21 = 40 * v19;
          v10 = v19;
          v22 = ExAllocatePoolWithTag(a4, 40 * v19, 0x41706341u);
          v8 = v22;
          if ( v22 )
          {
            memset(v22, 0, v21);
            v23 = 0LL;
            v24 = (char *)(v8 + 12);
            while ( 1 )
            {
              if ( *v20 == 4 )
                v25 = 4;
              else
                v25 = *v20 + 1;
              *((_WORD *)v24 - 11) = v25;
              v26 = *v20;
              if ( *v20 )
              {
                if ( v26 > 2 )
                {
                  if ( v26 == 4 )
                  {
                    v27 = AcpiIoctlArgumentToPackageObjV2(
                            (_DWORD)v20,
                            a4,
                            0,
                            (int)v8 + 8 * (5 * (int)v23 + 3),
                            (__int64)&v8[20 * v23 + 16]);
                    if ( v27 < 0 )
                      goto LABEL_34;
                    goto LABEL_28;
                  }
                  *((_WORD *)v24 - 11) = 3;
                }
                *(_DWORD *)v24 = *((_DWORD *)v20 + 1);
                *((_QWORD *)v24 + 1) = (unsigned __int64)(v20 + 4) & -(__int64)(*((_DWORD *)v20 + 1) != 0);
              }
              else
              {
                *((_QWORD *)v24 - 1) = *((unsigned int *)v20 + 2);
              }
LABEL_28:
              v28 = *((unsigned int *)v20 + 1);
              if ( (unsigned int)v28 < 4 )
                v28 = 4LL;
              v24 += 40;
              v20 = (unsigned __int16 *)((char *)v20 + v28 + 8);
              v23 = (unsigned int)(v23 + 1);
              if ( (unsigned int)v23 >= v10 )
                goto LABEL_44;
            }
          }
          goto LABEL_33;
        }
LABEL_44:
        *v32 = v31;
        *v33 = PoolWithTag;
        *v34 = v8;
        *v35 = v10;
        return 0LL;
      }
      v10 = 1;
      v29 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
      v8 = v29;
      if ( v29 )
      {
        memset(v29, 0, 0x28uLL);
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
        goto LABEL_44;
      }
    }
LABEL_33:
    v27 = -1073741670;
LABEL_34:
    if ( v31 )
      AMLIDereferenceHandleEx(v31);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x52706341u);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x52706341u);
    return (unsigned int)v27;
  }
  return result;
}
