/*
 * XREFs of RegisterKernelIdleStates @ 0x1C0002DA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     DisplayKernelIdleStates @ 0x1C00032AC (DisplayKernelIdleStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     RegisterHiddenIdleStates @ 0x1C001D044 (RegisterHiddenIdleStates.c)
 *     RegisterKernelIdleDomains @ 0x1C0022228 (RegisterKernelIdleDomains.c)
 *     RegisterIdleComplete @ 0x1C0022368 (RegisterIdleComplete.c)
 *     RegisterKernelCStates @ 0x1C0022408 (RegisterKernelCStates.c)
 *     DeregisterKernelIdleDomains @ 0x1C002263C (DeregisterKernelIdleDomains.c)
 *     RegisterKernelLpiStates @ 0x1C002FF8C (RegisterKernelLpiStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C003037C (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C00306D8 (RegisterKernelPepIdleStatesV2.c)
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
  __int64 v16; // r10
  unsigned int i; // r11d
  __int64 v18; // r8
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r9
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
    qword_1C00195D8,
    0LL);
  v6 = 0;
  if ( !*(_BYTE *)(a1 + 688) )
  {
    if ( qword_1C0019710 )
      qword_1C0019710(a1);
    *(_BYTE *)(a1 + 688) = 1;
    v6 = 1;
  }
  DeregisterKernelIdleDomains(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00195D8);
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
      *v1 = (struct _PROCESSOR_NUMBER)52;
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
            (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids,
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
      if ( (*(_DWORD *)(a1 + 264) & 0x300LL) != 0 )
      {
        v16 = 0LL;
        for ( i = 1; i <= 3; ++i )
        {
          v18 = 0LL;
          v19 = 0;
          if ( v1[29] )
          {
            do
            {
              v20 = 22LL * v19;
              v21 = *(_QWORD *)&v2[v20 + 16];
              if ( v21 )
              {
                v22 = *(unsigned __int8 *)(v21 + 12);
                if ( v22 > 3 )
                  v22 = 3;
                if ( v22 == i && (!v18 || *(_DWORD *)(v21 + 16) < *(_DWORD *)(v18 + 16)) )
                {
                  v18 = *(_QWORD *)&v2[v20 + 16];
                  *((_BYTE *)v2 + v16 + 21) = v19;
                }
              }
              ++v19;
            }
            while ( v19 < *(_DWORD *)&v1[29] );
            if ( v18 )
              v16 = (unsigned int)(v16 + 1);
          }
        }
        *((_BYTE *)v2 + 20) = v16;
      }
      if ( (*(_DWORD *)(a1 + 264) & 0x7F377LL) == 0 || *((_BYTE *)v2 + 20) )
      {
        DisplayKernelIdleStates(v1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C00195D8,
          0LL);
        if ( (*(_QWORD *)(a1 + 264) & 0x100300000300LL) != 0 && *(_QWORD *)(a1 + 680) )
          HIBYTE(v1[4].Group) = 1;
        v23 = ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1C00197F8)(v1);
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
                (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids,
                v28);
            }
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C00195D8);
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
            (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids,
            v28);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C00195D8);
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
