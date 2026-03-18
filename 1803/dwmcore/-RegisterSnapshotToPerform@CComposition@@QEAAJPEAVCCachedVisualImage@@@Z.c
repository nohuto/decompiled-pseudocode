/*
 * XREFs of ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x18014A9A4
 * Callers:
 *     ?ProcessFreezeVisualSurface@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_FREEZEVISUALSURFACE@@@Z @ 0x180182774 (-ProcessFreezeVisualSurface@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUAL.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801A3CF0 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::RegisterSnapshotToPerform(CComposition *this, struct CCachedVisualImage *a2)
{
  char *v2; // r10
  int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  struct CCachedVisualImage **v7; // rcx
  unsigned int v8; // ecx
  int v9; // eax
  struct CCachedVisualImage *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (char *)this + 672;
  v3 = 0;
  v4 = *((unsigned int *)this + 174);
  v5 = 0;
  v6 = *((_QWORD *)this + 84);
  if ( (_DWORD)v4 )
  {
    v7 = (struct CCachedVisualImage **)*((_QWORD *)this + 84);
    while ( a2 != *v7 )
    {
      ++v5;
      ++v7;
      if ( v5 >= (unsigned int)v4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v8 = v4 + 1;
    v3 = (int)v4 + 1 < (unsigned int)v4 ? 0x80070216 : 0;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v8 > *((_DWORD *)v2 + 5) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v11);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v6 + 8 * v4) = v11;
      *((_DWORD *)v2 + 6) = v8;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xACEu);
  }
  return (unsigned int)v3;
}
