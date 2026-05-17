/*
 * XREFs of sub_18000BC3C @ 0x18000BC3C
 * Callers:
 *     sub_18002FA10 @ 0x18002FA10 (sub_18002FA10.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_18000AB78 @ 0x18000AB78 (sub_18000AB78.c)
 *     sub_18000BF34 @ 0x18000BF34 (sub_18000BF34.c)
 *     sub_18000BFBC @ 0x18000BFBC (sub_18000BFBC.c)
 *     sub_18000C058 @ 0x18000C058 (sub_18000C058.c)
 *     sub_18000C1F4 @ 0x18000C1F4 (sub_18000C1F4.c)
 *     sub_18000F30C @ 0x18000F30C (sub_18000F30C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 *     sub_1800E7354 @ 0x1800E7354 (sub_1800E7354.c)
 *     sub_1800E73F0 @ 0x1800E73F0 (sub_1800E73F0.c)
 *     sub_1800E758C @ 0x1800E758C (sub_1800E758C.c)
 */

struct _PEB *__fastcall sub_18000BC3C(__int64 a1, int a2)
{
  struct _TEB *v2; // rax
  unsigned int v4; // r12d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // r15
  __int64 v10; // rdi
  int v11; // r13d
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  struct _TEB *v14; // rcx
  __int64 p_ProcessParameters; // rdi
  __int64 v16; // r9
  signed __int64 j; // rdx
  unsigned __int64 v18; // rcx
  signed __int64 v19; // rax
  signed __int64 v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD *v22; // r8
  _QWORD *v23; // rdx
  char v24; // dl
  signed __int64 v25; // rtt
  struct _PEB *result; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  int v35; // edi
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rcx
  __int64 i; // [rsp+30h] [rbp-40h]
  struct _TEB *v40; // [rsp+38h] [rbp-38h]
  _QWORD v41[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v42; // [rsp+50h] [rbp-20h]
  __int64 v43; // [rsp+58h] [rbp-18h]
  _QWORD *v44; // [rsp+60h] [rbp-10h]
  int v45; // [rsp+68h] [rbp-8h]
  char v46; // [rsp+B0h] [rbp+40h]

  v2 = NtCurrentTeb();
  v46 = 0;
  v40 = v2;
  v4 = 0;
  if ( (_UNKNOWN **)a1 == &off_1801555A8 )
  {
    v46 = 1;
    v2->WaitingOnLoaderLock = 1;
  }
  if ( (unsigned __int8)sub_18000BFBC() )
    ZwTerminateProcess(-1LL, 3221225547LL);
  v9 = &qword_18015AEA0;
  if ( byte_18015AE98 )
    v9 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    sub_18000C1F4(a1);
  if ( *(_QWORD *)a1 == -1LL && (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    sub_18000F30C(a1);
  if ( *(_QWORD *)a1 != -1LL )
    ++*(_DWORD *)(*(_QWORD *)a1 + 36LL);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = 0;
  for ( i = v10; ; v10 = i )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, v5, v7, v8) )
      v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
    else
      v12 = 2147353474LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
      sub_1800E73F0(a1);
    if ( v10 == -1 )
    {
      v13 = a1 + 8;
      while ( 1 )
      {
        v43 = 0LL;
        v42 = 0LL;
        v44 = 0LL;
        v41[0] = a1 + 8;
        v45 = 1;
        v14 = NtCurrentTeb();
        v41[1] = v14->ClientId.UniqueThread;
        p_ProcessParameters = (__int64)&v14->ProcessEnvironmentBlock[1].ProcessParameters;
        v16 = (v13 >> 5) & 0x7F;
        for ( j = *(_QWORD *)(p_ProcessParameters + 8 * v16); ; j = v19 )
        {
          v18 = (unsigned __int64)v41 | j & 3;
          v42 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (j & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          {
            v44 = 0LL;
            v18 |= 2uLL;
          }
          else
          {
            v44 = v41;
          }
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(p_ProcessParameters + 8 * v16), v18, j);
          if ( j == v19 )
            break;
        }
        if ( (((unsigned __int8)j ^ (unsigned __int8)v18) & 2) != 0 )
        {
          v20 = *(_QWORD *)(p_ProcessParameters + 8 * v16);
          do
          {
            v21 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
            v22 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !*(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
            {
              do
              {
                v23 = v22;
                v22 = (_QWORD *)v22[2];
                v22[3] = v23;
              }
              while ( !v22[4] );
            }
            *(_QWORD *)(v21 + 32) = v22[4];
            if ( (v20 & 1) != 0 )
            {
              v24 = 1;
              v21 = 0LL;
            }
            else
            {
              v24 = 0;
            }
            v25 = v20;
            v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(p_ProcessParameters + 8 * v16), v21, v20);
          }
          while ( v25 != v20 );
          if ( v24 )
            sub_18000AB78(v20);
        }
        if ( *(_DWORD *)v13 == a2 )
        {
          result = (struct _PEB *)sub_18000BF34(p_ProcessParameters, v41, v9, 0LL);
        }
        else
        {
          sub_18000C058(p_ProcessParameters, v41);
          result = 0LL;
        }
        if ( (_DWORD)result == 258 )
          goto LABEL_53;
        v30 = *(unsigned int *)v13;
        a2 = v30;
        if ( (v30 & 2) == 0 )
          goto LABEL_35;
      }
    }
    result = (struct _PEB *)ZwWaitForSingleObject(v10, 0LL, v9);
LABEL_35:
    if ( (_DWORD)result != 258 )
      break;
LABEL_53:
    sub_1800E7354(a1, v9, v4++);
    if ( *(_QWORD *)a1 == -1LL )
      v35 = 0;
    else
      v35 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v4 > 2 && (_UNKNOWN **)a1 != &off_1801555A8 && v35 == v11 )
      sub_1800E758C(a1);
    v11 = v35;
    DbgPrintEx(101LL, 0LL, "RTL: Re-Waiting\n");
  }
  if ( (int)result < 0 )
    RtlRaiseStatus((int)result);
  if ( v46 )
  {
    v40->WaitingOnLoaderLock = 0;
    result = (struct _PEB *)RtlGetCurrentServiceSessionId(v30, v27, v28, v29);
    if ( (_DWORD)result )
    {
      result = NtCurrentPeb();
      v34 = (__int64)result->HotpatchInformation + 554;
    }
    else
    {
      v34 = 2147353476LL;
    }
    if ( *(_BYTE *)v34 )
    {
      result = NtCurrentPeb();
      if ( (result->TracingFlags & 4) != 0 )
      {
        result = (struct _PEB *)RtlGetCurrentServiceSessionId(v34, v31, v32, v33);
        if ( (_DWORD)result )
        {
          result = NtCurrentPeb();
          v38 = (__int64)result->HotpatchInformation + 555;
        }
        else
        {
          v38 = 2147353477LL;
        }
        if ( (*(_BYTE *)v38 & 0x20) != 0 )
        {
          LOBYTE(v37) = -1;
          LOBYTE(v36) = -1;
          return (struct _PEB *)sub_1800D62F0(5251, -1, v36, v37, 0LL, 0LL);
        }
      }
    }
  }
  return result;
}
