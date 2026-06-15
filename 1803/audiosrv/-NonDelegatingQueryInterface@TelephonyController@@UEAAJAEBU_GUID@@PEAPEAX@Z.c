/*
 * XREFs of ?NonDelegatingQueryInterface@TelephonyController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011BBA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TelephonyController::NonDelegatingQueryInterface(
        TelephonyController *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  char *v7; // rcx

  v3 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v4 )
    {
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e659ba9b_1b36_4ce9_b6af_cefe7db93b05.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e659ba9b_1b36_4ce9_b6af_cefe7db93b05.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e659ba9b_1b36_4ce9_b6af_cefe7db93b05.Data4;
      if ( v5 )
        return CUnknown::NonDelegatingQueryInterface(this, a2, a3);
    }
    v7 = (char *)this - 8;
    *a3 = v7;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
