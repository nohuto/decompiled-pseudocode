/*
 * XREFs of RtlpWnfWalkUserSubscriptionList @ 0x18000C060
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18000BEA4 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlpDecRefWnfUserSubscription @ 0x18000C4E0 (RtlpDecRefWnfUserSubscription.c)
 *     RtlSetThreadSubProcessTag @ 0x18000F400 (RtlSetThreadSubProcessTag.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpWnfETWEventCallback @ 0x1800DDC7C (RtlpWnfETWEventCallback.c)
 *     RtlpWnfMarkFailure @ 0x1800DDF84 (RtlpWnfMarkFailure.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(__int64 a1, _RTL_SRWLOCK *a2, int a3)
{
  int v3; // r12d
  _RTL_SRWLOCK *v6; // rcx
  volatile signed __int32 *Value; // r9
  volatile signed __int32 *v8; // rdi
  int v9; // esi
  __int64 v11; // rbx
  void *v12; // r12
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  _RTL_SRWLOCK *v16; // rbx
  int v17; // [rsp+40h] [rbp-A8h]
  int v18; // [rsp+44h] [rbp-A4h]
  int v19; // [rsp+48h] [rbp-A0h]
  volatile signed __int32 *v20; // [rsp+50h] [rbp-98h]
  __int64 v21; // [rsp+60h] [rbp-88h]
  _RTL_SRWLOCK *v22; // [rsp+80h] [rbp-68h]
  unsigned __int64 v23; // [rsp+88h] [rbp-60h]
  PVOID SubProcessTag; // [rsp+98h] [rbp-50h]
  _RTL_SRWLOCK *SRWLock; // [rsp+A0h] [rbp-48h]
  BOOL v26; // [rsp+F0h] [rbp+8h]
  int v29; // [rsp+108h] [rbp+20h]

  v3 = a3;
  v18 = 0;
  SRWLock = a2 + 7;
  RtlAcquireSRWLockExclusive(a2 + 7);
  v6 = a2 + 8;
  v22 = a2 + 8;
  Value = (volatile signed __int32 *)a2[8].Value;
  v20 = Value;
  while ( Value != (volatile signed __int32 *)v6 )
  {
    v8 = Value - 2;
    v23 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement(Value + 18);
    v9 = *(_DWORD *)(a1 + 24) & Value[14];
    if ( !*((_DWORD *)Value + 22)
      && v9
      && ((v9 & 1) != 0 && (!*((_DWORD *)v8 + 14) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v8 + 14) > 0)
       || (v9 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v8 + 40)
       || (v9 & 0x10) != 0)
      && (!*((_DWORD *)v8 + 30) || v23 >= *((_QWORD *)v8 + 16) || *((_DWORD *)v8 + 37) < *(_DWORD *)(a1 + 16))
      && (!v3 || *((_DWORD *)v8 + 36)) )
    {
      v17 = 0;
      v19 = 0;
      v21 = *((_QWORD *)v8 + 4);
      v11 = *(_QWORD *)(*((_QWORD *)v8 + 3) + 16LL);
      v12 = (void *)*((_QWORD *)v8 + 6);
      *((_QWORD *)v8 + 19) = NtCurrentTeb()->ClientId.UniqueThread;
      RtlReleaseSRWLockExclusive(a2 + 7);
      v13 = 0;
      v29 = 0;
      v26 = 0;
      v14 = *((_QWORD *)v8 + 9);
      if ( !v14 || (v26 = !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0LL)) )
      {
LABEL_17:
        if ( !*((_DWORD *)v8 + 24) )
        {
          v19 = 1;
          SubProcessTag = RtlSetThreadSubProcessTag(v12);
          if ( (v9 & 1) != 0 )
            v17 = _guard_dispatch_icall_fptr();
          if ( (v9 & 0x10) != 0 && !*((_DWORD *)v8 + 24) && (v17 >= 0 || (v8[15] & 4) == 0) )
          {
            _guard_dispatch_icall_fptr();
            v17 = 0;
          }
          if ( (v9 & 0xFFFFFFEE) != 0 )
          {
            v17 = 0;
            _guard_dispatch_icall_fptr();
          }
          if ( RtlGetCurrentServiceSessionId() )
            v15 = (__int64)NtCurrentPeb()->SharedData + 564;
          else
            v15 = 2147353486LL;
          if ( *(_BYTE *)v15 )
            RtlpWnfETWEventCallback(v11, *(_DWORD *)(a1 + 16), (_DWORD)v8, (_DWORD)a2, v21, v9, v17);
          RtlSetThreadSubProcessTag(SubProcessTag);
        }
        if ( v26 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)v8 + 9) + 24LL));
        v16 = a2 + 7;
        if ( v19 )
        {
          RtlAcquireSRWLockExclusive(a2 + 7);
          v13 = 1;
          v29 = 1;
          if ( v17 != -1073741267 && v17 != -1073741801 )
          {
            if ( !*((_DWORD *)v8 + 14) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v8 + 14) > 0 )
              *((_DWORD *)v8 + 14) = *(_DWORD *)(a1 + 16);
            if ( (v8[15] & 4) != 0 && *((_DWORD *)v8 + 34) )
            {
              *((_DWORD *)v8 + 30) = 0;
              *((_QWORD *)v8 + 17) = 0LL;
              *((_QWORD *)v8 + 16) = 0LL;
              *((_DWORD *)v8 + 37) = 0;
            }
LABEL_46:
            *((_DWORD *)v8 + 36) = 0;
LABEL_47:
            if ( !v13 )
              RtlAcquireSRWLockExclusive(v16);
            *((_QWORD *)v8 + 19) = 0LL;
            Value = v20;
            v3 = a3;
            goto LABEL_10;
          }
          if ( (v8[15] & 4) == 0 )
            goto LABEL_46;
          v18 = 1;
          RtlpWnfMarkFailure(v8, (unsigned int)v17, *(unsigned int *)(a1 + 16));
        }
        v13 = v29;
        goto LABEL_46;
      }
      if ( a3 == 1 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)v8 + 9) + 24LL));
        v26 = 1;
        goto LABEL_17;
      }
      *((_DWORD *)v8 + 36) = 1;
      v16 = a2 + 7;
      goto LABEL_47;
    }
LABEL_10:
    v20 = *(volatile signed __int32 **)Value;
    RtlpDecRefWnfUserSubscription((PVOID)v8);
    Value = v20;
    v6 = v22;
  }
  RtlReleaseSRWLockExclusive(SRWLock);
  return v18 != 0 ? 0xC000022D : 0;
}
