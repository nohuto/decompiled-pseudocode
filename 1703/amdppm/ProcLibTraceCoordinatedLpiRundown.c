/*
 * XREFs of ProcLibTraceCoordinatedLpiRundown @ 0x1C001E668
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001D790 (ProcLibTraceControlCallback.c)
 * Callees:
 *     memset @ 0x1C000C3C0 (memset.c)
 */

void __fastcall ProcLibTraceCoordinatedLpiRundown(__int64 a1)
{
  _DWORD *v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // rbp
  struct _EVENT_DATA_DESCRIPTOR *PoolWithTag; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v7; // edx
  unsigned __int64 v8; // rcx
  _DWORD *v9; // rax
  unsigned int v10; // r9d
  _DWORD *v11; // r10
  _DWORD *v12; // rsi
  _DWORD *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // rcx

  v2 = 0LL;
  if ( EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_PROCESSOR_CONTAINER_LPI_STATES) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      v4 = *(unsigned int *)(v3 + 16);
      PoolWithTag = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(
                                                       PagedPool,
                                                       16LL * (unsigned int)(2 * v4 + 4),
                                                       0x72637250u);
      UserData = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 16LL * (unsigned int)(2 * v4 + 4));
        v7 = *(unsigned __int16 *)(a1 + 2);
        v8 = *(_QWORD *)(a1 + 8);
        UserData->Reserved = 0;
        UserData->Ptr = v8;
        UserData->Size = v7;
        UserData[1].Ptr = v3;
        *(_QWORD *)&UserData[1].Size = 4LL;
        UserData[2].Ptr = v3 + 8;
        *(_QWORD *)&UserData[2].Size = 8LL;
        UserData[3].Ptr = v3 + 16;
        *(_QWORD *)&UserData[3].Size = 4LL;
        if ( (_DWORD)v4 )
        {
          v9 = ExAllocatePoolWithTag(PagedPool, 60 * v4, 0x72637250u);
          v2 = v9;
          if ( !v9 )
            goto LABEL_10;
          memset(v9, 0, 60 * v4);
          v10 = 0;
          v11 = v2 + 2;
          v12 = (_DWORD *)(v3 + 32);
          do
          {
            v13 = v11 - 2;
            *v13 = *(v12 - 2);
            v14 = 2 * v10 + 4;
            *(v11 - 1) = *(v12 - 1);
            v15 = *v12;
            v12 += 20;
            *v11 = v15;
            v11 += 15;
            *(v11 - 14) = *(v12 - 19);
            *(v11 - 13) = *(v12 - 18);
            *(v11 - 12) = *(v12 - 17);
            *(_QWORD *)(v11 - 11) = *((_QWORD *)v12 - 8);
            *(v11 - 9) = *(v12 - 14);
            *((_QWORD *)v11 - 4) = *(_QWORD *)(v12 - 13);
            *(v11 - 6) = *(v12 - 11);
            *(_QWORD *)(v11 - 5) = *((_QWORD *)v12 - 5);
            *(v11 - 3) = *(v12 - 8);
            UserData[v14].Ptr = (unsigned __int64)v13;
            *(_QWORD *)&UserData[v14].Size = 60LL;
            v16 = *((unsigned __int16 *)v12 - 11);
            v17 = 2 * v10++ + 5;
            UserData[v17].Ptr = *((_QWORD *)v12 - 2);
            *(_QWORD *)&UserData[v17].Size = v16;
          }
          while ( v10 < (unsigned int)v4 );
        }
        EtwWrite(ProcLibEtwHandle, &PPM_ETW_PROCESSOR_CONTAINER_LPI_STATES, 0LL, 2 * v4 + 4, UserData);
LABEL_10:
        ExFreePoolWithTag(UserData, 0x72637250u);
        if ( v2 )
          ExFreePoolWithTag(v2, 0x72637250u);
      }
    }
  }
}
