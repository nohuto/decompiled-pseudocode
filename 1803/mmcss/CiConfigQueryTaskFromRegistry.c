/*
 * XREFs of CiConfigQueryTaskFromRegistry @ 0x1C000CD00
 * Callers:
 *     CiConfigInitializeFromRegistry @ 0x1C000CA58 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     CiConfigQueryValue @ 0x1C000CDD4 (CiConfigQueryValue.c)
 */

__int64 __fastcall CiConfigQueryTaskFromRegistry(HANDLE KeyHandle, char *a2, __int64 a3)
{
  __int64 v4; // rsi
  char v6; // r8
  __int64 result; // rax
  char v9; // cl
  char v10; // cl

  *(_BYTE *)(a3 + 3) &= 0x8Fu;
  LODWORD(v4) = 0;
  v6 = *(_BYTE *)(a3 + 3);
  if ( CiConfigTaskValues )
  {
    while ( 1 )
    {
      result = CiConfigQueryValue(KeyHandle);
      if ( (int)result < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( !*(&CiConfigTaskValues + v4) )
      {
        v6 = *(_BYTE *)(a3 + 3);
        goto LABEL_5;
      }
    }
  }
  else
  {
LABEL_5:
    v9 = *a2;
    *(_QWORD *)(a3 + 32) = *((unsigned int *)a2 + 4);
    *(_DWORD *)(a3 + 4) = *((_DWORD *)a2 + 6);
    *(_BYTE *)(a3 + 1) = a2[8];
    *(_BYTE *)(a3 + 2) = a2[40];
    v10 = 2 * (a2[48] & 1 | (2 * (a2[32] & 1 | (4 * (v9 & 7)))));
    *(_BYTE *)(a3 + 40) = a2[56];
    *(_BYTE *)(a3 + 3) = v6 & 0x89 | v10;
    return 0LL;
  }
  return result;
}
