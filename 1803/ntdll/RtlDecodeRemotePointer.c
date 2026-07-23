/*
 * XREFs of RtlDecodeRemotePointer @ 0x1800D6720
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 */

NTSTATUS __cdecl RtlDecodeRemotePointer(HANDLE ProcessHandle, PVOID Pointer, PVOID *DecodedPointer)
{
  NTSTATUS v3; // edi
  NTSTATUS v6; // eax
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v6 = ZwQueryInformationProcess(ProcessHandle, ProcessCookie, &v8, 4u, 0LL);
  if ( v6 < 0 )
    return v6 | 0x10000000;
  *DecodedPointer = (PVOID)(v8 ^ __ROR8__(Pointer, 64 - (v8 & 0x3F)));
  return v3;
}
