/*
 * XREFs of ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18001719C
 * Callers:
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800172D0 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 * Callees:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800159B4 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromFragment(
        struct CBrushRenderingGraph **this,
        struct CRenderingTechniqueFragment *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  __int64 *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // r14d
  int v11; // r10d
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v16; // r8d
  __int64 i; // rcx
  struct CBrushRenderingGraph *v18; // xmm0_8
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  struct CBrushRenderingGraph *v22; // [rsp+20h] [rbp-18h] BYREF
  int v23; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v4 = (__int64)(*((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4)) >> 4;
  if ( (_DWORD)v4 )
  {
    v6 = (__int64 *)(*((_QWORD *)a2 + 4) + 8LL);
    v7 = (unsigned int)v4;
    do
    {
      v8 = *v6;
      v9 = v2 + 1;
      v6 += 2;
      if ( v8 )
        v9 = v2;
      v2 = v9;
      --v7;
    }
    while ( v7 );
  }
  v10 = 0;
  if ( v2 )
  {
    v11 = v23;
    do
    {
      v12 = 0;
      v13 = v10;
      v14 = (__int64)(*((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4)) >> 4;
      if ( (_DWORD)v14 )
      {
        while ( *(_QWORD *)(*((_QWORD *)a2 + 4) + 16LL * v12 + 8) || v13-- )
        {
          if ( ++v12 >= (unsigned int)v14 )
            goto LABEL_12;
        }
        CRenderingTechniqueFragment::GetSurfaceDescription(
          a2,
          this[1],
          v12,
          (struct CRenderingTechniqueFragment::SurfaceDescription *)&v22);
        v11 = v23;
      }
LABEL_12:
      if ( BYTE4(v22) )
        goto LABEL_15;
      v16 = *((_DWORD *)this + 27);
      for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(i + 1) )
      {
        v21 = 4LL * (unsigned int)i;
        if ( (_DWORD)v22 == HIDWORD(this[v21 + 14]) && !LOBYTE(this[v21 + 15]) && (_BYTE)v11 == BYTE4(this[v21 + 15]) )
          break;
      }
      if ( (unsigned int)i >= v16 )
      {
LABEL_15:
        v18 = v22;
        v19 = 4LL * (unsigned int)(*((_DWORD *)this + 27))++;
        *(struct CBrushRenderingGraph **)((char *)&this[v19 + 14] + 4) = v18;
        HIDWORD(this[v19 + 15]) = v11;
      }
      else
      {
        BYTE6(this[4 * i + 15]) |= BYTE2(v23);
      }
      ++v10;
    }
    while ( v10 < v2 );
  }
  *((_DWORD *)this + 28) |= *((_DWORD *)a2 + 7);
  v20 = *((_DWORD *)a2 + 5);
  if ( (v20 & 0xF) != 0 )
    v20 += 16 - (*((_DWORD *)a2 + 5) & 0xF);
  *((_DWORD *)this + 26) += v20;
}
