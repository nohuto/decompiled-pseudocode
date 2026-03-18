/*
 * XREFs of PspWow64InitThread @ 0x14058EEAC
 * Callers:
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     RtlpGetLegacyContextLength @ 0x1400DB028 (RtlpGetLegacyContextLength.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspWow64GetSharedInformation @ 0x14045FB80 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x14045FB98 (PsWow64GetProcessNtdllType.c)
 *     PsWow64GetProcessMachine @ 0x14049DA60 (PsWow64GetProcessMachine.c)
 *     RtlpArchContextFlagFromMachine @ 0x140516378 (RtlpArchContextFlagFromMachine.c)
 *     PspWow64InitThreadGuestx86 @ 0x14058F068 (PspWow64InitThreadGuestx86.c)
 */

__int64 __fastcall PspWow64InitThread(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // edi
  int v8; // eax
  _DWORD *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int16 ProcessNtdllType; // ax
  __int64 v13; // r14
  __int64 v14; // r15
  _DWORD *v15; // rdx
  unsigned __int16 ProcessMachine; // [rsp+30h] [rbp-98h]
  _DWORD v18[3]; // [rsp+34h] [rbp-94h] BYREF
  _DWORD *v19; // [rsp+40h] [rbp-88h]
  __int64 v20; // [rsp+48h] [rbp-80h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v21; // [rsp+50h] [rbp-78h] BYREF

  v20 = a4;
  v7 = 0;
  ProcessMachine = PsWow64GetProcessMachine((__int64)BugCheckParameter1);
  v8 = RtlpArchContextFlagFromMachine(ProcessMachine);
  if ( !v8 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v8, 0LL, v18);
  v19 = *(_DWORD **)(a2 + 16);
  v9 = (_DWORD *)((unsigned int)~(v18[0] - 1) & ((unsigned __int64)v19 + v18[0] + 3));
  v10 = *(_QWORD *)(a2 + 40);
  v11 = a3[31];
  if ( v11 == PspUserThreadStart )
  {
    ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)BugCheckParameter1);
    v11 = *((_QWORD *)PspWow64GetSharedInformation(ProcessNtdllType) + 4);
  }
  v13 = a3[16];
  v14 = a3[17];
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v21);
  v15 = v19;
  *(_QWORD *)(v20 + 5256) = v19;
  *v15 = ProcessMachine << 16;
  switch ( ProcessMachine )
  {
    case 0x14Cu:
      PspWow64InitThreadGuestx86(BugCheckParameter1, v9, v11, v10, v13, v14);
      break;
    case 0x1C4u:
      memset(v9, 0, 0x1A0uLL);
      v9[14] = v10;
      v9[16] = v11;
      v9[1] = v13;
      v9[2] = v14;
      *(_QWORD *)(v9 + 17) = 48LL;
      *v9 = 2097159;
      break;
    case 0x8664u:
      memset(v9, 0, 0x4D0uLL);
      *((_QWORD *)v9 + 19) = v10;
      *((_QWORD *)v9 + 31) = v11;
      *((_QWORD *)v9 + 16) = v13;
      *((_QWORD *)v9 + 17) = v14;
      v9[12] = 1048607;
      break;
    default:
      v7 = -1073741811;
      v18[1] = -1073741811;
      break;
  }
  KiUnstackDetachProcess(&v21, 0LL);
  return v7;
}
