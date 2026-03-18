/*
 * XREFs of PatchThreadWindows @ 0x1C00C46C0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00C47D0 (DisassociateShellFrameAppThreads.c)
 */

__int16 __fastcall PatchThreadWindows(struct tagTHREADINFO *a1)
{
  unsigned __int64 v2; // rbx
  __int16 result; // ax
  unsigned __int64 v4; // rsi
  __int64 *i; // rdi
  __int64 v6; // r14
  __int16 v7; // cx

  DisassociateShellFrameAppThreads(a1);
  v2 = gSharedInfo[1];
  result = gpKernelHandleTable;
  v4 = v2 + 32LL * giheLast;
  for ( i = (__int64 *)gpKernelHandleTable; v2 <= v4; i += 3 )
  {
    if ( *(_BYTE *)(v2 + 24) == 1 && (struct tagTHREADINFO *)i[1] == a1 )
    {
      v6 = *i;
      if ( (*(_BYTE *)(v2 + 25) & 1) == 0 || *(_QWORD *)(v6 + 160) || (*(_BYTE *)(v6 + 58) & 4) == 0 )
      {
        v7 = *(_WORD *)(v6 + 82);
        if ( (unsigned __int16)(v7 - 666) <= 6u )
        {
          *(_QWORD *)(v6 + 160) = *(_QWORD *)(gpsi + 8LL * ((v7 & 0x3FFFu) - 666) + 272);
        }
        else if ( v7 == 694 )
        {
          *(_QWORD *)(v6 + 160) = 5LL;
        }
        else
        {
          *(_QWORD *)(v6 + 160) = 0LL;
        }
        SetOrClrWF(1, (_DWORD *)v6, 0x204u, 1);
        result = SetOrClrWF(0, (_DWORD *)v6, 0x208u, 1);
      }
    }
    v2 += 32LL;
  }
  return result;
}
