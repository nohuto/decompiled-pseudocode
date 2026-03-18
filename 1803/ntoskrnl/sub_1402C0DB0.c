/*
 * XREFs of sub_1402C0DB0 @ 0x1402C0DB0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PsQueryThreadTerminationPort @ 0x14048938C (PsQueryThreadTerminationPort.c)
 *     KeRundownApcQueues @ 0x1404B9854 (KeRundownApcQueues.c)
 */

void __fastcall __noreturn sub_1402C0DB0(__int64 a1)
{
  __int64 *ThreadTerminationPort; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r14
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rsi
  char v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  _BYTE *v14; // rdx
  __int64 v15; // r10
  __int64 v16; // rdi
  unsigned __int64 v17; // r10
  _QWORD *v18; // rbx
  char *v19; // rcx
  char v20; // al
  __int64 v21; // r13
  unsigned int i; // r11d
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rdi
  bool v28; // zf
  __int64 v29; // rdi
  __int64 v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v32[4]; // [rsp+40h] [rbp-38h] BYREF
  __int16 Object; // [rsp+50h] [rbp-28h] BYREF
  char v34; // [rsp+52h] [rbp-26h]
  int v35; // [rsp+54h] [rbp-24h]
  _QWORD v36[4]; // [rsp+58h] [rbp-20h] BYREF
  unsigned __int8 CurrentIrql; // [rsp+C8h] [rbp+50h]
  LARGE_INTEGER Interval; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v39; // [rsp+D8h] [rbp+60h]

  ThreadTerminationPort = (__int64 *)PsQueryThreadTerminationPort();
  Interval.QuadPart = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
  if ( *(_QWORD *)(a1 + 8) == 1LL )
    KeRundownApcQueues(KeGetCurrentThread());
  if ( (unsigned int)ExGenRandom(1) % 0xA < 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  p_Object = *(struct _KEVENT **)a1;
  v5 = 0LL;
  KeWaitForSingleObject(*(PVOID *)a1, Executive, 0, 0, 0LL);
  if ( (unsigned int)ExGenRandom(1) % 0xA >= 5 )
  {
    KeResetEvent(p_Object);
  }
  else
  {
    Object = 0;
    v36[1] = v36;
    p_Object = (struct _KEVENT *)&Object;
    v34 = 6;
    v36[0] = v36;
    v35 = 0;
  }
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = *(_QWORD *)(v6 + 32);
  v8 = ExGenRandom(1);
  v9 = v8 ^ 0x6A15A217BC2A27DBLL;
  *ThreadTerminationPort = 0LL;
  v10 = v8 ^ 0xDB;
  v11 = v7 ^ v9;
  v12 = v6 ^ v9;
  v30 = v10 & 1;
  v13 = v11;
  while ( 1 )
  {
    if ( (v13 ^ v9) >> 47 == -1 || (v13 ^ v9) >> 47 == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))((v12 ^ v9) + 0x18))(
        v12 ^ v9,
        v13 ^ v9,
        *(_QWORD *)((v12 ^ v9) + 0x28),
        *(_QWORD *)((v12 ^ v9) + 0x30));
      v13 = v9 ^ *(_QWORD *)((v12 ^ v9) + 0x20);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v32[0] = 34539786;
    v32[1] = 218497804;
    v32[2] = 235143175;
    v14 = v32;
    v32[3] = 134284555;
    v15 = v13 ^ v9 ^ *(_QWORD *)((v12 ^ v9) + 0x40);
    v16 = 16LL;
    v17 = v15 | 0xFFFF800000000000uLL;
    v18 = (_QWORD *)v17;
    v19 = (char *)v32;
    v39 = __ROR8__(v17, v17 & 0x3F);
    do
    {
      v20 = *v19++;
      *v14++ = v20 ^ 0xA;
      --v16;
    }
    while ( v16 );
    v21 = v39;
    for ( i = 0; i < 0x19; ++i )
    {
      v23 = 16LL;
      v24 = v5 + (KiWaitAlways ^ _byteswap_uint64(v21 ^ __ROL8__(KiWaitNever ^ *v18, KiWaitNever)));
      v25 = __ROL8__(__ROR8__(i * (200 - i), ~(unsigned __int8)*v18 & 0x3F) ^ v21, *(_BYTE *)v18 & 0x3F);
      *v18 = v24;
      v21 = v17 + v25;
      do
      {
        v24 = __ROR8__(*((unsigned __int8 *)v32 + (*(_BYTE *)v18 & 0xF)) | v24 & 0xFFFFFFFFFFFFFFF0uLL, 4);
        *v18 = v24;
        --v23;
      }
      while ( v23 );
      ++v18;
      v5 += v17;
    }
    v39 = v21;
    v39 = *(_QWORD *)v17 ^ 0x85131481131482ELL;
    v26 = v39;
    *(_BYTE *)(v17 + 3) = 17;
    *(_BYTE *)(v17 + 2) = 49;
    *(_BYTE *)(v17 + 1) = 72;
    *(_BYTE *)v17 = 46;
    ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v17)(v17, v26, 0LL, 0LL);
    __writecr8(CurrentIrql);
    v27 = *ThreadTerminationPort;
    v5 = 0LL;
    v28 = *ThreadTerminationPort == 0;
    if ( *ThreadTerminationPort > 0 )
      break;
    while ( v28 )
    {
      if ( v30 )
        KeDelayExecutionThread(0, 0, &Interval);
      else
        KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
LABEL_22:
      v27 = *ThreadTerminationPort;
      v28 = *ThreadTerminationPort == 0;
    }
    v12 = v9 ^ v27;
    v13 = v9 ^ *(_QWORD *)(v27 + 32);
    *ThreadTerminationPort = 0LL;
    if ( v30 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
  v29 = -v27;
  *ThreadTerminationPort = 0LL;
  v31 = v29;
  (*(void (__fastcall **)(_QWORD))(v29 + 16))(*(_QWORD *)(v29 + 24));
  memset((void *)v29, 0, 0x20uLL);
  memset(&v31, 0, sizeof(v31));
  goto LABEL_22;
}
