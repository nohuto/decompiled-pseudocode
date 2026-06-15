/*
 * XREFs of PdcPortOpen @ 0x18005A7FC
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x18005AC90 (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x18005AA7C (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     PdcpAlpcReleaseResources @ 0x18010C51C (PdcpAlpcReleaseResources.c)
 */

__int64 __fastcall PdcPortOpen(
        __int64 a1,
        __int64 a2,
        void *a3,
        PVOID *a4,
        int a5,
        int a6,
        __int64 a7,
        RTL_SRWLOCK **a8)
{
  RTL_SRWLOCK *v10; // rsi
  RTL_SRWLOCK *Heap; // rax
  RTL_SRWLOCK *v12; // rdi
  PVOID v13; // rax
  RTL_SRWLOCK *v14; // r14
  int v15; // eax
  int Ptr; // ebx
  PTP_POOL Threadpool; // rax
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v21[5]; // [rsp+88h] [rbp-80h] BYREF
  int v22; // [rsp+B0h] [rbp-58h]
  int v23; // [rsp+B8h] [rbp-50h]
  int v24; // [rsp+BCh] [rbp-4Ch]
  RTL_SRWLOCK *v25; // [rsp+C0h] [rbp-48h]
  char v26[564]; // [rsp+174h] [rbp+6Ch] BYREF
  _DWORD v27[4]; // [rsp+3A8h] [rbp+2A0h] BYREF
  __int64 v28; // [rsp+3B8h] [rbp+2B0h]
  __int64 v29; // [rsp+3C8h] [rbp+2C0h]

  v10 = 0LL;
  *a8 = 0LL;
  Heap = (RTL_SRWLOCK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xA0uLL);
  v12 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0xA0uLL);
    v13 = *a4;
    v12[18].Ptr = *a4;
    if ( v13 )
    {
      LODWORD(v12->Ptr) = 1348691024;
      v12[17].Ptr = a3;
      LODWORD(v12[19].Ptr) = 1950565456;
      HIDWORD(v12[15].Ptr) = 1;
      v12[2].Ptr = 0LL;
      v12[3].Ptr = 0LL;
      InitializeSRWLock(v12 + 2);
      RtlInitUnicodeString(&DestinationString, L"\\PdcPort");
      memset_0(v27, 0, 0x48uLL);
      v29 = 0x20000LL;
      v27[0] = 0x20000;
      v28 = 792LL;
      memset_0(v21, 0, 0x318uLL);
      v22 = 0;
      v23 = 40;
      v24 = 7;
      v25 = v12 + 19;
      if ( a7 )
        RtlStringCchCopyW(v26, 64LL);
      v19 = 792LL;
      v14 = v12 + 1;
      v21[0] = 51905264LL;
      v21[1] = 0LL;
      v21[2] = 0LL;
      v15 = ZwAlpcConnectPort(&v12[1], &DestinationString, 0LL, v27, 655360, 0LL, v21, &v19, 0LL, 0LL, 0LL);
      Ptr = v15;
      if ( v15 == -1073741759 )
      {
        Ptr = (int)v14->Ptr;
        v14->Ptr = 0LL;
      }
      else if ( v15 >= 0 )
      {
        if ( !v12[18].Ptr )
          goto LABEL_11;
        Threadpool = CreateThreadpool(0LL);
        v12[5].Ptr = Threadpool;
        if ( Threadpool )
        {
          v10 = v12 + 6;
          v12[7].Ptr = 0LL;
          LODWORD(v12[6].Ptr) = 3;
          v12[8].Ptr = 0LL;
          v12[9].Ptr = 0LL;
          v12[10].Ptr = 0LL;
          v12[11].Ptr = 0LL;
          v12[12].Ptr = 0LL;
          LODWORD(v12[13].Ptr) = 0;
          HIDWORD(v12[13].Ptr) = 1;
          LODWORD(v12[14].Ptr) = 72;
          v12[7].Ptr = v12[5].Ptr;
        }
        Ptr = TpAllocAlpcCompletion(&v12[4], v14->Ptr, PdcpAlpcCallback, v12, v10);
        if ( Ptr >= 0 )
        {
LABEL_11:
          *a8 = v12;
          Ptr = 0;
        }
      }
    }
    else
    {
      Ptr = -1073741583;
    }
  }
  else
  {
    Ptr = -1073741801;
  }
  if ( Ptr < 0 && v12 )
    PdcpAlpcReleaseResources(v12);
  return (unsigned int)Ptr;
}
