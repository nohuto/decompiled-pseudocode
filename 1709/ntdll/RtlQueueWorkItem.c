/*
 * XREFs of RtlQueueWorkItem @ 0x1800113D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x180001B60 (RtlpTpETWCallbackEnqueue.c)
 *     LdrUnloadDll @ 0x180010DE0 (LdrUnloadDll.c)
 *     RtlpTpWorkUnposted @ 0x180010F90 (RtlpTpWorkUnposted.c)
 *     TpUnreserveTaskPost @ 0x180011098 (TpUnreserveTaskPost.c)
 *     RtlpTpResumeImpersonation @ 0x180011788 (RtlpTpResumeImpersonation.c)
 *     LdrAddRefDll @ 0x1800117D0 (LdrAddRefDll.c)
 *     TpReserveTaskPost @ 0x180011898 (TpReserveTaskPost.c)
 *     RtlpTpInitializeData @ 0x180011910 (RtlpTpInitializeData.c)
 *     RtlpTpRevertCapture @ 0x18001197C (RtlpTpRevertCapture.c)
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     RtlReleaseActivationContext @ 0x180035E40 (RtlReleaseActivationContext.c)
 *     RtlQueryInformationActivationContext @ 0x180037100 (RtlQueryInformationActivationContext.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     TpPostTask @ 0x180046308 (TpPostTask.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

__int64 __fastcall RtlQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // edi
  __int64 Heap; // rax
  __int64 v8; // rbx
  int InformationActivationContext; // eax
  __int64 *v10; // r12
  __int64 *v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rcx
  void *v19; // rcx
  char v20; // [rsp+40h] [rbp-B8h]
  char v21; // [rsp+41h] [rbp-B7h]
  char v22; // [rsp+42h] [rbp-B6h]
  char v23; // [rsp+43h] [rbp-B5h]
  int v24; // [rsp+44h] [rbp-B4h]
  __int64 v25; // [rsp+48h] [rbp-B0h]
  __int64 v26; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A0h]
  int v28; // [rsp+60h] [rbp-98h] BYREF
  __int64 v29; // [rsp+68h] [rbp-90h]
  __int64 v30; // [rsp+70h] [rbp-88h]
  __int64 v31; // [rsp+78h] [rbp-80h]
  __int128 v32; // [rsp+80h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-68h]
  int v34; // [rsp+98h] [rbp-60h]
  int v35; // [rsp+9Ch] [rbp-5Ch]
  int v36; // [rsp+A0h] [rbp-58h]
  __int128 v37; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-38h]
  struct _TEB *v39; // [rsp+C8h] [rbp-30h]
  __int64 v40; // [rsp+118h] [rbp+20h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v40 = 0LL;
  v25 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  v6 = RtlpTpRevertCapture(&v40, a3 & 0x100);
  v24 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 120LL);
    v8 = Heap;
    v25 = Heap;
    if ( Heap )
    {
      v6 = RtlpTpInitializeData(Heap + 40, a3, v40);
      v24 = v6;
      if ( v6 >= 0 )
      {
        v23 = 1;
        *(_QWORD *)(v25 + 96) = NtCurrentTeb()->SubProcessTag;
        v8 = v25;
        *(_GUID *)(v25 + 104) = NtCurrentTeb()->ActivityId;
        InformationActivationContext = RtlQueryInformationActivationContext(1, 0, 0, 1, (__int64)&v26, 16LL, 0LL);
        v6 = InformationActivationContext;
        v24 = InformationActivationContext;
        if ( InformationActivationContext >= 0 )
        {
LABEL_6:
          if ( (v27 & 1) != 0 )
          {
            RtlReleaseActivationContext(v26);
            v26 = -1LL;
          }
          *(_QWORD *)(v25 + 72) = v26;
          v20 = 1;
          *(_DWORD *)(v25 + 88) = 2;
          v10 = (__int64 *)(v25 + 56);
          *(_QWORD *)(v25 + 56) = a1;
          *(_QWORD *)(v25 + 64) = a2;
          v11 = (__int64 *)(v25 + 32);
          *(_QWORD *)(v25 + 32) = 0LL;
          v28 = 3;
          v29 = 0LL;
          v30 = 0LL;
          v31 = 0LL;
          v32 = 0LL;
          v33 = 0LL;
          v34 = 0;
          v35 = 1;
          v36 = 72;
          v12 = 0;
          if ( (a3 & 0xC0) != 0 )
            v12 = 2;
          v34 = v12;
          *(_QWORD *)v25 = RtlpTpWorkTaskCallbacks;
          *(_DWORD *)(v25 + 8) = 0;
          v6 = TpReserveTaskPost(*v11, v25, &v28);
          v24 = v6;
          if ( v6 >= 0 )
          {
            v21 = 1;
            if ( (unsigned __int64)*v10 < *((_QWORD *)&xmmword_18016F4D0 + 1)
              || *v10 >= *((_QWORD *)&xmmword_18016F4D0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4E0 )
            {
              RtlpxLookupFunctionTable(*v10, &v37);
            }
            else
            {
              v37 = xmmword_18016F4D0;
              v38 = qword_18016F4E0;
            }
            v13 = *((_QWORD *)&v37 + 1);
            *(_QWORD *)(v25 + 80) = *((_QWORD *)&v37 + 1);
            if ( v13 )
            {
              LdrAddRefDll(0LL, v13);
              v22 = 1;
              if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v14) )
              {
                v16 = (__int64)NtCurrentPeb()->SharedData + 556;
                v8 = v25;
              }
              else
              {
                v16 = 2147353478LL;
              }
              if ( *(_BYTE *)v16 )
              {
                v39 = NtCurrentTeb();
                v8 = v25;
                RtlpTpETWCallbackEnqueue(*v11, v25, *v10, *(_QWORD *)(v25 + 64), (__int64)v39->SubProcessTag);
              }
              TpPostTask(v8, *v11, 1LL, &v28);
              if ( !_InterlockedDecrement((volatile signed __int32 *)(v25 + 88)) )
                RtlpTpWorkUnposted(v25, *v11);
              v8 = 0LL;
              v25 = 0LL;
              v6 = 0;
              v24 = 0;
            }
          }
          goto LABEL_28;
        }
        if ( InformationActivationContext == -1072365557 )
        {
          *(_QWORD *)(v25 + 72) = -1LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v6 = -1073741801;
      v24 = -1073741801;
    }
  }
LABEL_28:
  if ( v8 )
  {
    if ( v20 )
    {
      v18 = *(_QWORD *)(v8 + 72);
      if ( v18 != -1 )
        RtlReleaseActivationContext(v18);
    }
    if ( v21 )
      TpUnreserveTaskPost(*(volatile signed __int32 **)(v8 + 32), (__int64)&v28);
    if ( v22 )
      LdrUnloadDll(*(_QWORD *)(v8 + 80));
    if ( v23 )
    {
      v19 = *(void **)(v8 + 40);
      if ( v19 )
        NtClose(v19);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v25);
    v6 = v24;
  }
  RtlpTpResumeImpersonation(v40);
  return (unsigned int)v6;
}
