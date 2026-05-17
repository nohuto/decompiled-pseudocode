/*
 * XREFs of TppPoolpReferenceGlobalPool @ 0x180035C94
 * Callers:
 *     TpReserveTaskPost @ 0x180011898 (TpReserveTaskPost.c)
 *     TppCleanupGroupMemberInitialize @ 0x180036E40 (TppCleanupGroupMemberInitialize.c)
 *     RtlpTpIoAlloc @ 0x1800901F4 (RtlpTpIoAlloc.c)
 * Callees:
 *     TpSetPoolMaxThreads @ 0x18000A220 (TpSetPoolMaxThreads.c)
 *     TpAllocPool @ 0x18000A460 (TpAllocPool.c)
 *     TpSetPoolStackInformation @ 0x180014490 (TpSetPoolStackInformation.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     TpReleasePool @ 0x180081D20 (TpReleasePool.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180083A00 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolMinThreads @ 0x180086AC0 (TpSetPoolMinThreads.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        _PEB_LDR_DATA *Ldr,
        volatile signed __int32 **a3,
        __int64 a4)
{
  _PEB_LDR_DATA *v5; // r14
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 result; // rax
  int v11; // edi
  __int64 v12; // rbx
  int v13; // edx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = Ldr;
  if ( !a3 || !a1 || !Ldr || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(a1, Ldr, a3, a4);
    return 3221225485LL;
  }
  if ( *a1 )
  {
    v7 = 0;
    RtlAcquireSRWLockShared(v5);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      *a3 = *a1;
      v7 = 1;
    }
    RtlReleaseSRWLockShared(v5, v8, v9);
    if ( v7 )
      return 0LL;
  }
  v17 = 0LL;
  result = TpAllocPool((__int64)&v17, 0LL);
  v11 = result;
  v16 = result;
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive(v5);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      v11 = v16;
      v12 = v17;
      goto LABEL_29;
    }
    v12 = v17;
    if ( a1 == (volatile signed __int32 **)&TppPoolpGlobalPool )
    {
      if ( TppPoolpGlobalPoolMaxThreads )
      {
        TpSetPoolMaxThreads(v17, TppPoolpGlobalPoolMaxThreads);
      }
      else
      {
        v13 = 8 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(8 * MEMORY[0x7FFE03C0]) < 0x300 )
          v13 = 768;
        TpSetPoolMaxThreads(v17, v13);
        v14 = (unsigned int)(4 * MEMORY[0x7FFE03C0]);
        if ( (unsigned int)v14 < 0x180 )
          v14 = 384LL;
        TpSetPoolMaxThreadsSoftLimit(v12, v14);
      }
      if ( !TppPoolpGlobalPoolStackSize )
        goto LABEL_21;
      v15 = TpSetPoolStackInformation(v12, TppPoolpGlobalPoolStackSize);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
LABEL_21:
        *a1 = (volatile signed __int32 *)v12;
        v12 = 0LL;
        v17 = 0LL;
LABEL_29:
        RtlReleaseSRWLockExclusive(v5);
        if ( v12 )
          TpReleasePool(v12);
        if ( v11 >= 0 )
          *a3 = *a1;
        return (unsigned int)v11;
      }
      TpSetPoolMaxThreads(v17, 1);
      v15 = TpSetPoolMinThreads(v12, 1LL);
    }
    v11 = v15;
    if ( v15 < 0 )
      goto LABEL_29;
    goto LABEL_21;
  }
  return result;
}
