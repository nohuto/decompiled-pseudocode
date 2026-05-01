/*
 * XREFs of CrmRegistrationStart @ 0x1800396FC
 * Callers:
 *     CrmSubscriberStart @ 0x180039328 (CrmSubscriberStart.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     CrmRegisterToStateMonitor @ 0x180039818 (CrmRegisterToStateMonitor.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall CrmRegistrationStart(__int64 a1, __int64 a2, int a3)
{
  char *v4; // r12
  __int64 v5; // r14
  __int64 v6; // r15
  PVOID Heap; // rax
  unsigned int v8; // r14d
  __int64 v9; // r13
  unsigned int *v10; // r12
  unsigned int v11; // edi
  _QWORD *v12; // rbx
  int v13; // ebx
  int v15; // eax
  int v16; // [rsp+30h] [rbp-59h] BYREF
  int v17; // [rsp+34h] [rbp-55h] BYREF
  __int64 v18; // [rsp+38h] [rbp-51h]
  __int64 v19; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v21; // [rsp+70h] [rbp-19h]
  int v22; // [rsp+78h] [rbp-11h]
  int v23; // [rsp+7Ch] [rbp-Dh]
  __int64 *v24; // [rsp+80h] [rbp-9h]
  int v25; // [rsp+88h] [rbp-1h]
  int v26; // [rsp+8Ch] [rbp+3h]
  int *v27; // [rsp+90h] [rbp+7h]
  int v28; // [rsp+98h] [rbp+Fh]
  int v29; // [rsp+9Ch] [rbp+13h]

  v18 = a2;
  v4 = (char *)&CrmPolicyTable + 264 * a3;
  v5 = a2;
  v6 = *((unsigned int *)v4 + 1);
  *(_DWORD *)(a1 + 8) = a3;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 48 * v6);
  *(_QWORD *)(a1 + 48) = Heap;
  if ( Heap )
  {
    *(_QWORD *)a1 = v5;
    v8 = 0;
    *(_DWORD *)(a1 + 32) = v6;
    if ( (_DWORD)v6 )
    {
      v9 = 0LL;
      v10 = (unsigned int *)(v4 + 8);
      while ( 1 )
      {
        v11 = *v10;
        v12 = (_QWORD *)(v9 + *(_QWORD *)(a1 + 48));
        memset_0(v12, 0, 0x30uLL);
        *v12 = a1;
        *(_OWORD *)(v12 + 1) = *(_OWORD *)v10;
        v13 = CrmRegisterToStateMonitor(a1, v12, v11);
        if ( v13 < 0 )
          break;
        ++*(_DWORD *)(a1 + 40);
        ++v8;
        v9 += 48LL;
        v10 += 4;
        if ( v8 >= (unsigned int)v6 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v13 = 0;
    }
    v5 = v18;
  }
  else
  {
    v13 = -1073741801;
  }
  if ( (unsigned int)dword_180092130 > 5 )
  {
    v15 = *(_DWORD *)(a1 + 8);
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v16 = v15;
    v19 = *(_QWORD *)(v5 + 32);
    v21 = &v16;
    v24 = &v19;
    v27 = &v17;
    v17 = v13;
    v22 = 4;
    v25 = 8;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180084359, 0LL, 0LL, 5u, &pData);
  }
  return (unsigned int)v13;
}
