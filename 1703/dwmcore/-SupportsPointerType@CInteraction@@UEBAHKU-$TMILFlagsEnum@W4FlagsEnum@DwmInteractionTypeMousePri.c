/*
 * XREFs of ?SupportsPointerType@CInteraction@@UEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x180020530
 * Callers:
 *     <none>
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x180020564 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@U-$TMILFlagsEnum@W4FlagsEnum@DwmIn.c)
 *     _anonymous_namespace_::ConvertToInputType @ 0x180020614 (_anonymous_namespace_--ConvertToInputType.c)
 *     ?GetInputQueueType@CInputSinkStruct@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x1800236A4 (-GetInputQueueType@CInputSinkStruct@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 */

__int64 __fastcall CInteraction::SupportsPointerType(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // r10
  __int64 v6; // rcx

  v2 = 0;
  if ( a2 == 6 )
  {
    v6 = *(_QWORD *)(a1 + 112);
    if ( v6 )
      LOBYTE(v2) = (unsigned int)CInputSinkStruct::GetInputQueueType(v6, 6LL) != 0;
  }
  else
  {
    v3 = anonymous_namespace_::ConvertToInputType(a2);
    return (unsigned int)CInteractionProcessor::SupportsPointerType(v4 + 360, v3);
  }
  return v2;
}
