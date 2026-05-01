/*
 * XREFs of ?RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800154F0
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18000F210 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?Apply@ResourceSet@ExecutionModel@@QEAAJK@Z @ 0x180012590 (-Apply@ResourceSet@ExecutionModel@@QEAAJK@Z.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x180031D04 (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180004090 (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015680 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall RmpEnforcementWorkerSynchronize(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+30h] [rbp-88h] BYREF
  __int64 v6; // [rsp+38h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-68h] BYREF
  void *v9; // [rsp+60h] [rbp-58h]
  int v10; // [rsp+68h] [rbp-50h]
  int v11; // [rsp+6Ch] [rbp-4Ch]
  __int64 *v12; // [rsp+70h] [rbp-48h]
  __int64 v13; // [rsp+78h] [rbp-40h]
  unsigned int *v14; // [rsp+80h] [rbp-38h]
  __int64 v15; // [rsp+88h] [rbp-30h]

  while ( 1 )
  {
    v2 = RmpActivityHostCheckQueueWork(a1, 0);
    v3 = v2;
    if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
    {
      v6 = *((_QWORD *)a1 + 3);
      v12 = &v6;
      v14 = &v5;
      v13 = 8LL;
      v5 = v2;
      v15 = 4LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18005875A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      UserData.Ptr = (ULONGLONG)off_1800670C8;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800670C8;
      UserData.Reserved = 2;
      v9 = &unk_180058765;
      v10 = 55;
      v11 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    if ( !v3 )
      break;
    CempLockSleepConditionVariableExclusive((__int64)&RmpGlobalLock, (__int64)a1 + 992);
  }
}
