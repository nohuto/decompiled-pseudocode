/*
 * XREFs of ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x180163270
 * Callers:
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x18012F380 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CVisualGroup::InitializeVisualGroupData(
        struct _RTL_GENERIC_TABLE **this,
        struct CVisual **a2,
        unsigned int a3,
        struct CVisual **a4,
        unsigned int a5)
{
  int v5; // ebx
  unsigned int v6; // ebp
  unsigned int v11; // edi
  int WeakReferenceBase; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // esi
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // r9d
  int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-48h]
  struct CWeakReferenceBase *v24[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+80h] [rbp+18h]

  v5 = 0;
  v6 = 0;
  if ( a3 )
  {
    v11 = v25;
    do
    {
      v24[0] = 0LL;
      if ( *a2 )
      {
        WeakReferenceBase = CComposition::GetWeakReferenceBase(this[2], *a2, v24);
        v5 = WeakReferenceBase;
        if ( WeakReferenceBase < 0 )
        {
          v23 = 230;
          goto LABEL_35;
        }
        v13 = *((unsigned int *)this + 20);
        v14 = v13 + 1;
        if ( (int)v13 + 1 >= (unsigned int)v13 )
          v11 = v13 + 1;
        v5 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
        if ( v14 < (unsigned int)v13 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
        }
        else if ( v11 > *((_DWORD *)this + 19) )
        {
          v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 7), 8u, 1, v24);
          v5 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
        }
        else
        {
          *((struct CWeakReferenceBase **)&this[7]->TableRoot + v13) = v24[0];
          *((_DWORD *)this + 20) = v11;
        }
        if ( v5 < 0 )
        {
          v23 = 232;
LABEL_25:
          v20 = v5;
          goto LABEL_36;
        }
      }
      ++v6;
      ++a2;
    }
    while ( v6 < a3 );
  }
  v16 = 0;
  if ( a5 )
  {
    v17 = v25;
    do
    {
      v24[0] = 0LL;
      if ( *a4 )
      {
        WeakReferenceBase = CComposition::GetWeakReferenceBase(this[2], *a4, v24);
        v5 = WeakReferenceBase;
        if ( WeakReferenceBase < 0 )
        {
          v23 = 242;
LABEL_35:
          v20 = WeakReferenceBase;
LABEL_36:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v23);
          return (unsigned int)v5;
        }
        v18 = *((unsigned int *)this + 28);
        v19 = v18 + 1;
        if ( (int)v18 + 1 >= (unsigned int)v18 )
          v17 = v18 + 1;
        v5 = v19 < (unsigned int)v18 ? 0x80070216 : 0;
        if ( v19 < (unsigned int)v18 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
        }
        else if ( v17 > *((_DWORD *)this + 27) )
        {
          v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 11), 8u, 1, v24);
          v5 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
        }
        else
        {
          *((struct CWeakReferenceBase **)&this[11]->TableRoot + v18) = v24[0];
          *((_DWORD *)this + 28) = v17;
        }
        if ( v5 < 0 )
        {
          v23 = 244;
          goto LABEL_25;
        }
      }
      ++v16;
      ++a4;
    }
    while ( v16 < a5 );
  }
  return (unsigned int)v5;
}
