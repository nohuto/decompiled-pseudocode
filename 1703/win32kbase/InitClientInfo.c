/*
 * XREFs of InitClientInfo @ 0x1C007CED0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1C007CCE0 (InitSystemThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  PVOID CurrentProcess; // rcx
  __int64 v10; // r8
  BOOL v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax

  v5 = *(_QWORD *)(a1 + 432);
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(a1 + 552);
  v6 = *(_QWORD *)(a1 + 432);
  *(_DWORD *)(v6 + 28) = *(_DWORD *)(a1 + 440);
  *(_QWORD *)(*(_QWORD *)(a1 + 432) + 208LL) = 0LL;
  v7 = *(_QWORD *)(a1 + 392);
  if ( v7 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 432) + 152LL) = *(_WORD *)(v7 + 72);
    v6 = *(_QWORD *)(a1 + 432);
    *(_QWORD *)(v6 + 144) = *(_QWORD *)(*(_QWORD *)(a1 + 392) + 40LL);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 432) + 152LL) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 144LL) = 0LL;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5, a3, a4);
  v11 = 0;
  if ( CurrentProcess )
    v11 = CurrentProcess == g_pepDwm;
  v12 = v11;
  v13 = *(_QWORD *)(a1 + 376);
  if ( *(int *)(v13 + 12) < 0 )
    v12 |= 2u;
  if ( (*(_DWORD *)(v13 + 768) & 0x800) != 0 )
    v12 |= 4u;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(CurrentProcess, v8, v10) + 12) & 0x20000000) != 0 )
    v12 |= 0x40u;
  *(_QWORD *)(*(_QWORD *)(a1 + 432) + 224LL) |= v12;
  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 232LL) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 236LL) = 0;
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 432) + 232LL;
  return 1LL;
}
