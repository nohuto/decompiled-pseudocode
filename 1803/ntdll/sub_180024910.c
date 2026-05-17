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

unsigned int *__fastcall sub_180024910(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rax
  unsigned int v6; // r12d
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // r13d
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  struct _TEB *v13; // rcx
  __int64 p_ProcessParameters; // rdi
  __int64 v15; // r8
  signed __int64 j; // rcx
  _QWORD *v17; // rax
  unsigned __int64 v18; // r9
  signed __int64 v19; // rax
  unsigned int *result; // rax
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
  __int64 i; // [rsp+30h] [rbp-40h]
  struct _TEB *v33; // [rsp+38h] [rbp-38h]
  _QWORD v34[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-20h]
  __int64 v36; // [rsp+58h] [rbp-18h]
  _QWORD *v37; // [rsp+60h] [rbp-10h]
  int v38; // [rsp+68h] [rbp-8h]
  char v39; // [rsp+B0h] [rbp+40h]
  int v40; // [rsp+C0h] [rbp+50h]

  v4 = NtCurrentTeb();
  v40 = a2;
  v39 = 0;
  v33 = v4;
  v6 = 0;
  if ( (_UNKNOWN **)a1 == &off_1801565B0 )
  {
    v39 = 1;
    v4->WaitingOnLoaderLock = 1;
  }
  if ( (unsigned __int8)sub_1800286DC(&off_1801565B0, a2, a3, a4) )
    ZwTerminateProcess(-1LL, 3221225547LL);
  v7 = &qword_18015BEC0;
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
  v9 = *(_QWORD *)(a1 + 24);
  v10 = 0;
  for ( i = v9; ; v9 = i )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
    else
      v11 = 2147353474LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
      sub_1800E20B8(a1);
    if ( v9 == -1 )
    {
      v12 = a1 + 8;
      while ( 1 )
      {
        v34[0] = a1 + 8;
        v38 = 1;
        v36 = 0LL;
        v35 = 0LL;
        v37 = 0LL;
        v13 = NtCurrentTeb();
        v34[1] = v13->ClientId.UniqueThread;
        p_ProcessParameters = (__int64)&v13->ProcessEnvironmentBlock[1].ProcessParameters;
        v15 = (v12 >> 5) & 0x7F;
        for ( j = *(_QWORD *)(p_ProcessParameters + 8 * v15); ; j = v19 )
        {
          v17 = v34;
          v18 = (unsigned __int64)v34 | j & 3;
          v35 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (j & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            v17 = 0LL;
          v37 = v17;
          if ( (j & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            v18 |= 2uLL;
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(p_ProcessParameters + 8 * v15), v18, j);
          if ( j == v19 )
            break;
        }
        if ( (((unsigned __int8)j ^ (unsigned __int8)v18) & 2) != 0 )
        {
          v21 = *(_QWORD *)(p_ProcessParameters + 8 * v15);
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
            v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(p_ProcessParameters + 8 * v15), v25, v21);
          }
          while ( v26 != v21 );
          if ( v24 )
            sub_18004ADC0(v21);
        }
        if ( *(_DWORD *)v12 == v40 )
        {
          result = (unsigned int *)sub_180024C30(p_ProcessParameters, v34, v7, 0LL);
        }
        else
        {
          sub_18004ABB4(p_ProcessParameters, v34);
          result = 0LL;
        }
        if ( (_DWORD)result == 258 )
          goto LABEL_54;
        v40 = *(_DWORD *)v12;
        if ( (*(_DWORD *)v12 & 2) == 0 )
          goto LABEL_28;
      }
    }
    result = (unsigned int *)ZwWaitForSingleObject(v9, 0LL, v7);
LABEL_28:
    if ( (_DWORD)result != 258 )
      break;
LABEL_54:
    sub_1800E201C(a1, v7, v6++);
    if ( *(_QWORD *)a1 == -1LL )
      v28 = 0;
    else
      v28 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v6 > 2 && (_UNKNOWN **)a1 != &off_1801565B0 && v28 == v10 )
      sub_1800E224C(a1);
    v10 = v28;
    DbgPrintEx(101, 0, (int)"RTL: Re-Waiting\n");
  }
  if ( (int)result < 0 )
    RtlRaiseStatus((unsigned int)result);
  if ( v39 )
  {
    v33->WaitingOnLoaderLock = 0;
    result = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)result )
    {
      result = (unsigned int *)NtCurrentPeb();
      v27 = *((_QWORD *)result + 18) + 554LL;
    }
    else
    {
      v27 = 2147353476LL;
    }
    if ( *(_BYTE *)v27 )
    {
      result = (unsigned int *)NtCurrentPeb();
      if ( (result[222] & 4) != 0 )
      {
        result = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)result )
        {
          result = (unsigned int *)NtCurrentPeb();
          v31 = *((_QWORD *)result + 18) + 555LL;
        }
        else
        {
          v31 = 2147353477LL;
        }
        if ( (*(_BYTE *)v31 & 0x20) != 0 )
        {
          LOBYTE(v30) = -1;
          LOBYTE(v29) = -1;
          return (unsigned int *)sub_1800CBAB0(5251, -1, v29, v30, 0LL, 0LL);
        }
      }
    }
  }
  return result;
}
