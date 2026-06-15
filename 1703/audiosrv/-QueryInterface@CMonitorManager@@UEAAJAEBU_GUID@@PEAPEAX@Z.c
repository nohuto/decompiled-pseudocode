/*
 * XREFs of ?QueryInterface@CMonitorManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B4280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitorManager::QueryInterface(CMonitorManager *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = 0;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v6 )
      goto LABEL_5;
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data4;
    if ( !v7 )
    {
LABEL_5:
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
      return v3;
    }
    *a3 = 0LL;
    v3 = -2147467262;
  }
  else
  {
    v3 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x58u, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, v3);
  }
  return v3;
}
