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

__int64 __fastcall sub_180013820(_DWORD *a1, __int64 a2, int a3)
{
  int v3; // r12d
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // esi
  bool v13; // cf
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  _DWORD *v29; // rbx
  signed __int32 v30[8]; // [rsp+0h] [rbp-D8h] BYREF
  char *v31; // [rsp+20h] [rbp-B8h]
  int v32; // [rsp+28h] [rbp-B0h]
  int v33; // [rsp+40h] [rbp-98h]
  int v34; // [rsp+44h] [rbp-94h]
  int v35; // [rsp+48h] [rbp-90h]
  _QWORD *v36; // [rsp+50h] [rbp-88h]
  __int64 v37; // [rsp+58h] [rbp-80h]
  __int64 v38; // [rsp+60h] [rbp-78h]
  __int64 v39; // [rsp+68h] [rbp-70h]
  __int64 v40; // [rsp+70h] [rbp-68h]
  __int64 v41; // [rsp+78h] [rbp-60h]
  _QWORD *v42; // [rsp+80h] [rbp-58h]
  unsigned __int64 v43; // [rsp+88h] [rbp-50h]
  char *v44; // [rsp+90h] [rbp-48h]
  __int64 v45; // [rsp+98h] [rbp-40h]
  BOOL v46; // [rsp+E0h] [rbp+8h]
  unsigned int v49; // [rsp+F8h] [rbp+20h]

  v3 = a3;
  v34 = 0;
  v44 = (char *)a1 + (unsigned int)a1[11];
  RtlAcquireSRWLockExclusive(a2 + 56);
  v6 = (_QWORD *)(a2 + 64);
  v42 = (_QWORD *)(a2 + 64);
  v7 = *(_QWORD **)(a2 + 64);
  v36 = v7;
  while ( v7 != v6 )
  {
    v8 = v7 - 1;
    v9 = 2147352584LL;
    v10 = RtlpFreezeTimeBias;
    v11 = MEMORY[0x7FFE03B0];
    v43 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement((volatile signed __int32 *)v7 + 18);
    v12 = a1[6] & v7[7];
    if ( *((_DWORD *)v7 + 22)
      || !v12
      || ((v12 & 1) == 0 || *((_DWORD *)v8 + 14) && a1[4] - *((_DWORD *)v8 + 14) <= 0)
      && ((v12 & 0xFFFFFFFE) == 0 || *((_DWORD *)v8 + 40))
      && (v12 & 0x10) == 0
      || *((_DWORD *)v8 + 30) && v43 < v8[16] && *((_DWORD *)v8 + 37) >= a1[4]
      || v3 && !*((_DWORD *)v8 + 36) )
    {
      goto LABEL_10;
    }
    v33 = 0;
    v35 = 0;
    v38 = v8[4];
    v15 = v8[3];
    v16 = *(_QWORD *)(v15 + 16);
    v39 = *(_QWORD *)(v15 + 48);
    v17 = v8[6];
    v8[19] = NtCurrentTeb()->ClientId.UniqueThread;
    v37 = a2 + 56;
    RtlReleaseSRWLockExclusive(a2 + 56);
    v10 = 0LL;
    v49 = 0;
    v46 = 0;
    v18 = v8[9];
    if ( v18 )
    {
      v46 = !_interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0LL);
      if ( !v46 )
      {
        if ( a3 != 1 )
        {
          *((_DWORD *)v8 + 36) = 1;
          v25 = v37;
          goto LABEL_50;
        }
        RtlAcquireSRWLockExclusive(v8[9] + 24LL);
        v46 = 1;
      }
    }
    if ( !*((_DWORD *)v8 + 24) )
    {
      v35 = 1;
      v45 = RtlSetThreadSubProcessTag(v17);
      v23 = v38;
      if ( (v12 & 1) != 0 )
      {
        v32 = a1[5];
        v31 = v44;
        v33 = _guard_dispatch_icall_fptr();
      }
      if ( (v12 & 0x10) != 0 && !*((_DWORD *)v8 + 24) && (v33 >= 0 || (*((_BYTE *)v8 + 60) & 4) == 0) )
      {
        v32 = 0;
        v31 = 0LL;
        _guard_dispatch_icall_fptr();
        v33 = 0;
      }
      if ( (v12 & 0xFFFFFFEE) != 0 )
      {
        v33 = 0;
        _guard_dispatch_icall_fptr();
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v19, v21, v22) )
        v24 = (__int64)NtCurrentPeb()->HotpatchInformation + 564;
      else
        v24 = 2147353486LL;
      if ( *(_BYTE *)v24 )
        sub_1800DF2FC(v16, a1[4], (_DWORD)v8, a2, v23, v12, v33);
      RtlSetThreadSubProcessTag(v45);
    }
    if ( v46 )
      RtlReleaseSRWLockExclusive(v8[9] + 24LL);
    v25 = v37;
    if ( !v35 )
      goto LABEL_71;
    RtlAcquireSRWLockExclusive(v37);
    v10 = 1LL;
    v49 = 1;
    if ( v33 != -1073741267 && v33 != -1073741801 )
    {
      if ( !*((_DWORD *)v8 + 14) || a1[4] - *((_DWORD *)v8 + 14) > 0 )
        *((_DWORD *)v8 + 14) = a1[4];
      if ( (*((_BYTE *)v8 + 60) & 4) != 0 && *((_DWORD *)v8 + 34) )
      {
        *((_DWORD *)v8 + 30) = 0;
        v8[17] = 0LL;
        v8[16] = 0LL;
        *((_DWORD *)v8 + 37) = 0;
      }
      goto LABEL_49;
    }
    if ( (*((_BYTE *)v8 + 60) & 4) != 0 )
    {
      v34 = 1;
      sub_1800DF604(v8, (unsigned int)v33, (unsigned int)a1[4]);
LABEL_71:
      v10 = v49;
    }
LABEL_49:
    *((_DWORD *)v8 + 36) = 0;
LABEL_50:
    if ( !(_DWORD)v10 )
      RtlAcquireSRWLockExclusive(v25);
    v8[19] = 0LL;
    v3 = a3;
LABEL_10:
    v7 = (_QWORD *)*v36;
    v36 = (_QWORD *)*v36;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 20, 0xFFFFFFFF) == 1 )
    {
      v26 = v8[9];
      if ( v26 )
        sub_180086AA0(v26, v10, v11, v9);
      v27 = v8[1];
      v28 = (_QWORD *)v8[2];
      if ( *(_QWORD **)(v27 + 8) != v8 + 1 || (_QWORD *)*v28 != v8 + 1 )
        __fastfail(3u);
      *v28 = v27;
      *(_QWORD *)(v27 + 8) = v28;
      v29 = (_DWORD *)v8[11];
      v40 = v8[13];
      v41 = v8[14];
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
      if ( v29 )
      {
        *v29 = 1;
        _InterlockedOr(v30, 0);
        sub_18000A978((unsigned __int64)v29, 0);
      }
      v7 = v36;
    }
    else
    {
      v40 = 0LL;
      v41 = 0LL;
    }
    v6 = v42;
    if ( v40 )
    {
      _guard_dispatch_icall_fptr();
      v7 = v36;
      v6 = v42;
    }
  }
  RtlReleaseSRWLockExclusive(a2 + 56);
  v13 = v34 != 0;
  v34 = -v34;
  return v13 ? 0xC000022D : 0;
}
