/*
 * XREFs of ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800BFFEC
 * Callers:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180092B98 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1800B5D48 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800BFEAC (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ??2CWindowAssociationMapEntry@@SAPEAX_K@Z @ 0x1800C0158 (--2CWindowAssociationMapEntry@@SAPEAX_K@Z.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x180151E80 (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 */

__int64 __fastcall CWindowManager::AddWindowNode(CWindowManager *this, struct CWindowNode *a2)
{
  unsigned __int64 v4; // rcx
  int Entry; // ebx
  struct CWindowAssociationMapEntry *v6; // rax
  struct CWindowAssociationMapEntry *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v11; // eax
  struct CWindowAssociationMapEntry *v12; // rbp
  unsigned __int64 i; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  CHwndBitmap *v16; // rax
  int v17; // eax
  struct CWindowAssociationMapEntry *v18; // [rsp+58h] [rbp+10h] BYREF
  struct CWindowAssociationMapEntry *v19; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  Entry = CWindowManager::FindEntry(this, *((_QWORD *)a2 + 75), &v18);
  if ( Entry >= 0 )
  {
    v12 = v18;
    for ( i = 0LL; ; ++i )
    {
      v14 = *((_QWORD *)v12 + 2);
      v15 = (v14 & 2) != 0 ? *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)v12 + 2) & 1LL;
      if ( i >= v15 )
        break;
      v16 = (CHwndBitmap *)CPtrArrayBase::operator[]((__int64 *)v12 + 2, i);
      v17 = CHwndBitmap::SetVisual(v16, a2);
      Entry = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x63u);
        return (unsigned int)Entry;
      }
    }
    *((_QWORD *)v12 + 1) = a2;
  }
  else
  {
    v6 = (struct CWindowAssociationMapEntry *)CWindowAssociationMapEntry::operator new(v4);
    v7 = v6;
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      *((_QWORD *)v6 + 1) = 0LL;
      *((_QWORD *)v6 + 2) = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    v18 = v7;
    if ( v7 )
    {
      *(_QWORD *)v7 = *((_QWORD *)a2 + 75);
      *((_QWORD *)v7 + 1) = a2;
      v8 = *((_DWORD *)this + 10);
      v19 = v7;
      v9 = v8 + 1;
      Entry = v8 + 1 < v8 ? 0x80070216 : 0;
      if ( v8 + 1 < v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Entry, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)this + 9) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8u, 1, &v19);
        Entry = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v8) = v19;
        *((_DWORD *)this + 10) = v9;
      }
      if ( Entry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Entry, 0x70u);
        SAFE_DELETE<CWindowAssociationMapEntry>(&v18);
      }
    }
    else
    {
      Entry = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Bu);
    }
  }
  return (unsigned int)Entry;
}
