/*
 * XREFs of ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x180128E08
 * Callers:
 *     ?ProcessFreezeVisualSurface@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_FREEZEVISUALSURFACE@@@Z @ 0x1801595E4 (-ProcessFreezeVisualSurface@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUAL.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180175E30 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::RegisterSnapshotToPerform(CComposition *this, struct CCachedVisualImage *a2)
{
  char *v2; // r10
  signed int v3; // ebx
  __int64 v4; // rcx
  unsigned int v5; // r8d
  struct CCachedVisualImage **v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // eax
  signed int v9; // eax
  unsigned int v11; // [rsp+40h] [rbp+8h]
  struct CCachedVisualImage *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 648;
  v3 = 0;
  v4 = *((unsigned int *)this + 168);
  v5 = 0;
  if ( (_DWORD)v4 )
  {
    v6 = *(struct CCachedVisualImage ***)v2;
    while ( a2 != *v6 )
    {
      ++v5;
      ++v6;
      if ( v5 >= (unsigned int)v4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v7 = v11;
    v8 = v4 + 1;
    if ( (int)v4 + 1 >= (unsigned int)v4 )
      v7 = v4 + 1;
    v3 = v8 < (unsigned int)v4 ? 0x80070216 : 0;
    if ( v8 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)v2 + 5) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v12);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v2 + 8 * v4) = v12;
      *((_DWORD *)v2 + 6) = v7;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xADDu);
  }
  return (unsigned int)v3;
}
