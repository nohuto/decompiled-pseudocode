/*
 * XREFs of _GetClientRect @ 0x1C003C920
 * Callers:
 *     xxxSendSizeMessage @ 0x1C003C8A0 (xxxSendSizeMessage.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CB990 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0212964 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 */

__int64 __fastcall GetClientRect(__int64 a1, _DWORD *a2)
{
  int v3; // eax
  int v4; // ecx
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 || (*(_BYTE *)(a1 + 61) & 2) != 0 )
  {
    if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D )
    {
      a2[1] = 0;
      *a2 = 0;
      a2[2] = GetDwmDependentMetric(0LL);
      result = GetDwmDependentMetric(1LL);
      a2[3] = result;
    }
    else
    {
      *(_OWORD *)a2 = *(_OWORD *)(a1 + 144);
      v3 = *(_DWORD *)(a1 + 144);
      v4 = -*(_DWORD *)(a1 + 148);
      a2[3] += v4;
      result = (unsigned int)-v3;
      *a2 += result;
      a2[2] += result;
      a2[1] += v4;
    }
  }
  else
  {
    *a2 = 0;
    a2[1] = 0;
    a2[2] = *(_DWORD *)(gpsi + 2108LL);
    result = gpsi;
    a2[3] = *(_DWORD *)(gpsi + 2112LL);
  }
  return result;
}
