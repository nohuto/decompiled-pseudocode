/*
 * XREFs of ?UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z @ 0x1C024EA80
 * Callers:
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C024DE70 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     GreWindowResizeComplete @ 0x1C0250914 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0250AF0 (GreWindowResizeStarted.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateWindowResizeTelemetry(struct DWMSPRITE *a1, int a2)
{
  __int64 v2; // rdx

  if ( a2 )
  {
    *((_QWORD *)a1 + 20) = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    v2 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)a1 + 20)) / 10000LL;
    if ( v2 > *((unsigned int *)a1 + 42) )
      *((_DWORD *)a1 + 42) = v2;
    *((_DWORD *)a1 + 43) += v2;
    ++*((_DWORD *)a1 + 44);
  }
}
