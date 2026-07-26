/*
 * XREFs of PiRegStateReadStackCreationSettingsFromKey @ 0x1C00F395C
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00F3B14 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C00787C8 (WdmlibRtlInitUnicodeStringEx.c)
 *     SeUtilSecurityInfoFromSecurityDescriptor @ 0x1C00A860C (SeUtilSecurityInfoFromSecurityDescriptor.c)
 *     CmRegUtilUcValueGetFullBuffer @ 0x1C00F3FA4 (CmRegUtilUcValueGetFullBuffer.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C00F41E8 (CmRegUtilWstrValueGetDword.c)
 */

__int64 __fastcall PiRegStateReadStackCreationSettingsFromKey(HANDLE KeyHandle, __int64 a2)
{
  _DWORD *v2; // r13
  unsigned int *v3; // rsi
  _DWORD *v4; // r15
  _DWORD *v5; // r12
  NTSTATUS inited; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS FullBuffer; // eax
  PVOID v12; // rax
  int Dword; // eax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // r8
  int v17; // eax
  void *v18; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF
  int v22; // [rsp+90h] [rbp+50h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h] BYREF

  P = 0LL;
  v2 = (_DWORD *)(a2 + 4);
  v3 = 0LL;
  v4 = (_DWORD *)(a2 + 16);
  *(_DWORD *)a2 = 0;
  v5 = (_DWORD *)(a2 + 20);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  v21 = 0LL;
  inited = WdmlibRtlInitUnicodeStringEx(&DestinationString, L"Security");
  if ( inited >= 0 )
  {
    FullBuffer = CmRegUtilUcValueGetFullBuffer(KeyHandle, &DestinationString, (__int64)&v21);
    v3 = (unsigned int *)v21;
    inited = FullBuffer;
  }
  if ( inited < 0 )
  {
    if ( inited == -1073741772 )
    {
      P = 0LL;
      inited = 0;
    }
  }
  else
  {
    LOBYTE(v10) = 1;
    inited = SeCaptureSecurityDescriptor((char *)v3 + v3[2], 0LL, 1LL, v10, &P);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( inited < 0 )
    goto LABEL_25;
  if ( P )
  {
    inited = SeUtilSecurityInfoFromSecurityDescriptor(P, (BOOLEAN *)&v21, &v22);
    if ( inited < 0 )
      goto LABEL_25;
    if ( (_BYTE)v21 )
    {
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      v12 = P;
      *(_DWORD *)a2 |= 2u;
      *(_QWORD *)(a2 + 8) = v12;
    }
  }
  Dword = CmRegUtilWstrValueGetDword(KeyHandle, L"DeviceType", v9, v2);
  inited = Dword;
  if ( Dword < 0 )
  {
    if ( Dword != -1073741772 )
      goto LABEL_25;
  }
  else
  {
    *(_DWORD *)a2 |= 1u;
  }
  v15 = CmRegUtilWstrValueGetDword(KeyHandle, L"DeviceCharacteristics", v14, v4);
  inited = v15;
  if ( v15 < 0 )
  {
    if ( v15 != -1073741772 )
      goto LABEL_25;
  }
  else
  {
    *(_DWORD *)a2 |= 4u;
  }
  v17 = CmRegUtilWstrValueGetDword(KeyHandle, L"Exclusive", v16, v5);
  inited = v17;
  if ( v17 >= 0 )
  {
    *(_DWORD *)a2 |= 8u;
    return (unsigned int)inited;
  }
  if ( v17 == -1073741772 )
    return 0;
LABEL_25:
  v18 = *(void **)(a2 + 8);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *v2 = 0;
  *v4 = 0;
  *v5 = 0;
  return (unsigned int)inited;
}
