/*
 * XREFs of DpiCheckSpbResourceLeakage @ 0x1C004188C
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C01F5450 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiDeleteSpbResourceRecord @ 0x1C02090AC (DpiDeleteSpbResourceRecord.c)
 */

void __fastcall DpiCheckSpbResourceLeakage(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = a1 + 2568;
  if ( *(_QWORD *)v1 != v1 )
  {
    v2 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v2 + 24) = *(_QWORD *)v1;
    *(_QWORD *)(v2 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v2);
  }
  while ( *(_QWORD *)v1 != v1 )
  {
    *(_DWORD *)(*(_QWORD *)v1 + 48LL) = 0;
    DpiDeleteSpbResourceRecord();
  }
}
