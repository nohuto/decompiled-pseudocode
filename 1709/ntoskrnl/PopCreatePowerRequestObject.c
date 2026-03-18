/*
 * XREFs of PopCreatePowerRequestObject @ 0x1404E7A28
 * Callers:
 *     PopCreateUserPowerRequest @ 0x1404F1DF4 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x1405DBF54 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x1400B08F0 (PsGetCurrentProcessSessionId.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400DFCC0 (RtlInsertElementGenericTableAvl.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     PopStatsCreatePowerRequest @ 0x1404E7DD4 (PopStatsCreatePowerRequest.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E7E70 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopCreatePowerRequestObject(_QWORD *a1, int *a2)
{
  int v2; // ebx
  _QWORD *v4; // r15
  signed __int32 v5; // esi
  _DWORD *inserted; // rdi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebp
  _DWORD *v10; // rbx
  __int64 v12; // [rsp+20h] [rbp-88h]
  _BYTE Buffer[8]; // [rsp+50h] [rbp-58h] BYREF
  signed __int32 v14; // [rsp+58h] [rbp-50h]
  int v15; // [rsp+60h] [rbp-48h] BYREF
  __int64 v16; // [rsp+68h] [rbp-40h]
  __int64 v17; // [rsp+70h] [rbp-38h]
  int v18; // [rsp+78h] [rbp-30h]
  __int128 v19; // [rsp+80h] [rbp-28h]
  void *v20; // [rsp+B8h] [rbp+10h] BYREF

  v2 = *a2;
  v20 = 0LL;
  v4 = a1;
  v5 = _InterlockedIncrement(&PopPowerRequestId);
  LOBYTE(a1) = 1;
  v14 = v5;
  PopAcquirePowerRequestPushLock(a1);
  inserted = RtlInsertElementGenericTableAvl(&PopPowerRequestTable, Buffer, 0x10u, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( inserted )
  {
    v7 = a2[6];
    v16 = 0LL;
    v17 = 0LL;
    v15 = 48;
    v18 = 32;
    v19 = 0LL;
    v9 = ObCreateObjectEx(0, PopPowerRequestObjectType, (__int64)&v15, v2 != 0, v12, 120, v7 + 32, 0, &v20, 0LL);
    if ( v9 >= 0 )
    {
      v10 = v20;
      memset(v20, 0, 0x78uLL);
      v10[4] = PsGetCurrentProcessSessionId();
      *((_QWORD *)v10 + 10) = a2;
      v10[7] = v5;
      inserted[2] = v5;
      *(_QWORD *)inserted = v10;
      inserted = 0LL;
      PopStatsCreatePowerRequest(v10);
      *v4 = v10;
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
  return (unsigned int)v9;
}
