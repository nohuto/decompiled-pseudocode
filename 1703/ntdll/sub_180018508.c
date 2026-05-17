/*
 * XREFs of sub_180018508 @ 0x180018508
 * Callers:
 *     sub_1800123F4 @ 0x1800123F4 (sub_1800123F4.c)
 *     sub_180017B34 @ 0x180017B34 (sub_180017B34.c)
 *     sub_180105E24 @ 0x180105E24 (sub_180105E24.c)
 * Callees:
 *     TpSetPoolMaxThreads @ 0x18000FE40 (TpSetPoolMaxThreads.c)
 *     TpAllocPool @ 0x180010280 (TpAllocPool.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     TpReleasePool @ 0x1800827E0 (TpReleasePool.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180084DB0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolStackInformation @ 0x1800857C0 (TpSetPoolStackInformation.c)
 *     TpSetPoolMinThreads @ 0x1800878A0 (TpSetPoolMinThreads.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall sub_180018508(
        volatile signed __int32 **a1,
        struct _PEB_LDR_DATA *Ldr,
        volatile signed __int32 **a3,
        __int64 a4)
{
  struct _PEB_LDR_DATA *v5; // r14
  char v7; // bl
  __int64 result; // rax
  int v9; // edi
  __int64 v10; // rbx
  int v11; // edx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v5 = Ldr;
  if ( !a3 || !a1 || !Ldr || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801058B8(a1, Ldr, a3, a4);
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
    RtlReleaseSRWLockShared(v5);
    if ( v7 )
      return 0LL;
  }
  v15 = 0LL;
  result = TpAllocPool((__int64)&v15, 0LL);
  v9 = result;
  v14 = result;
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive(v5);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      v9 = v14;
      v10 = v15;
      goto LABEL_29;
    }
    v10 = v15;
    if ( a1 == (volatile signed __int32 **)&qword_18015C378 )
    {
      if ( dword_18015C420 )
      {
        TpSetPoolMaxThreads(v15, dword_18015C420);
      }
      else
      {
        v11 = 8 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(8 * MEMORY[0x7FFE03C0]) < 0x300 )
          v11 = 768;
        TpSetPoolMaxThreads(v15, v11);
        v12 = (unsigned int)(4 * MEMORY[0x7FFE03C0]);
        if ( (unsigned int)v12 < 0x180 )
          v12 = 384LL;
        TpSetPoolMaxThreadsSoftLimit(v10, v12);
      }
      if ( !qword_18015BFF8 )
        goto LABEL_21;
      v13 = TpSetPoolStackInformation(v10);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&qword_18015C368 )
      {
LABEL_21:
        *a1 = (volatile signed __int32 *)v10;
        v10 = 0LL;
        v15 = 0LL;
LABEL_29:
        RtlReleaseSRWLockExclusive(v5);
        if ( v10 )
          TpReleasePool(v10);
        if ( v9 >= 0 )
          *a3 = *a1;
        return (unsigned int)v9;
      }
      TpSetPoolMaxThreads(v15, 1);
      v13 = TpSetPoolMinThreads(v10, 1LL);
    }
    v9 = v13;
    if ( v13 < 0 )
      goto LABEL_29;
    goto LABEL_21;
  }
  return result;
}
