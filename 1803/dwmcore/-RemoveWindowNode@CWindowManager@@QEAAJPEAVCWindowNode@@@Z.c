/*
 * XREFs of ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800BFF68
 * Callers:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180092B98 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1800B5D48 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800BFEAC (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x1800BFEEC (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 */

__int64 __fastcall CWindowManager::RemoveWindowNode(CWindowManager *this, struct CWindowNode *a2)
{
  __int64 v2; // rdx
  __int64 v4; // rdx
  int Entry; // ebx
  struct CWindowAssociationMapEntry *v6; // rbp
  __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  unsigned __int64 i; // rdi
  unsigned __int64 v13; // rax
  CHwndBitmap *v14; // rax
  int v15; // eax
  struct CWindowAssociationMapEntry *v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 75);
  v16 = 0LL;
  Entry = CWindowManager::FindEntry(this, v2, &v16);
  if ( Entry >= 0 )
  {
    v6 = v16;
    v7 = (__int64 *)((char *)v16 + 16);
    v8 = *((_QWORD *)v16 + 2);
    if ( (v8 & 2) != 0 )
      v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v9 = *((_QWORD *)v16 + 2) & 1LL;
    if ( v9 )
    {
      for ( i = 0LL; ; ++i )
      {
        v13 = (*v7 & 2) != 0 ? *(_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCuLL) : *v7 & 1;
        if ( i >= v13 )
          break;
        v14 = (CHwndBitmap *)CPtrArrayBase::operator[](v7, i);
        v15 = CHwndBitmap::SetVisual(v14, 0LL);
        Entry = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x98u);
          return (unsigned int)Entry;
        }
      }
      *((_QWORD *)v6 + 1) = 0LL;
    }
    else
    {
      v10 = CWindowManager::RemoveEntry(this, v4);
      Entry = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x9Fu);
    }
  }
  return (unsigned int)Entry;
}
