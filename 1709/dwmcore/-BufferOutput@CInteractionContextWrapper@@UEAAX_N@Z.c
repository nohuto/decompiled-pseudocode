/*
 * XREFs of ?BufferOutput@CInteractionContextWrapper@@UEAAX_N@Z @ 0x18019DEC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInteractionContextWrapper::BufferOutput(CInteractionContextWrapper *this, char a2)
{
  if ( *((_BYTE *)this + 528) != a2 )
  {
    *((_BYTE *)this + 528) = a2;
    if ( a2 )
      (*(void (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 128LL))(this);
  }
}
