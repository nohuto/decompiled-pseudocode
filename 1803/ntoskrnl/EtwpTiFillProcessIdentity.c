/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x1404D6C14
 * Callers:
 *     EtwTiLogAllocExecVm @ 0x1404D685C (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x1404D6A38 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogQueueApcThread @ 0x1404D930C (EtwTiLogQueueApcThread.c)
 *     EtwTiLogReadWriteVm @ 0x1404D97A4 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x14056B5D8 (EtwTiLogSetContextThread.c)
 *     EtwpTimLogMitigationForProcess @ 0x1405783A0 (EtwpTimLogMitigationForProcess.c)
 *     EtwTiLogMapExecView @ 0x14057D65C (EtwTiLogMapExecView.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1407AD810 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1407ADE1C (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1407AE1B8 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 * Callees:
 *     PsGetProcessStartKey @ 0x140061AD0 (PsGetProcessStartKey.c)
 */

__int64 __fastcall EtwpTiFillProcessIdentity(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2 + 736;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 16) = a2 + 776;
  *(_DWORD *)(a1 + 24) = 8;
  *a3 = PsGetProcessStartKey(a2);
  *(_DWORD *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 40) = 8;
  *(_DWORD *)(a1 + 60) = 0;
  *(_QWORD *)(a1 + 48) = a2 + 1736;
  *(_DWORD *)(a1 + 56) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 64) = a2 + 1737;
  *(_DWORD *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 80) = a2 + 1738;
  result = 6LL;
  *(_DWORD *)(a1 + 88) = 1;
  return result;
}
