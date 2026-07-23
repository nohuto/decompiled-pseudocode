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

NTSTATUS __cdecl RtlQueueWorkItem(WORKERCALLBACKFUNC Function, PVOID Context, ULONG Flags)
{
  char v3; // r14
  NTSTATUS v6; // edi
  HANDLE *Heap; // rax
  HANDLE *v8; // rbx
  NTSTATUS v9; // eax
  PVOID *v10; // r12
  volatile signed __int32 **v11; // rsi
  int v12; // eax
  PVOID v13; // rdx
  __int64 v14; // rcx
  _ACTIVATION_CONTEXT *v16; // rcx
  HANDLE v17; // rcx
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
  PVOID DllHandle[2]; // [rsp+B0h] [rbp-48h]
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
  v6 = sub_180012CB0(&v38);
  v22 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
    v8 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v6 = sub_180012D28(Heap + 5);
      v22 = v6;
      if ( v6 >= 0 )
      {
        v21 = 1;
        BaseAddress[12] = NtCurrentTeb()->SubProcessTag;
        v8 = BaseAddress;
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
          v11 = (volatile signed __int32 **)(BaseAddress + 4);
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
          *BaseAddress = &off_180110190;
          *((_DWORD *)BaseAddress + 2) = 0;
          v6 = sub_1800123F4(*v11, (__int64)BaseAddress, (__int64)&v26);
          v22 = v6;
          if ( v6 >= 0 )
          {
            v19 = 1;
            if ( (unsigned __int64)*v10 < *((_QWORD *)&xmmword_18016B4C0 + 1)
              || (unsigned __int64)*v10 >= *((_QWORD *)&xmmword_18016B4C0 + 1)
                                         + (unsigned __int64)(unsigned int)qword_18016B4D0 )
            {
              sub_180034A40(*v10);
            }
            else
            {
              *(_OWORD *)DllHandle = xmmword_18016B4C0;
              v36 = qword_18016B4D0;
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
                v8 = BaseAddress;
              }
              else
              {
                v14 = 2147353478LL;
              }
              if ( *(_BYTE *)v14 )
              {
                v37 = NtCurrentTeb();
                v8 = BaseAddress;
                sub_1800037A4(
                  (__int64)*v11,
                  (__int64)BaseAddress,
                  (__int64)*v10,
                  (__int64)BaseAddress[8],
                  (__int64)v37->SubProcessTag);
              }
              sub_180017034(v8, *v11, 1LL, &v26);
              if ( !_InterlockedDecrement((volatile signed __int32 *)BaseAddress + 22) )
                sub_180011B80((__int64)BaseAddress, (__int64)*v11);
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
      v16 = (_ACTIVATION_CONTEXT *)v8[9];
      if ( v16 != (_ACTIVATION_CONTEXT *)-1LL )
        RtlReleaseActivationContext(v16);
    }
    if ( v19 )
      sub_180011C88((volatile signed __int32 *)v8[4], (__int64)&v26);
    if ( v20 )
      LdrUnloadDll(v8[10]);
    if ( v21 )
    {
      v17 = v8[5];
      if ( v17 )
        ZwClose(v17);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v6 = v22;
  }
  sub_180012FFC(v38);
  return v6;
}
