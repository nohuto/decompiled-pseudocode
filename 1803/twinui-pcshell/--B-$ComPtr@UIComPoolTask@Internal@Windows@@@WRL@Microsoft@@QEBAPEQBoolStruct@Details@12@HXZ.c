/*
 * XREFs of ??B?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x18003BB20
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18003B0A0 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::operator int Microsoft::WRL::Details::BoolStruct::*(
        _QWORD *a1)
{
  return (unsigned int)(*a1 != 0LL) - 1;
}
