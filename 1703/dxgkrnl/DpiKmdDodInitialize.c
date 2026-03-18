/*
 * XREFs of DpiKmdDodInitialize @ 0x1C0012390
 * Callers:
 *     <none>
 * Callees:
 *     DpiInitializeEx @ 0x1C011FF5C (DpiInitializeEx.c)
 */

__int64 __fastcall DpiKmdDodInitialize(void *a1, const UNICODE_STRING *a2, __int64 a3)
{
  __int64 v4; // rax

  if ( *(_DWORD *)a3 >= 0x3001u
    && *(_QWORD *)(a3 + 8)
    && *(_QWORD *)(a3 + 16)
    && *(_QWORD *)(a3 + 24)
    && *(_QWORD *)(a3 + 32)
    && *(_QWORD *)(a3 + 40)
    && *(_QWORD *)(a3 + 64)
    && *(_QWORD *)(a3 + 72)
    && *(_QWORD *)(a3 + 80)
    && *(_QWORD *)(a3 + 88)
    && *(_QWORD *)(a3 + 104)
    && *(_QWORD *)(a3 + 112) )
  {
    return DpiInitializeEx(a1, a2, 0LL, 1);
  }
  v4 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v4 + 24) = -1073741735LL;
  WdLogEvent5_WdError(v4);
  return 3221225561LL;
}
