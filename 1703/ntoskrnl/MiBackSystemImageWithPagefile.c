/*
 * XREFs of MiBackSystemImageWithPagefile @ 0x14059D500
 * Callers:
 *     MmBackSystemImageWithPagefile @ 0x14059D470 (MmBackSystemImageWithPagefile.c)
 *     MiBackSystemImageWithPagefile @ 0x14059D500 (MiBackSystemImageWithPagefile.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiBackSingleImageWithPagefile @ 0x14058571C (MiBackSingleImageWithPagefile.c)
 *     MiBackSystemImageWithPagefile @ 0x14059D500 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall MiBackSystemImageWithPagefile(__int64 a1)
{
  __int64 result; // rax
  char v3; // dl
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rdi
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_DWORD *)(a1 + 196) & 0xC) != 0 )
    return 0LL;
  if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
    return 3221225793LL;
  if ( v5 && (v3 & 2) == 0 && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v4) )
    MiBackSingleImageWithPagefile(a1);
  v6 = *(_QWORD *)(a1 + 136);
  result = 0LL;
  if ( v6 != -2LL && v6 != 1 )
  {
    if ( (v6 & 1) != 0 )
    {
      v10[0] = 1LL;
      v10[1] = v6 & 0xFFFFFFFFFFFFFFFEuLL;
      v6 = (unsigned __int64)v10;
    }
    *(_DWORD *)(a1 + 196) |= 8u;
    v7 = 0;
    if ( *(_QWORD *)v6 )
    {
      v8 = 0LL;
      do
      {
        v9 = *(_QWORD *)(v6 + 8 * v8 + 8);
        if ( !v9 )
          break;
        if ( *(_QWORD *)(v9 + 136) != 1LL )
        {
          result = MiBackSystemImageWithPagefile(v9);
          if ( (int)result < 0 )
            break;
        }
        v8 = ++v7;
      }
      while ( (unsigned __int64)v7 < *(_QWORD *)v6 );
    }
  }
  *(_DWORD *)(a1 + 196) &= ~8u;
  if ( (int)result >= 0 )
    *(_DWORD *)(a1 + 196) |= 4u;
  return result;
}
