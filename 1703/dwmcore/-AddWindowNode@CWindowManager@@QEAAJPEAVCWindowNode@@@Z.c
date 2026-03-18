/*
 * XREFs of ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800C17BC
 * Callers:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180052F50 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1800202E4 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800C1674 (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ??2CWindowAssociationMapEntry@@SAPEAX_K@Z @ 0x1800C1930 (--2CWindowAssociationMapEntry@@SAPEAX_K@Z.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x180144640 (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 */

__int64 __fastcall CWindowManager::AddWindowNode(CWindowManager *this, struct CWindowNode *a2)
{
  unsigned __int64 v4; // rcx
  int Entry; // ebx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v12; // eax
  struct CWindowAssociationMapEntry *v13; // rbp
  unsigned __int64 i; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  CHwndBitmap *v17; // rax
  int v18; // eax
  struct CWindowAssociationMapEntry *v19; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v20; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0LL;
  Entry = CWindowManager::FindEntry(this, *((_QWORD *)a2 + 72), &v19);
  if ( Entry >= 0 )
  {
    v13 = v19;
    for ( i = 0LL; ; ++i )
    {
      v15 = *((_QWORD *)v13 + 2);
      v16 = (v15 & 2) != 0 ? *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)v13 + 2) & 1LL;
      if ( i >= v16 )
        break;
      v17 = (CHwndBitmap *)CPtrArrayBase::operator[]((__int64 *)v13 + 2, i);
      v18 = CHwndBitmap::SetVisual(v17, a2);
      Entry = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x63u);
        return (unsigned int)Entry;
      }
    }
    *((_QWORD *)v13 + 1) = a2;
  }
  else
  {
    v6 = CWindowAssociationMapEntry::operator new(v4);
    v7 = v6;
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
      v19 = (struct CWindowAssociationMapEntry *)v6;
    }
    else
    {
      v7 = 0LL;
      v19 = 0LL;
    }
    if ( v7 )
    {
      v8 = (unsigned int)v19;
      *v7 = *((_QWORD *)a2 + 72);
      v7[1] = a2;
      v20 = v7;
      v9 = *((unsigned int *)this + 10);
      v10 = v9 + 1;
      if ( (int)v9 + 1 >= (unsigned int)v9 )
        v8 = v9 + 1;
      Entry = v10 < (unsigned int)v9 ? 0x80070216 : 0;
      if ( v10 < (unsigned int)v9 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Entry, 0xB5u);
      }
      else if ( v8 > *((_DWORD *)this + 9) )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8u, 1, &v20);
        Entry = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v9) = v20;
        *((_DWORD *)this + 10) = v8;
      }
      if ( Entry < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Entry, 0x70u);
        SAFE_DELETE<CWindowAssociationMapEntry>(&v19);
      }
    }
    else
    {
      Entry = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6Bu);
    }
  }
  return (unsigned int)Entry;
}
