/*
 * XREFs of RtlWow64GetSharedInfoProcess @ 0x18008F3D0
 * Callers:
 *     RtlWow64SuspendThread @ 0x18008F2D0 (RtlWow64SuspendThread.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 *     ZwReadVirtualMemory @ 0x1800A08A0 (ZwReadVirtualMemory.c)
 */

NTSTATUS __fastcall RtlWow64GetSharedInfoProcess(void *a1, _BYTE *a2, __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  result = NtQueryInformationProcess(a1, ProcessWow64Information, &v8, 8u, 0LL);
  if ( result >= 0 )
  {
    if ( v8 )
    {
      v7 = v8 + 1128;
      *a2 = 1;
      return ZwReadVirtualMemory(a1, v7, a3, 40LL, 0LL);
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}
