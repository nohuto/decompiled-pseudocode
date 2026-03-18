/*
 * XREFs of VidSchiIncrementContextReference @ 0x1C0012330
 * Callers:
 *     VidSchiNeedToForcePreemptNode @ 0x1C000E50C (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiCreateContextInternal @ 0x1C00117A8 (VidSchiCreateContextInternal.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C00130B0 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C002DC80 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiReportHwHang @ 0x1C0034304 (VidSchiReportHwHang.c)
 *     VidSchiRun_PriorityTable @ 0x1C0081FD0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIncrementContextReference(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v5; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 72));
  if ( (_DWORD)result == 1 )
  {
    if ( !*(_BYTE *)(a1 + 892) )
    {
      v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
      v5[3] = 281LL;
      v5[4] = 3840LL;
      v5[5] = a1;
      v5[6] = 0LL;
      v5[7] = 0LL;
      WdLogEvent5_WdCriticalError(v5);
      JUMPOUT(0x1C0021BB7LL);
    }
    result = *(_QWORD *)(a1 + 104);
    _InterlockedIncrement64((volatile signed __int64 *)(result + 24));
  }
  return result;
}
