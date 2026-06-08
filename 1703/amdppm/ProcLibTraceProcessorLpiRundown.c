/*
 * XREFs of ProcLibTraceProcessorLpiRundown @ 0x1C001E3D4
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001D790 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0005BD4 (ProcLibGetProcessorNumber.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 */

char __fastcall ProcLibTraceProcessorLpiRundown(__int64 a1)
{
  _DWORD *v2; // rdi
  int ProcessorNumber; // eax
  unsigned __int64 v4; // rsi
  __int64 v5; // r14
  struct _EVENT_DATA_DESCRIPTOR *PoolWithTag; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  _DWORD *v8; // rax
  unsigned int v9; // r9d
  _DWORD *v10; // r10
  _DWORD *v11; // rsi
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // rcx
  struct _PROCESSOR_NUMBER v18; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0LL;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_PROCESSOR_LPI_STATES);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v18);
    if ( ProcessorNumber >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v4 = *(_QWORD *)(a1 + 512);
      if ( !v4
        || (v5 = *(unsigned int *)(v4 + 16),
            PoolWithTag = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(
                                                             PagedPool,
                                                             16LL * (unsigned int)(2 * v5 + 5),
                                                             0x72637250u),
            (UserData = PoolWithTag) == 0LL) )
      {
LABEL_13:
        LOBYTE(ProcessorNumber) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                    WdfDriverGlobals,
                                    *(_QWORD *)(a1 + 208));
        return ProcessorNumber;
      }
      memset(PoolWithTag, 0, 16LL * (unsigned int)(2 * v5 + 5));
      *(_QWORD *)&UserData->Size = 2LL;
      UserData->Ptr = (unsigned __int64)&v18;
      UserData[1].Ptr = (unsigned __int64)&v18.Number;
      *(_QWORD *)&UserData[1].Size = 1LL;
      UserData[2].Ptr = v4;
      *(_QWORD *)&UserData[2].Size = 4LL;
      UserData[3].Ptr = v4 + 8;
      *(_QWORD *)&UserData[3].Size = 8LL;
      UserData[4].Ptr = v4 + 16;
      *(_QWORD *)&UserData[4].Size = 4LL;
      if ( (_DWORD)v5 )
      {
        v8 = ExAllocatePoolWithTag(PagedPool, 60 * v5, 0x72637250u);
        v2 = v8;
        if ( !v8 )
          goto LABEL_11;
        memset(v8, 0, 60 * v5);
        v9 = 0;
        v10 = v2 + 2;
        v11 = (_DWORD *)(v4 + 32);
        do
        {
          v12 = v10 - 2;
          *v12 = *(v11 - 2);
          v13 = 2 * v9 + 5;
          *(v10 - 1) = *(v11 - 1);
          v14 = *v11;
          v11 += 20;
          *v10 = v14;
          v10 += 15;
          *(v10 - 14) = *(v11 - 19);
          *(v10 - 13) = *(v11 - 18);
          *(v10 - 12) = *(v11 - 17);
          *(_QWORD *)(v10 - 11) = *((_QWORD *)v11 - 8);
          *(v10 - 9) = *(v11 - 14);
          *((_QWORD *)v10 - 4) = *(_QWORD *)(v11 - 13);
          *(v10 - 6) = *(v11 - 11);
          *(_QWORD *)(v10 - 5) = *((_QWORD *)v11 - 5);
          *(v10 - 3) = *(v11 - 8);
          UserData[v13].Ptr = (unsigned __int64)v12;
          *(_QWORD *)&UserData[v13].Size = 60LL;
          v15 = *((unsigned __int16 *)v11 - 11);
          v16 = 2 * v9++ + 6;
          UserData[v16].Ptr = *((_QWORD *)v11 - 2);
          *(_QWORD *)&UserData[v16].Size = v15;
        }
        while ( v9 < (unsigned int)v5 );
      }
      EtwWrite(ProcLibEtwHandle, &PPM_ETW_PROCESSOR_LPI_STATES, 0LL, 2 * v5 + 5, UserData);
LABEL_11:
      ExFreePoolWithTag(UserData, 0x72637250u);
      if ( v2 )
        ExFreePoolWithTag(v2, 0x72637250u);
      goto LABEL_13;
    }
  }
  return ProcessorNumber;
}
