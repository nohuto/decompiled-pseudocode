/*
 * XREFs of ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18007E1B4
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18008B3F0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18017B704 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x180078E78 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007E640 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18007F3BC (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007FEBC (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080104 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180080234 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180080354 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18013E914 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        const struct FastRegion::Internal::CRgnData **this,
        __int64 a2)
{
  unsigned int v3; // ebx
  struct FastRegion::Internal::CRgnData *v4; // rdx
  unsigned int v6; // r15d
  float *v7; // rcx
  int v8; // r9d
  int v9; // r10d
  int v10; // edi
  int v12; // eax
  float *v13; // rsi
  int v14; // [rsp+24h] [rbp-DCh]
  int v15; // [rsp+2Ch] [rbp-D4h]
  struct tagRECT v16; // [rsp+30h] [rbp-D0h]
  struct tagRECT v17; // [rsp+40h] [rbp-C0h] BYREF
  struct FastRegion::Internal::CRgnData *v18; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v19[18]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v20[80]; // [rsp+A0h] [rbp-60h] BYREF
  int v21; // [rsp+F0h] [rbp-10h] BYREF
  void *lpMem; // [rsp+F8h] [rbp-8h]
  _BYTE v23[256]; // [rsp+100h] [rbp+0h] BYREF

  v19[0] = 0;
  v3 = 0;
  v4 = (struct FastRegion::Internal::CRgnData *)v19;
  v18 = (struct FastRegion::Internal::CRgnData *)v19;
  while ( 1 )
  {
    v6 = v3 + 5;
    if ( v3 + 5 > 1 )
      v6 = 1;
    v7 = (float *)(a2 + 16LL * v3);
    v8 = (int)*v7;
    v14 = (int)v7[1];
    v9 = (int)v7[2];
    v15 = (int)v7[3];
    if ( v8 >= v9 || v14 >= v15 )
    {
      *(_DWORD *)v4 = 0;
    }
    else
    {
      *(_DWORD *)v4 = 2;
      *((_DWORD *)v4 + 1) = v8;
      *((_DWORD *)v4 + 2) = v9;
      *((_DWORD *)v4 + 3) = v14;
      *((_DWORD *)v4 + 4) = 16;
      *((_DWORD *)v4 + 7) = v8;
      *((_DWORD *)v4 + 8) = v9;
      *((_DWORD *)v4 + 5) = v15;
      *((_DWORD *)v4 + 6) = 16;
    }
    if ( ++v3 < v6 )
      break;
LABEL_8:
    v4 = v18;
    if ( *(_DWORD *)v18 )
    {
      if ( *(_DWORD *)*this )
      {
        v12 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*this, v18);
        v21 = 0;
        lpMem = v23;
        v10 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v21, v12);
        if ( v10 < 0 )
        {
          FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v21);
        }
        else
        {
          FastRegion::Internal::CRgnData::Union((FastRegion::Internal::CRgnData *)lpMem, *this, v18);
          v10 = FastRegion::CRegion::SaveResult(
                  (FastRegion::CRegion *)this,
                  (struct FastRegion::Internal::CWorkBuffer *)&v21);
          if ( v23 != lpMem )
            operator delete(lpMem);
        }
      }
      else
      {
        v10 = FastRegion::CRegion::Copy((FastRegion::CRegion *)this, (const struct CRegion *)&v18);
      }
      if ( v10 < 0 )
        goto LABEL_27;
      v4 = v18;
    }
    if ( v3 )
    {
      v10 = 0;
      goto LABEL_15;
    }
  }
  v13 = (float *)(16LL * v3 + a2 + 8);
  while ( 1 )
  {
    v16.left = (int)*(v13 - 2);
    v16.top = (int)*(v13 - 1);
    v16.right = (int)*v13;
    v16.bottom = (int)v13[1];
    v17 = v16;
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v20, &v17);
    v10 = FastRegion::CRegion::Union((FastRegion::CRegion *)&v18, (const struct CRegion *)v20);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v20);
    if ( v10 < 0 )
      break;
    ++v3;
    v13 += 4;
    if ( v3 >= v6 )
      goto LABEL_8;
  }
LABEL_27:
  v4 = v18;
LABEL_15:
  if ( v19 != (_DWORD *)v4 )
    operator delete(v4);
  return (unsigned int)v10;
}
