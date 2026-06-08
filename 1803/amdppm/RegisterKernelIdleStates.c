/*
 * XREFs of RegisterKernelIdleStates @ 0x1C0001AF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     DisplayKernelIdleStates @ 0x1C0008D6C (DisplayKernelIdleStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CC80 (memset.c)
 *     RegisterHiddenIdleStates @ 0x1C001C388 (RegisterHiddenIdleStates.c)
 *     RegisterKernelCStates @ 0x1C001C434 (RegisterKernelCStates.c)
 *     RegisterKernelLpiStates @ 0x1C001C6CC (RegisterKernelLpiStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C001C90C (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C001CC58 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterIdleComplete @ 0x1C001CF50 (RegisterIdleComplete.c)
 *     RegisterKernelIdleDomains @ 0x1C001D59C (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C001D8E8 (DeregisterKernelIdleDomains.c)
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
  __int64 v13; // rax
  int v14; // eax
  unsigned __int16 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // r8d
  unsigned int v18; // r11d
  __int64 v19; // r10
  unsigned int i; // edx
  __int64 v21; // rcx
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  void *v27; // rcx
  void *v28; // rcx
  __int64 v30; // [rsp+28h] [rbp-20h]

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 78) )
    return (unsigned int)RegisterHiddenIdleStates();
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011418,
    0LL);
  v6 = 0;
  if ( !*(_BYTE *)(a1 + 688) )
  {
    if ( qword_1C0011550 )
      qword_1C0011550(a1);
    *(_BYTE *)(a1 + 688) = 1;
    v6 = 1;
  }
  DeregisterKernelIdleDomains(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011418);
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
      *v1 = (struct _PROCESSOR_NUMBER)56;
      *(_QWORD *)&v1[2].Group = v2;
      v1[29] = (struct _PROCESSOR_NUMBER)v9;
      v2[14] = v9;
      *(_QWORD *)v2 = *(_QWORD *)(a1 + 1088);
      v13 = *(_QWORD *)(a1 + 264);
      if ( (v13 & 0x200000200LL) != 0 )
      {
        v14 = RegisterKernelPepIdleStatesV2(a1, v1, v2);
        if ( v14 < 0 )
        {
          v15 = 10;
LABEL_34:
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            v15,
            (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids,
            v14);
        }
      }
      else if ( (v13 & 0x100000100LL) != 0 )
      {
        v14 = RegisterKernelPepIdleStates(a1, v1, v2);
        if ( v14 < 0 )
        {
          v15 = 11;
          goto LABEL_34;
        }
      }
      else
      {
        if ( (v13 & 0xE0000000000LL) == 0 )
        {
          if ( (v13 & 0x7F077) == 0 )
            goto LABEL_38;
          v14 = RegisterKernelCStates(a1, v1, v2);
          if ( v14 >= 0 )
            goto LABEL_38;
          v15 = 13;
          goto LABEL_34;
        }
        v14 = RegisterKernelLpiStates(a1, v1, v2);
        if ( v14 < 0 )
        {
          v15 = 12;
          goto LABEL_34;
        }
      }
LABEL_38:
      v16 = *(_QWORD *)(a1 + 264);
      if ( (v16 & 0x300) != 0 )
      {
        v17 = 0;
        v18 = 1;
        do
        {
          v19 = 0LL;
          for ( i = 0; i < *(_DWORD *)&v1[29]; ++i )
          {
            v21 = 22LL * i;
            v22 = *(_QWORD *)&v2[v21 + 16];
            if ( v22 )
            {
              v23 = *(unsigned __int8 *)(v22 + 12);
              if ( v23 > 3 )
                v23 = 3;
              if ( v23 == v18 && (!v19 || *(_DWORD *)(v22 + 16) < *(_DWORD *)(v19 + 16)) )
              {
                v19 = *(_QWORD *)&v2[v21 + 16];
                *((_BYTE *)v2 + v17 + 21) = i;
              }
            }
          }
          ++v18;
          v24 = v17 + 1;
          if ( !v19 )
            v24 = v17;
          v17 = v24;
        }
        while ( v18 <= 3 );
        *((_BYTE *)v2 + 20) = v24;
        v16 = *(_QWORD *)(a1 + 264);
      }
      if ( (v16 & 0x7F377) == 0 || *((_BYTE *)v2 + 20) )
      {
        DisplayKernelIdleStates(v1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C0011418,
          0LL);
        if ( (*(_QWORD *)(a1 + 264) & 0x100300000300LL) != 0 && *(_QWORD *)(a1 + 680) )
          HIBYTE(v1[4].Group) = 1;
        v25 = ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1C0011638)(v1);
        ProcessorNumberFromIndex = v25;
        if ( v25 >= 0 )
        {
          v3 = *(_QWORD **)(a1 + 680);
          *(_QWORD *)(a1 + 680) = v2;
          if ( v6 )
            RegisterIdleComplete(a1);
          v2 = 0LL;
          if ( (*(_DWORD *)(a1 + 264) & 0x7F070LL) != 0 )
          {
            v26 = RegisterKernelIdleDomains(a1);
            if ( v26 < 0 )
            {
              LODWORD(v30) = v26;
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                3u,
                0xFu,
                (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids,
                v30);
            }
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C0011418);
          ProcessorNumberFromIndex = 0;
        }
        else
        {
          LODWORD(v30) = v25;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0xEu,
            (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids,
            v30);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C0011418);
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
    v27 = (void *)*((_QWORD *)v2 + 6);
    if ( v27 )
      ExFreePoolWithTag(v27, 0x72637250u);
    ExFreePoolWithTag(v2, 0x72637250u);
  }
  if ( v3 )
  {
    v28 = (void *)v3[6];
    if ( v28 )
      ExFreePoolWithTag(v28, 0x72637250u);
    ExFreePoolWithTag(v3, 0x72637250u);
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
