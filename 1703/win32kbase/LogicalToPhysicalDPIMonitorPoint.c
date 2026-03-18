/*
 * XREFs of LogicalToPhysicalDPIMonitorPoint @ 0x1C00DE510
 * Callers:
 *     <none>
 * Callees:
 *     OriginFromMonFlags @ 0x1C0049C70 (OriginFromMonFlags.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C0049CB8 (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     ScaleDPIPt @ 0x1C0049CF8 (ScaleDPIPt.c)
 *     ?LogicalDpiFromMonFlags@@YAGK@Z @ 0x1C0049ED4 (-LogicalDpiFromMonFlags@@YAGK@Z.c)
 */

__int64 __fastcall LogicalToPhysicalDPIMonitorPoint(_DWORD *a1, _DWORD *a2, unsigned int a3, __int64 *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned __int16 v10; // ax
  __int64 v11; // rdx
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  if ( ValidateMonFlags(&v13) && (int)Is_MonitorFromPointSupported(v7) >= 0 )
  {
    if ( a4 )
      v8 = *a4;
    else
      v8 = 0LL;
    if ( !v8 )
      v8 = _MonitorFromPoint(*(_QWORD *)a2, v13);
    if ( a4 )
      *a4 = v8;
    v9 = OriginFromMonFlags(v13, v8);
    OriginFromMonFlags(0x20u, v8);
    v10 = LogicalDpiFromMonFlags(v13);
    ScaleDPIPt(a1, a2, *(_WORD *)(*(_QWORD *)(v8 + 40) + 128LL), v10, v11, v9);
    return 1LL;
  }
  else
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    return 0LL;
  }
}
