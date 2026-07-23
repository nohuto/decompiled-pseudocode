/*
 * XREFs of sub_180059230 @ 0x180059230
 * Callers:
 *     sub_180024CB8 @ 0x180024CB8 (sub_180024CB8.c)
 *     sub_1800591B8 @ 0x1800591B8 (sub_1800591B8.c)
 *     sub_180108CB4 @ 0x180108CB4 (sub_180108CB4.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     TpSetPoolStackInformation @ 0x180048A20 (TpSetPoolStackInformation.c)
 *     TpSetPoolMinThreads @ 0x180056420 (TpSetPoolMinThreads.c)
 *     TpAllocPool @ 0x180057270 (TpAllocPool.c)
 *     TpSetPoolMaxThreads @ 0x180059670 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800596F0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpReleasePool @ 0x18007E670 (TpReleasePool.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

NTSTATUS __fastcall sub_180059230(volatile signed __int32 **a1, PPEB_LDR_DATA Ldr, volatile signed __int32 **a3)
{
  _RTL_SRWLOCK *v4; // r14
  char v6; // bl
  NTSTATUS result; // eax
  int v8; // edi
  _TP_POOL *v9; // rbx
  ULONG v10; // edx
  __int64 v11; // rdx
  NTSTATUS v12; // eax
  NTSTATUS v13; // [rsp+20h] [rbp-38h]
  PTP_POOL PoolReturn; // [rsp+78h] [rbp+20h] BYREF

  v4 = (_RTL_SRWLOCK *)Ldr;
  if ( !a3 || !a1 || !Ldr || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801086C8(a1, Ldr, a3);
    return -1073741811;
  }
  if ( *a1 )
  {
    v6 = 0;
    RtlAcquireSRWLockShared(v4);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      *a3 = *a1;
      v6 = 1;
    }
    RtlReleaseSRWLockShared(v4);
    if ( v6 )
      return 0;
  }
  PoolReturn = 0LL;
  result = TpAllocPool(&PoolReturn, 0LL);
  v8 = result;
  v13 = result;
  if ( result >= 0 )
  {
    RtlAcquireSRWLockExclusive(v4);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      v8 = v13;
      v9 = PoolReturn;
      goto LABEL_29;
    }
    v9 = PoolReturn;
    if ( a1 == (volatile signed __int32 **)&qword_18015D3B8 )
    {
      if ( MaxThreads )
      {
        TpSetPoolMaxThreads(PoolReturn, MaxThreads);
      }
      else
      {
        v10 = 8 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(8 * MEMORY[0x7FFE03C0]) < 0x300 )
          v10 = 768;
        TpSetPoolMaxThreads(PoolReturn, v10);
        v11 = (unsigned int)(4 * MEMORY[0x7FFE03C0]);
        if ( (unsigned int)v11 < 0x180 )
          v11 = 384LL;
        TpSetPoolMaxThreadsSoftLimit(v9, v11);
      }
      if ( !PoolStackInformation )
        goto LABEL_21;
      v12 = TpSetPoolStackInformation(v9, PoolStackInformation);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&qword_18015D3A8 )
      {
LABEL_21:
        *a1 = (volatile signed __int32 *)v9;
        v9 = 0LL;
        PoolReturn = 0LL;
LABEL_29:
        RtlReleaseSRWLockExclusive(v4);
        if ( v9 )
          TpReleasePool(v9);
        if ( v8 >= 0 )
          *a3 = *a1;
        return v8;
      }
      TpSetPoolMaxThreads(PoolReturn, 1u);
      v12 = TpSetPoolMinThreads(v9, 1u);
    }
    v8 = v12;
    if ( v12 < 0 )
      goto LABEL_29;
    goto LABEL_21;
  }
  return result;
}
