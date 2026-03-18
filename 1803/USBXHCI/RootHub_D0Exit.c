/*
 * XREFs of RootHub_D0Exit @ 0x1C0019A30
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000C380 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     RootHub_DumpPortData @ 0x1C001A060 (RootHub_DumpPortData.c)
 *     RootHub_HandleResumedPorts @ 0x1C001A938 (RootHub_HandleResumedPorts.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C001EB10 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_D0Exit(__int64 a1, int a2, int a3)
{
  int v4; // ebx
  __int64 v6; // r13
  __int64 result; // rax
  int v8; // r12d
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int Ulong; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  unsigned int *v17; // rbx
  int v18; // eax
  unsigned int *v19; // rdi
  __int16 v20; // ax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+80h] [rbp+8h] BYREF
  int v25; // [rsp+88h] [rbp+10h]

  v25 = a2;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  result = RootHub_HandleResumedPorts();
  v8 = 2;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v9 = 0;
    do
    {
      if ( v4 != 5 )
      {
        v10 = *(_QWORD *)(a1 + 8);
        v11 = *(_QWORD *)(v10 + 272) >> 26;
        LOBYTE(v11) = (*(_QWORD *)(v10 + 272) & 0x4000000LL) != 0;
        if ( (int)RootHub_WaitForPendingU3TransitionCompletion(a1, v9 + 1, v11) < 0 && a3 == 7 )
          ((void (__fastcall *)(_QWORD, _QWORD))qword_1C004C870)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, *(_QWORD *)a1);
        Ulong = XilRegister_ReadUlong(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
                  (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * v9));
        if ( (Ulong & 0x201) == 0x201 )
        {
          v13 = (Ulong >> 5) & 0xF;
          if ( ((v13 - 4) & 0xFFFFFFF9) != 0 || v13 == 8 )
            v8 = 1;
        }
      }
      v14 = *(_QWORD *)(a1 + 8);
      v15 = v14;
      if ( (*(_QWORD *)(v14 + 272) & 0x40000000LL) != 0 )
      {
        v16 = (unsigned __int64)v9 << 6;
        v17 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * v9);
        DynamicLock_Acquire(*(_QWORD *)(v16 + *(_QWORD *)(a1 + 48) + 16));
        v18 = XilRegister_ReadUlong(v6, v17);
        if ( a3 != 7 || (v18 & 0x20000) == 0 )
          XilRegister_WriteUlong(v6, v17, v18 & 0xE00C200 | 0x20000);
        DynamicLock_Release(*(_QWORD *)(v16 + *(_QWORD *)(a1 + 48) + 16));
        v14 = *(_QWORD *)(a1 + 8);
        v15 = v14;
      }
      if ( (unsigned int)(a3 - 3) <= 3 && (*(_QWORD *)(v14 + 272) & 0x20000000LL) != 0 )
      {
        v19 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * v9);
        DynamicLock_Acquire(*(_QWORD *)(((unsigned __int64)v9 << 6) + *(_QWORD *)(a1 + 48) + 16));
        v20 = XilRegister_ReadUlong(v6, v19);
        XilRegister_WriteUlong(v6, v19, v20 & 0xC200);
        DynamicLock_Release(*(_QWORD *)(((unsigned __int64)v9 << 6) + *(_QWORD *)(a1 + 48) + 16));
        v15 = *(_QWORD *)(a1 + 8);
      }
      RootHub_DumpPortData(*(_QWORD *)(a1 + 40) + 16LL * v9, v15);
      v4 = v25;
      result = ++v9 + 1;
    }
    while ( (unsigned int)result <= *(_DWORD *)(a1 + 16) );
  }
  v21 = *(_QWORD *)(a1 + 8);
  v24 = v8;
  v22 = *(_QWORD *)(v21 + 424);
  if ( v22 )
  {
    result = PoFxPowerControl(v22, &GUID_HC_SUB_DX_STATE, &v24, 4LL, 0LL, 0LL, 0LL);
    if ( (int)result < 0 )
    {
      LODWORD(v23) = result;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(v21 + 72),
               4u,
               4u,
               0x21u,
               (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
               v23);
    }
  }
  return result;
}
