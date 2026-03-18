/*
 * XREFs of PiRegStateReadStackCreationSettingsFromKey @ 0x1C011ABFC
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C011A7B8 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0011844 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueGetFullBuffer @ 0x1C011A878 (CmRegUtilUcValueGetFullBuffer.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C011AD90 (CmRegUtilWstrValueGetDword.c)
 *     SeUtilSecurityInfoFromSecurityDescriptor @ 0x1C011AF8C (SeUtilSecurityInfoFromSecurityDescriptor.c)
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
  int Dword; // eax
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r8
  int v16; // eax
  PVOID v18; // rax
  void *v19; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF
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
    FullBuffer = CmRegUtilUcValueGetFullBuffer(KeyHandle, &DestinationString, v9, v10, &v21);
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
    goto LABEL_26;
  if ( P )
  {
    inited = SeUtilSecurityInfoFromSecurityDescriptor(P);
    if ( inited < 0 )
      goto LABEL_26;
    if ( (_BYTE)v21 )
    {
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      v18 = P;
      *(_DWORD *)a2 |= 2u;
      *(_QWORD *)(a2 + 8) = v18;
    }
  }
  Dword = CmRegUtilWstrValueGetDword(KeyHandle, L"DeviceType", v9, v2);
  inited = Dword;
  if ( Dword >= 0 )
  {
    *(_DWORD *)a2 |= 1u;
  }
  else if ( Dword != -1073741772 )
  {
    goto LABEL_26;
  }
  v14 = CmRegUtilWstrValueGetDword(KeyHandle, L"DeviceCharacteristics", v13, v4);
  inited = v14;
  if ( v14 >= 0 )
  {
    *(_DWORD *)a2 |= 4u;
  }
  else if ( v14 != -1073741772 )
  {
    goto LABEL_26;
  }
  v16 = CmRegUtilWstrValueGetDword(KeyHandle, L"Exclusive", v15, v5);
  inited = v16;
  if ( v16 >= 0 )
  {
    *(_DWORD *)a2 |= 8u;
    return (unsigned int)inited;
  }
  if ( v16 == -1073741772 )
    return 0;
LABEL_26:
  v19 = *(void **)(a2 + 8);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *v2 = 0;
  *v4 = 0;
  *v5 = 0;
  return (unsigned int)inited;
}
