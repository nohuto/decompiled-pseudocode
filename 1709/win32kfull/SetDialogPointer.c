/*
 * XREFs of SetDialogPointer @ 0x1C00D6020
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 */

__int64 __fastcall SetDialogPointer(__int64 a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int16 v7; // ax
  __int64 v8; // rax
  int v9; // ecx

  if ( *(int *)(a1 + 248) < 30 )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 58) & 4) != 0 )
    return 1LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = *(_QWORD *)(a1 + 16);
  if ( CurrentProcessWin32Process != *(_QWORD *)(v6 + 400) )
    return 1LL;
  if ( *(_DWORD *)(a1 + 252) && !*(_WORD *)(a1 + 82) )
  {
    Win32FreePool(*(_QWORD *)(a1 + 392), v5, v6);
    *(_QWORD *)(a1 + 392) = 0LL;
    *(_DWORD *)(a1 + 252) = 0;
  }
  v7 = *(_WORD *)(a1 + 82) & 0x3FFF;
  if ( !v7 )
    goto LABEL_8;
  if ( v7 == 676 )
  {
    if ( !*(_DWORD *)(a1 + 252) )
    {
LABEL_8:
      v8 = *(_QWORD *)(a1 + 384);
      goto LABEL_13;
    }
    v8 = *(_QWORD *)(a1 + 392);
  }
  else
  {
    v8 = 0LL;
  }
LABEL_13:
  if ( v8 )
  {
    *(_QWORD *)(v8 + 8) = a2;
    if ( a2 )
    {
      if ( !*(_WORD *)(a1 + 82) )
        *(_WORD *)(a1 + 82) = 676;
      v9 = 1;
    }
    else
    {
      *(_WORD *)(a1 + 82) |= 0x4000u;
      v9 = 0;
    }
    SetOrClrWF(v9, (_DWORD *)a1, 0x201u, 1);
  }
  return 1LL;
}
