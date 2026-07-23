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

int __fastcall sub_18000BC3C(__int64 a1, int a2)
{
  struct _TEB *v2; // rax
  unsigned int v4; // r12d
  LARGE_INTEGER *v5; // r15
  void *v6; // rdi
  int v7; // r13d
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  struct _TEB *v10; // rcx
  __int64 WaitOnAddressHashTable; // rdi
  __int64 v12; // r9
  signed __int64 j; // rdx
  unsigned __int64 v14; // rcx
  signed __int64 v15; // rax
  signed __int64 v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  char v20; // dl
  signed __int64 v21; // rtt
  struct _PEB *v22; // rax
  __int64 v23; // rcx
  int v24; // edi
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rcx
  void *i; // [rsp+30h] [rbp-40h]
  struct _TEB *v30; // [rsp+38h] [rbp-38h]
  _QWORD v31[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-20h]
  __int64 v33; // [rsp+58h] [rbp-18h]
  _QWORD *v34; // [rsp+60h] [rbp-10h]
  int v35; // [rsp+68h] [rbp-8h]
  char v36; // [rsp+B0h] [rbp+40h]

  v2 = NtCurrentTeb();
  v36 = 0;
  v30 = v2;
  v4 = 0;
  if ( (_RTL_CRITICAL_SECTION *)a1 == &stru_1801555A8 )
  {
    v36 = 1;
    v2->WaitingOnLoaderLock = 1;
  }
  if ( (unsigned __int8)sub_18000BFBC() )
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
  v5 = &Timeout;
  if ( byte_18015AE98 )
    v5 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    sub_18000C1F4(a1);
  if ( *(_QWORD *)a1 == -1LL && (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    sub_18000F30C(a1);
  if ( *(_QWORD *)a1 != -1LL )
    ++*(_DWORD *)(*(_QWORD *)a1 + 36LL);
  v6 = *(void **)(a1 + 24);
  v7 = 0;
  for ( i = v6; ; v6 = i )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
    else
      v8 = 2147353474LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
      sub_1800E73F0(a1);
    if ( v6 == (void *)-1LL )
    {
      v9 = a1 + 8;
      while ( 1 )
      {
        v33 = 0LL;
        v32 = 0LL;
        v34 = 0LL;
        v31[0] = a1 + 8;
        v35 = 1;
        v10 = NtCurrentTeb();
        v31[1] = v10->ClientId.UniqueThread;
        WaitOnAddressHashTable = (__int64)v10->ProcessEnvironmentBlock->WaitOnAddressHashTable;
        v12 = (v9 >> 5) & 0x7F;
        for ( j = *(_QWORD *)(WaitOnAddressHashTable + 8 * v12); ; j = v15 )
        {
          v14 = (unsigned __int64)v31 | j & 3;
          v32 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (j & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          {
            v34 = 0LL;
            v14 |= 2uLL;
          }
          else
          {
            v34 = v31;
          }
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(WaitOnAddressHashTable + 8 * v12), v14, j);
          if ( j == v15 )
            break;
        }
        if ( (((unsigned __int8)j ^ (unsigned __int8)v14) & 2) != 0 )
        {
          v16 = *(_QWORD *)(WaitOnAddressHashTable + 8 * v12);
          do
          {
            v17 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
            v18 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !*(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
            {
              do
              {
                v19 = v18;
                v18 = (_QWORD *)v18[2];
                v18[3] = v19;
              }
              while ( !v18[4] );
            }
            *(_QWORD *)(v17 + 32) = v18[4];
            if ( (v16 & 1) != 0 )
            {
              v20 = 1;
              v17 = 0LL;
            }
            else
            {
              v20 = 0;
            }
            v21 = v16;
            v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(WaitOnAddressHashTable + 8 * v12), v17, v16);
          }
          while ( v21 != v16 );
          if ( v20 )
            sub_18000AB78(v16);
        }
        if ( *(_DWORD *)v9 == a2 )
        {
          LODWORD(v22) = sub_18000BF34(WaitOnAddressHashTable, v31, v5, 0LL);
        }
        else
        {
          sub_18000C058(WaitOnAddressHashTable, v31);
          LODWORD(v22) = 0;
        }
        if ( (_DWORD)v22 == 258 )
          goto LABEL_53;
        a2 = *(_DWORD *)v9;
        if ( (*(_DWORD *)v9 & 2) == 0 )
          goto LABEL_35;
      }
    }
    LODWORD(v22) = ZwWaitForSingleObject(v6, 0, v5);
LABEL_35:
    if ( (_DWORD)v22 != 258 )
      break;
LABEL_53:
    sub_1800E7354(a1, v5, v4++);
    if ( *(_QWORD *)a1 == -1LL )
      v24 = 0;
    else
      v24 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v4 > 2 && (_RTL_CRITICAL_SECTION *)a1 != &stru_1801555A8 && v24 == v7 )
      sub_1800E758C(a1);
    v7 = v24;
    DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
  }
  if ( (int)v22 < 0 )
    RtlRaiseStatus((NTSTATUS)v22);
  if ( v36 )
  {
    v30->WaitingOnLoaderLock = 0;
    LODWORD(v22) = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)v22 )
    {
      v22 = NtCurrentPeb();
      v23 = (__int64)&v22->SharedData->UserModeGlobalLogger[2];
    }
    else
    {
      v23 = 2147353476LL;
    }
    if ( *(_BYTE *)v23 )
    {
      v22 = NtCurrentPeb();
      if ( (v22->TracingFlags & 4) != 0 )
      {
        LODWORD(v22) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v22 )
        {
          v22 = NtCurrentPeb();
          v27 = (__int64)&v22->SharedData->UserModeGlobalLogger[2] + 1;
        }
        else
        {
          v27 = 2147353477LL;
        }
        if ( (*(_BYTE *)v27 & 0x20) != 0 )
        {
          LOBYTE(v26) = -1;
          LOBYTE(v25) = -1;
          LODWORD(v22) = sub_1800D62F0(5251, -1, v25, v26, 0LL, 0LL);
        }
      }
    }
  }
  return (int)v22;
}
