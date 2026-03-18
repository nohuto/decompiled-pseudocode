/*
 * XREFs of IoSetEnvironmentVariableEx @ 0x1406905FC
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140159E68 (IopInitializeOfflineCrashDump.c)
 *     IopInitializeInMemoryDumpData @ 0x1401F232C (IopInitializeInMemoryDumpData.c)
 *     ExpSetBootEntry @ 0x14071A260 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14071AA20 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14071AFF4 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x14071C0A8 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14071C230 (NtDeleteDriverEntry.c)
 *     NtSetBootEntryOrder @ 0x14071DCCC (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x14071DED0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x14071E0CC (NtSetDriverEntryOrder.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x140081B24 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x140691258 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoSetEnvironmentVariableEx(LPCWSTR pwsz, __int64 a2, __int64 a3, int a4, int a5)
{
  int v9; // ebx
  PVOID v10; // rdi
  UINT32 cData[2]; // [rsp+20h] [rbp-B1h]
  PVOID Object; // [rsp+40h] [rbp-91h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-89h] BYREF
  __int64 v15; // [rsp+50h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-51h] BYREF
  __int64 v18; // [rsp+90h] [rbp-41h]
  int v19; // [rsp+98h] [rbp-39h]
  int v20; // [rsp+9Ch] [rbp-35h]
  PVOID *p_Object; // [rsp+A0h] [rbp-31h]
  int v22; // [rsp+A8h] [rbp-29h]
  int v23; // [rsp+ACh] [rbp-25h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-21h]
  int v25; // [rsp+B8h] [rbp-19h]
  int v26; // [rsp+BCh] [rbp-15h]
  __int64 *v27; // [rsp+C0h] [rbp-11h]
  int v28; // [rsp+C8h] [rbp-9h]
  int v29; // [rsp+CCh] [rbp-5h]

  v9 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v9 >= 0 )
  {
    *(_QWORD *)cData = a3;
    v10 = Object;
    v9 = (*(__int64 (__fastcall **)(PVOID, PDEVICE_OBJECT, LPCWSTR, __int64, UINT32 *, int, int))(v15 + 8))(
           Object,
           DeviceObject,
           pwsz,
           a2,
           *(UINT32 **)cData,
           a4,
           a5);
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  if ( stru_14033C9D0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C9D0, 0x400000000000uLL) )
  {
    LODWORD(Object) = a4;
    LODWORD(DeviceObject) = a5;
    LODWORD(v15) = v9;
    TlgCreateWsz(&pDesc, pwsz);
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    p_Object = &Object;
    p_DeviceObject = &DeviceObject;
    v27 = &v15;
    v18 = a2;
    v19 = 16;
    v22 = 4;
    v25 = 4;
    v28 = 4;
    TlgWrite(&stru_14033C9D0, &unk_1402ABD2A, 0LL, 0LL, 7u, &pData);
  }
  return (unsigned int)v9;
}
