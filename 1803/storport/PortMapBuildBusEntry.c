/*
 * XREFs of PortMapBuildBusEntry @ 0x1C00481D0
 * Callers:
 *     RaidAdapterCreateDevmapEntry @ 0x1C0025A6C (RaidAdapterCreateDevmapEntry.c)
 * Callees:
 *     PortRegistryCreateKeyEx @ 0x1C0016F18 (PortRegistryCreateKeyEx.c)
 */

__int64 __fastcall PortMapBuildBusEntry(void *a1, int a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  HANDLE v7; // rbx
  __int64 v8; // [rsp+20h] [rbp-28h]
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  result = PortRegistryCreateKeyEx(a1, 1u, &Handle, L"Scsi Bus %d", a2);
  if ( (int)result >= 0 )
  {
    LODWORD(v8) = a3;
    v7 = Handle;
    PortRegistryCreateKeyEx(Handle, 1u, 0LL, L"Initiator Id %d", v8);
    if ( a4 )
      *a4 = v7;
    else
      ZwClose(v7);
    return 0LL;
  }
  return result;
}
