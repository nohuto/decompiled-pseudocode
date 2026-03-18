/*
 * XREFs of PspWow64InitThread @ 0x1404264E0
 * Callers:
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x140009028 (RtlpGetLegacyContextLength.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlpArchContextFlagFromMachine @ 0x140426474 (RtlpArchContextFlagFromMachine.c)
 *     PspWow64InitThreadGuestx86 @ 0x14042669C (PspWow64InitThreadGuestx86.c)
 *     PspWow64GetSharedInformation @ 0x1404267A8 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessMachine @ 0x14053B210 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall PspWow64InitThread(ULONG_PTR a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v6; // edi
  unsigned __int16 ProcessMachine; // r13
  int v8; // eax
  _DWORD *v9; // rbx
  __int64 v10; // r12
  __int64 SharedInformation; // rsi
  __int64 v12; // r14
  __int64 v13; // r15
  _DWORD *v14; // rdx
  _DWORD v16[2]; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-90h]
  _DWORD *v18; // [rsp+40h] [rbp-88h]
  __int64 v19; // [rsp+48h] [rbp-80h]
  $5BC46E0569261879018906DEC3127961 v20; // [rsp+50h] [rbp-78h] BYREF

  v19 = a4;
  BugCheckParameter1 = a1;
  v6 = 0;
  ProcessMachine = PsWow64GetProcessMachine(a1);
  v8 = RtlpArchContextFlagFromMachine(ProcessMachine);
  if ( !v8 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v8, 0LL, v16);
  v18 = *(_DWORD **)(a2 + 16);
  v9 = (_DWORD *)((unsigned int)~(v16[0] - 1) & ((unsigned __int64)v18 + v16[0] + 3));
  v10 = *(_QWORD *)(a2 + 40);
  SharedInformation = a3[31];
  if ( SharedInformation == PspUserThreadStart )
    SharedInformation = PspWow64GetSharedInformation(ProcessMachine, 4LL);
  v12 = a3[16];
  v13 = a3[17];
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v20);
  v14 = v18;
  *(_QWORD *)(v19 + 5256) = v18;
  *v14 = ProcessMachine << 16;
  switch ( ProcessMachine )
  {
    case 0x14Cu:
      PspWow64InitThreadGuestx86(BugCheckParameter1, v9, SharedInformation, v10, v12, v13);
      break;
    case 0x1C4u:
      memset(v9, 0, 0x1A0uLL);
      v9[14] = v10;
      v9[16] = SharedInformation;
      v9[1] = v12;
      v9[2] = v13;
      *(_QWORD *)(v9 + 17) = 48LL;
      *v9 = 2097159;
      break;
    case 0x8664u:
      memset(v9, 0, 0x4D0uLL);
      *((_QWORD *)v9 + 19) = v10;
      *((_QWORD *)v9 + 31) = SharedInformation;
      *((_QWORD *)v9 + 16) = v12;
      *((_QWORD *)v9 + 17) = v13;
      v9[12] = 1048607;
      break;
    default:
      v6 = -1073741811;
      v16[1] = -1073741811;
      break;
  }
  KiUnstackDetachProcess(&v20, 0LL);
  return v6;
}
