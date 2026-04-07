/*
 * XREFs of ??1CPerMonitorDesktopThumbnail@@EEAA@XZ @ 0x18009B024
 * Callers:
 *     ??_GCPerMonitorDesktopThumbnail@@EEAAPEAXI@Z @ 0x18009B110 (--_GCPerMonitorDesktopThumbnail@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CPerMonitorDesktopThumbnail::~CPerMonitorDesktopThumbnail(CPerMonitorDesktopThumbnail *this)
{
  __int64 v1; // r9
  __int64 v3; // r8
  unsigned int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // rcx
  CBaseObject *v7; // rcx

  v1 = *((_QWORD *)this + 9);
  *(_QWORD *)this = &CPerMonitorDesktopThumbnail::`vftable';
  v3 = 0LL;
  v4 = *(_DWORD *)(v1 + 304);
  v5 = *(_QWORD *)(v1 + 280);
  if ( v4 )
  {
    do
    {
      if ( this == *(CPerMonitorDesktopThumbnail **)(v5 + 8 * v3) )
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
      while ( (unsigned int)v3 < *(_DWORD *)(v1 + 304) - 1 );
    }
    --*(_DWORD *)(v1 + 304);
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 9);
  if ( v7 )
    CBaseObject::Release(v7);
  CDesktopThumbnailCVI::~CDesktopThumbnailCVI(this);
}
