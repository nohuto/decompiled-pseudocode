/*
 * XREFs of ?_SerializeMonitorPresentEvent@MONITOR_MGR@@QEAAJPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION@@@Z @ 0x1C022D1E4
 * Callers:
 *     MonitorSerializeMonitorPresentEvents @ 0x1C022EF74 (MonitorSerializeMonitorPresentEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_SerializeMonitorPresentEvent(
        MONITOR_MGR *this,
        unsigned __int64 *a2,
        struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // r8d
  unsigned __int64 v10; // rax
  _OWORD *v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rax

  v3 = 0;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_DWORD *)this + 70);
  v9 = 20;
  if ( v8 > 0x14 || (v9 = *((_DWORD *)this + 70), v8) )
    v10 = 24LL * (v9 - 1) + 32;
  else
    v10 = 32LL;
  if ( v10 <= *a2 && a3 )
  {
    *(_BYTE *)a3 = v9;
    if ( v9 )
    {
      v11 = (_OWORD *)((char *)a3 + 8);
      do
      {
        v12 = v3 + *((_DWORD *)this + 70) - v9;
        ++v3;
        v13 = v12 % 0x14 + 12LL;
        *v11 = *(_OWORD *)((char *)this + 24 * v13);
        v11 = (_OWORD *)((char *)v11 + 24);
        *((_QWORD *)v11 - 1) = *((_QWORD *)this + 3 * v13 + 2);
      }
      while ( v3 < v9 );
    }
    return 0LL;
  }
  else
  {
    *a2 = v10;
    return 3221225507LL;
  }
}
