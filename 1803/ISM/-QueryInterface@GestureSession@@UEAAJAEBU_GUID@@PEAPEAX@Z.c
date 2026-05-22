/*
 * XREFs of ?QueryInterface@GestureSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DB300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::QueryInterface(GestureSession *this, const struct _GUID *a2, GestureSession **a3)
{
  GestureSession *v3; // rbx

  v3 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_00000000_0000_0000_c000_000000000046
    || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_771487fa_af98_46fe_9c2a_09b9988c067a.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_771487fa_af98_46fe_9c2a_09b9988c067a.Data4 )
  {
    v3 = this;
    if ( this )
      (*(void (__fastcall **)(GestureSession *))(*(_QWORD *)this + 8LL))(this);
  }
  *a3 = v3;
  return v3 == 0LL ? 0x80004002 : 0;
}
