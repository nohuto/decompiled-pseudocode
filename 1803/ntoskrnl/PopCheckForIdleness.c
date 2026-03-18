/*
 * XREFs of PopCheckForIdleness @ 0x140073BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     PopCheckForWork @ 0x14007421C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x140074BCC (PopGetPolicyWorker.c)
 *     PopDiagTraceIdleCheck @ 0x140074D00 (PopDiagTraceIdleCheck.c)
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 */

__int64 PopCheckForIdleness()
{
  signed int ActiveProcessorCount; // r12d
  unsigned __int8 CurrentIrql; // cl
  __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned int v4; // r14d
  unsigned int v5; // edi
  int v6; // r15d
  signed int v7; // esi
  __int64 v8; // rcx
  signed int v9; // eax
  int v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h]
  unsigned __int16 *v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h]
  __int16 v15; // [rsp+40h] [rbp-10h]

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v2 = qword_1403A9FB8;
  v3 = MEMORY[0xFFFFF78000000320];
  v12 = MEMORY[0xFFFFF78000000320];
  __writecr8(CurrentIrql);
  if ( dword_1403A9F8C )
  {
    if ( byte_1403A9FB5 )
    {
      v4 = v3 - v2;
      if ( (int)v3 - (int)v2 <= 0 )
      {
        byte_1403A9FB5 = 0;
        goto LABEL_21;
      }
      v5 = 100;
      v15 = 0;
      v14 = qword_14044C5D8[0];
      v6 = 0;
      v7 = 100;
      v13 = (unsigned __int16 *)KeActiveProcessors;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v11, &v13) )
      {
        v9 = 100
           * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v11] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v11] + 24028))
           / v4;
        if ( v9 < v7 )
          v7 = 100
             * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v11] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v11] + 24028))
             / v4;
        v6 += v9;
      }
      if ( v7 > 100 )
      {
        v7 = 100;
      }
      else if ( v7 < 0 )
      {
        v7 = 0;
      }
      if ( v6 / ActiveProcessorCount <= 100 )
      {
        v5 = v6 / ActiveProcessorCount;
        if ( v6 / ActiveProcessorCount < 0 )
          v5 = 0;
      }
      dword_1403A9F88 += PopIdleScanInterval;
      dword_1403A9F84 = v7;
      PopSIdle = v5;
      PopDiagTraceIdleCheck(v8, (unsigned int)v7, v5);
      v3 = v12;
      if ( !PopPlatformAoAc
        && PopPreSleepNotificationSeconds + 120 <= (unsigned int)dword_1403A9F8C
        && dword_1403A9F88 + PopPreSleepNotificationSeconds >= (unsigned int)dword_1403A9F8C
        && !PopIsAboutToSleep )
      {
        PopIsAboutToSleep = 1;
        PopQueueWorkItem(&PopPreSleepNotifyWorkItem, 1LL);
      }
    }
    v14 = qword_14044C5D8[0];
    v13 = (unsigned __int16 *)KeActiveProcessors;
    qword_1403A9FB8 = v3;
    byte_1403A9FB5 = 1;
    v15 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v11, &v13) )
      *(_DWORD *)(KiProcessorBlock[v11] + 24028) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v11] + 24) + 652LL);
  }
LABEL_21:
  PopGetPolicyWorker(8LL, v2);
  return PopCheckForWork();
}
