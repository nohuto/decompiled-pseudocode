/*
 * XREFs of ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x18008B9CC
 * Callers:
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x18008BBC0 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 * Callees:
 *     ??1CAtlasEntry@@QEAA@XZ @ 0x18008B98C (--1CAtlasEntry@@QEAA@XZ.c)
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE@gsl@@@Z @ 0x18008BADC (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE@gsl@@@Z.c)
 */

void __fastcall CAtlasTexture::GenerateWhitePixel(CAtlasTexture *this)
{
  _QWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v2[2]; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+40h] [rbp-18h]

  v2[1] = 0LL;
  v1[0] = &unk_1801FFE8C;
  v1[1] = 4LL;
  v2[0] = this;
  v3 = 0;
  CAtlasTexture::UpdateGradientStrip(this, v2, v1);
  v2[0] = 0LL;
  CAtlasEntry::~CAtlasEntry((CAtlasEntry *)v2);
}
