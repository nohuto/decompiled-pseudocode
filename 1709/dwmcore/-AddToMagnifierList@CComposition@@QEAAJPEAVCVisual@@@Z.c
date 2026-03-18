/*
 * XREFs of ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180127C68
 * Callers:
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x180128ABC (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x180127F54 (-FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::AddToMagnifierList(CComposition *this, struct CVisual *a2)
{
  signed int v3; // ebx
  unsigned int Magnifier; // eax
  struct CResource *v5; // rdx
  CComposition *v6; // rcx
  signed int WeakReferenceBase; // eax
  unsigned int v8; // edx
  _QWORD *v9; // r10
  __int64 v10; // rcx
  unsigned int v11; // eax
  signed int v12; // eax
  struct CWeakReferenceBase *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  Magnifier = CComposition::FindMagnifier(this, a2);
  if ( Magnifier == *((_DWORD *)v6 + 238) )
  {
    v14 = 0LL;
    WeakReferenceBase = CComposition::GetWeakReferenceBase(v6, v5, &v14);
    v3 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, WeakReferenceBase, 0xFE2u);
    }
    else
    {
      v8 = (unsigned int)v14;
      v9 = (_QWORD *)((char *)this + 928);
      v10 = *((unsigned int *)this + 238);
      v11 = v10 + 1;
      if ( (int)v10 + 1 >= (unsigned int)v10 )
        v8 = v10 + 1;
      v3 = v11 < (unsigned int)v10 ? 0x80070216 : 0;
      if ( v11 < (unsigned int)v10 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
      }
      else if ( v8 > *((_DWORD *)this + 237) )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 8u, 1, &v14);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*v9 + 8 * v10) = v14;
        *((_DWORD *)this + 238) = v8;
      }
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xFE3u);
    }
  }
  return (unsigned int)v3;
}
