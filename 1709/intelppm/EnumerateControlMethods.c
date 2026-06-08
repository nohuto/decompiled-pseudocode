/*
 * XREFs of EnumerateControlMethods @ 0x1C0022FB4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0021204 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     GetPackedName @ 0x1C0023200 (GetPackedName.c)
 */

__int64 __fastcall EnumerateControlMethods(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r13
  __int64 v4; // rdx
  SIZE_T *v5; // rdi
  int v6; // r12d
  unsigned int (__fastcall *v7)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, _QWORD); // rax
  unsigned int v8; // ebx
  __int64 v9; // rsi
  SIZE_T *PoolWithTag; // rax
  __int64 v11; // rdx
  int v12; // ebx
  unsigned int v13; // eax
  _DWORD *v14; // rsi
  unsigned int v15; // r15d
  __int64 v16; // r14
  int PackedName; // eax
  __int64 v18; // rcx
  char *v19; // rdx
  __int64 v21; // [rsp+50h] [rbp-49h] BYREF
  SIZE_T *v22; // [rsp+58h] [rbp-41h]
  __int64 v23; // [rsp+60h] [rbp-39h]
  _QWORD v24[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v25; // [rsp+78h] [rbp-21h]
  __int64 v26; // [rsp+80h] [rbp-19h] BYREF
  _DWORD *v27; // [rsp+88h] [rbp-11h]
  _QWORD v28[2]; // [rsp+90h] [rbp-9h] BYREF
  SIZE_T NumberOfBytes[2]; // [rsp+A0h] [rbp+7h] BYREF
  int v30; // [rsp+B0h] [rbp+17h]

  v27 = a2;
  v28[0] = 0LL;
  v24[0] = 0LL;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  v6 = 0;
  v25 = 0LL;
  v28[1] = 0LL;
  v24[1] = v28;
  v28[0] = 0x148696541LL;
  v21 = 0LL;
  v23 = 0LL;
  NumberOfBytes[0] = 0LL;
  NumberOfBytes[1] = 0LL;
  v30 = 0;
  v22 = NumberOfBytes;
  v7 = *(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488);
  LODWORD(v24[0]) = 1;
  LODWORD(v25) = 16;
  LODWORD(v21) = 1;
  LODWORD(v23) = 20;
  if ( v7(WdfDriverGlobals, v4, 0LL, 3325984LL, v24, &v21, 0LL, 0LL) != -2147483643 )
  {
    v12 = -1072431089;
    goto LABEL_18;
  }
  if ( LODWORD(NumberOfBytes[0]) != 1198089537 )
    goto LABEL_22;
  v8 = HIDWORD(NumberOfBytes[0]);
  if ( HIDWORD(NumberOfBytes[0]) < 0x14 )
    goto LABEL_22;
  v9 = HIDWORD(NumberOfBytes[0]);
  PoolWithTag = (SIZE_T *)ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes[0]), 0x72637250u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_18;
  }
  memset(PoolWithTag, 0, v8);
  v11 = *(_QWORD *)(a1 + 16);
  v21 = 1LL;
  v22 = v5;
  v23 = v8;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
          WdfDriverGlobals,
          v11,
          0LL,
          3325984LL,
          v24,
          &v21,
          0LL,
          &v26);
  if ( v12 < 0 )
    goto LABEL_16;
  if ( *(_DWORD *)v5 == 1198089537 && (v13 = *((_DWORD *)v5 + 1)) != 0 && v26 == v9 )
  {
    v14 = v5 + 1;
    if ( v13 > 1 )
    {
      v15 = *((_DWORD *)v5 + 3);
      v16 = v13 - 1;
      do
      {
        v14 = (_DWORD *)((char *)v14 + v15 + 8);
        v15 = v14[1];
        PackedName = GetPackedName(v14 + 2, v15);
        v18 = 0LL;
        v19 = AcpiFeatureMethods;
        while ( *(_DWORD *)v19 != PackedName )
        {
          v18 = (unsigned int)(v18 + 1);
          v19 += 8;
          if ( (unsigned int)v18 >= 0x10 )
            goto LABEL_14;
        }
        v6 |= *(_DWORD *)&AcpiFeatureMethods[8 * v18 + 4];
LABEL_14:
        --v16;
      }
      while ( v16 );
      v3 = v27;
    }
  }
  else
  {
LABEL_22:
    v12 = -1072431089;
  }
LABEL_16:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
LABEL_18:
  *v3 = v6;
  return (unsigned int)v12;
}
