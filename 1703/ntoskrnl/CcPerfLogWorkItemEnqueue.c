/*
 * XREFs of CcPerfLogWorkItemEnqueue @ 0x140023B2C
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x140023674 (CcPostWorkQueueAsyncRead.c)
 *     CcWorkerThread @ 0x1400AB860 (CcWorkerThread.c)
 *     CcPostWorkQueue @ 0x1400AE214 (CcPostWorkQueue.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140131770 (CcWaitForCurrentLazyWriterActivity.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14011AFC4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14011B004 (CcReferenceSharedCacheMapFileObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogWorkItemEnqueue(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // r10
  __int64 v6; // rsi
  char v7; // di
  char v8; // cl
  unsigned __int8 CurrentIrql; // al
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h]
  __int64 *v18; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+54h] [rbp-Ch]

  v4 = *(_QWORD *)(a2 + 128);
  v15 = 0LL;
  v16 = 0LL;
  v6 = a2;
  v17 = 0LL;
  if ( a1 == v4 + 296 )
  {
    v7 = 1;
  }
  else if ( a1 == v4 + 312 )
  {
    v7 = 2;
  }
  else if ( a1 == v4 + 328 )
  {
    v7 = 3;
  }
  else if ( a1 == v4 + 344 )
  {
    v7 = 4;
  }
  else
  {
    a2 = *(_QWORD *)(v4 + 864);
    if ( a1 == a2 || a1 == a2 + 16 || a1 == a2 + 32 )
      v7 = 5;
    else
      v7 = a1 == 0 ? 6 : 0;
  }
  v8 = *(_BYTE *)(v6 + 120);
  switch ( v8 )
  {
    case 2:
      BYTE1(v17) = 2;
      if ( a4 )
      {
        v16 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v6 + 16) + 96LL) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      }
      else
      {
        v13 = *(_QWORD *)(v6 + 16);
        v14 = CcReferenceSharedCacheMapFileObject(v13, a2, 4LL);
        v16 = *(_QWORD *)(v14 + 24);
        CcDereferenceSharedCacheMapFileObject(v13, v14);
      }
      break;
    case 1:
      v11 = *(_QWORD *)(v6 + 16);
      BYTE1(v17) = 1;
      v16 = *(_QWORD *)(v11 + 24);
      break;
    case 3:
      BYTE1(v17) = 3;
      break;
    default:
      v12 = BYTE1(v17);
      if ( v8 == 4 )
        v12 = 4;
      BYTE1(v17) = v12;
      break;
  }
  LOBYTE(v17) = v7;
  v15 = v6;
  BYTE2(v17) = a3;
  CurrentIrql = KeGetCurrentIrql();
  v20 = 0;
  v19 = 24;
  v18 = &v15;
  if ( CurrentIrql < 2u )
    return EtwTraceKernelEvent((unsigned int)&v18, 1, -2147352576, 5632, 4200706);
  else
    return EtwTraceKernelEvent((unsigned int)&v18, 1, -2147352576, 5632, 4194562);
}
