/*
 * XREFs of ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18006D450
 * Callers:
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18006D3A8 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 * Callees:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x18006B834 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromFragment(
        struct CBrushRenderingGraph **this,
        struct CRenderingTechniqueFragment *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // eax
  bool v9; // zf
  unsigned int v10; // ebp
  int v11; // eax
  int v12; // r10d
  unsigned int v13; // r8d
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  struct CBrushRenderingGraph *v19; // xmm0_8
  __int64 v20; // rcx
  __int64 v21; // rdx
  struct CBrushRenderingGraph *v22; // [rsp+20h] [rbp-18h] BYREF
  int v23; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v4 = (__int64)(*((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4)) >> 4;
  if ( (_DWORD)v4 )
  {
    v6 = (_QWORD *)(*((_QWORD *)a2 + 4) + 8LL);
    v7 = (unsigned int)v4;
    do
    {
      v8 = v2 + 1;
      v9 = *v6 == 0LL;
      v6 += 2;
      if ( !v9 )
        v8 = v2;
      v2 = v8;
      --v7;
    }
    while ( v7 );
  }
  v10 = 0;
  if ( v2 )
  {
    v12 = v23;
    do
    {
      v13 = 0;
      v14 = v10;
      v15 = (__int64)(*((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4)) >> 4;
      if ( (_DWORD)v15 )
      {
        while ( *(_QWORD *)(*((_QWORD *)a2 + 4) + 16LL * v13 + 8) || v14-- )
        {
          if ( ++v13 >= (unsigned int)v15 )
            goto LABEL_15;
        }
        CRenderingTechniqueFragment::GetSurfaceDescription(
          a2,
          this[1],
          v13,
          (struct CRenderingTechniqueFragment::SurfaceDescription *)&v22);
        v12 = v23;
      }
LABEL_15:
      if ( BYTE4(v22) )
        goto LABEL_17;
      v17 = *((_DWORD *)this + 23);
      v18 = 0LL;
      if ( !v17 )
        goto LABEL_17;
      do
      {
        v21 = 4LL * (unsigned int)v18;
        if ( (_DWORD)v22 == HIDWORD(this[v21 + 12]) && !LOBYTE(this[v21 + 13]) && (_BYTE)v12 == BYTE4(this[v21 + 13]) )
          break;
        v18 = (unsigned int)(v18 + 1);
      }
      while ( (unsigned int)v18 < v17 );
      if ( (unsigned int)v18 >= v17 )
      {
LABEL_17:
        v19 = v22;
        v20 = 4LL * (unsigned int)(*((_DWORD *)this + 23))++;
        *(struct CBrushRenderingGraph **)((char *)&this[v20 + 12] + 4) = v19;
        HIDWORD(this[v20 + 13]) = v12;
      }
      else
      {
        BYTE6(this[4 * v18 + 13]) |= BYTE2(v23);
      }
      ++v10;
    }
    while ( v10 < v2 );
  }
  *((_DWORD *)this + 24) |= *((_DWORD *)a2 + 7);
  v11 = *((_DWORD *)a2 + 5);
  if ( (v11 & 0xF) != 0 )
    v11 = v11 - (*((_DWORD *)a2 + 5) & 0xF) + 16;
  *((_DWORD *)this + 22) += v11;
}
