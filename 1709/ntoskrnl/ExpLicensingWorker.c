/*
 * XREFs of ExpLicensingWorker @ 0x140158B10
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PsQueryThreadTerminationPort @ 0x14043C354 (PsQueryThreadTerminationPort.c)
 *     KeRundownApcQueues @ 0x1404D6A74 (KeRundownApcQueues.c)
 */

void __fastcall __noreturn ExpLicensingWorker(__int64 a1)
{
  __int64 ThreadTerminationPort; // r14
  struct _KEVENT *p_Object; // r15
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  _BYTE *v10; // rdx
  __int64 v11; // r10
  __int64 v12; // rdi
  unsigned __int64 v13; // r10
  _QWORD *v14; // r9
  char *v15; // rcx
  char v16; // al
  unsigned int v17; // r11d
  __int64 v18; // rbx
  unsigned __int64 v19; // r13
  char v20; // di
  char v21; // cl
  __int64 v22; // rdx
  char v23; // cl
  __int64 v24; // rdi
  __int64 v25; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v27; // rdi
  __int64 v28; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v29[4]; // [rsp+38h] [rbp-30h] BYREF
  __int16 Object; // [rsp+48h] [rbp-20h] BYREF
  char v31; // [rsp+4Ah] [rbp-1Eh]
  int v32; // [rsp+4Ch] [rbp-1Ch]
  _QWORD v33[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int8 CurrentIrql; // [rsp+B8h] [rbp+50h]
  LARGE_INTEGER Interval; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+60h]

  ThreadTerminationPort = PsQueryThreadTerminationPort();
  Interval.QuadPart = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
  if ( *(_QWORD *)(a1 + 8) == 1LL )
    KeRundownApcQueues(KeGetCurrentThread());
  if ( (unsigned int)ExGenRandom(1) % 0xA < 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  p_Object = *(struct _KEVENT **)a1;
  KeWaitForSingleObject(*(PVOID *)a1, Executive, 0, 0, 0LL);
  if ( (unsigned int)ExGenRandom(1) % 0xA >= 5 )
  {
    KeResetEvent(p_Object);
  }
  else
  {
    Object = 0;
    v33[1] = v33;
    p_Object = (struct _KEVENT *)&Object;
    v31 = 6;
    v33[0] = v33;
    v32 = 0;
  }
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = *(_QWORD *)(v4 + 32);
  v6 = (unsigned int)ExGenRandom(1) ^ 0x6A15A217BC2A27DBLL;
  *(_QWORD *)ThreadTerminationPort = 0LL;
  v7 = v5 ^ v6;
  v8 = v4 ^ v6;
  v9 = v7;
  while ( 1 )
  {
    if ( (v9 ^ v6) >> 47 == -1 || (v9 ^ v6) >> 47 == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))((v8 ^ v6) + 0x18))(
        v8 ^ v6,
        v9 ^ v6,
        *(_QWORD *)((v8 ^ v6) + 0x28),
        *(_QWORD *)((v8 ^ v6) + 0x30));
      v9 = v6 ^ *(_QWORD *)((v8 ^ v6) + 0x20);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v29[0] = 34539786;
    v29[1] = 218497804;
    v29[2] = 235143175;
    v10 = v29;
    v29[3] = 134284555;
    v11 = v9 ^ v6 ^ *(_QWORD *)((v8 ^ v6) + 0x40);
    v12 = 16LL;
    v13 = v11 | 0xFFFF800000000000uLL;
    v14 = (_QWORD *)v13;
    v15 = (char *)v29;
    v36 = __ROR8__(v13, v13 & 0x3F);
    do
    {
      v16 = *v15++;
      *v10++ = v16 ^ 0xA;
      --v12;
    }
    while ( v12 );
    v17 = 0;
    v18 = 0LL;
    v19 = v36;
    do
    {
      v20 = *v14 & 0x3F;
      v21 = ~(unsigned __int8)*v14 & 0x3F;
      *v14 = v18 + (KiWaitAlways ^ _byteswap_uint64(v19 ^ __ROL8__(KiWaitNever ^ *v14, KiWaitNever)));
      v22 = __ROR8__(v17 * (200 - v17), v21);
      v23 = v20;
      v24 = 16LL;
      v19 = v13 + __ROL8__(v22 ^ v19, v23);
      do
      {
        *v14 = __ROR8__(*((unsigned __int8 *)v29 + (*(_BYTE *)v14 & 0xF)) | *v14 & 0xFFFFFFFFFFFFFFF0uLL, 4);
        --v24;
      }
      while ( v24 );
      ++v14;
      ++v17;
      v18 += v13;
    }
    while ( v17 < 0x19 );
    v36 = v19;
    v36 = *(_QWORD *)v13 ^ 0x85131481131482ELL;
    v25 = v36;
    *(_BYTE *)(v13 + 3) = 17;
    *(_BYTE *)(v13 + 2) = 49;
    *(_BYTE *)(v13 + 1) = 72;
    *(_BYTE *)v13 = 46;
    ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v13)(v13, v25, 0LL, 0LL);
    __writecr8(CurrentIrql);
    if ( *(__int64 *)ThreadTerminationPort > 0 )
    {
      v27 = -*(_QWORD *)ThreadTerminationPort;
      *(_QWORD *)ThreadTerminationPort = 0LL;
      v28 = v27;
      (*(void (__fastcall **)(_QWORD))(v27 + 16))(*(_QWORD *)(v27 + 24));
      memset((void *)v27, 0, 0x20uLL);
      memset(&v28, 0, sizeof(v28));
    }
    while ( !*(_QWORD *)ThreadTerminationPort )
    {
      if ( (v6 & 1) != 0 )
        KeDelayExecutionThread(0, 0, &Interval);
      else
        KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
    }
    v8 = v6 ^ *(_QWORD *)ThreadTerminationPort;
    v9 = v6 ^ *(_QWORD *)(*(_QWORD *)ThreadTerminationPort + 32LL);
    *(_QWORD *)ThreadTerminationPort = 0LL;
    if ( (v6 & 1) != 0 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
