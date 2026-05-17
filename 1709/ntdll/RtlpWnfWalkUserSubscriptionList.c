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

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(_DWORD *a1, __int64 a2, int a3)
{
  int v3; // r12d
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // r9
  volatile signed __int32 *v8; // rdi
  int v9; // esi
  __int64 v11; // rbx
  __int64 v12; // r12
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  int v19; // [rsp+40h] [rbp-A8h]
  int v20; // [rsp+44h] [rbp-A4h]
  int v21; // [rsp+48h] [rbp-A0h]
  volatile signed __int32 *v22; // [rsp+50h] [rbp-98h]
  __int64 v23; // [rsp+60h] [rbp-88h]
  __int64 v24; // [rsp+70h] [rbp-78h] BYREF
  __int64 v25; // [rsp+78h] [rbp-70h] BYREF
  volatile signed __int32 *v26; // [rsp+80h] [rbp-68h]
  unsigned __int64 v27; // [rsp+88h] [rbp-60h]
  char *v28; // [rsp+90h] [rbp-58h]
  __int64 v29; // [rsp+98h] [rbp-50h]
  __int64 v30; // [rsp+A0h] [rbp-48h]
  BOOL v31; // [rsp+F0h] [rbp+8h]
  int v34; // [rsp+108h] [rbp+20h]

  v3 = a3;
  v24 = 0LL;
  v25 = 0LL;
  v20 = 0;
  v28 = (char *)a1 + (unsigned int)a1[11];
  v30 = a2 + 56;
  RtlAcquireSRWLockExclusive(a2 + 56);
  v6 = (volatile signed __int32 *)(a2 + 64);
  v26 = (volatile signed __int32 *)(a2 + 64);
  v7 = *(volatile signed __int32 **)(a2 + 64);
  v22 = v7;
  while ( v7 != v6 )
  {
    v8 = v7 - 2;
    v27 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement(v7 + 18);
    v9 = a1[6] & v7[14];
    if ( !*((_DWORD *)v7 + 22)
      && v9
      && ((v9 & 1) != 0 && (!*((_DWORD *)v8 + 14) || a1[4] - *((_DWORD *)v8 + 14) > 0)
       || (v9 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v8 + 40)
       || (v9 & 0x10) != 0)
      && (!*((_DWORD *)v8 + 30) || v27 >= *((_QWORD *)v8 + 16) || *((_DWORD *)v8 + 37) < a1[4])
      && (!v3 || *((_DWORD *)v8 + 36)) )
    {
      v19 = 0;
      v21 = 0;
      v23 = *((_QWORD *)v8 + 4);
      v11 = *(_QWORD *)(*((_QWORD *)v8 + 3) + 16LL);
      v12 = *((_QWORD *)v8 + 6);
      *((_QWORD *)v8 + 19) = NtCurrentTeb()->ClientId.UniqueThread;
      RtlReleaseSRWLockExclusive(a2 + 56);
      v13 = 0;
      v34 = 0;
      v31 = 0;
      v14 = *((_QWORD *)v8 + 9);
      if ( !v14 || (v31 = !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0LL)) )
      {
LABEL_18:
        if ( !*((_DWORD *)v8 + 24) )
        {
          v21 = 1;
          v29 = RtlSetThreadSubProcessTag(v12);
          if ( (v9 & 1) != 0 )
            v19 = _guard_dispatch_icall_fptr();
          if ( (v9 & 0x10) != 0 && !*((_DWORD *)v8 + 24) && (v19 >= 0 || (v8[15] & 4) == 0) )
          {
            _guard_dispatch_icall_fptr();
            v19 = 0;
          }
          if ( (v9 & 0xFFFFFFEE) != 0 )
          {
            v19 = 0;
            _guard_dispatch_icall_fptr();
          }
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v15) )
            v17 = (__int64)NtCurrentPeb()->SharedData + 564;
          else
            v17 = 2147353486LL;
          if ( *(_BYTE *)v17 )
            RtlpWnfETWEventCallback(v11, a1[4], (_DWORD)v8, a2, v23, v9, v19);
          RtlSetThreadSubProcessTag(v29);
        }
        if ( v31 )
          RtlReleaseSRWLockExclusive(*((_QWORD *)v8 + 9) + 24LL);
        v18 = a2 + 56;
        if ( v21 )
        {
          RtlAcquireSRWLockExclusive(a2 + 56);
          v13 = 1;
          v34 = 1;
          if ( v19 != -1073741267 && v19 != -1073741801 )
          {
            if ( !*((_DWORD *)v8 + 14) || a1[4] - *((_DWORD *)v8 + 14) > 0 )
              *((_DWORD *)v8 + 14) = a1[4];
            if ( (v8[15] & 4) != 0 && *((_DWORD *)v8 + 34) )
            {
              *((_DWORD *)v8 + 30) = 0;
              *((_QWORD *)v8 + 17) = 0LL;
              *((_QWORD *)v8 + 16) = 0LL;
              *((_DWORD *)v8 + 37) = 0;
            }
LABEL_47:
            *((_DWORD *)v8 + 36) = 0;
LABEL_48:
            if ( !v13 )
              RtlAcquireSRWLockExclusive(v18);
            *((_QWORD *)v8 + 19) = 0LL;
            v7 = v22;
            v3 = a3;
            goto LABEL_10;
          }
          if ( (v8[15] & 4) == 0 )
            goto LABEL_47;
          v20 = 1;
          RtlpWnfMarkFailure(v8, (unsigned int)v19, (unsigned int)a1[4]);
        }
        v13 = v34;
        goto LABEL_47;
      }
      if ( a3 == 1 )
      {
        RtlAcquireSRWLockExclusive(*((_QWORD *)v8 + 9) + 24LL);
        v31 = 1;
        goto LABEL_18;
      }
      *((_DWORD *)v8 + 36) = 1;
      v18 = a2 + 56;
      goto LABEL_48;
    }
LABEL_10:
    v22 = *(volatile signed __int32 **)v7;
    RtlpDecRefWnfUserSubscription(v8, &v24, &v25);
    v7 = v22;
    v6 = v26;
    if ( v24 )
    {
      _guard_dispatch_icall_fptr();
      v7 = v22;
      v6 = v26;
    }
  }
  RtlReleaseSRWLockExclusive(v30);
  return v20 != 0 ? 0xC000022D : 0;
}
