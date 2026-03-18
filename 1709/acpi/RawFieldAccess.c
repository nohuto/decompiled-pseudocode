/*
 * XREFs of RawFieldAccess @ 0x1C005FD04
 * Callers:
 *     ReadField @ 0x1C001FD00 (ReadField.c)
 *     WriteField @ 0x1C00209B8 (WriteField.c)
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     HeapFree @ 0x1C000D8A0 (HeapFree.c)
 *     FindRSAccess @ 0x1C0020B7C (FindRSAccess.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall RawFieldAccess(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rbp
  int v8; // ebx
  _QWORD *v9; // r15
  __int64 RSAccess; // rax
  __int64 v11; // r8
  __int64 v12; // rbp
  char v13; // al
  _DWORD *v14; // r13
  char v15; // r12
  unsigned int v16; // ebx
  void *v17; // rax
  __int64 v18; // rax

  v4 = 0LL;
  v7 = **(_QWORD **)(a3 + 32);
  if ( *(_WORD *)(v7 + 66) == 131 )
  {
    v9 = *(_QWORD **)(**(_QWORD **)(v7 + 96) + 96LL);
    RSAccess = FindRSAccess(*((unsigned __int8 *)v9 + 12));
    v12 = RSAccess;
    if ( RSAccess && *(_QWORD *)(RSAccess + 32) )
    {
      _m_prefetchw(&gDebugger);
      v13 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
      v14 = *(_DWORD **)(v11 + 32);
      v15 = v13;
      v16 = 40;
      if ( v14[7] )
        v16 = v14[9] + 40;
      v17 = (void *)HeapAlloc(*(_QWORD *)(a1 + 320), 1430537800, v16);
      v4 = (__int64)v17;
      if ( v17 )
      {
        memmove(v17, v14, v16);
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v12 + 32))(
               a2,
               *v9,
               v4,
               a4,
               *(_QWORD *)(v12 + 40),
               RestartCtxtCallback,
               a1 + 328);
        if ( v8 == -1073741789 )
        {
          v18 = HeapAlloc(gpheapGlobal, 1179992648, *(_DWORD *)(a4 + 16));
          *(_QWORD *)(a4 + 32) = v18;
          if ( v18 )
          {
            *(_DWORD *)(a4 + 24) = *(_DWORD *)(a4 + 16);
            *(_WORD *)(a4 + 2) = 3;
            v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v12 + 32))(
                   a2,
                   *v9,
                   v4,
                   a4,
                   *(_QWORD *)(v12 + 40),
                   RestartCtxtCallback,
                   a1 + 328);
          }
          else
          {
            v8 = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError(a1, -1073741670);
            PrintDebugMessage(156, (const void *)*(unsigned int *)(a4 + 16), 0LL, 0LL, 0LL);
          }
        }
      }
      else
      {
        v8 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(a1, -1073741670);
        PrintDebugMessage(155, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (v15 & 0x10) != 0 )
        _InterlockedOr(&gDebugger, 0x10u);
      if ( v8 == 259 )
      {
        v8 = 32772;
      }
      else if ( v8 )
      {
        LogError(-1072431080);
        AcpiDiagTraceAmlError(a1, -1072431080);
        PrintDebugMessage(159, (const void *)*((unsigned __int8 *)v9 + 12), (const void *)v8, 0LL, 0LL);
        v8 = -1072431080;
      }
    }
    else
    {
      v8 = -1072431088;
      LogError(-1072431088);
      AcpiDiagTraceAmlError(a1, -1072431088);
      PrintDebugMessage(158, (const void *)*((unsigned __int8 *)v9 + 12), 0LL, 0LL, 0LL);
    }
    if ( v4 )
      HeapFree(v4);
  }
  else
  {
    v8 = -1072431101;
    LogError(-1072431101);
    AcpiDiagTraceAmlError(a1, -1072431101);
    PrintDebugMessage(157, (const void *)*(unsigned __int16 *)(v7 + 66), 0LL, 0LL, 0LL);
  }
  return (unsigned int)v8;
}
