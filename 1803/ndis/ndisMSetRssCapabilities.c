/*
 * XREFs of ndisMSetRssCapabilities @ 0x1C00B6DEC
 * Callers:
 *     ndisMSetGeneralAttributes @ 0x1C001690C (ndisMSetGeneralAttributes.c)
 * Callees:
 *     ndisRssPmObjectHeaderFixup @ 0x1C0016E5C (ndisRssPmObjectHeaderFixup.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 */

__int64 __fastcall ndisMSetRssCapabilities(__int64 a1, __int64 a2)
{
  void *v2; // rsi
  unsigned __int8 v5; // r10
  unsigned __int8 v6; // r8
  unsigned __int8 v8; // al

  v2 = (void *)(a1 + 2700);
  *(_QWORD *)(a1 + 2700) = 0LL;
  *(_QWORD *)(a1 + 2708) = 0LL;
  *(_DWORD *)(a1 + 2716) = 0;
  v5 = 3;
  v6 = 18;
  if ( *(_BYTE *)(a2 + 1) == 1 )
  {
    v5 = 1;
    v6 = 16;
  }
  else if ( *(_BYTE *)(a2 + 1) == 2 )
  {
    v5 = 2;
  }
  if ( ndisRssPmObjectHeaderFixup((__int64)"RecvScaleCapabilities", a2, 0x88u, v5, v6) )
  {
    v8 = *(_BYTE *)(a1 + 32);
    if ( v8 > 6u || v8 == 6 && *(_BYTE *)(a1 + 33) >= 0x50u )
      return 3223519276LL;
  }
  memmove(v2, (const void *)a2, *(unsigned __int16 *)(a2 + 2));
  return 0LL;
}
