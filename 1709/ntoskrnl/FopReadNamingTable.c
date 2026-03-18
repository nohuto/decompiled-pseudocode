/*
 * XREFs of FopReadNamingTable @ 0x14086F494
 * Callers:
 *     FopValidateFontNameTable @ 0x14086EDF8 (FopValidateFontNameTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     FioFwReadBytesAtOffset @ 0x14013DEA8 (FioFwReadBytesAtOffset.c)
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     FopReadNameRecord @ 0x14086F5BC (FopReadNameRecord.c)
 */

__int64 __fastcall FopReadNamingTable(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 Memory; // rbx
  signed int NameRecord; // edi
  unsigned int v8; // eax
  unsigned __int16 v9; // bp
  __int16 v10; // si
  unsigned int v11; // ecx
  unsigned int v12; // r14d
  unsigned int v13; // esi
  int v15; // [rsp+20h] [rbp-58h] BYREF
  __int16 v16; // [rsp+24h] [rbp-54h]

  Memory = 0LL;
  NameRecord = FioFwReadBytesAtOffset(a1, a2, 6u, &v15);
  if ( NameRecord < 0 )
    return (unsigned int)NameRecord;
  v8 = 18;
  LOWORD(v15) = __ROR2__(v15, 8);
  v9 = __ROR2__(HIWORD(v15), 8);
  v10 = __ROR2__(v16, 8);
  HIWORD(v15) = v9;
  if ( v9 )
  {
    v8 = -1;
    v11 = 12 * v9 + 18;
    if ( v11 >= 0x12 )
      v8 = 12 * v9 + 18;
    NameRecord = 12 * (unsigned int)v9 >= 0xFFFFFFEE ? 0xC0000095 : 0;
    if ( v11 < 0x12 )
      goto LABEL_11;
  }
  Memory = BgpFwAllocateMemory(v8);
  if ( !Memory )
    return (unsigned int)-1073741801;
  v12 = a2 + 6;
  *(_DWORD *)Memory = v15;
  *(_WORD *)(Memory + 4) = v10;
  v13 = 0;
  if ( !v9 )
  {
LABEL_10:
    *a3 = Memory;
LABEL_11:
    if ( NameRecord >= 0 )
      return (unsigned int)NameRecord;
    goto LABEL_14;
  }
  while ( 1 )
  {
    NameRecord = FopReadNameRecord(a1, v12, Memory + 12LL * v13 + 6);
    if ( NameRecord < 0 )
      break;
    ++v13;
    v12 += 12;
    if ( v13 >= v9 )
      goto LABEL_10;
  }
LABEL_14:
  if ( Memory )
    BgpFwFreeMemory(Memory);
  return (unsigned int)NameRecord;
}
