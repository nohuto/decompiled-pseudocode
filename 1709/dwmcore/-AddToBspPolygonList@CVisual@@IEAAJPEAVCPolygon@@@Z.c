/*
 * XREFs of ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x180176C14
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x1801D06B8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18011A640 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x180177F3C (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 */

__int64 __fastcall CVisual::AddToBspPolygonList(CVisual *this, struct CPolygon *a2)
{
  __int64 BspPolygonList; // rbx
  _QWORD *v4; // rax
  DWORD v5; // edi
  __int64 v6; // rcx
  unsigned int v7; // edx
  unsigned int v8; // eax
  signed int v9; // eax
  struct CPolygon *v11; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+18h]

  v11 = a2;
  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  if ( !BspPolygonList )
  {
    v4 = HeapAlloc(WPF::g_processHeap, 0, 0x20uLL);
    BspPolygonList = (__int64)v4;
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      *((_DWORD *)v4 + 4) = 0;
      *((_DWORD *)v4 + 5) = 0;
      *((_DWORD *)v4 + 6) = 0;
    }
    else
    {
      BspPolygonList = 0LL;
    }
    if ( !BspPolygonList )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x155Bu);
      return v5;
    }
    CVisual::SetBspPolygonList(this, BspPolygonList);
  }
  v6 = *(unsigned int *)(BspPolygonList + 24);
  v7 = v12;
  v8 = v6 + 1;
  if ( (int)v6 + 1 >= (unsigned int)v6 )
    v7 = v6 + 1;
  v5 = v8 < (unsigned int)v6 ? 0x80070216 : 0;
  if ( v8 < (unsigned int)v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xB5u);
  }
  else if ( v7 > *(_DWORD *)(BspPolygonList + 20) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(BspPolygonList, 8u, 1, &v11);
    v5 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)BspPolygonList + 8 * v6) = v11;
    *(_DWORD *)(BspPolygonList + 24) = v7;
  }
  if ( (v5 & 0x80000000) != 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x155Fu);
  else
    (**(void (__fastcall ***)(struct CPolygon *))v11)(v11);
  return v5;
}
