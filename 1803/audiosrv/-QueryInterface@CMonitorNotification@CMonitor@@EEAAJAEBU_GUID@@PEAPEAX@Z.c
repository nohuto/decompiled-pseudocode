/*
 * XREFs of ?QueryInterface@CMonitorNotification@CMonitor@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E10C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitor::CMonitorNotification::QueryInterface(
        CMonitor::CMonitorNotification *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v5; // r9
  char v6; // dl
  __int64 v7; // rcx
  unsigned int v8; // ecx

  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    v6 = 1;
    if ( !v5 )
    {
      _InterlockedAdd((volatile signed __int32 *)this + 5, 1u);
      *a3 = this;
    }
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_24918acc_64b3_37c1_8ca9_74a66e9957a8.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_24918acc_64b3_37c1_8ca9_74a66e9957a8.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_24918acc_64b3_37c1_8ca9_74a66e9957a8.Data4;
    if ( v7 )
      v6 = 0;
    else
      _InterlockedAdd((volatile signed __int32 *)this + 5, 1u);
    v8 = v6 == 0 ? 0x80004002 : 0;
    *a3 = (void *)((unsigned __int64)this & -(__int64)(v6 != 0));
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v8;
}
