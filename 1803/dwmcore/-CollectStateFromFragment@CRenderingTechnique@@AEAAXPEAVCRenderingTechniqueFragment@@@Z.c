/*
 * XREFs of ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18007165C
 * Callers:
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x180071974 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 * Callees:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x180036BE4 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x1800377D4 (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromFragment(
        CRenderingTechnique *this,
        struct CRenderingTechniqueFragment *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  bool v9; // zf
  unsigned int v10; // eax
  unsigned int i; // ebp
  int v12; // eax
  __int64 v13; // r10
  unsigned int v14; // r8d
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // r9d
  unsigned int j; // r8d
  __int128 v20; // xmm0
  __int64 v21; // xmm1_8
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // eax
  __int128 v25; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+30h] [rbp-18h]
  int v27; // [rsp+38h] [rbp-10h]

  v3 = *((_QWORD *)a2 + 4);
  v4 = 0;
  v6 = (*((_QWORD *)a2 + 5) - v3) >> 4;
  if ( (_DWORD)v6 )
  {
    v7 = (_QWORD *)(v3 + 8);
    v8 = (unsigned int)v6;
    do
    {
      v9 = *v7 == 0LL;
      v10 = v4 + 1;
      v7 += 2;
      if ( !v9 )
        v10 = v4;
      v4 = v10;
      --v8;
    }
    while ( v8 );
  }
  for ( i = 0; i < v4; ++i )
  {
    v13 = *((_QWORD *)a2 + 4);
    v14 = 0;
    v15 = i;
    v16 = (*((_QWORD *)a2 + 5) - v13) >> 4;
    if ( (_DWORD)v16 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v13 + 16LL * v14 + 8);
        if ( !v17 && !(_DWORD)v15 )
          break;
        ++v14;
        v24 = v15 - 1;
        if ( v17 )
          v24 = v15;
        v15 = v24;
        if ( v14 >= (unsigned int)v16 )
          goto LABEL_14;
      }
      CRenderingTechniqueFragment::GetSurfaceDescription(
        a2,
        (const struct CBrushRenderingGraph *)v15,
        v14,
        (struct CRenderingTechniqueFragment::SurfaceDescription *)&v25);
    }
LABEL_14:
    if ( BYTE4(v25) )
      goto LABEL_17;
    v18 = *((_DWORD *)this + 23);
    for ( j = 0; j < v18; ++j )
    {
      if ( CRenderingTechniqueFragment::SurfaceDescription::operator==((__int64)&v25, (__int64)this + 44 * j + 100) )
        break;
    }
    if ( j >= v18 )
    {
LABEL_17:
      v20 = v25;
      v21 = v26;
      v22 = 44LL * (unsigned int)(*((_DWORD *)this + 23))++;
      v23 = v27;
      *(_OWORD *)((char *)this + v22 + 100) = v20;
      *(_QWORD *)((char *)this + v22 + 116) = v21;
      *(_DWORD *)((char *)this + v22 + 124) = v23;
    }
    else
    {
      *((_BYTE *)this + 44 * j + 110) |= BYTE10(v25);
    }
  }
  *((_DWORD *)this + 24) |= *((_DWORD *)a2 + 7);
  v12 = *((_DWORD *)a2 + 5);
  if ( (v12 & 0xF) != 0 )
    v12 = v12 - (*((_DWORD *)a2 + 5) & 0xF) + 16;
  *((_DWORD *)this + 22) += v12;
}
