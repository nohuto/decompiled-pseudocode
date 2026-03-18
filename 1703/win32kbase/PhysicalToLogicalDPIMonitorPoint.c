/*
 * XREFs of PhysicalToLogicalDPIMonitorPoint @ 0x1C0049A60
 * Callers:
 *     PhysicalToLogicalDPIPoint @ 0x1C00498B0 (PhysicalToLogicalDPIPoint.c)
 * Callees:
 *     OriginFromMonFlags @ 0x1C0049C70 (OriginFromMonFlags.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C0049CB8 (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     ScaleDPIPt @ 0x1C0049CF8 (ScaleDPIPt.c)
 *     ?LogicalDpiFromMonFlags@@YAGK@Z @ 0x1C0049ED4 (-LogicalDpiFromMonFlags@@YAGK@Z.c)
 */

__int64 __fastcall PhysicalToLogicalDPIMonitorPoint(_QWORD *a1, _QWORD *a2, unsigned int a3, __int64 *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned __int16 v10; // ax
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned int v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  if ( (unsigned int)ValidateMonFlags(&v14) && (int)Is_MonitorFromPointSupported(v7) >= 0 )
  {
    if ( a4 )
      v8 = *a4;
    else
      v8 = 0LL;
    if ( !v8 )
      v8 = _MonitorFromPoint(*a2, v14 & 3 | 0x20);
    if ( a4 )
      *a4 = v8;
    v9 = OriginFromMonFlags(32LL, v8);
    OriginFromMonFlags(v14, v8);
    v10 = LogicalDpiFromMonFlags(v14);
    ScaleDPIPt((_DWORD)a1, (_DWORD)a2, v10, *(unsigned __int16 *)(v11 + 128), v12, v9);
    return 1LL;
  }
  else
  {
    *a1 = *a2;
    return 0LL;
  }
}
