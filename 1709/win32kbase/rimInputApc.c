/*
 * XREFs of rimInputApc @ 0x1C00954A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C000C120 (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E724 (WPP_RECORDER_SF_qq.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C001ADD0 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C0095630 (EtwTraceCompleteInputDeviceRead.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00A5FA0 (RIMApplyPTPConfigRemedy.c)
 *     DbgPrintRIMAlways @ 0x1C00F0070 (DbgPrintRIMAlways.c)
 */

void __fastcall rimInputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, __int64 Reserved)
{
  PVOID v4; // rdi
  NTSTATUS Status; // ebp
  __int64 v6; // rsi
  char v7; // bl
  int v8; // ebx
  const GUID *v9; // r8
  unsigned int v10; // eax
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+64h] [rbp+Ch]

  v4 = ApcContext;
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 168) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  LOBYTE(ApcContext) = ApcContext[48];
  EtwTraceCompleteInputDeviceRead(ApcContext, (unsigned int)IoStatusBlock->Status, Reserved);
  v6 = *((_QWORD *)v4 + 43);
  if ( !*(_WORD *)(v6 + 72) )
  {
    v7 = *((_BYTE *)v4 + 48);
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v11, v7 == 2, 0);
    if ( v7 == 2 && (*((_DWORD *)v4 + 50) & 0x80u) != 0 )
    {
      v8 = 1;
      if ( !gDebugPhoneInitRace )
        gDebugPhoneInitRace = 1;
      RIMLockExclusive(v6 + 96);
    }
    else
    {
      v8 = 0;
    }
    if ( *((_QWORD *)v4 + 28) )
    {
      RIMLockExclusive(v6 + 696);
      v10 = *((_DWORD *)v4 + 46) & 0xFFFFFFBF;
      *((_DWORD *)v4 + 46) = v10;
      if ( Status < 0 )
      {
        if ( (v10 & 8) == 0 && Status != -1073741536 )
          RIMStartDeviceSpecificRead((struct _MCGEN_TRACE_CONTEXT *)v6, (__int64)v4, v9);
      }
      else
      {
        rimProcessDeviceBufferAndStartRead(v6, v4);
      }
      *(_QWORD *)(v6 + 704) = 0LL;
      ExReleasePushLockExclusiveEx(v6 + 696, 0LL);
      KeLeaveCriticalRegion();
    }
    else if ( Status >= 0 )
    {
      WPP_RECORDER_SF_qq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x1Au,
        (__int64)&WPP_7f939aa136043ee70ba1a66d38f0357a_Traceguids,
        v6,
        v4);
      DbgPrintRIMAlways("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n");
    }
    if ( v8 )
    {
      *(_QWORD *)(v6 + 104) = 0LL;
      ExReleasePushLockExclusiveEx(v6 + 96, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( IoStatusBlock->Status != -1073741536 )
      RIMApplyPTPConfigRemedy(v6, v4);
    if ( v11 && !v12 && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
  }
  ObfDereferenceObject(*((PVOID *)v4 + 4));
}
