/*
 * XREFs of ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0004874
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0005094 (-ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmIntera.c)
 * Callees:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C00048F4 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ProcessUpdateTouchConfigurationList(
        __int64 a1,
        _DWORD *a2,
        int a3,
        _BYTE *a4)
{
  unsigned int v6; // eax
  int v7; // ecx
  __int64 result; // rax
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  *a4 = 0;
  v6 = a2[2];
  v7 = a2[3];
  v9[0] = a2[1];
  v9[1] = v6;
  if ( v9[0] > v6 )
    return 3221225485LL;
  v9[2] = v7;
  result = DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
             v7,
             a3,
             (unsigned int)v9,
             (int)a1 + 16,
             (__int64)a4);
  if ( (int)result >= 0 )
  {
    if ( *a4 )
    {
      *(_DWORD *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 12) |= 4u;
    }
  }
  return result;
}
