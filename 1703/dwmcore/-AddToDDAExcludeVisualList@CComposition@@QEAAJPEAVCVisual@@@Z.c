/*
 * XREFs of ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18013F2FC
 * Callers:
 *     ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x180131310 (-Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMIL.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FindDDAExcludeVisual@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x18013F5A4 (-FindDDAExcludeVisual@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::AddToDDAExcludeVisualList(CComposition *this, struct CVisual *a2)
{
  int v3; // ebx
  unsigned int DDAExcludeVisual; // eax
  struct CResource *v5; // rdx
  __int64 v6; // rcx
  int WeakReferenceBase; // eax
  unsigned int v8; // edx
  _QWORD *v9; // r10
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // eax
  struct CWeakReferenceBase *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  DDAExcludeVisual = CComposition::FindDDAExcludeVisual(this, a2);
  if ( DDAExcludeVisual == *(_DWORD *)(v6 + 1016) )
  {
    v14 = 0LL;
    WeakReferenceBase = CComposition::GetWeakReferenceBase((struct _RTL_GENERIC_TABLE *)v6, v5, &v14);
    v3 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x117Eu);
    }
    else
    {
      v8 = (unsigned int)v14;
      v9 = (_QWORD *)((char *)this + 992);
      v10 = *((unsigned int *)this + 254);
      v11 = v10 + 1;
      if ( (int)v10 + 1 >= (unsigned int)v10 )
        v8 = v10 + 1;
      v3 = v11 < (unsigned int)v10 ? 0x80070216 : 0;
      if ( v11 < (unsigned int)v10 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v8 > *((_DWORD *)this + 253) )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 8u, 1, &v14);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*v9 + 8 * v10) = v14;
        *((_DWORD *)this + 254) = v8;
      }
      if ( v3 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x117Fu);
    }
  }
  return (unsigned int)v3;
}
