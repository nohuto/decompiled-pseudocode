/*
 * XREFs of ?NonDelegatingQueryInterface@TelephonyController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EE900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TelephonyController::NonDelegatingQueryInterface(
        TelephonyController *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rcx

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  *a3 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
    goto LABEL_9;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e659ba9b_1b36_4ce9_b6af_cefe7db93b05.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e659ba9b_1b36_4ce9_b6af_cefe7db93b05.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e659ba9b_1b36_4ce9_b6af_cefe7db93b05.Data4;
  if ( !v5 )
  {
LABEL_9:
    v6 = (char *)this - 8;
    *a3 = v6;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))(v6);
    return v3;
  }
  return CUnknown::NonDelegatingQueryInterface(this, a2, a3);
}
