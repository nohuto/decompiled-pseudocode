/*
 * XREFs of IsShellProcess @ 0x1C0051BF4
 * Callers:
 *     DestroyProcessInfo @ 0x1C00509D8 (DestroyProcessInfo.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C0132364 (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 304);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 168LL) == a1;
  return v2;
}
