/*
 * XREFs of PnpiBiosAddressHandleGlobalFlags @ 0x1C008EC08
 * Callers:
 *     PnpiBiosAddressToIoDescriptor @ 0x1C008E8B0 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C008EE14 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00A5190 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00A557C (PnpiBiosAddressQuadToIoDescriptor.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C008F680 (PnpiUpdateResourceList.c)
 */

NTSTATUS __fastcall PnpiBiosAddressHandleGlobalFlags(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct _IO_RESOURCE_DESCRIPTOR *a4)
{
  ULONGLONG v4; // r10
  __int64 v5; // rbp
  ULONGLONG v6; // rsi
  ULONGLONG v8; // r9
  ULONGLONG v9; // r11
  char v10; // al
  unsigned __int8 Type; // cl
  ULONGLONG v14; // rax
  char v15; // dl
  UCHAR v16; // dl
  NTSTATUS result; // eax
  __int64 v18; // rax
  unsigned __int64 Alignment; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v20[6]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = a3;
  MinimumAddress = 0LL;
  v6 = 0LL;
  Alignment = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  MaximumAddress = 0LL;
  v10 = *(_BYTE *)(a1 + 4);
  Type = a4->Type;
  a4->ShareDisposition = ((unsigned __int8)~v10 & !_bittest(&AcpiOverrideAttributes, 0xBu)) != 0 ? 3 : 1;
  if ( ((Type - 1) & 0xF9) == 0 && Type != 5 )
  {
    v14 = RtlIoDecodeMemIoResource(a4, &Alignment, &MinimumAddress, &MaximumAddress);
    v8 = MaximumAddress;
    v9 = v14;
    v4 = MinimumAddress;
    v6 = Alignment;
  }
  v15 = *(_BYTE *)(a1 + 4);
  if ( (v15 & 0xC) == 0xC )
  {
    v16 = a4->Type;
    if ( v16 == 6 )
    {
      a4->u.Port.Length = a4->u.Port.MinimumAddress.LowPart - a4->u.Port.Alignment + 1;
    }
    else
    {
      result = RtlIoEncodeMemIoResource(a4, v16, v8 - v4 + 1, v6, v4, v8);
      if ( result < 0 )
        return result;
    }
  }
  else if ( (v15 & 8) != 0 )
  {
    if ( a4->Type == 6 )
      a4->u.Port.Alignment = a4->u.Port.MinimumAddress.LowPart - a4->u.Port.Length + 1;
    else
      a4->u.Port.MinimumAddress.QuadPart = v8 - v9 + 1;
  }
  else if ( (v15 & 4) != 0 )
  {
    if ( a4->Type == 6 )
      a4->u.Port.MinimumAddress.LowPart = a4->u.Port.Length + a4->u.Port.Alignment - 1;
    else
      a4->u.Port.MaximumAddress.QuadPart = v9 + v4 - 1;
  }
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
  {
    result = PnpiUpdateResourceList(a2 + 8 * v5, v20);
    if ( result < 0 )
      return result;
    v18 = v20[0];
    *(_BYTE *)(v20[0] + 1LL) = -127;
    *(_WORD *)(v18 + 4) = 1;
  }
  return 0;
}
