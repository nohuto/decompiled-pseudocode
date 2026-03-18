/*
 * XREFs of rimInputApc @ 0x1C008E100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C004D114 (WPP_RECORDER_SF_qq.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0051E7C (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0095144 (RIMStartDeviceSpecificRead.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C009BF98 (RIMApplyPTPConfigRemedy.c)
 *     DbgPrintRIMAlways @ 0x1C00FF030 (DbgPrintRIMAlways.c)
 */

void __fastcall rimInputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 v3; // rsi
  NTSTATUS Status; // ebp
  char v7; // bl
  int v8; // ebx
  unsigned int v9; // eax
  int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+64h] [rbp+Ch]

  v3 = *((_QWORD *)ApcContext + 43);
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 168) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  if ( !*(_WORD *)(v3 + 72) )
  {
    v7 = ApcContext[48];
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v10, v7 == 2, 0);
    if ( v7 == 2 && (*((_DWORD *)ApcContext + 50) & 0x80u) != 0 )
    {
      v8 = 1;
      if ( !gDebugPhoneInitRace )
        gDebugPhoneInitRace = 1;
      RIMLockExclusive(v3 + 96);
    }
    else
    {
      v8 = 0;
    }
    if ( *((_QWORD *)ApcContext + 28) )
    {
      RIMLockExclusive(v3 + 696);
      v9 = *((_DWORD *)ApcContext + 46) & 0xFFFFFFBF;
      *((_DWORD *)ApcContext + 46) = v9;
      if ( Status < 0 )
      {
        if ( (v9 & 8) == 0 && Status != -1073741536 )
          RIMStartDeviceSpecificRead(v3, ApcContext);
      }
      else
      {
        rimProcessDeviceBufferAndStartRead(v3, ApcContext);
      }
      *(_QWORD *)(v3 + 704) = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 696, 0LL);
      KeLeaveCriticalRegion();
    }
    else if ( Status >= 0 )
    {
      WPP_RECORDER_SF_qq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x1Au,
        (__int64)&WPP_ec5b4285555b30105b420c8c4957b6f6_Traceguids,
        v3,
        ApcContext);
      DbgPrintRIMAlways("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n");
    }
    if ( v8 )
    {
      *(_QWORD *)(v3 + 104) = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 96, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( IoStatusBlock->Status != -1073741536 )
      RIMApplyPTPConfigRemedy(v3, ApcContext);
    if ( v10 && !v11 && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
}
