/*
 * XREFs of NVMeCompletionQueueInit @ 0x1C0002A9C
 * Callers:
 *     AdminQueueInitialize @ 0x1C0002B58 (AdminQueueInitialize.c)
 *     IoQueuesInitialize @ 0x1C0003010 (IoQueuesInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeCompletionQueueInit(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v14; // [rsp+40h] [rbp+18h] BYREF

  *(_QWORD *)a2 = a4;
  v14 = 0;
  if ( a5 )
    *(_QWORD *)(a2 + 8) = a5;
  else
    *(_QWORD *)(a2 + 8) = StorPortGetPhysicalAddress(a1, 0LL, a4, &v14);
  v9 = *(_DWORD *)(a1 + 144) * (2 * (unsigned int)a3 + 1);
  v10 = *(_QWORD *)(a1 + 120) + 4096LL;
  *(_WORD *)(a2 + 96) = a3;
  *(_DWORD *)(a2 + 98) = 0;
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_DWORD *)(a2 + 112) = 0;
  v11 = v10 + v9;
  v12 = a6;
  *(_QWORD *)(a2 + 16) = v11;
  *(_QWORD *)(a2 + 120) = v12;
  return StorPortNotification(4097LL, a1, a2 + 24, NVMeCompletionDpcRoutine);
}
