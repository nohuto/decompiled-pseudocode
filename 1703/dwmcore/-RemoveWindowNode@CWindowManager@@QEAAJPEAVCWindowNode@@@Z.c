/*
 * XREFs of ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800C1734
 * Callers:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180052F50 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1800202E4 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800C1674 (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x1800C16B4 (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 */

__int64 __fastcall CWindowManager::RemoveWindowNode(CWindowManager *this, struct CWindowNode *a2)
{
  __int64 v2; // rsi
  int Entry; // ebx
  struct CWindowAssociationMapEntry *v5; // rbp
  __int64 *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  unsigned __int64 i; // rdi
  unsigned __int64 v12; // rax
  CHwndBitmap *v13; // rax
  int v14; // eax
  struct CWindowAssociationMapEntry *v15; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 72);
  v15 = 0LL;
  Entry = CWindowManager::FindEntry(this, v2, &v15);
  if ( Entry >= 0 )
  {
    v5 = v15;
    v6 = (__int64 *)((char *)v15 + 16);
    v7 = *((_QWORD *)v15 + 2);
    if ( (v7 & 2) != 0 )
      v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v8 = *((_QWORD *)v15 + 2) & 1LL;
    if ( v8 )
    {
      for ( i = 0LL; ; ++i )
      {
        v12 = (*v6 & 2) != 0 ? *(_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCuLL) : *v6 & 1;
        if ( i >= v12 )
          break;
        v13 = (CHwndBitmap *)CPtrArrayBase::operator[](v6, i);
        v14 = CHwndBitmap::SetVisual(v13, 0LL);
        Entry = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x98u);
          return (unsigned int)Entry;
        }
      }
      *((_QWORD *)v5 + 1) = 0LL;
    }
    else
    {
      v9 = CWindowManager::RemoveEntry(this, v2);
      Entry = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x9Fu);
    }
  }
  return (unsigned int)Entry;
}
