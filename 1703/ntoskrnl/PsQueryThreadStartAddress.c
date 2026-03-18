/*
 * XREFs of PsQueryThreadStartAddress @ 0x14006B8C4
 * Callers:
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     NtQueryInformationThread @ 0x140424560 (NtQueryInformationThread.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     EtwpPsProvTraceThread @ 0x140594F9C (EtwpPsProvTraceThread.c)
 *     sub_1407F5F50 @ 0x1407F5F50 (sub_1407F5F50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryThreadStartAddress(__int64 a1, int a2)
{
  __int64 v3; // rdx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 || !a2 )
    return *(_QWORD *)(a1 + 1680);
  if ( (*(_DWORD *)(a1 + 1744) & 8) != 0 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 1552);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  if ( (*(_DWORD *)(a1 + 1744) & 8) != 0 )
    return 0LL;
  return v3;
}
