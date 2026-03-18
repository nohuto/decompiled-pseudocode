/*
 * XREFs of _WOWModuleUnload @ 0x1C01EF9B0
 * Callers:
 *     <none>
 * Callees:
 *     DestroyClass @ 0x1C00392B4 (DestroyClass.c)
 *     ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z @ 0x1C01EF808 (-PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z.c)
 */

__int64 __fastcall WOWModuleUnload(__int64 a1, __int64 a2)
{
  __int16 v2; // r15
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rdi
  __int64 v4; // r14
  struct tagCLS *v5; // rbx
  __int16 v6; // r11
  __int64 *v7; // r10
  int v8; // r8d
  __int64 v9; // rcx
  struct tagCLS *v10; // rdx

  v2 = a1;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2);
  v4 = 2LL;
  v5 = (struct tagPROCESSINFO *)((char *)CurrentProcessWin32Process + 312);
  do
  {
    while ( 1 )
    {
      v10 = *(struct tagCLS **)v5;
      if ( !*(_QWORD *)v5 )
        break;
      if ( *((_WORD *)v10 + 57) == v2 )
      {
        if ( *((_DWORD *)v10 + 22) )
        {
          PseudoDestroyClassWindows(
            *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL),
            v10);
          *(_WORD *)(*(_QWORD *)v5 + 34LL) |= 4u;
          goto LABEL_19;
        }
        DestroyClass(CurrentProcessWin32Process, (_QWORD **)v5);
      }
      else
      {
        v6 = *((_WORD *)v10 + 17);
        if ( (v6 & 8) != 0 && v2 == *(_WORD *)((char *)v10 + *((int *)v10 + 26) + 174) )
        {
          v7 = &gpfnwp;
          v8 = 0;
          v9 = 852LL;
          while ( !*v7 || *((_WORD *)v10 + 4) != *(_WORD *)(v9 + gpsi) || (v6 & 1) != 0 )
          {
            ++v8;
            v9 += 2LL;
            ++v7;
            if ( v9 >= 902 )
              goto LABEL_16;
          }
          *((_QWORD *)v10 + 12) = *v7;
LABEL_16:
          if ( v8 == 25 && (*((_BYTE *)v10 + 34) & 1) == 0 )
            *(_QWORD *)(*(_QWORD *)v5 + 96LL) = *(_QWORD *)(gpsi + 608LL);
        }
LABEL_19:
        v5 = *(struct tagCLS **)v5;
      }
    }
    v5 = (struct tagPROCESSINFO *)((char *)CurrentProcessWin32Process + 320);
    --v4;
  }
  while ( v4 );
  return 1LL;
}
