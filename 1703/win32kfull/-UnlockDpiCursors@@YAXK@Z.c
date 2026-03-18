/*
 * XREFs of ?UnlockDpiCursors@@YAXK@Z @ 0x1C0195CFC
 * Callers:
 *     UpdateCursorSizes @ 0x1C010FF70 (UpdateCursorSizes.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlockDpiCursors(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 i; // rax
  __int64 ProcessWin32Process; // rax
  _DWORD *v10; // rcx
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          if ( v3 == 1 )
            v4 = 128;
          else
            v4 = 0;
        }
        else
        {
          v4 = 96;
        }
      }
      else
      {
        v4 = 64;
      }
    }
    else
    {
      v4 = 48;
    }
  }
  else
  {
    v4 = 32;
  }
  v5 = 0LL;
  v6 = 17LL;
  do
  {
    v7 = *(_QWORD *)(v5 + *(_QWORD *)gasyscur + 8);
    v11 = 0LL;
    if ( v7 )
    {
      for ( i = *(_QWORD *)(v7 + 40); i && *(_DWORD *)(i + 76) != v4; i = *(_QWORD *)(i + 40) )
        v7 = i;
      v11 = *(_QWORD *)(v7 + 40);
      if ( v11 )
      {
        ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
        FixupGlobalCursor(v11, ProcessWin32Process);
        v10 = *(_DWORD **)(v7 + 40);
        if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v10 + gSharedInfo[1] + 25LL) & 1) == 0 )
          HMMarkObjectDestroy(v10);
        HMAssignmentUnlock(&v11);
      }
    }
    v5 += 16LL;
    --v6;
  }
  while ( v6 );
}
