/*
 * XREFs of ??_ECCompositionCapabilities@@MEAAPEAXI@Z @ 0x1800C6A50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180051198 (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CCompositionCapabilities *__fastcall CCompositionCapabilities::`vector deleting destructor'(
        CCompositionCapabilities *this,
        char a2)
{
  __int64 v2; // r9
  __int64 v4; // rcx
  unsigned int v6; // r8d
  __int64 v7; // r10
  __int64 v9; // rdx

  v2 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &CCompositionCapabilities::`vftable';
  v4 = 0LL;
  v6 = *(_DWORD *)(v2 + 1104);
  v7 = *(_QWORD *)(v2 + 1080);
  if ( v6 )
  {
    do
    {
      if ( this == *(CCompositionCapabilities **)(v7 + 8 * v4) )
        break;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v6 );
  }
  if ( (unsigned int)v4 < v6 )
  {
    if ( (unsigned int)v4 < v6 - 1 )
    {
      do
      {
        v9 = (unsigned int)(v4 + 1);
        *(_QWORD *)(v7 + 8 * v4) = *(_QWORD *)(v7 + 8 * v9);
        v6 = *(_DWORD *)(v2 + 1104);
        v4 = v9;
      }
      while ( (unsigned int)v9 < v6 - 1 );
    }
    *(_DWORD *)(v2 + 1104) = v6 - 1;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
