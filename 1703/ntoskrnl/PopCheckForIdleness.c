/*
 * XREFs of PopCheckForIdleness @ 0x140070D60
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     PopGetPolicyWorker @ 0x1400701C0 (PopGetPolicyWorker.c)
 *     PopDiagTraceIdleCheck @ 0x140071288 (PopDiagTraceIdleCheck.c)
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 */

struct _KTHREAD *PopCheckForIdleness()
{
  signed int ActiveProcessorCount; // r12d
  unsigned __int8 CurrentIrql; // cl
  int v2; // edx
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
  v2 = qword_14034B0D8;
  v3 = MEMORY[0xFFFFF78000000320];
  v12 = MEMORY[0xFFFFF78000000320];
  __writecr8(CurrentIrql);
  if ( dword_14034B0AC )
  {
    if ( byte_14034B0D5 )
    {
      v4 = v3 - v2;
      if ( (int)v3 - v2 <= 0 )
      {
        byte_14034B0D5 = 0;
        goto LABEL_19;
      }
      v5 = 100;
      v15 = 0;
      v14 = qword_1403E42B8[0];
      v6 = 0;
      v7 = 100;
      v13 = (unsigned __int16 *)KeActiveProcessors;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v11, &v13) )
      {
        v9 = 100
           * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v11] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v11] + 24156))
           / v4;
        if ( v9 < v7 )
          v7 = 100
             * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v11] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v11] + 24156))
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
      dword_14034B0A8 += PopIdleScanInterval;
      dword_14034B0A4 = v7;
      PopSIdle = v5;
      PopDiagTraceIdleCheck(v8, (unsigned int)v7, v5);
      v3 = v12;
    }
    v14 = qword_1403E42B8[0];
    qword_14034B0D8 = v3;
    byte_14034B0D5 = 1;
    v15 = 0;
    v13 = (unsigned __int16 *)KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v11, &v13) )
      *(_DWORD *)(KiProcessorBlock[v11] + 24156) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v11] + 24) + 652LL);
  }
LABEL_19:
  PopGetPolicyWorker(8);
  return PopCheckForWork();
}
