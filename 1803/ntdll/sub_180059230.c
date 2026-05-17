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

__int64 __fastcall sub_180059230(volatile signed __int32 **a1, char *Ldr, volatile signed __int32 **a3, __int64 a4)
{
  volatile signed __int64 *v5; // r14
  char v7; // bl
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  v5 = (volatile signed __int64 *)Ldr;
  if ( !a3 || !a1 || !Ldr || (Ldr = (char *)NtCurrentPeb()->Ldr, Ldr[72]) )
  {
    sub_1801086C8(a1, Ldr, a3, a4);
    return 3221225485LL;
  }
  if ( *a1 )
  {
    v7 = 0;
    RtlAcquireSRWLockShared(v5, Ldr, (__int64)a3, a4);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      *a3 = *a1;
      v7 = 1;
    }
    RtlReleaseSRWLockShared(v5);
    if ( v7 )
      return 0LL;
  }
  v20 = 0LL;
  result = TpAllocPool((__int64)&v20, 0LL, (__int64)a3, a4);
  v12 = result;
  v19 = result;
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)v5, v9, v10, v11);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      v12 = v19;
      v13 = v20;
      goto LABEL_29;
    }
    v13 = v20;
    if ( a1 == (volatile signed __int32 **)&qword_18015D3B8 )
    {
      if ( dword_18015D460 )
      {
        TpSetPoolMaxThreads(v20, (unsigned int)dword_18015D460);
      }
      else
      {
        v14 = (unsigned int)(8 * MEMORY[0x7FFE03C0]);
        if ( (unsigned int)v14 < 0x300 )
          v14 = 768LL;
        TpSetPoolMaxThreads(v20, v14);
        v15 = (unsigned int)(4 * MEMORY[0x7FFE03C0]);
        if ( (unsigned int)v15 < 0x180 )
          v15 = 384LL;
        TpSetPoolMaxThreadsSoftLimit(v13, v15);
      }
      if ( !qword_18015D048 )
        goto LABEL_21;
      v18 = TpSetPoolStackInformation(v13, qword_18015D048);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&qword_18015D3A8 )
      {
LABEL_21:
        *a1 = (volatile signed __int32 *)v13;
        v13 = 0LL;
        v20 = 0LL;
LABEL_29:
        RtlReleaseSRWLockExclusive(v5);
        if ( v13 )
          TpReleasePool(v13);
        if ( v12 >= 0 )
          *a3 = *a1;
        return (unsigned int)v12;
      }
      TpSetPoolMaxThreads(v20, 1LL);
      v18 = TpSetPoolMinThreads(v13, (struct _PEB_LDR_DATA *)1, v16, v17);
    }
    v12 = v18;
    if ( v18 < 0 )
      goto LABEL_29;
    goto LABEL_21;
  }
  return result;
}
