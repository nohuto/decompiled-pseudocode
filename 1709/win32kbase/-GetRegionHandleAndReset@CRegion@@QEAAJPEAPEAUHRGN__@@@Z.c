/*
 * XREFs of ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C003A604
 * Callers:
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C0021128 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0039254 (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?SetEmpty@CRegion@@QEAAXXZ @ 0x1C003A830 (-SetEmpty@CRegion@@QEAAXXZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0046D44 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 */

__int64 __fastcall CRegion::GetRegionHandleAndReset(CRegion *this, HRGN *a2)
{
  int v3; // r8d
  unsigned int v5; // ebx
  int v6; // r8d
  HRGN v7; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *((_DWORD *)this + 1);
  v5 = -1073741823;
  if ( !v3 )
    goto LABEL_6;
  v6 = v3 - 1;
  if ( !v6 )
  {
    *a2 = (HRGN)1;
LABEL_6:
    v5 = 0;
    goto LABEL_7;
  }
  if ( v6 == 1 )
  {
    v9 = *((_QWORD *)this + 1);
    v7 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v9);
    *a2 = v7;
    if ( !v7 )
    {
      v5 = -1073741801;
      goto LABEL_7;
    }
    *((_QWORD *)this + 1) = 0LL;
    goto LABEL_6;
  }
LABEL_7:
  CRegion::SetEmpty(this);
  return v5;
}
