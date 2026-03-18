/*
 * XREFs of ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C00F1140
 * Callers:
 *     GreHidePointer @ 0x1C00F0EC0 (GreHidePointer.c)
 * Callees:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C00BCBF4 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 */

void __fastcall GreHidePointerInternal(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rsi
  int v5; // ebp
  _DWORD *v6; // rcx

  GreAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", a1[6], 4LL);
  if ( (a1[4] & 0x20000) != 0 )
  {
    v3 = a1[227];
    v4 = *(_QWORD **)v3;
    v5 = *(_DWORD *)(v3 + 16);
    do
    {
      v6 = (_DWORD *)v4[6];
      if ( (v6[536] & 0x2000) == 0 )
        vMovePointer(v6, 0xFFFFFFFF, 0xFFFFFFFFLL, dword_1C0334400);
      v4 = (_QWORD *)*v4;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    vMovePointer(a1, 0xFFFFFFFF, 0xFFFFFFFFLL, dword_1C0334400);
  }
  v2 = a1[6];
  *((_DWORD *)a1 + 14) = -1;
  *((_DWORD *)a1 + 15) = -1;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", v2);
  GreReleaseSemaphoreInternal(a1[6]);
}
