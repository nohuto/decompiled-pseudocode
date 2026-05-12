/*
 * XREFs of PortRegistryRead @ 0x1C005FDEC
 * Callers:
 *     RaidRegGetDeviceDumpSupportLevel @ 0x1C0015BA4 (RaidRegGetDeviceDumpSupportLevel.c)
 *     RaidRegGetDeviceDumpMaxSize @ 0x1C0015C18 (RaidRegGetDeviceDumpMaxSize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall PortRegistryRead(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int *a5)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  PVOID SystemRoutineAddress; // rax
  __int64 result; // rax
  __int64 v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+40h] [rbp-39h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v15[14]; // [rsp+58h] [rbp-21h] BYREF

  v12 = *a4;
  v13 = *a5;
  memset(v15, 0, sizeof(v15));
  LODWORD(v15[4]) = 0;
  v15[5] = 0LL;
  LODWORD(v15[6]) = 0;
  v15[0] = &PortpRegQueryRoutine;
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_QWORD *)(a1 + 8);
  v15[2] = v8;
  v15[3] = &v12;
  LODWORD(v15[1]) = 20;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, __int64, _QWORD))SystemRoutineAddress)(
             0LL,
             v9,
             v15,
             4LL,
             0LL);
  *a4 = v12;
  *a5 = v13;
  return result;
}
