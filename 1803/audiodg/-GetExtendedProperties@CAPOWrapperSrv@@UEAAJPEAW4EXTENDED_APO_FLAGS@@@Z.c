/*
 * XREFs of ?GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x140013080
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013E40 (-QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetExtendedProperties(CAPOWrapperSrv *this, enum EXTENDED_APO_FLAGS *a2)
{
  CSystemEffectWrapper *v2; // r9
  void *v4; // rcx
  __int64 (__fastcall *v5)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **); // rax
  unsigned int v6; // ebx
  unsigned int v8; // eax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CSystemEffectWrapper *)*((_QWORD *)this + 8);
  v4 = 0LL;
  v9 = 0LL;
  if ( !v2 )
    goto LABEL_5;
  v5 = **(__int64 (__fastcall ***)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **))v2;
  if ( v5 == CSystemEffectWrapper::QueryInterface )
    CSystemEffectWrapper::QueryInterface(v2, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014, &v9);
  else
    v5(v2, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014, &v9);
  v4 = v9;
  if ( v9 )
  {
    v8 = (*(__int64 (__fastcall **)(void *, enum EXTENDED_APO_FLAGS *))(*(_QWORD *)v9 + 24LL))(v9, a2);
    v4 = v9;
    v6 = v8;
  }
  else
  {
LABEL_5:
    v6 = -2147467262;
  }
  if ( v4 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
