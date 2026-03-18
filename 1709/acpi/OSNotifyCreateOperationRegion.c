/*
 * XREFs of OSNotifyCreateOperationRegion @ 0x1C0028A5C
 * Callers:
 *     OSNotifyCreate @ 0x1C001C840 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C00432D8 (ACPIBuildMissingChildren.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0011260 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIGetParent @ 0x1C001BBA0 (AMLIGetParent.c)
 *     AMLIIterateParentNext @ 0x1C0028AFC (AMLIIterateParentNext.c)
 *     WPP_RECORDER_SF_qd @ 0x1C004A584 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall OSNotifyCreateOperationRegion(__int64 a1)
{
  __int64 v1; // rsi
  __int64 i; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int16 v5; // ax
  __int64 v6; // rdi
  unsigned __int8 v7; // cl
  int v8; // eax
  int v9; // ecx
  bool v10; // zf
  _QWORD *PoolWithTag; // rax
  int v13; // edx
  struct _WORK_QUEUE_ITEM *v14; // r8

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
  for ( i = AMLIGetParent(a1); ; i = AMLIIterateParentNext(v3) )
  {
    v3 = i;
    if ( !i )
      break;
    v4 = *(_QWORD *)i;
    v5 = *(_WORD *)(*(_QWORD *)i + 66LL);
    if ( v5 != 8 )
    {
      if ( v5 == 6 )
      {
        v6 = *(_QWORD *)(v4 + 104);
        if ( v6 )
        {
          v7 = *(_BYTE *)(v1 + 12);
          if ( v7 >= 0x1Fu )
            v8 = 0x80000000;
          else
            v8 = 1 << v7;
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
                v14[1].List.Flink = (_LIST_ENTRY *)v6;
                ExQueueWorkItem(v14, DelayedWorkQueue);
              }
              else
              {
                LOBYTE(v13) = 2;
                WPP_RECORDER_SF_qd(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v13,
                  21,
                  14,
                  (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
                  v6,
                  *(_BYTE *)(v1 + 12));
              }
            }
          }
        }
      }
      AMLIDereferenceHandleEx(v3);
      return 0LL;
    }
  }
  return 0LL;
}
