/*
 * XREFs of ??_ECCompositionCapabilities@@MEAAPEAXI@Z @ 0x180176270
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180034F1C (--1CResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CCompositionCapabilities *__fastcall CCompositionCapabilities::`vector deleting destructor'(
        CCompositionCapabilities *this,
        char a2)
{
  __int64 v2; // r9
  __int64 v4; // r8
  unsigned int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // rcx

  v2 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &CCompositionCapabilities::`vftable';
  v4 = 0LL;
  v6 = *(_DWORD *)(v2 + 1144);
  v7 = *(_QWORD *)(v2 + 1120);
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
        v8 = (unsigned int)v4;
        LODWORD(v4) = v4 + 1;
        *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(v7 + 8LL * (unsigned int)v4);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(v2 + 1144) - 1 );
    }
    --*(_DWORD *)(v2 + 1144);
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
