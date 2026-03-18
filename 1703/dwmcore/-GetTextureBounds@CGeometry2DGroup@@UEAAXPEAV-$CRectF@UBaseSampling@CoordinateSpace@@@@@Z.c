/*
 * XREFs of ?GetTextureBounds@CGeometry2DGroup@@UEAAXPEAV?$CRectF@UBaseSampling@CoordinateSpace@@@@@Z @ 0x180178E40
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2DGroup::GetTextureBounds(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 result; // rax
  __int128 i; // [rsp+20h] [rbp-38h] BYREF
  float v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ ((*(_DWORD *)(a1 + 32) & 0xFFFFFFFE) + 2)) & 6;
  *(_DWORD *)(a1 + 32) = v4;
  if ( (v4 & 6) == 2 )
  {
    if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
    {
      v5 = 0LL;
      for ( i = 0uLL; (unsigned int)v5 < *(_DWORD *)(a1 + 96); v5 = (unsigned int)(v5 + 1) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v5);
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v6 + 160LL))(v6, v10);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&i, v10);
        }
      }
      v7 = i;
      *(_DWORD *)(a1 + 152) &= ~1u;
      *(_OWORD *)(a1 + 136) = v7;
    }
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 136);
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
