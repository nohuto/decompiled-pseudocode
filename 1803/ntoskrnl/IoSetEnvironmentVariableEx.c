/*
 * XREFs of IoSetEnvironmentVariableEx @ 0x140721290
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x14016F648 (IopInitializeOfflineCrashDump.c)
 *     IopInitializeInMemoryDumpData @ 0x140234FC0 (IopInitializeInMemoryDumpData.c)
 *     ExpSetBootEntry @ 0x1407C0A28 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407C11E8 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407C17BC (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1407C2930 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407C2AB8 (NtDeleteDriverEntry.c)
 *     NtSetBootEntryOrder @ 0x1407C45FC (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1407C4800 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407C4A04 (NtSetDriverEntryOrder.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14006F020 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x140721F48 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoSetEnvironmentVariableEx(LPCWSTR pwsz, __int64 a2, __int64 a3, int a4, int a5)
{
  int v9; // ebx
  PVOID v10; // rdi
  UINT32 cData[2]; // [rsp+20h] [rbp-A1h]
  PVOID Object; // [rsp+40h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-79h] BYREF
  __int64 v15; // [rsp+50h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-41h] BYREF
  __int64 v18; // [rsp+90h] [rbp-31h]
  int v19; // [rsp+98h] [rbp-29h]
  int v20; // [rsp+9Ch] [rbp-25h]
  PVOID *p_Object; // [rsp+A0h] [rbp-21h]
  int v22; // [rsp+A8h] [rbp-19h]
  int v23; // [rsp+ACh] [rbp-15h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-11h]
  int v25; // [rsp+B8h] [rbp-9h]
  int v26; // [rsp+BCh] [rbp-5h]
  __int64 *v27; // [rsp+C0h] [rbp-1h]
  int v28; // [rsp+C8h] [rbp+7h]
  int v29; // [rsp+CCh] [rbp+Bh]

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
  if ( stru_140398400.LevelPlus1 > 5 && TlgKeywordOn(&stru_140398400, 0x200000000000uLL) )
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
    TlgWrite(&stru_140398400, &unk_14030953E, 0LL, 0LL, 7u, &pData);
  }
  return (unsigned int)v9;
}
