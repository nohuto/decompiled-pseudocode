/*
 * XREFs of ?QueryInterface@RmpRpExtResourceManagerThunk@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpRpExtResourceManagerThunk::QueryInterface(
        RmpRpExtResourceManagerThunk *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7a92be6a_c7a5_4d43_931d_3c6c36d092d6.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7a92be6a_c7a5_4d43_931d_3c6c36d092d6.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7a92be6a_c7a5_4d43_931d_3c6c36d092d6.Data4;
  if ( !v3 )
    goto LABEL_7;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v4 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_7:
    *a3 = this;
    (*(void (__fastcall **)(RmpRpExtResourceManagerThunk *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
}
