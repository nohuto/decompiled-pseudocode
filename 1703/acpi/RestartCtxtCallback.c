/*
 * XREFs of RestartCtxtCallback @ 0x1C0011EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RestartCtxtCallback(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r10
  struct _KTHREAD *CurrentThread; // r11
  __int64 v4; // rbx
  unsigned __int32 v5; // ecx
  unsigned int v6; // ecx
  __int64 v7; // rdx

  v1 = a1 - 328;
  if ( a1 == 328 )
    v2 = 0LL;
  else
    v2 = *(_QWORD *)(v1 + 408);
  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C00776D0 )
  {
    v5 = _InterlockedExchangeAdd((_DWORD *)&qword_1C00776C8 + 1, 1u);
    if ( (_DWORD)qword_1C00776C8 == 204 )
      v6 = v5 % 0xCC;
    else
      v6 = v5 % (unsigned int)qword_1C00776C8;
    v7 = 72LL * v6;
    *(_QWORD *)((char *)qword_1C00776D0 + v7 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C00776D0 + v7) = 1381188418;
    *(_QWORD *)((char *)qword_1C00776D0 + v7 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C00776D0 + v7 + 24) = v2;
    *(_QWORD *)((char *)qword_1C00776D0 + v7 + 32) = v1;
    *(_QWORD *)((char *)qword_1C00776D0 + v7 + 40) = v4;
    *(_QWORD *)((char *)qword_1C00776D0 + v7 + 48) = v1;
    *(_QWORD *)((char *)qword_1C00776D0 + v7 + 56) = 0LL;
    *(_QWORD *)((char *)qword_1C00776D0 + v7 + 64) = 0LL;
  }
  return RestartContext((PSLIST_ENTRY)v1);
}
