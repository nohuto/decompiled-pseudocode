/*
 * XREFs of SetDialogPointer @ 0x1C00F64D0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 */

__int64 __fastcall SetDialogPointer(__int64 a1, __int64 a2)
{
  __int16 v4; // ax
  __int64 v5; // rax
  int v6; // ecx

  if ( *(int *)(a1 + 248) < 30
    || (*(_BYTE *)(a1 + 58) & 4) != 0
    || PsGetCurrentProcessWin32Process(a1, a2) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) )
  {
    return 1LL;
  }
  if ( *(_DWORD *)(a1 + 252) && !*(_WORD *)(a1 + 82) )
  {
    Win32FreePool(*(_QWORD *)(a1 + 392));
    *(_QWORD *)(a1 + 392) = 0LL;
    *(_DWORD *)(a1 + 252) = 0;
  }
  v4 = *(_WORD *)(a1 + 82) & 0x3FFF;
  if ( !v4 )
    goto LABEL_8;
  if ( v4 == 676 )
  {
    if ( !*(_DWORD *)(a1 + 252) )
    {
LABEL_8:
      v5 = *(_QWORD *)(a1 + 384);
      goto LABEL_13;
    }
    v5 = *(_QWORD *)(a1 + 392);
  }
  else
  {
    v5 = 0LL;
  }
LABEL_13:
  if ( v5 )
  {
    *(_QWORD *)(v5 + 8) = a2;
    if ( a2 )
    {
      if ( !*(_WORD *)(a1 + 82) )
        *(_WORD *)(a1 + 82) = 676;
      v6 = 1;
    }
    else
    {
      *(_WORD *)(a1 + 82) |= 0x4000u;
      v6 = 0;
    }
    SetOrClrWF(v6, (_DWORD *)a1, 0x201u, 1);
  }
  return 1LL;
}
