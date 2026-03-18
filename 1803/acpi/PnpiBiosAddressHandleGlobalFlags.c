/*
 * XREFs of PnpiBiosAddressHandleGlobalFlags @ 0x1C0084A78
 * Callers:
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C0084334 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C0084678 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C0084C80 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C008503C (PnpiBiosAddressToIoDescriptor.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C0085FAC (PnpiUpdateResourceList.c)
 */

NTSTATUS __fastcall PnpiBiosAddressHandleGlobalFlags(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct _IO_RESOURCE_DESCRIPTOR *a4)
{
  __int64 v4; // rbp
  ULONGLONG v6; // r9
  ULONGLONG v7; // r10
  ULONGLONG v8; // rsi
  ULONGLONG v9; // r11
  ULONGLONG v12; // rax
  char v13; // dl
  UCHAR Type; // dl
  NTSTATUS result; // eax
  __int64 v16; // rax
  unsigned __int64 Alignment; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v18[6]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  v6 = 0LL;
  v7 = 0LL;
  MaximumAddress = 0LL;
  v8 = 0LL;
  MinimumAddress = 0LL;
  v9 = 0LL;
  Alignment = 0LL;
  a4->ShareDisposition = 2 * (~*(_BYTE *)(a1 + 4) & !_bittest(&AcpiOverrideAttributes, 0xBu)) + 1;
  if ( ((a4->Type - 1) & 0xF9) == 0 && a4->Type != 5 )
  {
    v12 = RtlIoDecodeMemIoResource(a4, &Alignment, &MinimumAddress, &MaximumAddress);
    v6 = MaximumAddress;
    v9 = v12;
    v7 = MinimumAddress;
    v8 = Alignment;
  }
  v13 = *(_BYTE *)(a1 + 4);
  if ( (v13 & 0xC) == 0xC )
  {
    Type = a4->Type;
    if ( Type == 6 )
    {
      a4->u.Port.Length = a4->u.Port.MinimumAddress.LowPart - a4->u.Port.Alignment + 1;
    }
    else
    {
      result = RtlIoEncodeMemIoResource(a4, Type, v6 - v7 + 1, v8, v7, v6);
      if ( result < 0 )
        return result;
    }
  }
  else if ( (v13 & 8) != 0 )
  {
    if ( a4->Type == 6 )
      a4->u.Port.Alignment = a4->u.Port.MinimumAddress.LowPart - a4->u.Port.Length + 1;
    else
      a4->u.Port.MinimumAddress.QuadPart = v6 - v9 + 1;
  }
  else if ( (v13 & 4) != 0 )
  {
    if ( a4->Type == 6 )
      a4->u.Port.MinimumAddress.LowPart = a4->u.Port.Length + a4->u.Port.Alignment - 1;
    else
      a4->u.Port.MaximumAddress.QuadPart = v9 + v7 - 1;
  }
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
  {
    result = PnpiUpdateResourceList(a2 + 8 * v4, v18);
    if ( result < 0 )
      return result;
    v16 = v18[0];
    *(_BYTE *)(v18[0] + 1LL) = -127;
    *(_WORD *)(v16 + 4) = 1;
  }
  return 0;
}
