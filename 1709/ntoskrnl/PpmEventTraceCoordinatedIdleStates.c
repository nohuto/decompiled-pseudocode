/*
 * XREFs of PpmEventTraceCoordinatedIdleStates @ 0x140708D94
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1405F2F90 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void PpmEventTraceCoordinatedIdleStates()
{
  __int64 v0; // rdi
  unsigned int v1; // eax
  ULONG v2; // esi
  unsigned int v3; // ebp
  struct _EVENT_DATA_DESCRIPTOR *PoolWithTag; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  __int64 v6; // r9
  struct _EVENT_DATA_DESCRIPTOR *v7; // r8
  struct _EVENT_DATA_DESCRIPTOR *v8; // rcx
  ULONGLONG v9; // r11
  struct _EVENT_DATA_DESCRIPTOR *v10; // rcx
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_COORDINATED_IDLE_RUNDOWN) )
  {
    v0 = PpmPlatformStates;
    v1 = PpmPlatformStates ? *(_DWORD *)PpmPlatformStates : 0;
    v2 = 2 * v1 + 1;
    v11 = v1;
    v3 = 16 * v2 + 12 * v1;
    PoolWithTag = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, v3, 0x654D5050u);
    UserData = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v3);
      UserData->Reserved = 0;
      v6 = 0LL;
      v7 = &UserData[v2];
      UserData->Ptr = (ULONGLONG)&v11;
      for ( UserData->Size = 4; (unsigned int)v6 < v11; v6 = (unsigned int)(v6 + 1) )
      {
        v8 = &UserData[(unsigned int)(2 * v6 + 1)];
        LODWORD(v7->Ptr) = *(_DWORD *)(384 * v6 + v0 + 72);
        HIDWORD(v7->Ptr) = *(_DWORD *)(384 * v6 + v0 + 76);
        v7->Size = *(unsigned __int8 *)(384 * v6 + v0 + 121);
        v8->Reserved = 0;
        v8->Ptr = (ULONGLONG)v7;
        v8->Size = 12;
        v9 = *(_QWORD *)(384 * v6 + v0 + 304);
        v10 = &UserData[(unsigned int)(2 * v6 + 2)];
        if ( v9 )
        {
          v10->Size = *(unsigned __int16 *)(384 * v6 + v0 + 298);
          v10->Ptr = v9;
        }
        else
        {
          v10->Size = 28;
          v10->Ptr = (ULONGLONG)L"<unspecified>";
        }
        v10->Reserved = 0;
        v7 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v7 + 12);
      }
      EtwWrite(PpmEtwHandle, &PPM_ETW_COORDINATED_IDLE_RUNDOWN, 0LL, v2, UserData);
      ExFreePoolWithTag(UserData, 0x654D5050u);
    }
  }
}
