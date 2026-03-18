/*
 * XREFs of _GetClientRect @ 0x1C00499C0
 * Callers:
 *     xxxSendSizeMessage @ 0x1C0049940 (xxxSendSizeMessage.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CFD54 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0213EAC (xxxMNUpdateShownMenu.c)
 * Callees:
 *     GetPrimaryMonitorRect @ 0x1C0049BEC (GetPrimaryMonitorRect.c)
 */

__int64 __fastcall GetClientRect(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // ecx
  __int64 result; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 || (*(_BYTE *)(a1 + 61) & 2) != 0 )
  {
    if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D )
    {
      result = GetPrimaryMonitorRect(v6);
      *(_OWORD *)a2 = *(_OWORD *)result;
    }
    else
    {
      *(_OWORD *)a2 = *(_OWORD *)(a1 + 144);
      v3 = *(_DWORD *)(a1 + 144);
      v4 = -*(_DWORD *)(a1 + 148);
      *(_DWORD *)(a2 + 12) += v4;
      result = (unsigned int)-v3;
      *(_DWORD *)a2 += result;
      *(_DWORD *)(a2 + 8) += result;
      *(_DWORD *)(a2 + 4) += v4;
    }
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(gpsi + 2108LL);
    result = gpsi;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(gpsi + 2112LL);
  }
  return result;
}
