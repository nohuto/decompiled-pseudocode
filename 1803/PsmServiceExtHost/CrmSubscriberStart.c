/*
 * XREFs of CrmSubscriberStart @ 0x180039328
 * Callers:
 *     CrmGlobalsStart @ 0x180039230 (CrmGlobalsStart.c)
 *     CrmSrvSubscribe @ 0x180069FB0 (CrmSrvSubscribe.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     RmpWnfCreateStateNameForClient @ 0x18002A450 (RmpWnfCreateStateNameForClient.c)
 *     CrmGlobalsSubscriberAdd @ 0x180039414 (CrmGlobalsSubscriberAdd.c)
 *     CrmRegistrationStart @ 0x1800396FC (CrmRegistrationStart.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     CrmRegistrationCleanup @ 0x18006A9BC (CrmRegistrationCleanup.c)
 */

__int64 __fastcall CrmSubscriberStart(struct _WNF_STATE_NAME *a1, unsigned int a2, void *a3)
{
  _QWORD *Heap; // rdi
  int StateNameForClient; // ebx
  struct _WNF_STATE_NAME v9; // rax
  unsigned int v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+34h] [rbp-35h] BYREF
  struct _WNF_STATE_NAME v12; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _WNF_STATE_NAME *v14; // [rsp+60h] [rbp-9h]
  int v15; // [rsp+68h] [rbp-1h]
  int v16; // [rsp+6Ch] [rbp+3h]
  int *v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+7Ch] [rbp+13h]
  int *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]

  a1[4] = (struct _WNF_STATE_NAME)_InterlockedIncrement64(&qword_180092A10);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  if ( Heap )
  {
    if ( !a3 || (StateNameForClient = RmpWnfCreateStateNameForClient(a3, 4u, 0, a1 + 9), StateNameForClient >= 0) )
    {
      memset_0(Heap, 0, 0x40uLL);
      Heap[2] = 0LL;
      Heap[3] = 0LL;
      RtlInitializeSRWLock(Heap + 2);
      *((_DWORD *)Heap + 6) = 0;
      StateNameForClient = CrmRegistrationStart(Heap, a1, a2);
      if ( StateNameForClient >= 0 )
      {
        a1[8] = (struct _WNF_STATE_NAME)Heap;
        Heap = 0LL;
        CrmGlobalsSubscriberAdd(a1);
        StateNameForClient = 0;
      }
    }
    if ( Heap )
    {
      CrmRegistrationCleanup(Heap);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
  }
  else
  {
    StateNameForClient = -1073741801;
  }
  if ( (unsigned int)dword_180092130 > 5 )
  {
    v9 = a1[4];
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v12 = v9;
    v14 = &v12;
    v17 = (int *)&v10;
    v20 = &v11;
    v10 = a2;
    v11 = StateNameForClient;
    v15 = 8;
    v18 = 4;
    v21 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180083DEC, 0LL, 0LL, 5u, &pData);
  }
  return (unsigned int)StateNameForClient;
}
