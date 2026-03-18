/*
 * XREFs of ?SupportsPointerType@CInteraction@@UEBAHKW4SupportedTypeOption@@@Z @ 0x180091840
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180091D44 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     _anonymous_namespace_::ConvertToInputType @ 0x1800921C4 (_anonymous_namespace_--ConvertToInputType.c)
 *     ?GetInputQueueType@CInputSinkStruct@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x1800BA31C (-GetInputQueueType@CInputSinkStruct@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 */

__int64 __fastcall CInteraction::SupportsPointerType(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // r9
  __int64 v6; // rcx

  v2 = 0;
  if ( a2 == 6 )
  {
    v6 = *(_QWORD *)(a1 + 128);
    if ( v6 )
      LOBYTE(v2) = (unsigned int)CInputSinkStruct::GetInputQueueType(v6, 6LL) != 0;
  }
  else
  {
    v3 = anonymous_namespace_::ConvertToInputType(a2);
    return (unsigned int)CInteractionProcessor::SupportsPointerType(v4 + 376, v3);
  }
  return v2;
}
