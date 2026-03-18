/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C01054A0
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0118D50 (DpiPdoAddPdo.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C01056C4 (DpiDxgkDdiGetChildContainerId.c)
 *     MonitorGetMonitorEldInformation @ 0x1C0105750 (MonitorGetMonitorEldInformation.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01126F4 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01127C4 (DxgkAcquireAdapterDdiSync.c)
 */

__int64 __fastcall DpiPdoGetDeviceContainerIdFromDescriptor(__int64 a1)
{
  __int64 ChildContainerId; // rbx
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  NTSTATUS v11; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+38h] [rbp-19h] BYREF
  int v15; // [rsp+40h] [rbp-11h]
  GUID v16; // [rsp+48h] [rbp-9h] BYREF
  GUID Source1[2]; // [rsp+58h] [rbp+7h] BYREF
  _QWORD Source2[2]; // [rsp+78h] [rbp+27h] BYREF

  v16 = (GUID)0LL;
  LODWORD(ChildContainerId) = -1073741637;
  v14 = 0LL;
  v15 = 0;
  memset(Source1, 0, sizeof(Source1));
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  v5 = *(_QWORD *)(v4 + 40);
  if ( *(_DWORD *)(v3 + 496) != 1 )
    goto LABEL_6;
  if ( !IsInternalVideoOutput(*(_DWORD *)(*(_QWORD *)(v3 + 936) + 4LL)) )
  {
    LODWORD(ChildContainerId) = MonitorGetMonitorEldInformation(
                                  *(DXGADAPTER **)(v4 + 3704),
                                  *(_DWORD *)(v3 + 504),
                                  (struct _MONITOR_PACKED_ELD_INFORMATION *)&v14);
    if ( (int)ChildContainerId >= 0 )
    {
      v6 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v14, 12LL, &v16);
      ChildContainerId = v6;
      if ( v6 < 0 )
        goto LABEL_18;
      *(_QWORD *)&Source1[1].Data1 = v14;
      *(_DWORD *)Source1[1].Data4 = v15;
      Source1[0] = v16;
LABEL_6:
      if ( *(_DWORD *)(v5 + 28) >= 0x3005u && *(_QWORD *)(v5 + 768) )
      {
        v9 = *(_QWORD *)(v3 + 936);
        Source2[0] = 0LL;
        Source2[1] = 0LL;
        KeWaitForSingleObject(*(PVOID *)(v9 + 72), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v4 + 3704), 1LL);
        ChildContainerId = (int)DpiDxgkDdiGetChildContainerId(
                                  v5,
                                  *(_QWORD *)(v4 + 48),
                                  *(unsigned int *)(*(_QWORD *)(v3 + 936) + 24LL),
                                  Source1);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(v4 + 3704));
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
        if ( (_DWORD)ChildContainerId == -1071841279 )
        {
          if ( *(_DWORD *)(v3 + 496) != 1 )
            goto LABEL_18;
          v10 = WdLogNewEntry5_WdEvent(v8);
          *(_QWORD *)(v10 + 24) = a1;
          WdLogEvent5_WdEvent(v10);
          LODWORD(ChildContainerId) = 0;
          Source1[0] = v16;
        }
        else if ( (int)ChildContainerId < 0 )
        {
          goto LABEL_18;
        }
        if ( RtlCompareMemory(Source1, Source2, 0x10uLL) == 16 )
        {
          ChildContainerId = -1073741823LL;
          goto LABEL_18;
        }
      }
      if ( (int)ChildContainerId < 0 )
        return (unsigned int)ChildContainerId;
      v11 = RtlStringFromGUID(Source1, (PUNICODE_STRING)(v3 + 960));
      ChildContainerId = v11;
      if ( v11 >= 0 )
        return (unsigned int)ChildContainerId;
LABEL_18:
      v13 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v13 + 24) = *(_QWORD *)(v5 + 768);
      *(_QWORD *)(v13 + 32) = ChildContainerId;
      WdLogEvent5_WdError(v13);
    }
  }
  return (unsigned int)ChildContainerId;
}
