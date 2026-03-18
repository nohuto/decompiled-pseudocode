/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x14058819C
 * Callers:
 *     EtwTiLogProtectExecVm @ 0x1404D53CC (EtwTiLogProtectExecVm.c)
 *     EtwTiLogAllocExecVm @ 0x1404D5D88 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogQueueApcThread @ 0x1404D9734 (EtwTiLogQueueApcThread.c)
 *     EtwpTimLogMitigationForProcess @ 0x140587F1C (EtwpTimLogMitigationForProcess.c)
 *     EtwTiLogMapExecView @ 0x14059ACF8 (EtwTiLogMapExecView.c)
 *     EtwTiLogReadWriteVm @ 0x14074B358 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x14074B560 (EtwTiLogSetContextThread.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x14074B8B0 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x14074BEC8 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x14074C274 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 * Callees:
 *     PsGetProcessStartKey @ 0x1400AE9D0 (PsGetProcessStartKey.c)
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
