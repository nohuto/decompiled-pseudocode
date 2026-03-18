/*
 * XREFs of ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0135D48
 * Callers:
 *     CancelCapturedMipOverride @ 0x1C012DC30 (CancelCapturedMipOverride.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0036194 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0036FA4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     IsMouseInPointerActive @ 0x1C011F604 (IsMouseInPointerActive.c)
 */

void __fastcall CMouseProcessor::RemoveMipOverrideOnMouseOwner(CMouseProcessor *this)
{
  CInputDest *v1; // rbx
  __int64 PtiFromInputDest; // rax
  __int64 Queue; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 684, 1, 1) )
  {
    v1 = (CMouseProcessor *)((char *)this + 2552);
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)this + 2552, 2LL);
    if ( PtiFromInputDest )
    {
      if ( IsMouseInPointerActive(PtiFromInputDest) )
      {
        Queue = CInputDest::GetQueue(v1, 0LL);
        if ( Queue )
          *(_QWORD *)(Queue + 440) = 0LL;
      }
    }
  }
}
