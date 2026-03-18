/*
 * XREFs of PnpiBiosAddressHandleMemoryFlags @ 0x1C008D930
 * Callers:
 *     PnpiBiosAddressToIoDescriptor @ 0x1C008B758 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C008D048 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00A2928 (PnpiBiosAddressQuadToIoDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PnpiBiosAddressHandleMemoryFlags(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // cl
  __int64 result; // rax

  v3 = a2;
  v4 = *(_BYTE *)(a1 + 5);
  result = v4 & 0x1E;
  if ( (v4 & 0x1E) != 0 )
  {
    switch ( (_DWORD)result )
    {
      case 2:
        *(_WORD *)(a2 + 4) |= 0x20u;
        break;
      case 4:
        *(_WORD *)(a2 + 4) |= 8u;
        break;
      case 6:
        *(_WORD *)(a2 + 4) |= 4u;
        break;
      default:
        LOBYTE(a2) = 2;
        result = WPP_RECORDER_SF_D(
                   WPP_GLOBAL_Control->DeviceExtension,
                   a2,
                   13,
                   10,
                   (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
                   v4);
        break;
    }
  }
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    *(_WORD *)(v3 + 4) |= 1u;
  return result;
}
