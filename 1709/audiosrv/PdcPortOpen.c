/*
 * XREFs of PdcPortOpen @ 0x1800DE938
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x1800DE140 (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     RtlStringCchCopyW @ 0x1800DE7BC (RtlStringCchCopyW.c)
 *     PdcpAlpcReleaseResources @ 0x1800DEDAC (PdcpAlpcReleaseResources.c)
 */

__int64 __fastcall PdcPortOpen(
        __int64 a1,
        __int64 a2,
        void *a3,
        PVOID *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        RTL_SRWLOCK **a8)
{
  RTL_SRWLOCK *v10; // rsi
  RTL_SRWLOCK *Heap; // rax
  RTL_SRWLOCK *v12; // rdi
  int Ptr; // ebx
  PVOID v14; // rax
  RTL_SRWLOCK *v15; // r14
  int v16; // eax
  PTP_POOL Threadpool; // rax
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v21[96]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v22[10]; // [rsp+388h] [rbp+280h] BYREF

  v10 = 0LL;
  *a8 = 0LL;
  Heap = (RTL_SRWLOCK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xA0uLL);
  v12 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0xA0uLL);
    v14 = *a4;
    v12[18].Ptr = *a4;
    if ( v14 )
    {
      LODWORD(v12->Ptr) = 1348691024;
      v12[17].Ptr = a3;
      LODWORD(v12[19].Ptr) = 1950565456;
      HIDWORD(v12[15].Ptr) = 1;
      v12[2].Ptr = 0LL;
      v12[3].Ptr = 0LL;
      InitializeSRWLock(v12 + 2);
      RtlInitUnicodeString(&DestinationString, L"\\PdcPort");
      memset(v22, 0, 0x48uLL);
      v22[4] = 0x20000LL;
      LODWORD(v22[0]) = 0x20000;
      v22[2] = 768LL;
      memset(v21, 0, sizeof(v21));
      LODWORD(v21[5]) = 0;
      v21[6] = 0x700000028LL;
      v21[7] = v12 + 19;
      if ( a7 )
        RtlStringCchCopyW((_WORD *)&v21[29] + 2, 64LL, a7);
      v19 = 768LL;
      v15 = v12 + 1;
      v21[0] = 50332376LL;
      v21[1] = 0LL;
      v21[2] = 0LL;
      v16 = ZwAlpcConnectPort(&v12[1], &DestinationString, 0LL, v22, 655360, 0LL, v21, &v19, 0LL, 0LL, 0LL);
      Ptr = v16;
      if ( v16 == -1073741759 )
      {
        Ptr = (int)v15->Ptr;
        v15->Ptr = 0LL;
      }
      else if ( v16 >= 0 )
      {
        if ( !v12[18].Ptr )
          goto LABEL_14;
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
        Ptr = TpAllocAlpcCompletion(&v12[4], v15->Ptr, PdcpAlpcCallback, v12, v10);
        if ( Ptr >= 0 )
        {
LABEL_14:
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
