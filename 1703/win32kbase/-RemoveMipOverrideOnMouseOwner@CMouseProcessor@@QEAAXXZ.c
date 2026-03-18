/*
 * XREFs of ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0132304
 * Callers:
 *     CancelCapturedMipOverride @ 0x1C012E5F0 (CancelCapturedMipOverride.c)
 * Callees:
 *     IsMouseInPointerActive @ 0x1C00046B4 (IsMouseInPointerActive.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0047C70 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0047F6C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

void __fastcall CMouseProcessor::RemoveMipOverrideOnMouseOwner(CMouseProcessor *this)
{
  CInputDest *v1; // rbx
  __int64 PtiFromInputDest; // rax
  __int64 Queue; // rax
  __int64 v4; // rdx

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 686, 1, 1) )
  {
    v1 = (CMouseProcessor *)((char *)this + 2544);
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)this + 2544, 2);
    if ( PtiFromInputDest )
    {
      if ( IsMouseInPointerActive(PtiFromInputDest) )
      {
        Queue = CInputDest::GetQueue(v1, 0);
        if ( Queue )
          *(_QWORD *)(Queue + 392) &= v4;
      }
    }
  }
}
