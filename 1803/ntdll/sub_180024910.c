/*
 * XREFs of sub_180024910 @ 0x180024910
 * Callers:
 *     sub_18001EEE0 @ 0x18001EEE0 (sub_18001EEE0.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180024408 @ 0x180024408 (sub_180024408.c)
 *     sub_180024C30 @ 0x180024C30 (sub_180024C30.c)
 *     sub_1800286DC @ 0x1800286DC (sub_1800286DC.c)
 *     sub_18004ABB4 @ 0x18004ABB4 (sub_18004ABB4.c)
 *     sub_18004ADC0 @ 0x18004ADC0 (sub_18004ADC0.c)
 *     sub_18004AE34 @ 0x18004AE34 (sub_18004AE34.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 *     sub_1800E201C @ 0x1800E201C (sub_1800E201C.c)
 *     sub_1800E20B8 @ 0x1800E20B8 (sub_1800E20B8.c)
 *     sub_1800E224C @ 0x1800E224C (sub_1800E224C.c)
 */

int __fastcall sub_180024910(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rax
  unsigned int v6; // r12d
  LARGE_INTEGER *v7; // r14
  __int64 v8; // rcx
  void *v9; // rdi
  int v10; // r13d
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  struct _TEB *v13; // rcx
  __int64 WaitOnAddressHashTable; // rdi
  __int64 v15; // r8
  signed __int64 j; // rcx
  _QWORD *v17; // rax
  unsigned __int64 v18; // r9
  signed __int64 v19; // rax
  struct _PEB *v20; // rax
  signed __int64 v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  char v24; // dl
  unsigned __int64 v25; // rcx
  signed __int64 v26; // rtt
  __int64 v27; // rcx
  int v28; // edi
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rcx
  void *i; // [rsp+30h] [rbp-40h]
  struct _TEB *v34; // [rsp+38h] [rbp-38h]
  _QWORD v35[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-20h]
  __int64 v37; // [rsp+58h] [rbp-18h]
  _QWORD *v38; // [rsp+60h] [rbp-10h]
  int v39; // [rsp+68h] [rbp-8h]
  char v40; // [rsp+B0h] [rbp+40h]
  int v41; // [rsp+C0h] [rbp+50h]

  v4 = NtCurrentTeb();
  v41 = a2;
  v40 = 0;
  v34 = v4;
  v6 = 0;
  if ( (_RTL_CRITICAL_SECTION *)a1 == &stru_1801565B0 )
  {
    v40 = 1;
    v4->WaitingOnLoaderLock = 1;
  }
  if ( (unsigned __int8)sub_1800286DC(&stru_1801565B0, a2, a3, a4) )
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
  v7 = &Timeout;
  if ( byte_18015BEB8 )
    v7 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    sub_18004AE34(a1);
  v8 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 != -1LL )
    goto LABEL_10;
  v8 = -1LL;
  if ( (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
  {
    sub_180024408(a1);
    v8 = *(_QWORD *)a1;
  }
  if ( v8 != -1 )
LABEL_10:
    ++*(_DWORD *)(v8 + 36);
  v9 = *(void **)(a1 + 24);
  v10 = 0;
  for ( i = v9; ; v9 = i )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
    else
      v11 = 2147353474LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
      sub_1800E20B8(a1);
    if ( v9 == (void *)-1LL )
    {
      v12 = a1 + 8;
      while ( 1 )
      {
        v35[0] = a1 + 8;
        v39 = 1;
        v37 = 0LL;
        v36 = 0LL;
        v38 = 0LL;
        v13 = NtCurrentTeb();
        v35[1] = v13->ClientId.UniqueThread;
        WaitOnAddressHashTable = (__int64)v13->ProcessEnvironmentBlock->WaitOnAddressHashTable;
        v15 = (v12 >> 5) & 0x7F;
        for ( j = *(_QWORD *)(WaitOnAddressHashTable + 8 * v15); ; j = v19 )
        {
          v17 = v35;
          v18 = (unsigned __int64)v35 | j & 3;
          v36 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (j & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            v17 = 0LL;
          v38 = v17;
          if ( (j & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            v18 |= 2uLL;
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(WaitOnAddressHashTable + 8 * v15), v18, j);
          if ( j == v19 )
            break;
        }
        if ( (((unsigned __int8)j ^ (unsigned __int8)v18) & 2) != 0 )
        {
          v21 = *(_QWORD *)(WaitOnAddressHashTable + 8 * v15);
          do
          {
            v22 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !*(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
            {
              do
              {
                v23 = v22;
                v22 = (_QWORD *)v22[2];
                v22[3] = v23;
              }
              while ( !v22[4] );
            }
            *(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFFCuLL) + 32) = v22[4];
            v24 = v21 & 1;
            v25 = 0LL;
            if ( (v21 & 1) == 0 )
              v25 = v21 & 0xFFFFFFFFFFFFFFFCuLL;
            v26 = v21;
            v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(WaitOnAddressHashTable + 8 * v15), v25, v21);
          }
          while ( v26 != v21 );
          if ( v24 )
            sub_18004ADC0(v21);
        }
        if ( *(_DWORD *)v12 == v41 )
        {
          LODWORD(v20) = sub_180024C30(WaitOnAddressHashTable, v35, v7, 0LL);
        }
        else
        {
          sub_18004ABB4(WaitOnAddressHashTable, v35);
          LODWORD(v20) = 0;
        }
        if ( (_DWORD)v20 == 258 )
          goto LABEL_54;
        v41 = *(_DWORD *)v12;
        if ( (*(_DWORD *)v12 & 2) == 0 )
          goto LABEL_28;
      }
    }
    LODWORD(v20) = ZwWaitForSingleObject(v9, 0, v7);
LABEL_28:
    if ( (_DWORD)v20 != 258 )
      break;
LABEL_54:
    sub_1800E201C(a1, v7, v6++);
    if ( *(_QWORD *)a1 == -1LL )
      v28 = 0;
    else
      v28 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v6 > 2 && (_RTL_CRITICAL_SECTION *)a1 != &stru_1801565B0 && v28 == v10 )
      sub_1800E224C(a1);
    v10 = v28;
    DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
  }
  if ( (int)v20 < 0 )
    RtlRaiseStatus((NTSTATUS)v20);
  if ( v40 )
  {
    v34->WaitingOnLoaderLock = 0;
    LODWORD(v20) = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)v20 )
    {
      v20 = NtCurrentPeb();
      v27 = (__int64)&v20->SharedData->UserModeGlobalLogger[2];
    }
    else
    {
      v27 = 2147353476LL;
    }
    if ( *(_BYTE *)v27 )
    {
      v20 = NtCurrentPeb();
      if ( (v20->TracingFlags & 4) != 0 )
      {
        LODWORD(v20) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v20 )
        {
          v20 = NtCurrentPeb();
          v31 = (__int64)&v20->SharedData->UserModeGlobalLogger[2] + 1;
        }
        else
        {
          v31 = 2147353477LL;
        }
        if ( (*(_BYTE *)v31 & 0x20) != 0 )
        {
          LOBYTE(v30) = -1;
          LOBYTE(v29) = -1;
          LODWORD(v20) = sub_1800CBAB0(5251, -1, v29, v30, 0LL, 0LL);
        }
      }
    }
  }
  return (int)v20;
}
