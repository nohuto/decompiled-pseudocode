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

__int64 __fastcall sub_1800193C0(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  void *v12; // rcx
  unsigned __int32 v13; // eax
  __int64 v14; // rbx

  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    sub_180004264((__int64)&a2[16] + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFF88uLL), a1);
  v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v8 = *(_BYTE *)(a1 + 354);
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v8 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      v12 = *(void **)(a1 + 368);
      *(_QWORD *)(a1 + 328) = 0LL;
      v13 = ZwCancelWaitCompletionPacket(v12, 0);
      if ( v13 )
      {
        if ( v13 != 259 && v13 != -1073741536 )
          sub_18010580C(v13, *(_QWORD *)(a1 + 360), a1);
        goto LABEL_9;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      *(_QWORD *)(a1 + 360) = 0LL;
    }
    else
    {
      v9 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v9 )
      {
        if ( a3 )
          *(_QWORD *)(a1 + 328) = v7;
        *(_QWORD *)(a1 + 328) += 10000 * v9;
        v11 = *(_QWORD *)(a1 + 328);
        if ( v11 <= v7 )
          *(_QWORD *)(a1 + 328) = v7 + 10000 * v9 - (v7 - v11) % (10000 * v9);
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2);
        sub_180019084((__int64)&a2[16], a1);
        sub_180018F14((__int64)&a2[16], 0);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    sub_180016BD8(a1);
LABEL_9:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  v14 = *(_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  sub_180073700(v14);
LABEL_10:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
