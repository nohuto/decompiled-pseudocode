/*
 * XREFs of sub_180013820 @ 0x180013820
 * Callers:
 *     sub_180013664 @ 0x180013664 (sub_180013664.c)
 * Callees:
 *     sub_18000A978 @ 0x18000A978 (sub_18000A978.c)
 *     RtlSetThreadSubProcessTag @ 0x180017240 (RtlSetThreadSubProcessTag.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180086AA0 @ 0x180086AA0 (sub_180086AA0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800DF2FC @ 0x1800DF2FC (sub_1800DF2FC.c)
 *     sub_1800DF604 @ 0x1800DF604 (sub_1800DF604.c)
 */

__int64 __fastcall sub_180013820(_DWORD *a1, _RTL_SRWLOCK *a2, int a3)
{
  int v3; // r12d
  _RTL_SRWLOCK *v6; // rdx
  _RTL_SRWLOCK *Ptr; // rcx
  _RTL_SRWLOCK *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // esi
  bool v13; // cf
  _QWORD *v15; // rax
  __int64 v16; // rbx
  PVOID v17; // r12
  volatile signed __int32 *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rcx
  _RTL_SRWLOCK *v21; // rbx
  PVOID v22; // rcx
  _RTL_SRWLOCK **v23; // rdx
  _RTL_SRWLOCK **v24; // rcx
  _DWORD *v25; // rbx
  signed __int32 v26[8]; // [rsp+0h] [rbp-D8h] BYREF
  char *v27; // [rsp+20h] [rbp-B8h]
  int v28; // [rsp+28h] [rbp-B0h]
  int v29; // [rsp+40h] [rbp-98h]
  int v30; // [rsp+44h] [rbp-94h]
  int v31; // [rsp+48h] [rbp-90h]
  _RTL_SRWLOCK *v32; // [rsp+50h] [rbp-88h]
  PRTL_SRWLOCK SRWLock; // [rsp+58h] [rbp-80h]
  __int64 v34; // [rsp+60h] [rbp-78h]
  __int64 v35; // [rsp+68h] [rbp-70h]
  PVOID v36; // [rsp+70h] [rbp-68h]
  PVOID v37; // [rsp+78h] [rbp-60h]
  _RTL_SRWLOCK *v38; // [rsp+80h] [rbp-58h]
  unsigned __int64 v39; // [rsp+88h] [rbp-50h]
  char *v40; // [rsp+90h] [rbp-48h]
  PVOID SubProcessTag; // [rsp+98h] [rbp-40h]
  BOOL v42; // [rsp+E0h] [rbp+8h]
  unsigned int v45; // [rsp+F8h] [rbp+20h]

  v3 = a3;
  v30 = 0;
  v40 = (char *)a1 + (unsigned int)a1[11];
  RtlAcquireSRWLockExclusive(a2 + 7);
  v6 = a2 + 8;
  v38 = a2 + 8;
  Ptr = (_RTL_SRWLOCK *)a2[8].Ptr;
  v32 = Ptr;
  while ( Ptr != v6 )
  {
    v8 = Ptr - 1;
    v9 = 2147352584LL;
    v10 = RtlpFreezeTimeBias;
    v11 = MEMORY[0x7FFE03B0];
    v39 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement((volatile signed __int32 *)&Ptr[9]);
    v12 = a1[6] & (__int64)Ptr[7].Ptr;
    if ( LODWORD(Ptr[11].Ptr)
      || !v12
      || ((v12 & 1) == 0 || LODWORD(v8[7].Ptr) && a1[4] - LODWORD(v8[7].Ptr) <= 0)
      && ((v12 & 0xFFFFFFFE) == 0 || LODWORD(v8[20].Ptr))
      && (v12 & 0x10) == 0
      || LODWORD(v8[15].Ptr) && (PVOID)v39 < v8[16].Ptr && HIDWORD(v8[18].Ptr) >= a1[4]
      || v3 && !LODWORD(v8[18].Ptr) )
    {
      goto LABEL_10;
    }
    v29 = 0;
    v31 = 0;
    v34 = (__int64)v8[4].Ptr;
    v15 = v8[3].Ptr;
    v16 = v15[2];
    v35 = v15[6];
    v17 = v8[6].Ptr;
    v8[19].Ptr = NtCurrentTeb()->ClientId.UniqueThread;
    SRWLock = a2 + 7;
    RtlReleaseSRWLockExclusive(a2 + 7);
    v10 = 0LL;
    v45 = 0;
    v42 = 0;
    v18 = (volatile signed __int32 *)v8[9].Ptr;
    if ( v18 )
    {
      v42 = !_interlockedbittestandset64(v18 + 6, 0LL);
      if ( !v42 )
      {
        if ( a3 != 1 )
        {
          LODWORD(v8[18].Ptr) = 1;
          v21 = SRWLock;
          goto LABEL_50;
        }
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v8[9].Ptr + 3);
        v42 = 1;
      }
    }
    if ( !LODWORD(v8[12].Ptr) )
    {
      v31 = 1;
      SubProcessTag = RtlSetThreadSubProcessTag(v17);
      v19 = v34;
      if ( (v12 & 1) != 0 )
      {
        v28 = a1[5];
        v27 = v40;
        v29 = _guard_dispatch_icall_fptr();
      }
      if ( (v12 & 0x10) != 0 && !LODWORD(v8[12].Ptr) && (v29 >= 0 || (BYTE4(v8[7].Ptr) & 4) == 0) )
      {
        v28 = 0;
        v27 = 0LL;
        _guard_dispatch_icall_fptr();
        v29 = 0;
      }
      if ( (v12 & 0xFFFFFFEE) != 0 )
      {
        v29 = 0;
        _guard_dispatch_icall_fptr();
      }
      if ( RtlGetCurrentServiceSessionId() )
        v20 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[7];
      else
        v20 = 2147353486LL;
      if ( *(_BYTE *)v20 )
        sub_1800DF2FC(v16, a1[4], (_DWORD)v8, (_DWORD)a2, v19, v12, v29);
      RtlSetThreadSubProcessTag(SubProcessTag);
    }
    if ( v42 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v8[9].Ptr + 3);
    v21 = SRWLock;
    if ( !v31 )
      goto LABEL_71;
    RtlAcquireSRWLockExclusive(SRWLock);
    v10 = 1LL;
    v45 = 1;
    if ( v29 != -1073741267 && v29 != -1073741801 )
    {
      if ( !LODWORD(v8[7].Ptr) || a1[4] - LODWORD(v8[7].Ptr) > 0 )
        LODWORD(v8[7].Ptr) = a1[4];
      if ( (BYTE4(v8[7].Ptr) & 4) != 0 && LODWORD(v8[17].Ptr) )
      {
        LODWORD(v8[15].Ptr) = 0;
        v8[17].Ptr = 0LL;
        v8[16].Ptr = 0LL;
        HIDWORD(v8[18].Ptr) = 0;
      }
      goto LABEL_49;
    }
    if ( (BYTE4(v8[7].Ptr) & 4) != 0 )
    {
      v30 = 1;
      sub_1800DF604(v8, (unsigned int)v29, (unsigned int)a1[4]);
LABEL_71:
      v10 = v45;
    }
LABEL_49:
    LODWORD(v8[18].Ptr) = 0;
LABEL_50:
    if ( !(_DWORD)v10 )
      RtlAcquireSRWLockExclusive(v21);
    v8[19].Ptr = 0LL;
    v3 = a3;
LABEL_10:
    Ptr = (_RTL_SRWLOCK *)v32->Ptr;
    v32 = (_RTL_SRWLOCK *)v32->Ptr;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8[10], 0xFFFFFFFF) == 1 )
    {
      v22 = v8[9].Ptr;
      if ( v22 )
        sub_180086AA0(v22, v10, v11, v9);
      v23 = (_RTL_SRWLOCK **)v8[1].Ptr;
      v24 = (_RTL_SRWLOCK **)v8[2].Ptr;
      if ( v23[1] != &v8[1] || *v24 != &v8[1] )
        __fastfail(3u);
      *v24 = (_RTL_SRWLOCK *)v23;
      v23[1] = (_RTL_SRWLOCK *)v24;
      v25 = v8[11].Ptr;
      v36 = v8[13].Ptr;
      v37 = v8[14].Ptr;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      if ( v25 )
      {
        *v25 = 1;
        _InterlockedOr(v26, 0);
        sub_18000A978((unsigned __int64)v25, 0);
      }
      Ptr = v32;
    }
    else
    {
      v36 = 0LL;
      v37 = 0LL;
    }
    v6 = v38;
    if ( v36 )
    {
      _guard_dispatch_icall_fptr();
      Ptr = v32;
      v6 = v38;
    }
  }
  RtlReleaseSRWLockExclusive(a2 + 7);
  v13 = v30 != 0;
  v30 = -v30;
  return v13 ? 0xC000022D : 0;
}
