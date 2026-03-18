/*
 * XREFs of PspWow64InitThread @ 0x140563200
 * Callers:
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     RtlpGetLegacyContextLength @ 0x1401317D4 (RtlpGetLegacyContextLength.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspWow64GetSharedInformation @ 0x1404EA240 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x1404EA258 (PsWow64GetProcessNtdllType.c)
 *     PspWow64InitThreadGuestx86 @ 0x1405633E4 (PspWow64InitThreadGuestx86.c)
 *     RtlpArchContextFlagFromMachine @ 0x1405643B0 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall PspWow64InitThread(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // rax
  unsigned __int16 v8; // si
  int v9; // eax
  __int64 v10; // r10
  _DWORD *v11; // rbx
  __int64 v12; // r14
  unsigned __int16 ProcessNtdllType; // ax
  __int64 v14; // r15
  __int64 v15; // r12
  _DWORD *v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-98h] BYREF
  int v19; // [rsp+38h] [rbp-90h]
  _DWORD *v20; // [rsp+40h] [rbp-88h]
  __int64 v21; // [rsp+48h] [rbp-80h]
  _BYTE v22[48]; // [rsp+50h] [rbp-78h] BYREF

  v21 = a4;
  v6 = 0;
  v7 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
  if ( !v7 || (v8 = *(_WORD *)(v7 + 8)) == 0 )
    v8 = -31132;
  v9 = RtlpArchContextFlagFromMachine(v8);
  if ( !v9 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v9, 0LL, &v18);
  v20 = *(_DWORD **)(v10 + 16);
  v11 = (_DWORD *)((unsigned int)~(v18 - 1) & ((unsigned __int64)v20 + (unsigned int)v18 + 3));
  v18 = *(_QWORD *)(v10 + 40);
  v12 = a3[31];
  if ( v12 == PspUserThreadStart )
  {
    ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)BugCheckParameter1);
    v12 = *((_QWORD *)PspWow64GetSharedInformation(ProcessNtdllType) + 4);
  }
  v14 = a3[16];
  v15 = a3[17];
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v22);
  v16 = v20;
  *(_QWORD *)(v21 + 5256) = v20;
  *v16 = v8 << 16;
  switch ( v8 )
  {
    case 0x14Cu:
      PspWow64InitThreadGuestx86(BugCheckParameter1, v11, v12, v18, v14, v15);
      break;
    case 0x1C4u:
      memset(v11, 0, 0x1A0uLL);
      v11[14] = v18;
      v11[16] = v12;
      v11[1] = v14;
      v11[2] = v15;
      *(_QWORD *)(v11 + 17) = 48LL;
      *v11 = 2097159;
      break;
    case 0x8664u:
      memset(v11, 0, 0x4D0uLL);
      *((_QWORD *)v11 + 19) = v18;
      *((_QWORD *)v11 + 31) = v12;
      *((_QWORD *)v11 + 16) = v14;
      *((_QWORD *)v11 + 17) = v15;
      v11[12] = 1048607;
      break;
    default:
      v6 = -1073741811;
      v19 = -1073741811;
      break;
  }
  KiUnstackDetachProcess((__int64)v22, 0LL);
  return v6;
}
