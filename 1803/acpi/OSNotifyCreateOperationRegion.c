/*
 * XREFs of OSNotifyCreateOperationRegion @ 0x1C002E808
 * Callers:
 *     ACPIBuildMissingChildren @ 0x1C000B868 (ACPIBuildMissingChildren.c)
 *     OSNotifyCreate @ 0x1C002E5E0 (OSNotifyCreate.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0028B50 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 *     AMLIIterateParentNext @ 0x1C0043E7C (AMLIIterateParentNext.c)
 */

__int64 __fastcall OSNotifyCreateOperationRegion(__int64 a1)
{
  __int64 v1; // rsi
  __int64 i; // rax
  __int64 v3; // rdi
  __int16 v4; // ax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 v7; // cl
  int v8; // eax
  int v9; // ecx
  bool v10; // zf
  _QWORD *PoolWithTag; // rax
  int v12; // edx
  struct _WORK_QUEUE_ITEM *v13; // r8

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
  for ( i = AMLIGetParent(a1); ; i = AMLIIterateParentNext(v5) )
  {
    v5 = (volatile signed __int32 *)i;
    if ( !i )
      break;
    v3 = *(_QWORD *)i;
    v4 = *(_WORD *)(*(_QWORD *)i + 66LL);
    if ( v4 != 8 )
    {
      if ( v4 == 6 )
      {
        v6 = *(_QWORD *)(v3 + 104);
        if ( v6 )
        {
          v7 = *(_BYTE *)(v1 + 12);
          if ( v7 < 0x1Fu )
            v8 = 1 << v7;
          else
            v8 = 0x80000000;
          v9 = *(_DWORD *)(v6 + 620);
          if ( (v9 & v8) == 0 )
          {
            v10 = *(_DWORD *)(v6 + 320) == 3;
            *(_DWORD *)(v6 + 620) = v8 | v9;
            if ( v10 && (unsigned __int8)(*(_BYTE *)(v1 + 12) - 8) <= 1u )
            {
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x4D706341u);
              if ( PoolWithTag )
              {
                *PoolWithTag = 0LL;
                PoolWithTag[2] = OSNotifyCreateOperationRegionWorker;
                PoolWithTag[3] = PoolWithTag;
                ACPIInitReferenceDeviceExtension(v6);
                v13[1].List.Flink = (_LIST_ENTRY *)v6;
                ExQueueWorkItem(v13, DelayedWorkQueue);
              }
              else
              {
                LOBYTE(v12) = 2;
                WPP_RECORDER_SF_qd(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v12,
                  21,
                  14,
                  (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
                  v6,
                  *(_BYTE *)(v1 + 12));
              }
            }
          }
        }
      }
      AMLIDereferenceHandleEx(v5);
      return 0LL;
    }
  }
  return 0LL;
}
