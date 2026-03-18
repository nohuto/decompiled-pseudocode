/*
 * XREFs of PpmEventTraceProcessorIdle @ 0x1407093C8
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1405F2F90 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void __fastcall PpmEventTraceProcessorIdle(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // edx
  ULONG v4; // ebp
  unsigned int v5; // r14d
  struct _EVENT_DATA_DESCRIPTOR *PoolWithTag; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v8; // r9d
  struct _EVENT_DATA_DESCRIPTOR *v9; // r8
  __int64 v10; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v11; // rcx
  ULONGLONG v12; // r10
  struct _EVENT_DATA_DESCRIPTOR *v13; // rcx
  __int16 v14; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_IDLE_RUNDOWN) )
  {
    v2 = *(_QWORD *)(a1 + 23808);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 28);
      v15 = v3;
      v16 = *(_DWORD *)(v2 + 32);
    }
    else
    {
      v3 = 0;
      v16 = 0;
      v15 = 0;
    }
    v4 = 2 * v3 + 4;
    v5 = 37 * v3 + 16 * v4;
    PoolWithTag = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, v5, 0x654D5050u);
    UserData = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v5);
      v14 = *(unsigned __int8 *)(a1 + 208);
      v8 = 0;
      UserData->Reserved = 0;
      UserData->Ptr = (ULONGLONG)&v14;
      UserData->Size = 2;
      UserData[1].Reserved = 0;
      UserData[1].Ptr = a1 + 209;
      UserData[1].Size = 1;
      UserData[2].Reserved = 0;
      UserData[2].Ptr = (ULONGLONG)&v16;
      UserData[2].Size = 4;
      UserData[3].Reserved = 0;
      v9 = &UserData[v4];
      UserData[3].Ptr = (ULONGLONG)&v15;
      for ( UserData[3].Size = 4; v8 < v15; ++v8 )
      {
        v10 = 248LL * v8;
        v11 = &UserData[2 * v8 + 4];
        LODWORD(v9->Ptr) = *(_DWORD *)(v10 + v2 + 1000);
        HIDWORD(v9->Ptr) = *(_DWORD *)(v10 + v2 + 1004);
        LOBYTE(v9->Size) = *(_BYTE *)(v10 + v2 + 1056);
        *(ULONG *)((char *)&v9->Size + 1) = *(unsigned __int8 *)(v10 + v2 + 1057);
        *(ULONG *)((char *)&v9->Reserved + 1) = *(unsigned __int8 *)(v10 + v2 + 1058);
        *(_DWORD *)((char *)&v9[1].Ptr + 1) = *(unsigned __int8 *)(v10 + v2 + 1059);
        *(_DWORD *)((char *)&v9[1].Ptr + 5) = *(unsigned __int8 *)(v10 + v2 + 1060);
        *(ULONG *)((char *)&v9[1].Size + 1) = *(unsigned __int8 *)(v10 + v2 + 1061);
        *(ULONG *)((char *)&v9[1].Reserved + 1) = *(unsigned __int8 *)(v10 + v2 + 1062);
        *(_DWORD *)((char *)&v9[2].Ptr + 1) = *(unsigned __int8 *)(v10 + v2 + 1063);
        v11->Reserved = 0;
        v11->Ptr = (ULONGLONG)v9;
        v11->Size = 37;
        v12 = *(_QWORD *)(v10 + v2 + 992);
        v13 = &UserData[2 * v8 + 5];
        if ( v12 )
        {
          v13->Size = *(unsigned __int16 *)(v10 + v2 + 986);
          v13->Ptr = v12;
        }
        else
        {
          v13->Size = 28;
          v13->Ptr = (ULONGLONG)L"<unspecified>";
        }
        v13->Reserved = 0;
        v9 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v9 + 37);
      }
      EtwWrite(PpmEtwHandle, &PPM_ETW_CURRENT_IDLE_RUNDOWN, 0LL, v4, UserData);
      ExFreePoolWithTag(UserData, 0x654D5050u);
    }
  }
}
