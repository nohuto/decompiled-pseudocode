/*
 * XREFs of PopCreatePowerRequestObject @ 0x140524250
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140524E58 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140525380 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x14006D500 (RtlInsertElementGenericTableAvl.c)
 *     PsGetCurrentProcessSessionId @ 0x1400767F0 (PsGetCurrentProcessSessionId.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     PopAcquirePowerRequestPushLock @ 0x14051D5A8 (PopAcquirePowerRequestPushLock.c)
 *     PopStatsCreatePowerRequest @ 0x14052439C (PopStatsCreatePowerRequest.c)
 */

__int64 __fastcall PopCreatePowerRequestObject(_QWORD *a1, int *a2)
{
  int v2; // ebx
  signed __int32 v5; // esi
  _DWORD *inserted; // rdi
  int v7; // eax
  int v8; // ebp
  _DWORD *v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-88h]
  _BYTE Buffer[8]; // [rsp+50h] [rbp-58h] BYREF
  signed __int32 v13; // [rsp+58h] [rbp-50h]
  int v14; // [rsp+60h] [rbp-48h] BYREF
  __int64 v15; // [rsp+68h] [rbp-40h]
  __int64 v16; // [rsp+70h] [rbp-38h]
  int v17; // [rsp+78h] [rbp-30h]
  __int128 v18; // [rsp+80h] [rbp-28h]
  void *v19; // [rsp+B8h] [rbp+10h] BYREF

  v2 = *a2;
  v19 = 0LL;
  v5 = _InterlockedIncrement(&PopPowerRequestId);
  v13 = v5;
  PopAcquirePowerRequestPushLock(1);
  inserted = RtlInsertElementGenericTableAvl(&PopPowerRequestTable, Buffer, 0x10u, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( inserted )
  {
    v7 = a2[6];
    v15 = 0LL;
    v16 = 0LL;
    v14 = 48;
    v17 = 32;
    v18 = 0LL;
    v8 = ObCreateObjectEx(0, (_DWORD *)PopPowerRequestObjectType, (int)&v14, v2 != 0, v11, 120, v7 + 32, 0, &v19, 0LL);
    if ( v8 >= 0 )
    {
      v9 = v19;
      memset(v19, 0, 0x78uLL);
      v9[4] = PsGetCurrentProcessSessionId();
      *((_QWORD *)v9 + 10) = a2;
      v9[7] = v5;
      inserted[2] = v5;
      *(_QWORD *)inserted = v9;
      inserted = 0LL;
      PopStatsCreatePowerRequest(v9);
      *a1 = v9;
    }
    if ( inserted )
    {
      PopAcquirePowerRequestPushLock(1);
      RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, inserted);
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
