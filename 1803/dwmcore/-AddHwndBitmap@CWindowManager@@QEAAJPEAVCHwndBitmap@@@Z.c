/*
 * XREFs of ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180151F30
 * Callers:
 *     ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z @ 0x1801909C0 (-ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1800B5D48 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B9670 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800BFEAC (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ??2CWindowAssociationMapEntry@@SAPEAX_K@Z @ 0x1800C0158 (--2CWindowAssociationMapEntry@@SAPEAX_K@Z.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x180151E80 (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 */

__int64 __fastcall CWindowManager::AddHwndBitmap(CWindowManager *this, struct CHwndBitmap *a2)
{
  struct CWindowAssociationMapEntry *v4; // rdi
  __int64 v5; // r8
  unsigned __int64 v6; // r8
  int v7; // eax
  int v8; // ebx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-28h]
  struct CWindowAssociationMapEntry *v19; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v20; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0LL;
  if ( (int)CWindowManager::FindEntry(this, *((_QWORD *)a2 + 12), &v19) < 0 )
  {
    v9 = CWindowAssociationMapEntry::operator new();
    v10 = v9;
    if ( v9 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      v9[2] = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    v19 = (struct CWindowAssociationMapEntry *)v10;
    if ( !v10 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xC3u);
      return (unsigned int)v8;
    }
    *v10 = *((_QWORD *)a2 + 12);
    v11 = v10[2];
    if ( (v11 & 2) != 0 )
      v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v12 = v10[2] & 1LL;
    v8 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(v10 + 2), (unsigned __int64)a2, v12);
    if ( v8 < 0 )
    {
      v16 = 198;
    }
    else
    {
      v8 = CHwndBitmap::SetVisual(a2, 0LL);
      if ( v8 < 0 )
      {
        v16 = 199;
      }
      else
      {
        v13 = *((_DWORD *)this + 10);
        v20 = v10;
        v14 = v13 + 1;
        v8 = v13 + 1 < v13 ? 0x80070216 : 0;
        if ( v13 + 1 < v13 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
        }
        else if ( v14 > *((_DWORD *)this + 9) )
        {
          v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8u, 1, &v20);
          v8 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v13) = v20;
          *((_DWORD *)this + 10) = v14;
        }
        if ( v8 >= 0 )
          return (unsigned int)v8;
        v16 = 201;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v16);
    SAFE_DELETE<CWindowAssociationMapEntry>(&v19);
    return (unsigned int)v8;
  }
  v4 = v19;
  v5 = *((_QWORD *)v19 + 2);
  if ( (v5 & 2) != 0 )
    v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v6 = *((_QWORD *)v19 + 2) & 1LL;
  v7 = CPtrArrayBase::InsertAt((struct CWindowAssociationMapEntry *)((char *)v19 + 16), (unsigned __int64)a2, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v18 = 189;
    goto LABEL_9;
  }
  v7 = CHwndBitmap::SetVisual(a2, *((struct CVisual **)v4 + 1));
  v8 = v7;
  if ( v7 < 0 )
  {
    v18 = 190;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v18);
  }
  return (unsigned int)v8;
}
