/*
 * XREFs of ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180032E6C
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18001CBEC (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z @ 0x180007F28 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000B4B4 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampHostCheckNotifyZeroProcess(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v2; // edi
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // rax
  char v7; // [rsp+40h] [rbp-39h] BYREF
  int v8; // [rsp+44h] [rbp-35h] BYREF
  unsigned int v9[2]; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  unsigned int *v12; // [rsp+80h] [rbp+7h]
  int v13; // [rsp+88h] [rbp+Fh]
  int v14; // [rsp+8Ch] [rbp+13h]
  char *v15; // [rsp+90h] [rbp+17h]
  int v16; // [rsp+98h] [rbp+1Fh]
  int v17; // [rsp+9Ch] [rbp+23h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp+27h] BYREF

  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800829BE, 0LL, 0LL, 2u, &pData);
  v2 = 0;
  v9[0] = 0;
  HampHostAcquireLockExclusiveEx(a1, 0);
  HampHostStartProcessPresenceChange(a1);
  if ( (*((_QWORD *)a1 + 79) & 0x100000000000LL) != 0 )
  {
    HampHostReleaseLockExclusiveEx(a1);
    v5 = *((_QWORD *)a1 - 2);
    v8 = 0;
    (*(void (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)(v5 + 40) + 72LL))(
      (char *)a1 + 488,
      *((unsigned int *)a1 + 139),
      (char *)a1 + 24,
      *((unsigned int *)a1 + 140),
      *((_QWORD *)a1 - 4),
      0LL,
      &v8);
    if ( v8 )
    {
      HampHostAcquireLockExclusiveEx(a1, 0);
    }
    else
    {
      HampHostAcquireLockExclusiveEx(a1, 0);
      HampHostNotifyZeroProcess(a1, 0, v9);
      v2 = v9[0];
    }
  }
  *((_QWORD *)a1 + 79) &= ~0x80000000000uLL;
  RtlWakeAllConditionVariable((char *)a1 + 656);
  HampHostReleaseLockExclusiveEx(a1);
  if ( v2 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)a1 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
    RmpReleaseGlobalLock();
  }
  if ( _volatile_metadata > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
      v3 = *((_QWORD *)a1 - 4);
      v14 = 0;
      v17 = 0;
      v12 = v9;
      v7 = *((_BYTE *)a1 + 560);
      v15 = &v7;
      *(_QWORD *)v9 = v3;
      v13 = v4;
      v16 = 1;
      TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800826DE, 0LL, 0LL, 5u, &v10);
    }
  }
}
