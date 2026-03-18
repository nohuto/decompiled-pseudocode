/*
 * XREFs of ?GetGeometryBounds@CGeometry2DGroup@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x1801B1E70
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2DGroup::GetGeometryBounds(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  float v11[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6;
  if ( (((unsigned __int8)v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6) & 6) == 2 )
  {
    v5 = *(_DWORD *)(a1 + 152);
    if ( (v5 & 2) != 0 )
    {
      v6 = 0LL;
      v10 = 0uLL;
      if ( *(_DWORD *)(a1 + 96) )
      {
        do
        {
          v7 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v6);
          if ( v7 )
          {
            (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v7 + 168LL))(v7, v11);
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v10, v11);
          }
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < *(_DWORD *)(a1 + 96) );
        v5 = *(_DWORD *)(a1 + 152);
      }
      v8 = v10;
      *(_DWORD *)(a1 + 152) = v5 & 0xFFFFFFFD;
      *(_OWORD *)(a1 + 120) = v8;
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
