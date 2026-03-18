/*
 * XREFs of ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C000F6F8
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C000FBB0 (-ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmIntera.c)
 * Callees:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C000F4D8 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ProcessUpdateTouchConfigurationList(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        bool *a4)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]

  *a4 = 0;
  v6 = a2[2];
  v7 = (unsigned int)a2[3];
  LODWORD(v9) = a2[1];
  HIDWORD(v9) = v6;
  if ( (unsigned int)v9 > v6 )
    return 3221225485LL;
  v10 = v7;
  result = DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
             v7,
             a3,
             &v9,
             (__int64 *)(a1 + 16),
             a4);
  if ( (int)result >= 0 && *a4 )
  {
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 12) |= 4u;
  }
  return result;
}
