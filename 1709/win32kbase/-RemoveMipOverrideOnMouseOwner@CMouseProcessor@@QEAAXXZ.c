/*
 * XREFs of ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01319AC
 * Callers:
 *     CancelCapturedMipOverride @ 0x1C012DB70 (CancelCapturedMipOverride.c)
 * Callees:
 *     IsMouseInPointerActive @ 0x1C000453C (IsMouseInPointerActive.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0016D34 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00172E4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

void __fastcall CMouseProcessor::RemoveMipOverrideOnMouseOwner(CMouseProcessor *this)
{
  CInputDest *v1; // rbx
  __int64 PtiFromInputDest; // rax
  __int64 Queue; // rax
  __int64 v4; // rdx

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 724, 1, 1) )
  {
    v1 = (CMouseProcessor *)((char *)this + 2696);
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)this + 2696, 2);
    if ( PtiFromInputDest )
    {
      if ( IsMouseInPointerActive(PtiFromInputDest) )
      {
        Queue = CInputDest::GetQueue(v1, 0);
        if ( Queue )
          *(_QWORD *)(Queue + 432) &= v4;
      }
    }
  }
}
