/*
 * XREFs of McGenEventRegister @ 0x1800ACF40
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x1800AC7CC (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 *     Pdcv2ActivationClientRegister @ 0x1800DE140 (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventRegister(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  if ( *a4 )
    return 0LL;
  else
    return EtwEventRegister(a1, McGenControlCallbackV2, a3, a4, a5, a6);
}
