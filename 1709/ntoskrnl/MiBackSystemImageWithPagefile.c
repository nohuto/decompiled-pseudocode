/*
 * XREFs of MiBackSystemImageWithPagefile @ 0x1405C86AC
 * Callers:
 *     MmBackSystemImageWithPagefile @ 0x1405C861C (MmBackSystemImageWithPagefile.c)
 *     MiBackSystemImageWithPagefile @ 0x1405C86AC (MiBackSystemImageWithPagefile.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiBackSystemImageWithPagefile @ 0x1405C86AC (MiBackSystemImageWithPagefile.c)
 *     MiBackSingleImageWithPagefile @ 0x1405C87A4 (MiBackSingleImageWithPagefile.c)
 */

__int64 __fastcall MiBackSystemImageWithPagefile(__int64 a1)
{
  char v2; // dl
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_DWORD *)(a1 + 196) & 0xC) != 0 )
    return 0LL;
  if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
    return 3221225793LL;
  if ( v3 && (v2 & 2) == 0 && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v4) )
    MiBackSingleImageWithPagefile(a1);
  v5 = *(_QWORD *)(a1 + 136);
  result = 0LL;
  if ( v5 != -2LL && v5 != 1 )
  {
    if ( (v5 & 1) != 0 )
    {
      v10[0] = 1LL;
      v10[1] = v5 & 0xFFFFFFFFFFFFFFFEuLL;
      v5 = (unsigned __int64)v10;
    }
    *(_DWORD *)(a1 + 196) |= 8u;
    v7 = 0;
    if ( *(_QWORD *)v5 )
    {
      v8 = 0LL;
      do
      {
        v9 = *(_QWORD *)(v5 + 8 * v8 + 8);
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
      while ( (unsigned __int64)v7 < *(_QWORD *)v5 );
    }
  }
  *(_DWORD *)(a1 + 196) &= ~8u;
  if ( (int)result >= 0 )
    *(_DWORD *)(a1 + 196) |= 4u;
  return result;
}
