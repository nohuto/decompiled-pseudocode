/*
 * XREFs of PortPassThroughSrbInitialize @ 0x1C0069238
 * Callers:
 *     PortPassThroughBuildSrb @ 0x1C0068680 (PortPassThroughBuildSrb.c)
 * Callees:
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

void *__fastcall PortPassThroughSrbInitialize(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ecx
  int v9; // eax
  int v10; // eax

  memset(a1, 0, 0x58uLL);
  *a1 = 88;
  *((_BYTE *)a1 + 5) = *(_BYTE *)(a2 + 3);
  *((_BYTE *)a1 + 6) = *(_BYTE *)(a2 + 4);
  *((_BYTE *)a1 + 7) = *(_BYTE *)(a2 + 5);
  *((_BYTE *)a1 + 10) = *(_BYTE *)(a2 + 6);
  *((_BYTE *)a1 + 11) = *(_BYTE *)(a2 + 7);
  if ( *(_DWORD *)(a2 + 12) )
  {
    if ( *(_BYTE *)(a2 + 8) )
    {
      if ( *(_BYTE *)(a2 + 8) == 1 )
      {
        v9 = 64;
        v8 = 96;
      }
      else
      {
        v9 = 192;
        v8 = 224;
      }
    }
    else
    {
      v9 = 128;
      v8 = 160;
    }
    a1[3] = v9;
  }
  else
  {
    a1[3] = 0;
    v8 = 32;
    v9 = 0;
  }
  if ( !a5 )
  {
    a1[3] = v8;
    v9 = v8;
  }
  a1[3] = v9 | 0x100;
  a1[4] = *(_DWORD *)(a2 + 12);
  v10 = *(_DWORD *)(a2 + 16);
  *((_QWORD *)a1 + 4) = a5;
  a1[5] = v10;
  *((_QWORD *)a1 + 3) = a4;
  *((_QWORD *)a1 + 6) = 0LL;
  return memmove(a1 + 18, (const void *)(a2 + 36), *(unsigned __int8 *)(a2 + 6));
}
