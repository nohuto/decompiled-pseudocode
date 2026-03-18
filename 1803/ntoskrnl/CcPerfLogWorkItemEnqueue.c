/*
 * XREFs of CcPerfLogWorkItemEnqueue @ 0x14017D810
 * Callers:
 *     CcPostWorkQueue @ 0x1400428A8 (CcPostWorkQueue.c)
 *     CcWorkerThread @ 0x140043080 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x1401394C4 (CcPostWorkQueueAsyncRead.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14014D16C (CcWaitForCurrentLazyWriterActivityInternal.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400DB2B4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400EAAAC (CcReferenceSharedCacheMapFileObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogWorkItemEnqueue(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // r10
  char v7; // bl
  char v8; // cl
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  __int64 v12; // rax
  char v13; // al
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-20h]
  __int64 *v19; // [rsp+48h] [rbp-18h] BYREF
  int v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+54h] [rbp-Ch]

  v4 = *(_QWORD *)(a2 + 128);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
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
    v14 = *(_QWORD *)(v4 + 800);
    if ( a1 == v14 || a1 == v14 + 16 || a1 == v14 + 32 )
      v7 = 5;
    else
      v7 = a1 == 0 ? 6 : 0;
  }
  v8 = *(_BYTE *)(a2 + 120);
  switch ( v8 )
  {
    case 2:
      v9 = *(_QWORD *)(a2 + 16);
      BYTE1(v18) = 2;
      if ( a4 )
      {
        v17 = *(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      }
      else
      {
        v15 = CcReferenceSharedCacheMapFileObject(v9);
        v17 = *(_QWORD *)(v15 + 24);
        CcDereferenceSharedCacheMapFileObject(v9, v15);
      }
      break;
    case 1:
      v12 = *(_QWORD *)(a2 + 16);
      BYTE1(v18) = 1;
      v17 = *(_QWORD *)(v12 + 24);
      break;
    case 3:
      BYTE1(v18) = 3;
      break;
    default:
      v13 = BYTE1(v18);
      if ( v8 == 4 )
        v13 = 4;
      BYTE1(v18) = v13;
      break;
  }
  LOBYTE(v18) = v7;
  v16 = a2;
  BYTE2(v18) = a3;
  CurrentIrql = KeGetCurrentIrql();
  v21 = 0;
  v20 = 24;
  v19 = &v16;
  if ( CurrentIrql < 2u )
    return EtwTraceKernelEvent((int)&v19, 1, 0x80020000, 5632, 4200706);
  else
    return EtwTraceKernelEvent((int)&v19, 1, 0x80020000, 5632, 4194562);
}
