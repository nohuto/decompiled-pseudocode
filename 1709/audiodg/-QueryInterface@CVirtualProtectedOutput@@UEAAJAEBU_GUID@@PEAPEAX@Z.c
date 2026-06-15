/*
 * XREFs of ?QueryInterface@CVirtualProtectedOutput@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140041050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualProtectedOutput::QueryInterface(
        CVirtualProtectedOutput *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  void (__fastcall *v6)(CVirtualProtectedOutput *, const struct _GUID *, void **, CVirtualProtectedOutput *); // rax
  __int64 v7; // rax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = -2147467262;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_562462dd_4f9a_4110_9d6a_c3ca0407ff76.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_562462dd_4f9a_4110_9d6a_c3ca0407ff76.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_562462dd_4f9a_4110_9d6a_c3ca0407ff76.Data4;
  if ( v5 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v7 )
      return v4;
    *a3 = this;
    v6 = *(void (__fastcall **)(CVirtualProtectedOutput *, const struct _GUID *, void **, CVirtualProtectedOutput *))(*(_QWORD *)this + 8LL);
  }
  else
  {
    *a3 = this;
    v6 = *(void (__fastcall **)(CVirtualProtectedOutput *, const struct _GUID *, void **, CVirtualProtectedOutput *))(*(_QWORD *)this + 8LL);
  }
  v4 = 0;
  v6(this, a2, a3, this);
  return v4;
}
