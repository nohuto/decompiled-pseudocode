/*
 * XREFs of OSNotifyCreateOperationRegion @ 0x1C00275F0
 * Callers:
 *     OSNotifyCreate @ 0x1C000F400 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C0043918 (ACPIBuildMissingChildren.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C00070E8 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIGetParent @ 0x1C00127F8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIIterateParentNext @ 0x1C0027690 (AMLIIterateParentNext.c)
 *     WPP_RECORDER_SF_qd @ 0x1C004B19C (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall OSNotifyCreateOperationRegion(__int64 a1)
{
  __int64 v1; // rsi
  __int64 i; // rax
  volatile signed __int32 *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned __int8 v6; // cl
  int v7; // eax
  int v8; // ecx
  bool v9; // zf
  _QWORD *PoolWithTag; // rax
  int v12; // edx
  struct _WORK_QUEUE_ITEM *v13; // r8

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
  for ( i = AMLIGetParent(a1); ; i = AMLIIterateParentNext(i) )
  {
    v3 = (volatile signed __int32 *)i;
    if ( !i )
      break;
    v4 = *(_QWORD *)i;
    if ( *(_WORD *)(*(_QWORD *)i + 66LL) != 8 )
    {
      if ( *(_WORD *)(v4 + 66) == 6 )
      {
        v5 = *(_QWORD *)(v4 + 104);
        if ( v5 )
        {
          v6 = *(_BYTE *)(v1 + 12);
          if ( v6 >= 0x1Fu )
            v7 = 0x80000000;
          else
            v7 = 1 << v6;
          v8 = *(_DWORD *)(v5 + 620);
          if ( (v8 & v7) == 0 )
          {
            v9 = *(_DWORD *)(v5 + 320) == 3;
            *(_DWORD *)(v5 + 620) = v7 | v8;
            if ( v9 && (unsigned __int8)(*(_BYTE *)(v1 + 12) - 8) <= 1u )
            {
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x4D706341u);
              if ( PoolWithTag )
              {
                *PoolWithTag = 0LL;
                PoolWithTag[2] = OSNotifyCreateOperationRegionWorker;
                PoolWithTag[3] = PoolWithTag;
                ACPIInitReferenceDeviceExtension(v5);
                v13[1].List.Flink = (_LIST_ENTRY *)v5;
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
                  (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
                  v5,
                  *(_BYTE *)(v1 + 12));
              }
            }
          }
        }
      }
      AMLIDereferenceHandleEx(v3, 0LL);
      return 0LL;
    }
  }
  return 0LL;
}
