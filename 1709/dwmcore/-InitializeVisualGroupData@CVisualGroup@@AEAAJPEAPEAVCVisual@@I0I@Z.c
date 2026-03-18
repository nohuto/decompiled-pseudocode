/*
 * XREFs of ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801783B0
 * Callers:
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801785EC (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 */

__int64 __fastcall CVisualGroup::InitializeVisualGroupData(
        CComposition **this,
        struct CVisual **a2,
        unsigned int a3,
        struct CVisual **a4,
        unsigned int a5)
{
  signed int v5; // ebx
  unsigned int v6; // ebp
  unsigned int v11; // edi
  unsigned int v12; // r14d
  int WeakReferenceBase; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  signed int v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // edi
  unsigned int v19; // r14d
  __int64 v20; // rcx
  unsigned int v21; // eax
  DWORD v22; // r9d
  signed int v23; // eax
  unsigned int v25; // [rsp+20h] [rbp-48h]
  struct CWeakReferenceBase *v26[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+80h] [rbp+18h]

  v5 = 0;
  v6 = 0;
  if ( a3 )
  {
    v11 = v27;
    do
    {
      v26[0] = 0LL;
      v12 = v11;
      if ( *a2 )
      {
        WeakReferenceBase = CComposition::GetWeakReferenceBase(this[2], *a2, v26);
        v5 = WeakReferenceBase;
        if ( WeakReferenceBase < 0 )
        {
          v25 = 165;
          goto LABEL_35;
        }
        v14 = *((unsigned int *)this + 20);
        v15 = v14 + 1;
        v11 = v14 + 1;
        if ( (int)v14 + 1 < (unsigned int)v14 )
          v11 = v12;
        v5 = v15 < (unsigned int)v14 ? 0x80070216 : 0;
        if ( v15 < (unsigned int)v14 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xB5u);
        }
        else if ( v11 > *((_DWORD *)this + 19) )
        {
          v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 7), 8u, 1, v26);
          v5 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0xC0u);
        }
        else
        {
          *((struct CWeakReferenceBase **)this[7] + v14) = v26[0];
          *((_DWORD *)this + 20) = v11;
        }
        if ( v5 < 0 )
        {
          v25 = 167;
LABEL_25:
          v22 = v5;
          goto LABEL_36;
        }
      }
      ++v6;
      ++a2;
    }
    while ( v6 < a3 );
  }
  v17 = 0;
  if ( a5 )
  {
    v18 = v27;
    do
    {
      v26[0] = 0LL;
      v19 = v18;
      if ( *a4 )
      {
        WeakReferenceBase = CComposition::GetWeakReferenceBase(this[2], *a4, v26);
        v5 = WeakReferenceBase;
        if ( WeakReferenceBase < 0 )
        {
          v25 = 177;
LABEL_35:
          v22 = WeakReferenceBase;
LABEL_36:
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, v25);
          return (unsigned int)v5;
        }
        v20 = *((unsigned int *)this + 28);
        v21 = v20 + 1;
        v18 = v20 + 1;
        if ( (int)v20 + 1 < (unsigned int)v20 )
          v18 = v19;
        v5 = v21 < (unsigned int)v20 ? 0x80070216 : 0;
        if ( v21 < (unsigned int)v20 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xB5u);
        }
        else if ( v18 > *((_DWORD *)this + 27) )
        {
          v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 11), 8u, 1, v26);
          v5 = v23;
          if ( v23 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0xC0u);
        }
        else
        {
          *((struct CWeakReferenceBase **)this[11] + v20) = v26[0];
          *((_DWORD *)this + 28) = v18;
        }
        if ( v5 < 0 )
        {
          v25 = 179;
          goto LABEL_25;
        }
      }
      ++v17;
      ++a4;
    }
    while ( v17 < a5 );
  }
  return (unsigned int)v5;
}
