/*
 * XREFs of ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x1801A6FF4
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x180212AE8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18013C65C (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x1801A8C58 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 */

__int64 __fastcall CVisual::AddToBspPolygonList(CVisual *this, struct CPolygon *a2)
{
  __int64 BspPolygonList; // rbx
  _QWORD *v4; // rax
  int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  struct CPolygon *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x174Au);
      return (unsigned int)v5;
    }
    CVisual::SetBspPolygonList(this, BspPolygonList);
  }
  v6 = *(_DWORD *)(BspPolygonList + 24);
  v7 = v6 + 1;
  v5 = v6 + 1 < v6 ? 0x80070216 : 0;
  if ( v6 + 1 < v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( v7 > *(_DWORD *)(BspPolygonList + 20) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(BspPolygonList, 8u, 1, &v10);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)BspPolygonList + 8LL * v6) = v10;
    *(_DWORD *)(BspPolygonList + 24) = v7;
  }
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x174Eu);
  else
    (**(void (__fastcall ***)(struct CPolygon *))v10)(v10);
  return (unsigned int)v5;
}
