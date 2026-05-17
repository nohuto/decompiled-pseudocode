/*
 * XREFs of sub_1800193C0 @ 0x1800193C0
 * Callers:
 *     sub_180018A00 @ 0x180018A00 (sub_180018A00.c)
 * Callees:
 *     sub_180004264 @ 0x180004264 (sub_180004264.c)
 *     sub_180016BD8 @ 0x180016BD8 (sub_180016BD8.c)
 *     sub_180018F14 @ 0x180018F14 (sub_180018F14.c)
 *     sub_180019084 @ 0x180019084 (sub_180019084.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180073700 @ 0x180073700 (sub_180073700.c)
 *     ZwCancelWaitCompletionPacket @ 0x1800A6510 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_18010580C @ 0x18010580C (sub_18010580C.c)
 */

__int64 __fastcall sub_1800193C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  __int64 v7; // rcx
  __int64 v8; // rbx
  char v9; // al
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rbx

  v4 = a3;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
    sub_180004264(a2 + (-(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFF88uLL) + 128, a1);
  v8 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  RtlAcquireSRWLockExclusive(a1 + 240);
  v9 = *(_BYTE *)(a1 + 354);
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v9 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      v15 = *(_QWORD *)(a1 + 368);
      *(_QWORD *)(a1 + 328) = 0LL;
      v16 = ZwCancelWaitCompletionPacket(v15, 0LL);
      if ( v16 )
      {
        if ( v16 != 259 && v16 != -1073741536 )
          sub_18010580C(v16, *(_QWORD *)(a1 + 360), a1);
        goto LABEL_9;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      *(_QWORD *)(a1 + 360) = 0LL;
    }
    else
    {
      v10 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v10 )
      {
        if ( v4 )
          *(_QWORD *)(a1 + 328) = v8;
        *(_QWORD *)(a1 + 328) += 10000 * v10;
        v12 = *(_QWORD *)(a1 + 328);
        if ( v12 <= v8 )
          *(_QWORD *)(a1 + 328) = v8 + 10000 * v10 - (v8 - v12) % (10000 * v10);
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2);
        sub_180019084(a2 + 128, a1);
        sub_180018F14(a2 + 128, 0LL, v13, v14);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    sub_180016BD8(a1);
LABEL_9:
    RtlReleaseSRWLockExclusive(a1 + 240);
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  v17 = *(_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  RtlReleaseSRWLockExclusive(a1 + 240);
  sub_180073700(v17);
LABEL_10:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
