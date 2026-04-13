/*
 * XREFs of ?QueryInterface@UniqueExtendedExecutionSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006CFD0
 * Callers:
 *     ?QueryInterface@UniqueExtendedExecutionSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180071490 (-QueryInterface@UniqueExtendedExecutionSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@UniqueExtendedExecutionSession@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180071500 (-QueryInterface@UniqueExtendedExecutionSession@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
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
