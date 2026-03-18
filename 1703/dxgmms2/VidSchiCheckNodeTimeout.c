/*
 * XREFs of VidSchiCheckNodeTimeout @ 0x1C006B7E0
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C006B650 (VidSchiCheckHwProgress.c)
 *     VidSchiCheckGPUTimeout @ 0x1C00AA760 (VidSchiCheckGPUTimeout.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012030 (VidSchiSchedulerNodeToDriverEngine.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     ?DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z @ 0x1C001E938 (-DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z.c)
 *     VidSchiRunningDeviceAllowsLongRunningPackets @ 0x1C00277C4 (VidSchiRunningDeviceAllowsLongRunningPackets.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0027864 (VidSchiSchedulerNodeToDriverNode.c)
 */

__int64 __fastcall VidSchiCheckNodeTimeout(__int64 a1, _QWORD *a2)
{
  __int32 v5; // ecx
  signed __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r15
  _QWORD *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // r8
  __int64 v19; // r8
  _DXGKARG_QUERYENGINESTATUS v20; // [rsp+20h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(a1 + 440) & 2) != 0 || *(_DWORD *)(a1 + 1948) || *(_DWORD *)(a1 + 1952) )
  {
    if ( a2 )
      *a2 = *(_QWORD *)(a1 + 448);
    return 1LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 2768) )
    {
      v5 = _InterlockedExchange((volatile __int32 *)(a1 + 480), 0);
      if ( (*(_DWORD *)(a1 + 440) & 1) == 0 || v5 )
      {
        *(_QWORD *)(a1 + 472) = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), 0LL, 0LL);
        v9 = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(a1 + 440) |= 1u;
        *(_QWORD *)(a1 + 456) = v9;
        *(_QWORD *)(a1 + 448) = v9;
      }
      else
      {
        *(_QWORD *)(a1 + 456) = MEMORY[0xFFFFF78000000320];
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), 0LL, 0LL);
        if ( v6 != *(_QWORD *)(a1 + 472) )
        {
          *(_QWORD *)(a1 + 448) = *(_QWORD *)(a1 + 456);
          *(_QWORD *)(a1 + 472) = v6;
        }
        else
        {
          v7 = *(_QWORD *)(a1 + 456) - *(_QWORD *)(a1 + 448);
          v8 = 10000000LL * g_TdrConfig[1];
          if ( v7 * (unsigned __int64)KeQueryTimeIncrement() > v8 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 300LL) & 0x200) != 0 )
            {
              v10 = __rdtsc();
              v11 = __readmsr(0x400000F6u);
              v12 = *((unsigned int *)KeGetCurrentPrcb() + 17);
              v13 = 10 * (v10 - v11) / v12;
              v14 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v12, 10 * (v10 - v11) % v12);
              v14[3] = v11;
              v14[4] = v10;
              v14[5] = v13;
              WdLogEvent5_WdPresentTokenEvent(v14);
              if ( v11 > v10 || v13 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
                return 0LL;
            }
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 44LL) )
            {
              if ( VidSchiRunningDeviceAllowsLongRunningPackets(a1) )
              {
                v15 = *(unsigned __int16 *)(a1 + 4);
                v16 = *(_QWORD *)(a1 + 24);
                v20.EngineStatus.Value = 0;
                v20.EngineOrdinal = VidSchiSchedulerNodeToDriverEngine(v16, v15);
                v20.NodeOrdinal = VidSchiSchedulerNodeToDriverNode(v18, v17);
                if ( !(unsigned int)ADAPTER_RENDER::DdiQueryEngineStatus(*(ADAPTER_RENDER **)(v19 + 8), &v20)
                  && (*(_BYTE *)&v20.EngineStatus.0 & 1) != 0 )
                {
                  return 0LL;
                }
              }
            }
            *(_DWORD *)(a1 + 440) |= 2u;
            *(_QWORD *)(a1 + 464) = v7;
            if ( a2 )
              *a2 = *(_QWORD *)(a1 + 448);
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(a1 + 440) &= ~1u;
    }
    return (*(_DWORD *)(a1 + 440) >> 1) & 1;
  }
}
