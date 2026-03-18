/*
 * XREFs of IoEnumerateEnvironmentVariablesEx @ 0x1406901D8
 * Callers:
 *     NtEnumerateBootEntries @ 0x14071C3B8 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14071C988 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14071CE24 (NtEnumerateSystemEnvironmentValuesEx.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x140691258 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoEnumerateEnvironmentVariablesEx(unsigned int a1, __int64 a2, int *a3)
{
  int v6; // ebx
  __int64 v7; // r9
  PVOID v8; // rdi
  int v9; // eax
  PVOID Object; // [rsp+30h] [rbp-59h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-51h] BYREF
  __int64 v13; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  PVOID *p_Object; // [rsp+70h] [rbp-19h]
  int v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+7Ch] [rbp-Dh]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+8Ch] [rbp+3h]
  __int64 *v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]

  v6 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v6 >= 0 )
  {
    v7 = a2;
    v8 = Object;
    v6 = (*(__int64 (__fastcall **)(PVOID, PDEVICE_OBJECT, _QWORD, __int64, int *))(v13 + 16))(
           Object,
           DeviceObject,
           a1,
           v7,
           a3);
    if ( v8 )
      ObfDereferenceObject(v8);
  }
  if ( stru_14033C9D0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C9D0, 0x400000000000uLL) )
  {
    v9 = *a3;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    LODWORD(DeviceObject) = v9;
    p_Object = &Object;
    p_DeviceObject = &DeviceObject;
    v21 = &v13;
    LODWORD(Object) = a1;
    LODWORD(v13) = v6;
    v16 = 4;
    v19 = 4;
    v22 = 4;
    TlgWrite(&stru_14033C9D0, &unk_1402ABCDC, 0LL, 0LL, 5u, &pData);
  }
  return (unsigned int)v6;
}
