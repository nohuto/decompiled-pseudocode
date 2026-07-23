/*
 * XREFs of sub_1800EFCD8 @ 0x1800EFCD8
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800EF810 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     RtlCreateUmsThreadContext @ 0x1800EF5B0 (RtlCreateUmsThreadContext.c)
 *     RtlDeleteUmsThreadContext @ 0x1800EF720 (RtlDeleteUmsThreadContext.c)
 */

__int64 __fastcall sub_1800EFCD8(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // rsi
  NTSTATUS v4; // edi
  int v5; // eax
  _QWORD *v6; // rbx
  _QWORD ThreadInformation[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  v3 = NtCurrentTeb();
  v4 = -1073741811;
  if ( a2 )
  {
    v5 = RtlCreateUmsThreadContext(&BaseAddress);
    v6 = BaseAddress;
    v4 = v5;
    if ( v5 < 0
      || (*((_QWORD *)BaseAddress + 156) = v3,
          v6[160] = v6,
          v6[159] = SLODWORD(v3->ClientId.UniqueThread),
          ThreadInformation[0] = 1LL,
          ThreadInformation[1] = a2,
          ThreadInformation[2] = v6,
          v4 = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUmsInformation, ThreadInformation, 0x18u),
          v4 < 0) )
    {
      if ( v6 )
        RtlDeleteUmsThreadContext(v6);
    }
    else
    {
      v3->TlsSlots[4] = v6;
    }
  }
  return (unsigned int)v4;
}
