/*
 * XREFs of ?QueryInterface@UniqueExtendedExecutionSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800774E0
 * Callers:
 *     ?QueryInterface@UniqueExtendedExecutionSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007BA90 (-QueryInterface@UniqueExtendedExecutionSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@UniqueExtendedExecutionSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007BAA0 (-QueryInterface@UniqueExtendedExecutionSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UniqueExtendedExecutionSession::QueryInterface(
        UniqueExtendedExecutionSession *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
