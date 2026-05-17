/*
 * XREFs of sub_18000EF10 @ 0x18000EF10
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x18000B210 (RtlGuardCheckLongJumpTarget.c)
 *     sub_18000D2E0 @ 0x18000D2E0 (sub_18000D2E0.c)
 *     RtlLookupFunctionEntry @ 0x18000EBA0 (RtlLookupFunctionEntry.c)
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     sub_1800103FC @ 0x1800103FC (sub_1800103FC.c)
 *     sub_1800105FC @ 0x1800105FC (sub_1800105FC.c)
 *     RtlPcToFileHeader @ 0x180010F50 (RtlPcToFileHeader.c)
 *     RtlQueryInformationActivationContext @ 0x180028A50 (RtlQueryInformationActivationContext.c)
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 *     sub_180075968 @ 0x180075968 (sub_180075968.c)
 *     sub_180085CF0 @ 0x180085CF0 (sub_180085CF0.c)
 *     sub_1800DAFC0 @ 0x1800DAFC0 (sub_1800DAFC0.c)
 *     RtlLookupFunctionTable @ 0x1800DB1B0 (RtlLookupFunctionTable.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     sub_1800286DC @ 0x1800286DC (sub_1800286DC.c)
 *     sub_1800289C0 @ 0x1800289C0 (sub_1800289C0.c)
 *     sub_180070A54 @ 0x180070A54 (sub_180070A54.c)
 *     sub_180070AAC @ 0x180070AAC (sub_180070AAC.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     ZwWaitForAlertByThreadId @ 0x18009E3B0 (ZwWaitForAlertByThreadId.c)
 */

