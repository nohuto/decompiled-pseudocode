/*
 * XREFs of ?GetGeometryBounds@CGeometry2DGroup@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x180180C90
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2DGroup::GetGeometryBounds(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 result; // rax
  __int128 i; // [rsp+20h] [rbp-38h] BYREF
  float v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6;
  if ( (((unsigned __int8)v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6) & 6) == 2 )
  {
    if ( (*(_BYTE *)(a1 + 152) & 2) != 0 )
    {
      v5 = 0LL;
      for ( i = 0uLL; (unsigned int)v5 < *(_DWORD *)(a1 + 96); v5 = (unsigned int)(v5 + 1) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v5);
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v6 + 168LL))(v6, v10);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&i, v10);
        }
      }
      v7 = i;
      *(_DWORD *)(a1 + 152) &= ~2u;
      *(_OWORD *)(a1 + 120) = v7;
    }
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 120);
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
  }
  result = (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  *(_DWORD *)(a1 + 32) ^= result;
  return result;
}
