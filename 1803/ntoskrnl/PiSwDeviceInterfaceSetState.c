/*
 * XREFs of PiSwDeviceInterfaceSetState @ 0x140646AC0
 * Callers:
 *     PiSwIrpInterfaceSetState @ 0x1406465E8 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x14064675C (PiSwIrpInterfaceRegister.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404905D8 (_CmSetDeviceInterfacePathFormat.c)
 *     PnpAllocatePWSTR @ 0x1405045F0 (PnpAllocatePWSTR.c)
 *     IoSetDeviceInterfaceState @ 0x1405F53C0 (IoSetDeviceInterfaceState.c)
 */

__int64 __fastcall PiSwDeviceInterfaceSetState(__int64 a1, __int64 a2, BOOLEAN a3)
{
  __int64 v3; // rax
  WCHAR *v4; // rbx
  int v5; // edi
  __int64 v8; // rax
  int PWSTR; // eax
  __int64 v10; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PCWSTR SourceString; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 120);
  v4 = 0LL;
  v5 = 0;
  SourceString = 0LL;
  if ( !v3
    || (v8 = *(_QWORD *)(v3 + 64)) == 0
    || (*(_DWORD *)(v8 + 8) & 1) == 0
    || *(_BYTE *)(a2 + 36) == a3
    || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&SourceString),
        v4 = (WCHAR *)SourceString,
        v5 = PWSTR,
        PWSTR >= 0)
    && (v5 = CmSetDeviceInterfacePathFormat(v10, SourceString, 1), v5 >= 0)
    && (RtlInitUnicodeString(&DestinationString, v4), v5 = IoSetDeviceInterfaceState(&DestinationString, a3), v5 >= 0) )
  {
    *(_BYTE *)(a2 + 36) = a3;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x57706E50u);
  return (unsigned int)v5;
}
