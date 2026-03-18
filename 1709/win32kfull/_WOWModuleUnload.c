/*
 * XREFs of _WOWModuleUnload @ 0x1C01F9E40
 * Callers:
 *     <none>
 * Callees:
 *     DestroyClass @ 0x1C00F2194 (DestroyClass.c)
 *     ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z @ 0x1C01F9C98 (-PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z.c)
 */

__int64 __fastcall WOWModuleUnload(__int64 a1)
{
  __int16 v1; // r15
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rdi
  __int64 v3; // rbp
  struct tagCLS *v4; // rbx
  __int16 v5; // si
  __int64 *v6; // r10
  int v7; // r9d
  __int64 v8; // r8
  struct tagCLS *v9; // rdx

  v1 = a1;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  v3 = 2LL;
  v4 = (struct tagPROCESSINFO *)((char *)CurrentProcessWin32Process + 320);
  do
  {
    while ( 1 )
    {
      v9 = *(struct tagCLS **)v4;
      if ( !*(_QWORD *)v4 )
        break;
      if ( *((_WORD *)v9 + 61) == v1 )
      {
        if ( *((_DWORD *)v9 + 24) )
        {
          PseudoDestroyClassWindows(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL), v9);
          *(_WORD *)(*(_QWORD *)v4 + 34LL) |= 4u;
          goto LABEL_18;
        }
        DestroyClass(CurrentProcessWin32Process, (_QWORD **)v4);
      }
      else
      {
        v5 = *((_WORD *)v9 + 17);
        if ( (v5 & 8) != 0 && v1 == *(_WORD *)((char *)v9 + *((int *)v9 + 28) + 182) )
        {
          v6 = &gpfnwp;
          v7 = 0;
          v8 = 852LL;
          while ( !*v6 || *((_WORD *)v9 + 4) != *(_WORD *)(v8 + gpsi) || (v5 & 1) != 0 )
          {
            ++v7;
            v8 += 2LL;
            ++v6;
            if ( v8 >= 902 )
              goto LABEL_15;
          }
          *((_QWORD *)v9 + 13) = *v6;
LABEL_15:
          if ( v7 == 25 && (*((_BYTE *)v9 + 34) & 1) == 0 )
            *(_QWORD *)(*(_QWORD *)v4 + 104LL) = *(_QWORD *)(gpsi + 608LL);
        }
LABEL_18:
        v4 = *(struct tagCLS **)v4;
      }
    }
    v4 = (struct tagPROCESSINFO *)((char *)CurrentProcessWin32Process + 328);
    --v3;
  }
  while ( v3 );
  return 1LL;
}
