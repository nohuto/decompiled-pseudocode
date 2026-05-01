/*
 * XREFs of HampIpcChannelWnfCallback @ 0x180005830
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

char (__fastcall *__fastcall HampIpcChannelWnfCallback(__int64 a1, __int64 a2))(__int64 a1, __int64 a2, __int64 *a3)
{
  DWORD CurrentThreadId; // eax
  _QWORD **v5; // rbx
  _QWORD *v6; // rax
  char (__fastcall *result)(__int64, __int64, __int64 *); // rax
  unsigned __int64 v8; // rbx
  int v9; // esi
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  unsigned __int64 v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64); // rax
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  char (__fastcall *v18)(__int64, __int64, __int64 *); // rax
  int v19; // ecx
  __int64 (__fastcall *v20)(__int64); // rax
  int v21; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+28h] [rbp-60h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  int v25; // [rsp+40h] [rbp-48h]

  RtlAcquireSRWLockExclusive(a1 + 8);
  CurrentThreadId = GetCurrentThreadId();
  v5 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    *(_DWORD *)(a1 + 16) = CurrentThreadId;
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    v15 = v6 - 3;
    v16 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v17 = (_QWORD *)v6[1], (_QWORD *)*v17 != v6) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    *v6 = 0LL;
    v6[1] = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
    RtlReleaseSRWLockExclusive(a1 + 8);
    v18 = *(char (__fastcall **)(__int64, __int64, __int64 *))(a1 + 56);
    if ( v18 == RmpClientSubscriptionDeliverPayload )
    {
      memset_0(&v21, 0, 0x38uLL);
      v19 = *((_DWORD *)v15 + 14);
      v21 = v19;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          memset_0(&v22, 0, 0x30uLL);
          v19 = v21;
          v22 = v15[8];
          v23 = v15[6];
          v24 = v15[10];
          v25 = 0;
        }
      }
      else
      {
        v24 = 0LL;
        v22 = v15[6];
        v23 = v15[10];
      }
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          v24 = v15[10];
          goto LABEL_34;
        }
      }
      else
      {
        v23 = v15[10];
LABEL_34:
        ((void (__fastcall *)(__int64 *))v15[9])(&v22);
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
      goto LABEL_36;
    }
    v18(a1, (__int64)v15, 0LL);
LABEL_36:
    RtlAcquireSRWLockExclusive(a1 + 8);
    CurrentThreadId = GetCurrentThreadId();
  }
  *(_DWORD *)(a1 + 16) = 0;
  result = (char (__fastcall *)(__int64, __int64, __int64 *))RtlReleaseSRWLockExclusive(a1 + 8);
  if ( a2 )
  {
    RtlAcquireSRWLockExclusive(a1 + 8);
    *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_BYTE *)(a1 + 32) & 1;
    while ( v8 )
    {
      v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v8 + 40) + 72LL);
      if ( v10 == RmpClientCallbackCompareToPayload )
      {
        if ( *(_DWORD *)a2 )
          v11 = *(_QWORD *)(a2 + 16);
        else
          v11 = *(_QWORD *)(a2 + 8);
        if ( v11 < *(_QWORD *)(v8 + 48) )
          v12 = -1;
        else
          v12 = v11 > *(_QWORD *)(v8 + 48);
      }
      else
      {
        v12 = v10(a2, v8);
      }
      if ( v12 < 0 )
      {
        v13 = *(_QWORD *)v8;
        if ( v9 && v13 )
          goto LABEL_47;
      }
      else
      {
        if ( v12 <= 0 )
          goto LABEL_17;
        v13 = *(_QWORD *)(v8 + 8);
        if ( v9 && v13 )
        {
LABEL_47:
          v8 ^= v13;
          continue;
        }
      }
      v8 = v13;
    }
    v8 = 0LL;
LABEL_17:
    *(_DWORD *)(a1 + 16) = 0;
    result = (char (__fastcall *)(__int64, __int64, __int64 *))RtlReleaseSRWLockExclusive(a1 + 8);
    if ( v8 )
    {
      result = *(char (__fastcall **)(__int64, __int64, __int64 *))(a1 + 56);
      if ( result == RmpClientSubscriptionDeliverPayload )
      {
        if ( *(_DWORD *)a2 )
        {
          if ( *(_DWORD *)a2 == 1 )
          {
            v14 = *(__int64 (__fastcall **)(__int64))(v8 + 72);
            *(_QWORD *)(a2 + 24) = *(_QWORD *)(v8 + 80);
            return (char (__fastcall *)(__int64, __int64, __int64 *))v14(a2 + 8);
          }
        }
        else
        {
          v20 = *(__int64 (__fastcall **)(__int64))(v8 + 72);
          *(_QWORD *)(a2 + 16) = *(_QWORD *)(v8 + 80);
          return (char (__fastcall *)(__int64, __int64, __int64 *))v20(a2 + 8);
        }
      }
      else
      {
        return (char (__fastcall *)(__int64, __int64, __int64 *))((__int64 (__fastcall *)(__int64, unsigned __int64, __int64))result)(
                                                                   a1,
                                                                   v8,
                                                                   a2);
      }
    }
  }
  return result;
}
