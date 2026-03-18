/*
 * XREFs of NVMeCompletionQueueInit @ 0x1C0002B10
 * Callers:
 *     AdminQueueInitialize @ 0x1C0002BB8 (AdminQueueInitialize.c)
 *     IoQueuesInitialize @ 0x1C0003054 (IoQueuesInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeCompletionQueueInit(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v13; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  *(_QWORD *)a2 = a4;
  v13 = 0;
  *(_QWORD *)(a2 + 8) = StorPortGetPhysicalAddress(a1, 0LL, a4, &v13);
  v8 = (unsigned int)(*(_DWORD *)(a1 + 136) * (2 * v5 + 1));
  v9 = *(_QWORD *)(a1 + 112) + 4096LL;
  *(_WORD *)(a2 + 96) = v5;
  *(_DWORD *)(a2 + 98) = 0;
  *(_QWORD *)(a2 + 104) = 0LL;
  v10 = v9 + v8;
  *(_DWORD *)(a2 + 112) = 0;
  v11 = a5;
  *(_QWORD *)(a2 + 16) = v10;
  *(_QWORD *)(a2 + 120) = v11;
  return StorPortNotification(4097LL, a1, a2 + 24, NVMeCompletionDpcRoutine);
}
