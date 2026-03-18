/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C008B178
 * Callers:
 *     CleanupGDI @ 0x1C006398C (CleanupGDI.c)
 *     DestroyProcessInfo @ 0x1C009CD88 (DestroyProcessInfo.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0057280 (DestroyCacheDC.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1, int a2, int a3)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  int v10; // eax
  __int64 CurrentProcessWin32Process; // rax

  v4 = 1;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32), a2, a3);
  v8 = (__int64 *)(gpDispInfo + 16);
  v9 = *(__int64 **)(gpDispInfo + 16);
  if ( !v9 )
  {
LABEL_8:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7);
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v5, v7);
  }
  do
  {
    v10 = *((_DWORD *)v9 + 16);
    if ( v10 >= 0 )
    {
      if ( (v10 & 0x400000) == 0 )
        goto LABEL_4;
LABEL_12:
      DestroyCacheDC(v8, v9[1], v7);
      goto LABEL_4;
    }
    if ( v9[10] != PsGetCurrentProcessWin32Process(v6, v5, v7) )
      goto LABEL_4;
    if ( a1 )
      goto LABEL_12;
    v4 = 0;
LABEL_4:
    if ( v9 != (__int64 *)*v8 )
      v9 = v8;
    v8 = v9;
    v9 = (__int64 *)*v9;
  }
  while ( v9 );
  if ( v4 )
    goto LABEL_8;
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v5, v7);
}
