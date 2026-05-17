/*
 * XREFs of RtlQueueWorkItem @ 0x180057A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002428 @ 0x180002428 (sub_180002428.c)
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 *     sub_180026138 @ 0x180026138 (sub_180026138.c)
 *     RtlQueryInformationActivationContext @ 0x180028A50 (RtlQueryInformationActivationContext.c)
 *     LdrUnloadDll @ 0x180046DB0 (LdrUnloadDll.c)
 *     sub_180047030 @ 0x180047030 (sub_180047030.c)
 *     sub_180047138 @ 0x180047138 (sub_180047138.c)
 *     sub_1800588B4 @ 0x1800588B4 (sub_1800588B4.c)
 *     sub_180058EC0 @ 0x180058EC0 (sub_180058EC0.c)
 *     sub_180058F2C @ 0x180058F2C (sub_180058F2C.c)
 *     LdrAddRefDll @ 0x1800590F0 (LdrAddRefDll.c)
 *     sub_1800591B8 @ 0x1800591B8 (sub_1800591B8.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall RtlQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // edi
  __int64 Heap; // rax
  __int64 v8; // rbx
  int InformationActivationContext; // eax
  unsigned __int64 *v10; // r12
  __int64 *v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  volatile signed __int32 *v16; // rcx
  __int64 v17; // rcx
  char v18; // [rsp+40h] [rbp-B8h]
  char v19; // [rsp+41h] [rbp-B7h]
  char v20; // [rsp+42h] [rbp-B6h]
  char v21; // [rsp+43h] [rbp-B5h]
  int v22; // [rsp+44h] [rbp-B4h]
  unsigned __int64 v23; // [rsp+48h] [rbp-B0h]
  __int64 v24; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A0h]
  int v26; // [rsp+60h] [rbp-98h] BYREF
  __int64 v27; // [rsp+68h] [rbp-90h]
  __int64 v28; // [rsp+70h] [rbp-88h]
  __int64 v29; // [rsp+78h] [rbp-80h]
  __int128 v30; // [rsp+80h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-68h]
  int v32; // [rsp+98h] [rbp-60h]
  int v33; // [rsp+9Ch] [rbp-5Ch]
  int v34; // [rsp+A0h] [rbp-58h]
  __int128 v35; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-38h]
  struct _TEB *v37; // [rsp+C8h] [rbp-30h]
  __int64 v38; // [rsp+118h] [rbp+20h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v38 = 0LL;
  v23 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  v6 = sub_180058F2C(&v38, a3 & 0x100);
  v22 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 120LL);
    v8 = Heap;
    v23 = Heap;
    if ( Heap )
    {
      v6 = sub_180058EC0(Heap + 40, a3, v38);
      v22 = v6;
      if ( v6 >= 0 )
      {
        v21 = 1;
        *(_QWORD *)(v23 + 96) = NtCurrentTeb()->SubProcessTag;
        v8 = v23;
        *(struct _GUID *)(v23 + 104) = NtCurrentTeb()->ActivityId;
        InformationActivationContext = RtlQueryInformationActivationContext(1, 0LL, 0LL, 1, (__int64)&v24, 0x10uLL, 0LL);
        v6 = InformationActivationContext;
        v22 = InformationActivationContext;
        if ( InformationActivationContext >= 0 )
        {
LABEL_6:
          if ( (v25 & 1) != 0 )
          {
            RtlReleaseActivationContext((volatile signed __int32 *)v24);
            v24 = -1LL;
          }
          *(_QWORD *)(v23 + 72) = v24;
          v18 = 1;
          *(_DWORD *)(v23 + 88) = 2;
          v10 = (unsigned __int64 *)(v23 + 56);
          *(_QWORD *)(v23 + 56) = a1;
          *(_QWORD *)(v23 + 64) = a2;
          v11 = (__int64 *)(v23 + 32);
          *(_QWORD *)(v23 + 32) = 0LL;
          v26 = 3;
          v27 = 0LL;
          v28 = 0LL;
          v29 = 0LL;
          v30 = 0LL;
          v31 = 0LL;
          v32 = 0;
          v33 = 1;
          v34 = 72;
          v12 = 0;
          if ( (a3 & 0xC0) != 0 )
            v12 = 2;
          v32 = v12;
          *(_QWORD *)v23 = off_1801106B0;
          *(_DWORD *)(v23 + 8) = 0;
          v6 = sub_1800591B8(*v11, v23, &v26);
          v22 = v6;
          if ( v6 >= 0 )
          {
            v19 = 1;
            if ( *v10 < *((_QWORD *)&xmmword_18016F4E0 + 1)
              || *v10 >= *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4F0 )
            {
              sub_18000EF10(*v10, (__int64 *)&v35);
            }
            else
            {
              v35 = xmmword_18016F4E0;
              v36 = qword_18016F4F0;
            }
            v13 = *((_QWORD *)&v35 + 1);
            *(_QWORD *)(v23 + 80) = *((_QWORD *)&v35 + 1);
            if ( v13 )
            {
              LdrAddRefDll(0LL, v13);
              v20 = 1;
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              {
                v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
                v8 = v23;
              }
              else
              {
                v14 = 2147353478LL;
              }
              if ( *(_BYTE *)v14 )
              {
                v37 = NtCurrentTeb();
                v8 = v23;
                sub_180002428(*v11, v23, *v10, *(_QWORD *)(v23 + 64), (__int64)v37->SubProcessTag);
              }
              sub_180026138(v8, *v11, 1, (__int64)&v26);
              if ( !_InterlockedDecrement((volatile signed __int32 *)(v23 + 88)) )
                sub_180047030(v23, *v11);
              v8 = 0LL;
              v23 = 0LL;
              v6 = 0;
              v22 = 0;
            }
          }
          goto LABEL_28;
        }
        if ( InformationActivationContext == -1072365557 )
        {
          *(_QWORD *)(v23 + 72) = -1LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v6 = -1073741801;
      v22 = -1073741801;
    }
  }
LABEL_28:
  if ( v8 )
  {
    if ( v18 )
    {
      v16 = *(volatile signed __int32 **)(v8 + 72);
      if ( v16 != (volatile signed __int32 *)-1LL )
        RtlReleaseActivationContext(v16);
    }
    if ( v19 )
      sub_180047138(*(volatile signed __int32 **)(v8 + 32), (__int64)&v26);
    if ( v20 )
      LdrUnloadDll(*(_QWORD *)(v8 + 80));
    if ( v21 )
    {
      v17 = *(_QWORD *)(v8 + 40);
      if ( v17 )
        ZwClose(v17);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v23);
    v6 = v22;
  }
  sub_1800588B4(v38);
  return (unsigned int)v6;
}
