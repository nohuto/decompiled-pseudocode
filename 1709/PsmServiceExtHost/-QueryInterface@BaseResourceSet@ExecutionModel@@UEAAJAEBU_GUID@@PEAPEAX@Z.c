/*
 * XREFs of ?QueryInterface@BaseResourceSet@ExecutionModel@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003D860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::QueryInterface(
        ExecutionModel::BaseResourceSet *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v3 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
    *a3 = this;
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
}
