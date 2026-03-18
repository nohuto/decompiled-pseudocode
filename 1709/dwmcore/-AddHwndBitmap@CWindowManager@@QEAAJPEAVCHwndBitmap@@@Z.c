/*
 * XREFs of ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180130390
 * Callers:
 *     ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z @ 0x1801680B0 (-ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x180074290 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B219C (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800B6864 (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ??2CWindowAssociationMapEntry@@SAPEAX_K@Z @ 0x1800B6AC0 (--2CWindowAssociationMapEntry@@SAPEAX_K@Z.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x180130290 (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 */

__int64 __fastcall CWindowManager::AddHwndBitmap(CWindowManager *this, struct CHwndBitmap *a2)
{
  struct CWindowAssociationMapEntry *v4; // rdi
  __int64 v5; // r8
  unsigned __int64 v6; // r8
  signed int v7; // eax
  DWORD v8; // ebx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // eax
  signed int v17; // eax
  unsigned int v19; // [rsp+20h] [rbp-28h]
  unsigned int v20; // [rsp+20h] [rbp-28h]
  struct CWindowAssociationMapEntry *v21; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v22; // [rsp+60h] [rbp+18h] BYREF

  v21 = 0LL;
  if ( (int)CWindowManager::FindEntry(this, *((_QWORD *)a2 + 12), &v21) < 0 )
  {
    v9 = CWindowAssociationMapEntry::operator new();
    v10 = v9;
    if ( v9 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      v9[2] = 0LL;
      v21 = (struct CWindowAssociationMapEntry *)v9;
    }
    else
    {
      v10 = 0LL;
      v21 = 0LL;
    }
    if ( !v10 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xC3u);
      return v8;
    }
    *v10 = *((_QWORD *)a2 + 12);
    v11 = v10[2];
    if ( (v11 & 2) != 0 )
      v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v12 = v10[2] & 1LL;
    v13 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(v10 + 2), (__int64)a2, v12);
    v8 = v13;
    if ( v13 < 0 )
    {
      v20 = 198;
    }
    else
    {
      v13 = CHwndBitmap::SetVisual(a2, 0LL);
      v8 = v13;
      if ( v13 >= 0 )
      {
        v14 = *((unsigned int *)this + 10);
        v15 = (unsigned int)v21;
        v22 = v10;
        v16 = v14 + 1;
        if ( (int)v14 + 1 >= (unsigned int)v14 )
          v15 = v14 + 1;
        v8 = v16 < (unsigned int)v14 ? 0x80070216 : 0;
        if ( v16 < (unsigned int)v14 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xB5u);
        }
        else if ( v15 > *((_DWORD *)this + 9) )
        {
          v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8u, 1, &v22);
          v8 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v14) = v22;
          *((_DWORD *)this + 10) = v15;
        }
        if ( (v8 & 0x80000000) == 0 )
          return v8;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xC9u);
LABEL_34:
        SAFE_DELETE<CWindowAssociationMapEntry>(&v21);
        return v8;
      }
      v20 = 199;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, v20);
    goto LABEL_34;
  }
  v4 = v21;
  v5 = *((_QWORD *)v21 + 2);
  if ( (v5 & 2) != 0 )
    v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v6 = *((_QWORD *)v21 + 2) & 1LL;
  v7 = CPtrArrayBase::InsertAt((struct CWindowAssociationMapEntry *)((char *)v21 + 16), (__int64)a2, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v19 = 189;
    goto LABEL_9;
  }
  v7 = CHwndBitmap::SetVisual(a2, *((struct CVisual **)v4 + 1));
  v8 = v7;
  if ( v7 < 0 )
  {
    v19 = 190;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, v19);
  }
  return v8;
}
