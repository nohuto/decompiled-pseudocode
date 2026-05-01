/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_edd19650adc2bed30a6707bf286b378d__&___ptr64_::CTaskWrapper__lambda_edd19650adc2bed30a6707bf286b378d__&___ptr64___lambda_edd19650adc2bed30a6707bf286b378d__&___ptr64_ @ 0x18013E698
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_edd19650adc2bed30a6707bf286b378d__&___ptr64_ @ 0x18013E940 (Windows--Internal--ComTaskPool--QueueTask__lambda_edd19650adc2bed30a6707bf286b378d__-___ptr64_.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_edd19650adc2bed30a6707bf286b378d______ptr64_::CTaskWrapper__lambda_edd19650adc2bed30a6707bf286b378d______ptr64___lambda_edd19650adc2bed30a6707bf286b378d______ptr64_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  *a1 = off_1803277C0;
  v4 = *a2;
  a1[2] = *a2;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 200);
    while ( v5 >= 0 )
    {
      if ( (_DWORD)v5 != 0x7FFFFFFF )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v5 + 1, v5);
        if ( v6 != v5 )
          continue;
      }
      return a1;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v5 + 16),
      (volatile int *)v4);
  }
  return a1;
}
