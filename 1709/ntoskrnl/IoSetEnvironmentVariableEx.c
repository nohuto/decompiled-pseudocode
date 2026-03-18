/*
 * XREFs of IoSetEnvironmentVariableEx @ 0x1406BC2DC
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140151610 (IopInitializeOfflineCrashDump.c)
 *     IopInitializeInMemoryDumpData @ 0x1401F7C84 (IopInitializeInMemoryDumpData.c)
 *     ExpSetBootEntry @ 0x140759AFC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14075A2BC (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14075A890 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x14075B948 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14075BAD0 (NtDeleteDriverEntry.c)
 *     NtSetBootEntryOrder @ 0x14075D5DC (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x14075D7E0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x14075D9E0 (NtSetDriverEntryOrder.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1400BA358 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x1406BCF98 (IopOpenSystemVariableDevice.c)
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
  if ( stru_140355200.LevelPlus1 > 5 && TlgKeywordOn(&stru_140355200, 0x400000000000uLL) )
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
    TlgWrite(&stru_140355200, &unk_1402CFB1A, 0LL, 0LL, 7u, &pData);
  }
  return (unsigned int)v9;
}
