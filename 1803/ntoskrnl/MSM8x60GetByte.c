/*
 * XREFs of MSM8x60GetByte @ 0x1402CDCA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MSM8x60GetByte(__int64 *a1, _BYTE *a2)
{
  __int64 v3; // rdi
  int v4; // ebx
  int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // r8d
  int v9; // edx
  char v11; // al

  if ( !a1 )
    return 3LL;
  v3 = *a1;
  if ( !*a1 )
    return 3LL;
  if ( !dword_1403EFBCC )
  {
    if ( (((__int64 (__fastcall *)(__int64))off_140399430[0])(v3 + 8) & 0x30) != 0 )
      ((void (__fastcall *)(__int64))off_140399438[0])(v3 + 16);
    v4 = 1;
    while ( v4-- )
    {
      if ( (((__int64 (__fastcall *)(__int64))off_140399430[0])(v3 + 8) & 1) != 0
        && ((((__int64 (__fastcall *)(__int64))off_140399430[0])(v3 + 80) & 0x7F) != 1
         || (((__int64 (__fastcall *)(__int64))off_140399430[0])(v3 + 20) & 8) != 0) )
      {
        v6 = ((__int64 (__fastcall *)(__int64))off_140399430[0])(v3 + 112);
        v7 = dword_1403EFBC4;
        v8 = dword_1403EFBC8 + 4;
        dword_1403EC79C = v6;
        dword_1403EFBCC = 4;
        dword_1403EFBC8 += 4;
        if ( !dword_1403EFBC4 )
        {
          if ( (((__int64 (__fastcall *)(__int64))off_140399430[0])(v3 + 20) & 8) != 0 )
          {
            v7 = ((__int64 (__fastcall *)(__int64))off_140399430[0])(v3 + 56);
            dword_1403EFBC4 = v7;
          }
          else
          {
            v7 = dword_1403EFBC4;
          }
          if ( !v7 )
            break;
          v8 = dword_1403EFBC8;
        }
        if ( v7 <= v8 )
        {
          if ( (unsigned __int64)v7 + 4 <= v8 )
            v9 = 0;
          else
            v9 = v7 - v8 + 4;
          dword_1403EFBC8 = 0;
          dword_1403EFBC4 = 0;
          dword_1403EFBCC = v9;
          ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v3 + 16, 128LL);
          ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v3 + 52, 0x2000LL);
          ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v3 + 16, 1280LL);
        }
        break;
      }
    }
    if ( !dword_1403EFBCC )
      return 1LL;
  }
  v11 = dword_1403EC79C;
  dword_1403EC79C = (unsigned int)dword_1403EC79C >> 8;
  --dword_1403EFBCC;
  *a2 = v11;
  return 0LL;
}
