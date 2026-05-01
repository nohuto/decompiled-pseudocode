/*
 * XREFs of ?QueryObject@ApplicationViewWrapper@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1802371A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewWrapper::QueryObject(
        ApplicationViewWrapper *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v4; // rax

  *a4 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f.Data4;
  if ( v4 )
    return 2147942487LL;
  else
    return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 8))(
             *((_QWORD *)this + 8),
             a3,
             a4);
}
