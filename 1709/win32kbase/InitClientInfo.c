/*
 * XREFs of InitClientInfo @ 0x1C007D3D8
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C00052F0 (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1C007D230 (InitSystemThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  PVOID CurrentProcess; // rcx
  __int64 v7; // r8
  BOOL v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 456);
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(a1 + 608);
  v3 = *(_QWORD *)(a1 + 456);
  *(_DWORD *)(v3 + 28) = *(_DWORD *)(a1 + 464);
  *(_QWORD *)(*(_QWORD *)(a1 + 456) + 208LL) = 0LL;
  v4 = *(_QWORD *)(a1 + 416);
  if ( v4 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 456) + 152LL) = *(_WORD *)(v4 + 72);
    v3 = *(_QWORD *)(a1 + 456);
    *(_QWORD *)(v3 + 144) = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 40LL);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 456) + 152LL) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 456) + 144LL) = 0LL;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v3, v2);
  v8 = 0;
  if ( CurrentProcess )
    v8 = CurrentProcess == g_pepDwm;
  v9 = v8;
  v10 = *(_QWORD *)(a1 + 400);
  if ( *(int *)(v10 + 12) < 0 )
    v9 |= 2u;
  if ( (*(_DWORD *)(v10 + 776) & 0x800) != 0 )
    v9 |= 4u;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(CurrentProcess, v5, v7) + 12) & 0x20000000) != 0 )
    v9 |= 0x40u;
  *(_QWORD *)(*(_QWORD *)(a1 + 456) + 224LL) |= v9;
  *(_DWORD *)(*(_QWORD *)(a1 + 456) + 232LL) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(*(_QWORD *)(a1 + 456) + 236LL) = 0;
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 456) + 232LL;
  return 1LL;
}
