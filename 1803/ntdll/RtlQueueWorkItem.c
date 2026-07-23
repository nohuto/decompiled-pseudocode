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

NTSTATUS __cdecl RtlQueueWorkItem(WORKERCALLBACKFUNC Function, PVOID Context, ULONG Flags)
{
  char v3; // r14
  NTSTATUS v6; // edi
  HANDLE *Heap; // rax
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  PVOID *v10; // r12
  __int64 *v11; // rsi
  int v12; // eax
  PVOID v13; // rdx
  __int64 v14; // rcx
  _ACTIVATION_CONTEXT *v16; // rcx
  void *v17; // rcx
  char v18; // [rsp+40h] [rbp-B8h]
  char v19; // [rsp+41h] [rbp-B7h]
  char v20; // [rsp+42h] [rbp-B6h]
  char v21; // [rsp+43h] [rbp-B5h]
  int v22; // [rsp+44h] [rbp-B4h]
  HANDLE *BaseAddress; // [rsp+48h] [rbp-B0h]
  PACTIVATION_CONTEXT ActivationContext; // [rsp+50h] [rbp-A8h] BYREF
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
  PVOID DllHandle[2]; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-38h]
  struct _TEB *v37; // [rsp+C8h] [rbp-30h]
  HANDLE v38; // [rsp+118h] [rbp+20h] BYREF

  v3 = Flags;
  ActivationContext = 0LL;
  v25 = 0LL;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v38 = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  v6 = sub_180058F2C(&v38);
  v22 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
    v8 = (__int64)Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v6 = sub_180058EC0(Heap + 5);
      v22 = v6;
      if ( v6 >= 0 )
      {
        v21 = 1;
        BaseAddress[12] = NtCurrentTeb()->SubProcessTag;
        v8 = (__int64)BaseAddress;
        *(GUID *)(BaseAddress + 13) = NtCurrentTeb()->ActivityId;
        v9 = RtlQueryInformationActivationContext(
               1u,
               0LL,
               0LL,
               ActivationContextBasicInformation,
               &ActivationContext,
               0x10uLL,
               0LL);
        v6 = v9;
        v22 = v9;
        if ( v9 >= 0 )
        {
LABEL_6:
          if ( (v25 & 1) != 0 )
          {
            RtlReleaseActivationContext(ActivationContext);
            ActivationContext = (PACTIVATION_CONTEXT)-1LL;
          }
          BaseAddress[9] = ActivationContext;
          v18 = 1;
          *((_DWORD *)BaseAddress + 22) = 2;
          v10 = BaseAddress + 7;
          BaseAddress[7] = Function;
          BaseAddress[8] = Context;
          v11 = (__int64 *)(BaseAddress + 4);
          BaseAddress[4] = 0LL;
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
          if ( (v3 & 0xC0) != 0 )
            v12 = 2;
          v32 = v12;
          *BaseAddress = &off_1801106B0;
          *((_DWORD *)BaseAddress + 2) = 0;
          v6 = sub_1800591B8(*v11, BaseAddress, &v26);
          v22 = v6;
          if ( v6 >= 0 )
          {
            v19 = 1;
            if ( (unsigned __int64)*v10 < *((_QWORD *)&xmmword_18016F4E0 + 1)
              || (unsigned __int64)*v10 >= *((_QWORD *)&xmmword_18016F4E0 + 1)
                                         + (unsigned __int64)(unsigned int)qword_18016F4F0 )
            {
              sub_18000EF10(*v10, (__int64)DllHandle);
            }
            else
            {
              *(_OWORD *)DllHandle = xmmword_18016F4E0;
              v36 = qword_18016F4F0;
            }
            v13 = DllHandle[1];
            BaseAddress[10] = DllHandle[1];
            if ( v13 )
            {
              LdrAddRefDll(0, v13);
              v20 = 1;
              if ( RtlGetCurrentServiceSessionId() )
              {
                v14 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
                v8 = (__int64)BaseAddress;
              }
              else
              {
                v14 = 2147353478LL;
              }
              if ( *(_BYTE *)v14 )
              {
                v37 = NtCurrentTeb();
                v8 = (__int64)BaseAddress;
                sub_180002428(
                  *v11,
                  (__int64)BaseAddress,
                  (__int64)*v10,
                  (__int64)BaseAddress[8],
                  (__int64)v37->SubProcessTag);
              }
              sub_180026138(v8, (char *)*v11, 1, (__int64)&v26);
              if ( !_InterlockedDecrement((volatile signed __int32 *)BaseAddress + 22) )
                sub_180047030((__int64)BaseAddress, *v11);
              v8 = 0LL;
              BaseAddress = 0LL;
              v6 = 0;
              v22 = 0;
            }
          }
          goto LABEL_28;
        }
        if ( v9 == -1072365557 )
        {
          BaseAddress[9] = (HANDLE)-1LL;
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
      v16 = *(_ACTIVATION_CONTEXT **)(v8 + 72);
      if ( v16 != (_ACTIVATION_CONTEXT *)-1LL )
        RtlReleaseActivationContext(v16);
    }
    if ( v19 )
      sub_180047138(*(volatile signed __int32 **)(v8 + 32), (__int64)&v26);
    if ( v20 )
      LdrUnloadDll(*(PVOID *)(v8 + 80));
    if ( v21 )
    {
      v17 = *(void **)(v8 + 40);
      if ( v17 )
        ZwClose(v17);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v6 = v22;
  }
  sub_1800588B4(v38);
  return v6;
}
