/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C00378A0
 * Callers:
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     DestroyProcessInfo @ 0x1C00509D8 (DestroyProcessInfo.c)
 *     CleanupGDI @ 0x1C00787E8 (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1)
{
  int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 *v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 CurrentProcessWin32Process; // rax

  v2 = 1;
  GreLockVisRgn(*((_QWORD *)gpDispInfo + 4));
  v6 = (__int64 *)((char *)gpDispInfo + 16);
  v7 = *((_QWORD *)gpDispInfo + 2);
  if ( !v7 )
    goto LABEL_12;
  do
  {
    v8 = *(_DWORD *)(v7 + 64);
    if ( v8 < 0 )
    {
      if ( *(_QWORD *)(v7 + 80) != PsGetCurrentProcessWin32Process(v4, v3, v5) )
        goto LABEL_4;
      if ( !a1 )
      {
        v2 = 0;
        goto LABEL_4;
      }
    }
    else if ( (v8 & 0x400000) == 0 )
    {
      goto LABEL_4;
    }
    DestroyCacheDC(v6, *(_QWORD *)(v7 + 8));
LABEL_4:
    if ( v7 == *v6 )
      v6 = (__int64 *)v7;
    v7 = *v6;
  }
  while ( *v6 );
  if ( v2 )
  {
LABEL_12:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4, v3, v5);
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
  }
  return GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 4));
}
