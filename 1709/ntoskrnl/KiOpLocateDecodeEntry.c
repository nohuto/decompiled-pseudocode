/*
 * XREFs of KiOpLocateDecodeEntry @ 0x1400DB270
 * Callers:
 *     KiOpDecode @ 0x1400DB06C (KiOpDecode.c)
 * Callees:
 *     KiOpFetchNextByte @ 0x1400DB1A8 (KiOpFetchNextByte.c)
 */

__int64 __fastcall KiOpLocateDecodeEntry(__int64 a1)
{
  const UNICODE_STRING *v1; // rsi
  const UNICODE_STRING *v2; // rbx
  unsigned __int8 v4; // dl
  __int64 result; // rax
  int v6; // ecx
  char Buffer; // cl
  char v8; // cl
  char v9; // cl

  v1 = (const UNICODE_STRING *)&unk_1402B5988;
  v2 = (const UNICODE_STRING *)&KiOpOneByteTable;
  if ( *(_BYTE *)(a1 + 57) )
  {
    v1 = &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix;
    v2 = (const UNICODE_STRING *)&KiOpTwoByteTable;
  }
  while ( 1 )
  {
    v4 = *(_BYTE *)(a1 + 56);
    if ( v4 < LOBYTE(v2->Length) )
      goto LABEL_4;
    if ( v4 > (unsigned __int8)(LOBYTE(v2->Length) + HIBYTE(v2->Length) - 1) )
      goto LABEL_4;
    v6 = *(_DWORD *)(&v2->MaximumLength + 1);
    if ( v6 )
    {
      if ( (v6 & *(_DWORD *)(a1 + 48)) == 0 )
        goto LABEL_4;
    }
    if ( LOBYTE(v2->Buffer) == 0xFF && BYTE1(v2->Buffer) == 0xFF && BYTE2(v2->Buffer) == 0xFF )
      break;
    if ( !*(_BYTE *)(a1 + 80) )
    {
      result = KiOpFetchNextByte(a1, (_BYTE *)(a1 + 65));
      if ( (int)result < 0 )
        return result;
      *(_BYTE *)(a1 + 80) = 1;
    }
    Buffer = (char)v2->Buffer;
    if ( Buffer != -1 && Buffer != ((*(_BYTE *)(a1 + 65) >> 3) & 7) )
      goto LABEL_4;
    v8 = BYTE2(v2->Buffer);
    if ( v8 != -1 && v8 != (*(_BYTE *)(a1 + 65) & 7) )
      goto LABEL_4;
    v9 = BYTE1(v2->Buffer);
    if ( v9 == -1 )
      break;
    if ( (*(_BYTE *)(a1 + 65) & 0xC0) == 0xC0 )
    {
      if ( v9 == 3 )
        break;
    }
    else if ( v9 != 3 )
    {
      break;
    }
LABEL_4:
    v2 = (const UNICODE_STRING *)((char *)v2 + 24);
    if ( v2 == v1 )
      return 0LL;
  }
  if ( (HIDWORD(v2->Buffer) & 0xF4000000) != 0 && (HIDWORD(v2->Buffer) & 0xF4000000 & *(_DWORD *)(a1 + 60)) == 0 )
    goto LABEL_4;
  *(_QWORD *)(a1 + 88) = v2;
  return 0LL;
}
