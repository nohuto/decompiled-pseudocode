/*
 * XREFs of ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180149EBC
 * Callers:
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x18014A820 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x18014A1F8 (-FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::AddToMagnifierList(CComposition *this, struct CVisual *a2)
{
  int v3; // ebx
  unsigned int Magnifier; // eax
  struct CResource *v5; // rdx
  CComposition *v6; // rcx
  int WeakReferenceBase; // eax
  _QWORD *v8; // r10
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  struct CWeakReferenceBase *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  Magnifier = CComposition::FindMagnifier(this, a2);
  if ( Magnifier == *((_DWORD *)v6 + 244) )
  {
    v13 = 0LL;
    WeakReferenceBase = CComposition::GetWeakReferenceBase(v6, v5, &v13);
    v3 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WeakReferenceBase, 0x1033u);
    }
    else
    {
      v8 = (_QWORD *)((char *)this + 952);
      v9 = *((_DWORD *)this + 244);
      v10 = v9 + 1;
      v3 = v9 + 1 < v9 ? 0x80070216 : 0;
      if ( v9 + 1 < v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v10 > *((_DWORD *)this + 243) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v8, 8u, 1, &v13);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*v8 + 8LL * v9) = v13;
        *((_DWORD *)this + 244) = v10;
      }
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1034u);
    }
  }
  return (unsigned int)v3;
}
