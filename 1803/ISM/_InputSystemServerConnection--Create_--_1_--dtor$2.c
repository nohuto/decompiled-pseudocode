/*
 * XREFs of _InputSystemServerConnection::Create_::_1_::dtor$2 @ 0x1800E421B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x18001928C (--1-$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall InputSystemServerConnection::Create_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 48) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<AnimationDataProviderConnection>::~ComPtr<AnimationDataProviderConnection>(*(_QWORD **)(a2 + 144));
  }
  return result;
}
