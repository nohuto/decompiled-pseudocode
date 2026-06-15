/*
 * XREFs of ?QueryInterface@CVolumeSoftware@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A0A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CVolumeSoftware::QueryInterface(CVolumeSoftware *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax

  v3 = 0;
  if ( !a3 )
  {
    v3 = -2147467261;
    goto LABEL_8;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v6 )
  {
    *a3 = 0LL;
    v3 = -2147467262;
LABEL_8:
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::QueryInterface", 1441, v3);
    return v3;
  }
  (*(void (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)this + 8LL))(this);
  *a3 = this;
  return v3;
}
