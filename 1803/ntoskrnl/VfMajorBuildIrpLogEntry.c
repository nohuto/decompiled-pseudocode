/*
 * XREFs of VfMajorBuildIrpLogEntry @ 0x140822C40
 * Callers:
 *     VfIrpLogRecordEvent @ 0x14082E390 (VfIrpLogRecordEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfMajorBuildIrpLogEntry(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v9; // rdx
  unsigned int (__fastcall *v10)(__int64, _QWORD, __int64, __int64); // rax

  v4 = 0;
  if ( qword_140843958 )
    v4 = qword_140843958();
  v9 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 184) - 72LL);
  if ( (unsigned int)v9 > 0x1B )
    v9 = (unsigned int)((_DWORD)v9 != 255) + 28;
  v10 = (unsigned int (__fastcall *)(__int64, _QWORD, __int64, __int64))qword_140842ED8[12 * v9];
  if ( v10 )
    return v10(a1, a2, a3, a4);
  return v4;
}
