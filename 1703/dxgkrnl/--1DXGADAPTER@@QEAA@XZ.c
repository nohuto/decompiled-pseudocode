/*
 * XREFs of ??1DXGADAPTER@@QEAA@XZ @ 0x1C016D334
 * Callers:
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C00383E0 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C00062BC (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C00214E8 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C0021510 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C016D848 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::~DXGADAPTER(DXGADAPTER *this)
{
  ADAPTER_DISPLAY *v2; // rcx
  ADAPTER_RENDER *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  void *v5; // rcx
  struct _ERESOURCE *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  __int64 i; // rsi
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx

  DXGADAPTER::Destroy(this);
  v2 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 285);
  if ( v2 )
  {
    ADAPTER_DISPLAY::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 285) = 0LL;
  }
  v3 = (ADAPTER_RENDER *)*((_QWORD *)this + 286);
  if ( v3 )
  {
    ADAPTER_RENDER::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 286) = 0LL;
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 29);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    v5 = (void *)*((_QWORD *)this + 29);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    *((_QWORD *)this + 29) = 0LL;
  }
  v6 = (struct _ERESOURCE *)*((_QWORD *)this + 18);
  if ( v6 )
  {
    ExDeleteResourceLite(v6);
    v7 = (void *)*((_QWORD *)this + 18);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    *((_QWORD *)this + 18) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 290);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)this + 290) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 454);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( *((_QWORD *)this + 274) )
  {
    for ( i = 0LL;
          (unsigned int)i < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
          i = (unsigned int)(i + 1) )
    {
      v11 = *(void **)(*((_QWORD *)this + 274) + 48 * i + 24);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      v12 = *(void **)(*((_QWORD *)this + 274) + 48 * i + 32);
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      *(_QWORD *)(*((_QWORD *)this + 274) + 48 * i + 24) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 274) + 48 * i + 32) = 0LL;
    }
    v13 = (void *)*((_QWORD *)this + 274);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    *((_QWORD *)this + 274) = 0LL;
  }
  *((_QWORD *)this + 2) = 0LL;
}
