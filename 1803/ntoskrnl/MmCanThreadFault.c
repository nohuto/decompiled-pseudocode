/*
 * XREFs of MmCanThreadFault @ 0x140130A80
 * Callers:
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     RtlWalkFrameChain @ 0x1401309E0 (RtlWalkFrameChain.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     EtwpStackTraceDispatcher @ 0x1402AE330 (EtwpStackTraceDispatcher.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x1402B58E8 (EtwpCovSampSafeForUserAddressCapture.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1400F0B10 (KeGetEffectiveIrql.c)
 */

__int64 MmCanThreadFault()
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned int v1; // edx
  __int64 v2; // rax

  if ( KeGetEffectiveIrql() >= 2u )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
    return 0LL;
  if ( (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink == KiExecuteDpc )
    return 0LL;
  v1 = 0;
  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88
                             + 8LL * *((unsigned __int16 *)&CurrentThread->ApcState.Process[1].SecureState.Flags + 3))
                 + 6768LL);
  if ( !v2 )
    return 0LL;
  LOBYTE(v1) = CurrentThread != *(struct _KTHREAD **)(v2 + 96);
  return v1;
}
