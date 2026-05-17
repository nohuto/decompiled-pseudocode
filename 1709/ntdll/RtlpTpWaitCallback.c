/*
 * XREFs of RtlpTpWaitCallback @ 0x18000B370
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800019E0 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001A60 (RtlpTpETWCallbackStart.c)
 *     RtlpTpWaitCheckReset @ 0x18000B308 (RtlpTpWaitCheckReset.c)
 *     TppStartThreadData @ 0x18000CE14 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x18000F478 (TppCompleteThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpImpersonate @ 0x180088908 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpTpWaitCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 UniqueThread_low; // rcx
  struct _TEB *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v15[6]; // [rsp+38h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(a2 + 8) & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4);
  UniqueThread_low = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    RtlpTpImpersonate();
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
  {
    UniqueThread_low = LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    *(_DWORD *)(a2 + 88) = UniqueThread_low;
  }
  v7 = NtCurrentTeb();
  v8 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(UniqueThread_low, a2) )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    RtlpTpETWCallbackStart(
      0LL,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v7->SubProcessTag);
  TppStartThreadData(v15, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v7->SubProcessTag);
  LOBYTE(v10) = a4 == 258;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v10);
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    *(_DWORD *)(a2 + 88) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v14 = 0LL;
    NtSetInformationThread(-2LL, 5LL, &v14);
  }
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v11) )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStop(
      0LL,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v7->SubProcessTag);
  return TppCompleteThreadData(v15[0]);
}