__int64 __fastcall sub_18000EF10(unsigned __int64 a1, __int64 *a2)
{
  bool v3; // zf
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  int v7; // r10d
  int v8; // r9d
  int v9; // eax
  char *v10; // r8
  unsigned __int64 v11; // rdx
  signed __int64 v12; // rax
  int v14; // edx
  unsigned __int64 v15; // rcx
  __int64 v16; // r15
  signed __int64 v17; // rcx
  bool v18; // cl
  char *v19; // rdx
  signed __int64 v20; // rax
  signed __int64 v21; // r8
  signed __int64 v22; // rtt
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  signed __int64 v26; // rcx
  signed __int64 v27; // rdx
  signed __int64 v28; // rtt
  int j; // ecx
  _QWORD *v31; // rcx
  __int64 i; // rdx
  unsigned __int64 v33; // [rsp+38h] [rbp-29h] BYREF
  int v34; // [rsp+40h] [rbp-21h]
  int v35; // [rsp+48h] [rbp-19h]
  unsigned __int64 v36; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 *v37; // [rsp+60h] [rbp-1h]
  __int64 v38; // [rsp+68h] [rbp+7h]
  HANDLE UniqueThread; // [rsp+70h] [rbp+Fh]
  int v40; // [rsp+78h] [rbp+17h]
  signed __int32 v41; // [rsp+7Ch] [rbp+1Bh] BYREF
  int v42; // [rsp+D0h] [rbp+6Fh] BYREF
  __int64 v43; // [rsp+D8h] [rbp+77h] BYREF

  v3 = dword_18015CFB8 == 3;
  v5 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  if ( v3 )
  {
    v42 = 0;
    v6 = _InterlockedCompareExchange64(&qword_18015D288, 17LL, 0LL);
    if ( !v6 )
    {
LABEL_3:
      if ( KiUserInvertedFunctionTable != 1 )
      {
        v7 = 1;
        v8 = KiUserInvertedFunctionTable - 1;
        while ( v8 >= v7 )
        {
          v9 = (v8 + v7) >> 1;
          v10 = (char *)&xmmword_18016F4E0 + 24 * v9;
          v11 = *((_QWORD *)v10 + 1);
          if ( a1 < v11 )
          {
            if ( !v9 )
              break;
            v8 = v9 - 1;
          }
          else
          {
            if ( a1 < v11 + *((unsigned int *)v10 + 4) )
            {
              *(_OWORD *)a2 = *(_OWORD *)v10;
              a2[2] = *((_QWORD *)v10 + 2);
              v5 = *a2;
              break;
            }
            v7 = v9 + 1;
          }
        }
      }
      v12 = _InterlockedCompareExchange64(&qword_18015D288, 0LL, 17LL);
      if ( v12 != 17 )
      {
        if ( (v12 & 1) == 0 )
          RtlRaiseStatus(3221226084LL);
        if ( (v12 & 2) != 0 )
        {
LABEL_46:
          if ( (v12 & 8) != 0 )
          {
            v31 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL);
            for ( i = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v31[1] )
              v31 = (_QWORD *)*v31;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
              goto LABEL_14;
            v23 = -9LL;
            v24 = -5LL;
          }
          else
          {
            v23 = -1LL;
            v24 = 3LL;
          }
          do
          {
            v25 = v24;
            v26 = v12 & 6;
            if ( v26 != 2 )
              v25 = v23;
            v27 = v12 + v25;
            v28 = v12;
            v12 = _InterlockedCompareExchange64(&qword_18015D288, v27, v12);
          }
          while ( v28 != v12 );
          if ( v26 == 2 )
            sub_180070AAC(&qword_18015D288, v27, 0LL);
          goto LABEL_14;
        }
        while ( 1 )
        {
          v21 = 0LL;
          if ( (v12 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
            v21 = v12 - 16;
          v22 = v12;
          v12 = _InterlockedCompareExchange64(&qword_18015D288, v21, v12);
          if ( v22 == v12 )
            break;
          if ( (v12 & 2) != 0 )
            goto LABEL_46;
        }
      }
LABEL_14:
      if ( v5 || !byte_18016F4DC )
        return v5;
      goto LABEL_16;
    }
    while ( 1 )
    {
      v16 = (v6 >> 1) & 1;
      if ( (v6 & 1) != 0 && (v16 || (v6 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)sub_1800286DC() )
          ZwTerminateProcess(-1LL, 3221225547LL);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v18 = 0;
        v41 = 2;
        v38 = 0LL;
        if ( v16 )
        {
          v37 = 0LL;
          v40 = -1;
          v36 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
          v19 = (char *)((unsigned __int64)&v36 | v6 & 8 | 7);
          v18 = (v6 & 4) == 0;
        }
        else
        {
          v40 = -2;
          v37 = &v36;
          v19 = (char *)&v36 + 3;
        }
        v20 = _InterlockedCompareExchange64(&qword_18015D288, (signed __int64)v19, v6);
        v3 = v6 == v20;
        v6 = v20;
        if ( !v3 )
          goto LABEL_39;
        if ( v18 )
          sub_180070A54(&qword_18015D288);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( j = dword_18015ADA0; j; --j )
          {
            if ( (v41 & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(&v41, 1u) )
        {
          do
            ZwWaitForAlertByThreadId(&qword_18015D288, 0LL);
          while ( (v41 & 4) == 0 );
        }
      }
      else
      {
        v17 = (v6 | 1) + 16;
        if ( v16 )
          v17 = v6 | 1;
        if ( v6 == _InterlockedCompareExchange64(&qword_18015D288, v17, v6) )
          goto LABEL_3;
LABEL_39:
        sub_1800289C0(&v42);
        _m_prefetchw(&qword_18015D288);
        v6 = qword_18015D288;
      }
    }
  }
LABEL_16:
  if ( (int)ZwQueryVirtualMemory(-1LL, a1, 6LL, &v33, 24LL, 0LL) < 0
    || (v15 = v33) == 0
    || (v35 & 2) != 0
    || (v35 & 1) != 0
    || a1 < v33 )
  {
    v15 = 0LL;
  }
  else
  {
    *((_DWORD *)a2 + 4) = v34;
  }
  a2[1] = v15;
  if ( v15 )
  {
    LOBYTE(v14) = 1;
    if ( (int)sub_18001014C(v15, v14, 3, (int)a2 + 20, (__int64)&v43) < 0 )
    {
      v5 = 0LL;
      *a2 = 0LL;
    }
    else
    {
      v5 = v43;
      *a2 = v43;
    }
  }
  return v5;
}
