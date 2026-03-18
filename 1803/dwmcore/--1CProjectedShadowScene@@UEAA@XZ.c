/*
 * XREFs of ??1CProjectedShadowScene@@UEAA@XZ @ 0x1801A1CE4
 * Callers:
 *     ??_GCProjectedShadowScene@@UEAAPEAXI@Z @ 0x1801A1DD0 (--_GCProjectedShadowScene@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?UnRegisterNotifierForShadows@CProjectedShadowScene@@QEAAXPEAVCResource@@@Z @ 0x1801A235C (-UnRegisterNotifierForShadows@CProjectedShadowScene@@QEAAXPEAVCResource@@@Z.c)
 */

void __fastcall CProjectedShadowScene::~CProjectedShadowScene(struct CResource **this)
{
  int v1; // esi
  __int64 v3; // rdi
  char *v4; // rcx
  char *v5; // rcx

  v1 = 0;
  *this = (struct CResource *)&CProjectedShadowScene::`vftable';
  if ( (int)((this[8] - this[7]) >> 3) > 0 )
  {
    v3 = 0LL;
    do
    {
      CProjectedShadowScene::UnRegisterNotifierForShadows(
        (CProjectedShadowScene *)this,
        *(struct CResource **)((char *)this[7] + v3));
      v3 += 8LL;
      ++v1;
    }
    while ( v1 < (int)((this[8] - this[7]) >> 3) );
  }
  CProjectedShadowScene::UnRegisterNotifierForShadows((CProjectedShadowScene *)this, this[10]);
  this[8] = this[7];
  v4 = (char *)this[11];
  this[12] = (struct CResource *)v4;
  if ( v4 )
  {
    std::_Deallocate(v4, (this[13] - (struct CResource *)v4) >> 3, 8uLL);
    this[11] = 0LL;
    this[12] = 0LL;
    this[13] = 0LL;
  }
  v5 = (char *)this[7];
  if ( v5 )
  {
    std::_Deallocate(v5, (this[9] - (struct CResource *)v5) >> 3, 8uLL);
    this[7] = 0LL;
    this[8] = 0LL;
    this[9] = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
