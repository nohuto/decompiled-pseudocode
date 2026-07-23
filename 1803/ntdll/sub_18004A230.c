/*
 * XREFs of sub_18004A230 @ 0x18004A230
 * Callers:
 *     sub_18004A0A0 @ 0x18004A0A0 (sub_18004A0A0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetThreadSubProcessTag @ 0x180028650 (RtlSetThreadSubProcessTag.c)
 *     sub_18004A688 @ 0x18004A688 (sub_18004A688.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800D8B7C @ 0x1800D8B7C (sub_1800D8B7C.c)
 *     sub_1800D8E84 @ 0x1800D8E84 (sub_1800D8E84.c)
 */

__int64 __fastcall sub_18004A230(__int64 a1, _RTL_SRWLOCK *a2, int a3)
{
  int v3; // r12d
  _RTL_SRWLOCK *v6; // rcx
  volatile signed __int32 *Ptr; // r9
  volatile signed __int32 *v8; // rdi
  unsigned __int64 v9; // rcx
  int v10; // esi
  __int64 v12; // rbx
  void *v13; // r12
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  _RTL_SRWLOCK *v17; // rbx
  int v18; // eax
  int v19; // [rsp+40h] [rbp-98h]
  int v20; // [rsp+44h] [rbp-94h]
  int v21; // [rsp+48h] [rbp-90h]
  volatile signed __int32 *v22; // [rsp+50h] [rbp-88h]
  __int64 v23; // [rsp+60h] [rbp-78h]
  _RTL_SRWLOCK *v24; // [rsp+80h] [rbp-58h]
  PVOID SubProcessTag; // [rsp+90h] [rbp-48h]
  _RTL_SRWLOCK *SRWLock; // [rsp+98h] [rbp-40h]
  BOOL v27; // [rsp+E0h] [rbp+8h]
  int v30; // [rsp+F8h] [rbp+20h]

  v3 = a3;
  v20 = 0;
  SRWLock = a2 + 7;
  RtlAcquireSRWLockExclusive(a2 + 7);
  v6 = a2 + 8;
  v24 = a2 + 8;
  Ptr = (volatile signed __int32 *)a2[8].Ptr;
  v22 = Ptr;
  while ( Ptr != (volatile signed __int32 *)v6 )
  {
    v8 = Ptr - 2;
    v9 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement(Ptr + 18);
    v10 = *(_DWORD *)(a1 + 24) & Ptr[14];
    if ( !*((_DWORD *)Ptr + 22)
      && v10
      && ((v10 & 1) != 0 && (!*((_DWORD *)v8 + 14) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v8 + 14) > 0)
       || (v10 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v8 + 40)
       || (v10 & 0x10) != 0)
      && (!*((_DWORD *)v8 + 30) || v9 >= *((_QWORD *)v8 + 16) || *((_DWORD *)v8 + 37) < *(_DWORD *)(a1 + 16))
      && (!v3 || *((_DWORD *)v8 + 36)) )
    {
      v19 = 0;
      v21 = 0;
      v23 = *((_QWORD *)v8 + 4);
      v12 = *(_QWORD *)(*((_QWORD *)v8 + 3) + 16LL);
      v13 = (void *)*((_QWORD *)v8 + 6);
      *((_QWORD *)v8 + 19) = NtCurrentTeb()->ClientId.UniqueThread;
      RtlReleaseSRWLockExclusive(a2 + 7);
      v14 = 0;
      v30 = 0;
      v27 = 0;
      v15 = *((_QWORD *)v8 + 9);
      if ( !v15 || (v27 = !_interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0LL)) )
      {
LABEL_17:
        if ( !*((_DWORD *)v8 + 24) )
        {
          v21 = 1;
          SubProcessTag = RtlSetThreadSubProcessTag(v13);
          if ( (v10 & 1) != 0 )
            v19 = _guard_dispatch_icall_fptr();
          if ( (v10 & 0x10) != 0 && !*((_DWORD *)v8 + 24) && (v19 >= 0 || (v8[15] & 4) == 0) )
          {
            _guard_dispatch_icall_fptr();
            v19 = 0;
          }
          if ( (v10 & 0xFFFFFFEE) != 0 )
          {
            v19 = 0;
            _guard_dispatch_icall_fptr();
          }
          if ( RtlGetCurrentServiceSessionId() )
            v16 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[7];
          else
            v16 = 2147353486LL;
          if ( *(_BYTE *)v16 )
            sub_1800D8B7C(v12, *(_DWORD *)(a1 + 16), (_DWORD)v8, (_DWORD)a2, v23, v10, v19);
          RtlSetThreadSubProcessTag(SubProcessTag);
        }
        if ( v27 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)v8 + 9) + 24LL));
        v17 = a2 + 7;
        if ( v21 )
        {
          RtlAcquireSRWLockExclusive(a2 + 7);
          v14 = 1;
          v30 = 1;
          if ( v19 != -1073741267 && v19 != -1073741801 )
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
LABEL_45:
            v18 = 0;
LABEL_46:
            *((_DWORD *)v8 + 36) = v18;
            if ( !v14 )
              RtlAcquireSRWLockExclusive(v17);
            *((_QWORD *)v8 + 19) = 0LL;
            Ptr = v22;
            v3 = a3;
            goto LABEL_10;
          }
          if ( (v8[15] & 4) == 0 )
            goto LABEL_45;
          v20 = 1;
          sub_1800D8E84(v8, (unsigned int)v19, *(unsigned int *)(a1 + 16));
        }
        v14 = v30;
        goto LABEL_45;
      }
      if ( a3 == 1 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)v8 + 9) + 24LL));
        v27 = 1;
        goto LABEL_17;
      }
      v18 = 1;
      v17 = a2 + 7;
      goto LABEL_46;
    }
LABEL_10:
    v22 = *(volatile signed __int32 **)Ptr;
    sub_18004A688((PVOID)v8);
    Ptr = v22;
    v6 = v24;
  }
  RtlReleaseSRWLockExclusive(SRWLock);
  return v20 != 0 ? 0xC000022D : 0;
}
