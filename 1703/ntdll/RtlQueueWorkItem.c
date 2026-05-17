/*
 * XREFs of RtlQueueWorkItem @ 0x180012480
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800037A4 @ 0x1800037A4 (sub_1800037A4.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180011C88 @ 0x180011C88 (sub_180011C88.c)
 *     LdrUnloadDll @ 0x180011CF0 (LdrUnloadDll.c)
 *     sub_1800123F4 @ 0x1800123F4 (sub_1800123F4.c)
 *     sub_180012CB0 @ 0x180012CB0 (sub_180012CB0.c)
 *     sub_180012D28 @ 0x180012D28 (sub_180012D28.c)
 *     sub_180012FFC @ 0x180012FFC (sub_180012FFC.c)
 *     sub_180017034 @ 0x180017034 (sub_180017034.c)
 *     RtlQueryInformationActivationContext @ 0x180017DF0 (RtlQueryInformationActivationContext.c)
 *     RtlReleaseActivationContext @ 0x1800188A0 (RtlReleaseActivationContext.c)
 *     LdrAddRefDll @ 0x18001AD60 (LdrAddRefDll.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall RtlQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // edi
  __int64 Heap; // rax
  __int64 v8; // rbx
  int InformationActivationContext; // eax
  __int64 *v10; // r12
  volatile signed __int32 **v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  char v24; // [rsp+40h] [rbp-B8h]
  char v25; // [rsp+41h] [rbp-B7h]
  char v26; // [rsp+42h] [rbp-B6h]
  char v27; // [rsp+43h] [rbp-B5h]
  int v28; // [rsp+44h] [rbp-B4h]
  __int64 v29; // [rsp+48h] [rbp-B0h]
  __int64 v30; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A0h]
  int v32; // [rsp+60h] [rbp-98h] BYREF
  __int64 v33; // [rsp+68h] [rbp-90h]
  __int64 v34; // [rsp+70h] [rbp-88h]
  __int64 v35; // [rsp+78h] [rbp-80h]
  __int128 v36; // [rsp+80h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-68h]
  int v38; // [rsp+98h] [rbp-60h]
  int v39; // [rsp+9Ch] [rbp-5Ch]
  int v40; // [rsp+A0h] [rbp-58h]
  __int128 v41; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-38h]
  struct _TEB *v43; // [rsp+C8h] [rbp-30h]
  __int64 v44; // [rsp+118h] [rbp+20h] BYREF

  v30 = 0LL;
  v31 = 0LL;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v25 = 0;
  v44 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  v6 = sub_180012CB0(&v44, a3 & 0x100);
  v28 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 120LL);
    v8 = Heap;
    v29 = Heap;
    if ( Heap )
    {
      v6 = sub_180012D28(Heap + 40, a3, v44);
      v28 = v6;
      if ( v6 >= 0 )
      {
        v27 = 1;
        *(_QWORD *)(v29 + 96) = NtCurrentTeb()->SubProcessTag;
        v8 = v29;
        *(struct _GUID *)(v29 + 104) = NtCurrentTeb()->ActivityId;
        InformationActivationContext = RtlQueryInformationActivationContext(1, 0, 0, 1, (__int64)&v30, 16LL, 0LL);
        v6 = InformationActivationContext;
        v28 = InformationActivationContext;
        if ( InformationActivationContext >= 0 )
        {
LABEL_6:
          if ( (v31 & 1) != 0 )
          {
            RtlReleaseActivationContext(v30);
            v30 = -1LL;
          }
          *(_QWORD *)(v29 + 72) = v30;
          v24 = 1;
          *(_DWORD *)(v29 + 88) = 2;
          v10 = (__int64 *)(v29 + 56);
          *(_QWORD *)(v29 + 56) = a1;
          *(_QWORD *)(v29 + 64) = a2;
          v11 = (volatile signed __int32 **)(v29 + 32);
          *(_QWORD *)(v29 + 32) = 0LL;
          v32 = 3;
          v33 = 0LL;
          v34 = 0LL;
          v35 = 0LL;
          v36 = 0LL;
          v37 = 0LL;
          v38 = 0;
          v39 = 1;
          v40 = 72;
          v12 = 0;
          if ( (a3 & 0xC0) != 0 )
            v12 = 2;
          v38 = v12;
          *(_QWORD *)v29 = off_180110190;
          *(_DWORD *)(v29 + 8) = 0;
          v6 = sub_1800123F4(*v11, v29, (__int64)&v32);
          v28 = v6;
          if ( v6 >= 0 )
          {
            v25 = 1;
            if ( (unsigned __int64)*v10 < *((_QWORD *)&xmmword_18016B4C0 + 1)
              || *v10 >= *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned __int64)(unsigned int)qword_18016B4D0 )
            {
              sub_180034A40(*v10, &v41);
            }
            else
            {
              v41 = xmmword_18016B4C0;
              v42 = qword_18016B4D0;
            }
            v13 = *((_QWORD *)&v41 + 1);
            *(_QWORD *)(v29 + 80) = *((_QWORD *)&v41 + 1);
            if ( v13 )
            {
              LdrAddRefDll(0LL);
              v26 = 1;
              if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v14, v16, v17) )
              {
                v18 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
                v8 = v29;
              }
              else
              {
                v18 = 2147353478LL;
              }
              if ( *(_BYTE *)v18 )
              {
                v43 = NtCurrentTeb();
                v8 = v29;
                sub_1800037A4((__int64)*v11, v29, *v10, *(_QWORD *)(v29 + 64), (__int64)v43->SubProcessTag);
              }
              sub_180017034(v8, *v11, 1LL, &v32);
              if ( !_InterlockedDecrement((volatile signed __int32 *)(v29 + 88)) )
                sub_180011B80(v29, (__int64)*v11, v19, v20);
              v8 = 0LL;
              v6 = 0;
              v28 = 0;
            }
          }
          goto LABEL_28;
        }
        if ( InformationActivationContext == -1072365557 )
        {
          *(_QWORD *)(v29 + 72) = -1LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v6 = -1073741801;
      v28 = -1073741801;
    }
  }
LABEL_28:
  if ( v8 )
  {
    if ( v24 )
    {
      v22 = *(_QWORD *)(v8 + 72);
      if ( v22 != -1 )
        RtlReleaseActivationContext(v22);
    }
    if ( v25 )
      sub_180011C88(*(volatile signed __int32 **)(v8 + 32), (__int64)&v32);
    if ( v26 )
      LdrUnloadDll(*(_QWORD *)(v8 + 80));
    if ( v27 )
    {
      v23 = *(_QWORD *)(v8 + 40);
      if ( v23 )
        ZwClose(v23);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
    v6 = v28;
  }
  sub_180012FFC(v44);
  return (unsigned int)v6;
}
