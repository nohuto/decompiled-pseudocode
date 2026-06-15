/*
 * XREFs of ?Initialize@CAPOWrapperSrv@@UEAAJIPEAE@Z @ 0x140015410
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x140015B90 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOWrapperSrv::Initialize(CAPOWrapperSrv *this, __int64 a2, unsigned __int8 *a3)
{
  CSystemEffectWrapper *v3; // rcx
  __int64 (__fastcall *v4)(CSystemEffectWrapper *__hidden, unsigned int, unsigned __int8 *); // rax

  v3 = (CSystemEffectWrapper *)*((_QWORD *)this + 10);
  if ( !v3 )
    return 2147500033LL;
  v4 = *(__int64 (__fastcall **)(CSystemEffectWrapper *__hidden, unsigned int, unsigned __int8 *))(*(_QWORD *)v3 + 48LL);
  if ( v4 == CSystemEffectWrapper::Initialize )
    return CSystemEffectWrapper::Initialize(v3, a2, a3);
  else
    return v4(v3, a2, a3);
}
