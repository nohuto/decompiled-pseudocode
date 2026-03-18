/*
 * XREFs of CiDispatchFastIoDeviceControl @ 0x1C000A290
 * Callers:
 *     <none>
 * Callees:
 *     CiProcessSuspend @ 0x1C0001010 (CiProcessSuspend.c)
 *     CiSchedulerTaskIndexYield @ 0x1C00012C0 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerSetTaskIndexMode @ 0x1C0001650 (CiSchedulerSetTaskIndexMode.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0001C00 (CiSchedulerCancelTaskIndexYield.c)
 *     memmove @ 0x1C0002F80 (memmove.c)
 *     WPP_SF_dd @ 0x1C00048FC (WPP_SF_dd.c)
 *     CiThreadSetRelativePriority @ 0x1C000A520 (CiThreadSetRelativePriority.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000B0C0 (CiCreateTaskIndexClientFromThread.c)
 */

char __fastcall CiDispatchFastIoDeviceControl(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        _DWORD *Address,
        unsigned int Length,
        unsigned int a7,
        __int64 a8)
{
  size_t v8; // r14
  ULONG v11; // ebx
  int v12; // r15d
  __int64 v13; // rsi
  _DWORD *v14; // r14
  __int64 v15; // r8
  unsigned int v17; // edx
  int TaskIndexClientFromThread; // eax
  __int64 v19; // r8
  __int64 v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+38h] [rbp-20h]

  v8 = a4;
  v11 = 0;
  v20 = 0LL;
  v12 = -1073741811;
  KeEnterCriticalRegion();
  v13 = (a7 >> 2) & 0x7FF;
  if ( (unsigned int)v13 < 8 && (a7 & 0xFFFFE003) == 0x222003 )
  {
    v21 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)v21 == CiApiTypeTable[v13]
      && (_DWORD)v8 == CiApiBufferSizeTable[2 * v13]
      && Length == dword_1C0006874[2 * v13] )
    {
      if ( ExGetPreviousMode() )
      {
        if ( (_DWORD)v8 )
        {
          if ( ((unsigned __int8)a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a3[v8] > MmUserProbeAddress || &a3[v8] < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(&v20, a3, (unsigned int)v8);
          v11 = v20;
        }
        v14 = Address;
        if ( Length )
          ProbeForWrite(Address, Length, 4u);
      }
      else
      {
        if ( (_DWORD)v8 )
        {
          memmove(&v20, a3, v8);
          v11 = v20;
        }
        v14 = Address;
      }
      if ( (_DWORD)v13 == 5 )
      {
        v12 = 0;
        CiSchedulerTaskIndexYield(v21, v11, HIDWORD(v20));
      }
      else
      {
        if ( (_DWORD)v13 == 7 )
        {
          if ( v11 )
          {
            if ( v11 != 1 )
              goto LABEL_18;
            v17 = 1;
          }
          else
          {
            v17 = 0;
          }
          v12 = 0;
          CiSchedulerSetTaskIndexMode(v21, v17);
          goto LABEL_18;
        }
        switch ( (int)v13 )
        {
          case 0:
            TaskIndexClientFromThread = CiThreadSetRelativePriority(v21, (unsigned __int8)v11);
            goto LABEL_28;
          case 1:
            v12 = 0;
            *v14 = CiSystemResponsiveness;
            break;
          case 2:
            if ( *(_QWORD *)(v21 + 80) == PsGetCurrentProcess() )
              v12 = CiProcessSuspend(v21, v11 != 0, v19);
            break;
          case 3:
            TaskIndexClientFromThread = CiCreateTaskIndexClientFromThread(v21, v14);
LABEL_28:
            v12 = TaskIndexClientFromThread;
            break;
          case 4:
            v12 = 0;
            *v14 = *(_DWORD *)(v21 + 144);
            break;
          case 6:
            v12 = 0;
            CiSchedulerCancelTaskIndexYield(v21);
            break;
          default:
            v12 = -1073741808;
            break;
        }
      }
    }
  }
LABEL_18:
  KeLeaveCriticalRegion();
  if ( v12 < 0 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0x12u, v15, v13, v12);
  *(_DWORD *)a8 = v12;
  *(_QWORD *)(a8 + 8) = 0LL;
  return 1;
}
