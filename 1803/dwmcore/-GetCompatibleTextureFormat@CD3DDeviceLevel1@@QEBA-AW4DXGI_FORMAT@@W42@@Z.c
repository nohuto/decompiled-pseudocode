/*
 * XREFs of ?GetCompatibleTextureFormat@CD3DDeviceLevel1@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x1800766C4
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180089A7C (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDeviceLevel1::GetCompatibleTextureFormat(CD3DDeviceLevel1 *this, enum DXGI_FORMAT a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  v2 = a2 - 2;
  if ( !v2 )
    return *((unsigned int *)this + 210);
  v3 = v2 - 8;
  if ( !v3 )
    return *((unsigned int *)this + 208);
  v4 = v3 - 14;
  if ( !v4 )
    return *((unsigned int *)this + 207);
  v5 = v4 - 4;
  if ( v5 )
  {
    v6 = v5 - 33;
    if ( !v6 )
      return *((unsigned int *)this + 201);
    v7 = v6 - 4;
    if ( !v7 )
      return *((unsigned int *)this + 202);
    v8 = v7 - 22;
    if ( !v8 )
      return *((unsigned int *)this + 205);
    if ( v8 == 1 )
      return *((unsigned int *)this + 206);
  }
  return *((unsigned int *)this + 203);
}
