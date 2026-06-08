/*
 * XREFs of RegisterKernelIdleStates @ 0x1C0007940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     DisplayKernelIdleStates @ 0x1C0005828 (DisplayKernelIdleStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 *     RegisterHiddenIdleStates @ 0x1C002247C (RegisterHiddenIdleStates.c)
 *     RegisterKernelCStates @ 0x1C0022540 (RegisterKernelCStates.c)
 *     RegisterKernelLpiStates @ 0x1C0022808 (RegisterKernelLpiStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0022A48 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C0022DA4 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterIdleComplete @ 0x1C00230A4 (RegisterIdleComplete.c)
 *     RegisterKernelIdleDomains @ 0x1C00236EC (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0023A24 (DeregisterKernelIdleDomains.c)
 */

__int64 __fastcall RegisterKernelIdleStates(__int64 a1)
{
  struct _PROCESSOR_NUMBER *v1; // r14
  _DWORD *v2; // rsi
  _QWORD *v3; // r15
  NTSTATUS ProcessorNumberFromIndex; // ebx
  char v6; // r12
  __int64 v7; // rax
  int *v8; // rax
  int v9; // ebp
  __int64 v10; // rax
  _DWORD *PoolWithTag; // rax
  struct _PROCESSOR_NUMBER *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // eax
  unsigned __int16 v18; // r9
  __int64 v19; // r10
  unsigned int i; // r11d
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v23; // eax
  int v24; // eax
  void *v25; // rcx
  void *v26; // rcx
  __int64 v28; // [rsp+28h] [rbp-20h]

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 78) )
    return (unsigned int)RegisterHiddenIdleStates();
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  v6 = 0;
  if ( !*(_BYTE *)(a1 + 688) )
  {
    if ( qword_1C0011520 )
      qword_1C0011520(a1);
    *(_BYTE *)(a1 + 688) = 1;
    v6 = 1;
  }
  DeregisterKernelIdleDomains(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  v7 = *(_QWORD *)(a1 + 264);
  if ( (v7 & 0x200000200LL) != 0 )
  {
    v8 = *(int **)(a1 + 1120);
LABEL_9:
    if ( !v8 )
      return (unsigned int)-1073741823;
    v9 = *v8;
    goto LABEL_11;
  }
  if ( (v7 & 0x100000100LL) != 0 )
  {
    v8 = *(int **)(a1 + 1112);
    goto LABEL_9;
  }
  if ( (v7 & 0xE0000000000LL) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 512);
    if ( !v10 )
      return (unsigned int)-1073741823;
    v9 = *(_DWORD *)(v10 + 16);
LABEL_11:
    if ( !v9 )
      return (unsigned int)-1073741823;
    goto LABEL_20;
  }
  if ( (v7 & 0x7F077) == 0 )
  {
    ProcessorNumberFromIndex = -1073741637;
    goto LABEL_68;
  }
  v9 = 3;
