/*
 * XREFs of IoGetEnvironmentVariableEx @ 0x1406902FC
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140159E68 (IopInitializeOfflineCrashDump.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1407199A0 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x14071A260 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14071AA20 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x14071C0A8 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14071C230 (NtDeleteDriverEntry.c)
 *     NtGetEnvironmentVariableEx @ 0x14071D010 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x14071D114 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x14071D380 (NtQueryBootOptions.c)
 *     IopCachePreviousBootData @ 0x140832D48 (IopCachePreviousBootData.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x140081B24 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x140691258 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoGetEnvironmentVariableEx(LPCWSTR pwsz, __int64 a2, __int64 a3, _DWORD *a4, int *a5)
{
  int v9; // edi
  PVOID v10; // rbx
  UINT32 cData[2]; // [rsp+20h] [rbp-B1h]
  int v13; // [rsp+40h] [rbp-91h] BYREF
  PVOID Object; // [rsp+48h] [rbp-89h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-81h] BYREF
  __int64 (__fastcall **v16)(PVOID, PDEVICE_OBJECT, LPCWSTR, __int64, UINT32 *, _DWORD *, int *); // [rsp+58h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-51h] BYREF
  __int64 v19; // [rsp+90h] [rbp-41h]
  int v20; // [rsp+98h] [rbp-39h]
  int v21; // [rsp+9Ch] [rbp-35h]
  PVOID *p_Object; // [rsp+A0h] [rbp-31h]
  int v23; // [rsp+A8h] [rbp-29h]
  int v24; // [rsp+ACh] [rbp-25h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-21h]
  int v26; // [rsp+B8h] [rbp-19h]
  int v27; // [rsp+BCh] [rbp-15h]
  __int64 (__fastcall ***v28)(PVOID, PDEVICE_OBJECT, LPCWSTR, __int64, UINT32 *, _DWORD *, int *); // [rsp+C0h] [rbp-11h]
  int v29; // [rsp+C8h] [rbp-9h]
  int v30; // [rsp+CCh] [rbp-5h]

  v13 = -559038737;
  v9 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v9 >= 0 )
  {
    *(_QWORD *)cData = a3;
    v10 = Object;
    v9 = (*v16)(Object, DeviceObject, pwsz, a2, *(UINT32 **)cData, a4, &v13);
    if ( a5 )
      *a5 = v13;
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  if ( stru_14033C9D0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C9D0, 0x400000000000uLL) )
  {
    LODWORD(Object) = *a4;
    LODWORD(DeviceObject) = v13;
    LODWORD(v16) = v9;
    TlgCreateWsz(&pDesc, pwsz);
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    p_Object = &Object;
    p_DeviceObject = &DeviceObject;
    v28 = &v16;
    v19 = a2;
    v20 = 16;
    v23 = 4;
    v26 = 4;
    v29 = 4;
    TlgWrite(&stru_14033C9D0, &unk_1402ABD82, 0LL, 0LL, 7u, &pData);
  }
  return (unsigned int)v9;
}
