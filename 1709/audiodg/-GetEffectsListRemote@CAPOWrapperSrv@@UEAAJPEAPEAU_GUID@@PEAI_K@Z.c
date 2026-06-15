/*
 * XREFs of ?GetEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAI_K@Z @ 0x140013230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

int __fastcall CAPOWrapperSrv::GetEffectsListRemote(
        CAPOWrapperSrv *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  CAPOWrapperSrv *v4; // rcx
  int (*v5)(CAPOWrapperSrv *__hidden, struct _GUID **, unsigned int *, void *); // rax

  v4 = (CAPOWrapperSrv *)((char *)this + 16);
  v5 = *(int (**)(CAPOWrapperSrv *__hidden, struct _GUID **, unsigned int *, void *))(*(_QWORD *)v4 + 24LL);
  if ( v5 == CAPOWrapperSrv::GetEffectsList )
    return CAPOWrapperSrv::GetEffectsList(v4, a2, a3, a4);
  else
    return ((__int64 (__fastcall *)(CAPOWrapperSrv *, struct _GUID **, unsigned int *))v5)(v4, a2, a3);
}