LABEL_20:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(88 * v9 + 64), 0x72637250u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, (unsigned int)(88 * v9 + 64));
  v12 = (struct _PROCESSOR_NUMBER *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * v9 + 120), 0x72637250u);
  v1 = v12;
  if ( v12 )
  {
    memset(v12, 0, (unsigned int)(32 * v9 + 120));
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), v1 + 1);
    if ( ProcessorNumberFromIndex >= 0 )
    {
      *v1 = (struct _PROCESSOR_NUMBER)49;
      *(_QWORD *)&v1[2].Group = v2;
      v1[29] = (struct _PROCESSOR_NUMBER)v9;
      v2[14] = v9;
      *(_QWORD *)v2 = *(_QWORD *)(a1 + 1088);
      v16 = *(_QWORD *)(a1 + 264);
      if ( (v16 & 0x200000200LL) != 0 )
      {
        v17 = RegisterKernelPepIdleStatesV2(a1, v1, v2);
        if ( v17 < 0 )
        {
          v18 = 10;
LABEL_34:
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            v18,
            (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids,
            v17);
        }
      }
      else if ( (v16 & 0x100000100LL) != 0 )
      {
        v17 = RegisterKernelPepIdleStates(a1, v1, v2);
        if ( v17 < 0 )
        {
          v18 = 11;
          goto LABEL_34;
        }
      }
      else
      {
        if ( (v16 & 0xE0000000000LL) == 0 )
        {
          if ( (v16 & 0x7F077) == 0 )
            goto LABEL_38;
          v17 = RegisterKernelCStates(a1, v1, v2);
          if ( v17 >= 0 )
            goto LABEL_38;
          v18 = 13;
          goto LABEL_34;
        }
        v17 = RegisterKernelLpiStates(a1, v1, v2);
        if ( v17 < 0 )
        {
          v18 = 12;
          goto LABEL_34;
        }
      }
LABEL_38:
      if ( (*(_DWORD *)(a1 + 264) & 0x300LL) != 0 )
      {
        v19 = 0LL;
        for ( i = 1; i <= 3; ++i )
        {
          v14 = 0LL;
          v13 = 0LL;
          if ( v1[29] )
          {
            do
            {
              v21 = 22LL * (unsigned int)v13;
              v15 = *(_QWORD *)&v2[v21 + 16];
              if ( v15 )
              {
                v22 = *(unsigned __int8 *)(v15 + 12);
                if ( v22 > 3 )
                  v22 = 3;
                if ( v22 == i && (!v14 || *(_DWORD *)(v15 + 16) < *(_DWORD *)(v14 + 16)) )
                {
                  v14 = *(_QWORD *)&v2[v21 + 16];
                  *((_BYTE *)v2 + v19 + 21) = v13;
                }
              }
              v13 = (unsigned int)(v13 + 1);
            }
            while ( (unsigned int)v13 < *(_DWORD *)&v1[29] );
            if ( v14 )
              v19 = (unsigned int)(v19 + 1);
          }
        }
        *((_BYTE *)v2 + 20) = v19;
      }
      if ( (*(_DWORD *)(a1 + 264) & 0x7F377) == 0 || *((_BYTE *)v2 + 20) )
      {
        DisplayKernelIdleStates((__int64)v1, v13, v14, v15);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C00113E8,
          0LL);
        if ( (*(_QWORD *)(a1 + 264) & 0x100300000300LL) != 0 && *(_QWORD *)(a1 + 680) )
          HIBYTE(v1[4].Group) = 1;
        v23 = ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1C0011608)(v1);
        ProcessorNumberFromIndex = v23;
        if ( v23 >= 0 )
        {
          v3 = *(_QWORD **)(a1 + 680);
          *(_QWORD *)(a1 + 680) = v2;
          if ( v6 )
            RegisterIdleComplete(a1);
          v2 = 0LL;
          if ( (*(_DWORD *)(a1 + 264) & 0x7F070LL) != 0 )
          {
            v24 = RegisterKernelIdleDomains(a1);
            if ( v24 < 0 )
            {
              LODWORD(v28) = v24;
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                3u,
                0xFu,
                (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids,
                v28);
            }
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C00113E8);
          ProcessorNumberFromIndex = 0;
        }
        else
        {
          LODWORD(v28) = v23;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0xEu,
            (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids,
            v28);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C00113E8);
        }
      }
      else
      {
        ProcessorNumberFromIndex = -1073741823;
      }
    }
LABEL_68:
    if ( v1 )
      ExFreePoolWithTag(v1, 0x72637250u);
    goto LABEL_70;
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_70:
  if ( v2 )
  {
    v25 = (void *)*((_QWORD *)v2 + 6);
    if ( v25 )
      ExFreePoolWithTag(v25, 0x72637250u);
    ExFreePoolWithTag(v2, 0x72637250u);
  }
  if ( v3 )
  {
    v26 = (void *)v3[6];
    if ( v26 )
      ExFreePoolWithTag(v26, 0x72637250u);
    ExFreePoolWithTag(v3, 0x72637250u);
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
