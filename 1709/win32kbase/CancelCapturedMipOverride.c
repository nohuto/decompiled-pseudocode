/*
 * XREFs of CancelCapturedMipOverride @ 0x1C012DB70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01319AC (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 */

void CancelCapturedMipOverride()
{
  CMouseProcessor *v0; // rax

  v0 = (CMouseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  if ( v0 )
    CMouseProcessor::RemoveMipOverrideOnMouseOwner(v0);
}
