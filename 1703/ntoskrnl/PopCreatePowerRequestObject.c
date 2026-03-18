/*
 * XREFs of PopCreatePowerRequestObject @ 0x1404C614C
 * Callers:
 *     PopCreateKernelPowerRequest @ 0x1404C7330 (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x1404C78BC (PopCreateUserPowerRequest.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x14006E6F0 (RtlInsertElementGenericTableAvl.c)
 *     PsGetCurrentProcessSessionId @ 0x1400714B0 (PsGetCurrentProcessSessionId.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404C62C8 (PopAcquirePowerRequestPushLock.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 */

__int64 __fastcall PopCreatePowerRequestObject(_QWORD *a1, int *a2)
{
  int v2; // ebx
  _QWORD *v4; // r15
  signed __int32 v5; // esi
  _DWORD *inserted; // rdi
  int v7; // r9d
  __int64 v8; // rcx
  int Object; // ebp
  _BYTE Buffer[8]; // [rsp+50h] [rbp-58h] BYREF
  signed __int32 v12; // [rsp+58h] [rbp-50h]
  int v13; // [rsp+60h] [rbp-48h] BYREF
  __int64 v14; // [rsp+68h] [rbp-40h]
  __int64 v15; // [rsp+70h] [rbp-38h]
  int v16; // [rsp+78h] [rbp-30h]
  __int128 v17; // [rsp+80h] [rbp-28h]

  v2 = *a2;
  v4 = a1;
  v5 = _InterlockedIncrement(&PopPowerRequestId);
  LOBYTE(a1) = 1;
  v12 = v5;
  PopAcquirePowerRequestPushLock(a1);
  inserted = RtlInsertElementGenericTableAvl(&PopPowerRequestTable, Buffer, 0x10u, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( inserted )
  {
    v14 = 0LL;
    v15 = 0LL;
    v13 = 48;
    LOBYTE(v7) = v2 != 0;
    v16 = 32;
    v17 = 0LL;
    Object = ObCreateObjectEx(0, (_DWORD)PopPowerRequestObjectType, (unsigned int)&v13, v7);
    if ( Object >= 0 )
    {
      memset(0LL, 0, 0x70uLL);
      MEMORY[0x10] = PsGetCurrentProcessSessionId();
      MEMORY[0x50] = a2;
      MEMORY[0x1C] = v5;
      inserted[2] = v5;
      *(_QWORD *)inserted = 0LL;
      inserted = 0LL;
      *v4 = 0LL;
    }
    if ( inserted )
    {
      LOBYTE(v8) = 1;
      PopAcquirePowerRequestPushLock(v8);
      RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, inserted);
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Object;
}
