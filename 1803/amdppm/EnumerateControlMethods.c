/*
 * XREFs of EnumerateControlMethods @ 0x1C0026A88
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026E8C (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CC80 (memset.c)
 */

__int64 __fastcall EnumerateControlMethods(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  int v5; // r15d
  SIZE_T *v6; // rdi
  unsigned int (__fastcall *v7)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, _QWORD); // rax
  int v8; // ebx
  unsigned int v9; // ebx
  __int64 v10; // rsi
  SIZE_T *PoolWithTag; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  _DWORD *v14; // r9
  unsigned int v15; // r11d
  __int64 v16; // rsi
  unsigned int v17; // ecx
  unsigned int v18; // r8d
  unsigned int v19; // eax
  _BYTE *v20; // rdx
  unsigned int v21; // r14d
  int v22; // edx
  unsigned int v23; // r8d
  unsigned __int8 *v24; // r10
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  char *v28; // rcx
  __int64 v30; // [rsp+50h] [rbp-49h] BYREF
  SIZE_T *v31; // [rsp+58h] [rbp-41h]
  __int64 v32; // [rsp+60h] [rbp-39h]
  _QWORD v33[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v34; // [rsp+78h] [rbp-21h]
  __int64 v35; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v36[2]; // [rsp+88h] [rbp-11h] BYREF
  SIZE_T NumberOfBytes[2]; // [rsp+98h] [rbp-1h] BYREF
  int v38; // [rsp+A8h] [rbp+Fh]

  v36[0] = 0LL;
  v33[0] = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v34 = 0LL;
  v36[1] = 0LL;
  v33[1] = v36;
  v5 = 0;
  v30 = 0LL;
  v6 = 0LL;
  v32 = 0LL;
  NumberOfBytes[0] = 0LL;
  NumberOfBytes[1] = 0LL;
  v38 = 0;
  v31 = NumberOfBytes;
  v36[0] = 0x148696541LL;
  v7 = *(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488);
  LODWORD(v33[0]) = 1;
  LODWORD(v34) = 16;
  LODWORD(v30) = 1;
  LODWORD(v32) = 20;
  if ( v7(WdfDriverGlobals, v4, 0LL, 3325984LL, v33, &v30, 0LL, 0LL) != -2147483643 )
  {
    v8 = -1072431089;
    goto LABEL_35;
  }
  if ( LODWORD(NumberOfBytes[0]) != 1198089537 )
    goto LABEL_32;
  v9 = HIDWORD(NumberOfBytes[0]);
  if ( HIDWORD(NumberOfBytes[0]) < 0x14 )
    goto LABEL_32;
  v10 = HIDWORD(NumberOfBytes[0]);
  PoolWithTag = (SIZE_T *)ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes[0]), 0x72637250u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_35;
  }
  memset(PoolWithTag, 0, v9);
  v12 = *(_QWORD *)(a1 + 16);
  v30 = 1LL;
  v31 = v6;
  v32 = v9;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v12,
         0LL,
         3325984LL,
         v33,
         &v30,
         0LL,
         &v35);
  if ( v8 < 0 )
    goto LABEL_33;
  if ( *(_DWORD *)v6 == 1198089537 && (v13 = *((_DWORD *)v6 + 1)) != 0 && v35 == v10 )
  {
    v14 = v6 + 1;
    if ( v13 > 1 )
    {
      v15 = *((_DWORD *)v6 + 3);
      v16 = v13 - 1;
      do
      {
        v14 = (_DWORD *)((char *)v14 + v15 + 8);
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v15 = v14[1];
        v20 = v14 + 2;
        if ( v15 )
        {
          while ( 1 )
          {
            v21 = v17;
            if ( !*v20 )
              break;
            v17 = v19;
            if ( *v20 != 46 )
              v17 = v21;
            ++v19;
            ++v20;
            if ( v19 >= v15 )
              goto LABEL_20;
          }
          v18 = v19;
        }
LABEL_20:
        v22 = 0;
        if ( v18 > v17 && v18 - v17 - 1 <= 4 )
        {
          v23 = v18 - 1;
          if ( v23 > v17 )
          {
            v24 = (unsigned __int8 *)v14 + v23 + 8;
            v25 = v23 - v17;
            do
            {
              v26 = *v24--;
              v22 = v26 + (v22 << 8);
              --v25;
            }
            while ( v25 );
          }
        }
        v27 = 0LL;
        v28 = AcpiFeatureMethods;
        while ( *(_DWORD *)v28 != v22 )
        {
          v27 = (unsigned int)(v27 + 1);
          v28 += 8;
          if ( (unsigned int)v27 >= 0x10 )
            goto LABEL_30;
        }
        v5 |= *(_DWORD *)&AcpiFeatureMethods[8 * v27 + 4];
LABEL_30:
        --v16;
      }
      while ( v16 );
    }
  }
  else
  {
LABEL_32:
    v8 = -1072431089;
  }
LABEL_33:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
LABEL_35:
  *a2 = v5;
  return (unsigned int)v8;
}
