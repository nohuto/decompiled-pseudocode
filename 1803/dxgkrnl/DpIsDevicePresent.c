/*
 * XREFs of DpIsDevicePresent @ 0x1C01ED8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpIsDevicePresent(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 (__fastcall *v6)(_QWORD); // rax
  __int64 v7; // rax

  v3 = 0;
  if ( !a1
    || !a2
    || !a3
    || (a1 = *(_QWORD *)(a1 + 64)) == 0
    || *(_DWORD *)(a1 + 16) != 1953656900
    || (unsigned int)(*(_DWORD *)(a1 + 20) - 2) > 1 )
  {
    v4 = -1073741811LL;
    goto LABEL_14;
  }
  if ( KeGetCurrentIrql() )
  {
    v4 = -1073741811LL;
    v3 = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL) >= 0x2003u )
    {
      v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1);
      v5[3] = 275LL;
      v5[4] = 21LL;
      v5[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v5);
    }
    goto LABEL_15;
  }
  *a3 = 0;
  v6 = *(__int64 (__fastcall **)(_QWORD))(a1 + 664);
  if ( !v6 )
  {
    v4 = -1073741823LL;
LABEL_14:
    v3 = v4;
LABEL_15:
    v7 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v7 + 24) = v4;
    WdLogEvent5_WdError(v7);
    return v3;
  }
  *a3 = v6(*(_QWORD *)(a1 + 632));
  return v3;
}
