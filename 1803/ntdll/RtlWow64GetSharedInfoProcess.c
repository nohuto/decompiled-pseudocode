/*
 * XREFs of RtlWow64GetSharedInfoProcess @ 0x1800856A0
 * Callers:
 *     RtlWow64SuspendThread @ 0x180085460 (RtlWow64SuspendThread.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 *     ZwReadVirtualMemory @ 0x18009B2A0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlWow64GetSharedInfoProcess(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  result = ZwQueryInformationProcess(a1, 26LL, &v8);
  if ( (int)result >= 0 )
  {
    if ( v8 )
    {
      v7 = v8 + 1136;
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
