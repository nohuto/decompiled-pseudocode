/*
 * XREFs of RIMIDEValidateMouseInputStruct @ 0x1C010A788
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0109FB4 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEValidateMouseInputStruct(__int64 a1)
{
  unsigned int v1; // r10d
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // r11d
  BOOL v7; // ecx
  BOOL v8; // eax
  unsigned int v9; // r8d

  v1 = *(_DWORD *)(a1 + 12);
  v3 = ((v1 >> 7) & 1) + 1;
  if ( (v1 & 0x100) == 0 )
    v3 = (v1 >> 7) & 1;
  v4 = v3 + 1;
  if ( (v1 & 0x800) == 0 )
    v4 = v3;
  v5 = v4 + 1;
  if ( (v1 & 0x1000) == 0 )
    v5 = v4;
  v6 = 0;
  v7 = 0;
  if ( (v1 & 0x18) != 0x18 )
    v7 = (v1 & 6) != 6;
  v8 = 0;
  v9 = 0;
  if ( (v1 & 0x60) != 0x60 )
    v8 = v7;
  if ( v5 <= 1 )
    v9 = v8;
  if ( *(_DWORD *)(a1 + 16)
    && *(_DWORD *)(a1 + 16) > (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
  {
    v9 = 0;
  }
  if ( !*(_QWORD *)(a1 + 24) )
    return v9;
  return v6;
}
