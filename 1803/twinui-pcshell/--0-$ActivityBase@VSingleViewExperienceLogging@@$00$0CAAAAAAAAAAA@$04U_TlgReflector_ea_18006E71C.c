/*
 * XREFs of ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18006E71C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de3f4501c60332f424e3ead36a7d18c4___::CTaskWrapper__lambda_de3f4501c60332f424e3ead36a7d18c4_____lambda_de3f4501c60332f424e3ead36a7d18c4___ @ 0x180071750 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_de3f4501c60332f424e3ead36a7d18c4___--CTaskW.c)
 * Callees:
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18006E748 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_18006E748.c)
 */

_QWORD *__fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = *(_DWORD *)(a2 + 32) != 0;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    a1,
    a2,
    a3);
  *a1 = &wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  return a1;
}
