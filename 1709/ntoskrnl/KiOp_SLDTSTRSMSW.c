/*
 * XREFs of KiOp_SLDTSTRSMSW @ 0x14020D930
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x14015B1C8 (KiOpRetrieveRegMemAddress.c)
 */

__int64 __fastcall KiOp_SLDTSTRSMSW(__int64 a1)
{
  unsigned __int16 v2; // si
  __int64 v3; // r14
  unsigned int v4; // ecx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  char v8; // [rsp+68h] [rbp+10h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int16 *v10; // [rsp+78h] [rbp+20h] BYREF

  if ( (KiBugCheckActive & 3) != 0 && VslVsmEnabled
    || KiNPIEPEnabled && (*(_BYTE *)(a1 + 81) == 1 || (KiBugCheckActive & 3) != 0) )
  {
    if ( ((*(_BYTE *)(a1 + 65) >> 3) & 7) != 0 )
    {
      if ( ((*(_BYTE *)(a1 + 65) >> 3) & 7) == 1 )
        v2 = 64;
      else
        v2 = __readcr0();
    }
    else
    {
      v2 = 0;
    }
    v3 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)v3 = -1073741819;
    if ( (int)KiOpRetrieveRegMemAddress(a1, (__int64 *)&v10, &v8, &v9) < 0 )
    {
      v5 = -1LL;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 58) )
        v4 = (*(_DWORD *)(a1 + 48) & 0x40) != 0 ? 2 : 4;
      else
        v4 = (*(_BYTE *)(a1 + 48) & 0x40) != 0 ? 2 : 8;
      v5 = (__int64)v10;
      if ( v8 == 1 )
      {
        v6 = (unsigned __int64)v10 + v4;
        if ( v6 > 0x7FFFFFFF0000LL || v6 < (unsigned __int64)v10 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( !v9 || v4 == 2 )
      {
        *v10 = v2;
      }
      else if ( v4 == 4 )
      {
        *(_DWORD *)v10 = v2;
      }
      else
      {
        *(_QWORD *)v10 = v2;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 248LL) += (unsigned int)(*(_DWORD *)(a1 + 16) - *(_DWORD *)a1);
      ++KiOpDescriptorTableStoreSkip;
      *(_BYTE *)(a1 + 96) = 1;
    }
    if ( !*(_BYTE *)(a1 + 96) )
    {
      *(_DWORD *)v3 = -1073741819;
      *(_QWORD *)(v3 + 32) = 1LL;
      *(_QWORD *)(v3 + 40) = v5;
      *(_BYTE *)(a1 + 97) = 1;
    }
  }
  return 0LL;
}
