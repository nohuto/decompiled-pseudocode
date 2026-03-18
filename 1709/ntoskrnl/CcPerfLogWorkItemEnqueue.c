/*
 * XREFs of CcPerfLogWorkItemEnqueue @ 0x1401E2C38
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x140020B14 (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueue @ 0x140022504 (CcPostWorkQueue.c)
 *     CcWorkerThread @ 0x140022CB0 (CcWorkerThread.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14015A53C (CcWaitForCurrentLazyWriterActivityInternal.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x14002034C (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140020390 (CcReferenceSharedCacheMapFileObject.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall CcPerfLogWorkItemEnqueue(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // r10
  char v7; // di
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  char v13; // al
  unsigned __int8 CurrentIrql; // al
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h]
  __int64 *v18; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+54h] [rbp-Ch]

  v4 = *(_QWORD *)(a2 + 128);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( a1 == v4 + 224 )
  {
    v7 = 1;
  }
  else if ( a1 == v4 + 240 )
  {
    v7 = 2;
  }
  else if ( a1 == v4 + 256 )
  {
    v7 = 3;
  }
  else if ( a1 == v4 + 272 )
  {
    v7 = 4;
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 800);
    if ( a1 == v8 || a1 == v8 + 16 || a1 == v8 + 32 )
      v7 = 5;
    else
      v7 = a1 == 0 ? 6 : 0;
  }
  v9 = *(_BYTE *)(a2 + 120);
  switch ( v9 )
  {
    case 2:
      BYTE1(v17) = 2;
      if ( a4 )
      {
        v16 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(a2 + 16) + 96LL) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      }
      else
      {
        v10 = *(_QWORD *)(a2 + 16);
        v11 = CcReferenceSharedCacheMapFileObject(v10);
        v16 = *(_QWORD *)(v11 + 24);
        CcDereferenceSharedCacheMapFileObject(v10, v11);
      }
      break;
    case 1:
      v12 = *(_QWORD *)(a2 + 16);
      BYTE1(v17) = 1;
      v16 = *(_QWORD *)(v12 + 24);
      break;
    case 3:
      BYTE1(v17) = 3;
      break;
    default:
      v13 = BYTE1(v17);
      if ( v9 == 4 )
        v13 = 4;
      BYTE1(v17) = v13;
      break;
  }
  LOBYTE(v17) = v7;
  v15 = a2;
  BYTE2(v17) = a3;
  CurrentIrql = KeGetCurrentIrql();
  v20 = 0;
  v19 = 24;
  v18 = &v15;
  if ( CurrentIrql >= 2u )
    EtwTraceKernelEvent((__int64)&v18, 1u, 0x80020000, 0x1600u, 0x400102u);
  else
    EtwTraceKernelEvent((__int64)&v18, 1u, 0x80020000, 0x1600u, 0x401902u);
}
