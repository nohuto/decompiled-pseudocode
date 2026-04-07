/*
 * XREFs of ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x18009AF50
 * Callers:
 *     ??_ECDesktopThumbnailBase@@MEAAPEAXI@Z @ 0x180079F70 (--_ECDesktopThumbnailBase@@MEAAPEAXI@Z.c)
 *     ??_ECDesktopThumbnail@@MEAAPEAXI@Z @ 0x18009B0B0 (--_ECDesktopThumbnail@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x18009C500 (-_ClearClones@CDesktopThumbnailBase@@IEAAXXZ.c)
 */

void __fastcall CDesktopThumbnailBase::~CDesktopThumbnailBase(CDesktopThumbnailBase *this)
{
  CDesktopManager *v1; // r9
  __int64 v3; // r8
  unsigned int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // rcx

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  *(_QWORD *)this = &CDesktopThumbnailBase::`vftable';
  v3 = 0LL;
  v4 = *((_DWORD *)v1 + 186);
  v5 = *((_QWORD *)v1 + 90);
  if ( v4 )
  {
    do
    {
      if ( this == *(CDesktopThumbnailBase **)(v5 + 8 * v3) )
        break;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v4 );
  }
  if ( (unsigned int)v3 < v4 )
  {
    if ( (unsigned int)v3 < v4 - 1 )
    {
      do
      {
        v6 = (unsigned int)v3;
        LODWORD(v3) = v3 + 1;
        *(_QWORD *)(v5 + 8 * v6) = *(_QWORD *)(v5 + 8LL * (unsigned int)v3);
      }
      while ( (unsigned int)v3 < *((_DWORD *)v1 + 186) - 1 );
    }
    --*((_DWORD *)v1 + 186);
  }
  CDesktopThumbnailBase::_ClearClones(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 240);
  CVisual::~CVisual(this);
}
