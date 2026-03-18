/*
 * XREFs of ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C005A1CC
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0057F50 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     bDeletePalette @ 0x1C0059240 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00A09E0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C0059DF0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     HmgFree @ 0x1C0096D40 (HmgFree.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009FE80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

__int64 __fastcall XEPALOBJ::bDeletePalette(XEPALOBJ *a1, int a2, int a3)
{
  PVOID v3; // rax
  unsigned int v7; // edi
  unsigned __int8 *v8; // rcx
  struct HOBJ__ *v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(PVOID *)a1;
  v7 = 1;
  if ( *(PVOID *)a1 == WPP_MAIN_CB.Reserved || !v3 || v3 == *(&WPP_MAIN_CB.Reserved + 1) )
    return v7;
  v8 = (unsigned __int8 *)*((_QWORD *)v3 + 14);
  if ( v8 )
  {
    if ( v8 != gpRGBXlate )
      Win32FreePool((__int64)v8);
    *(_QWORD *)(*(_QWORD *)a1 + 112LL) = 0LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x100) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 56LL) )
      return 0LL;
    XEPALOBJ::vMakeNoXlate(a1);
  }
  if ( !a2 && (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x1000000) != 0 )
    return 0LL;
  v10 = **(struct HOBJ__ ***)a1;
  if ( a3 == 3 )
  {
    if ( !HmgRemoveObjectImpl(v10, 0, 1, 2u, 8, 0LL) )
      return 0LL;
    goto LABEL_19;
  }
  if ( HmgRemoveObjectImpl(v10, 0, 1, 0, 8, 0LL) )
  {
    if ( a3 == 2 )
    {
LABEL_24:
      FreeObject(*(_QWORD *)a1, 8);
      goto LABEL_35;
    }
LABEL_19:
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 && *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v11);
    }
    if ( *(_QWORD *)a1 != *(_QWORD *)(*(_QWORD *)a1 + 128LL) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v11);
    }
    goto LABEL_24;
  }
  if ( a3 != 2 && (*(_WORD *)(*(_QWORD *)a1 + 14LL) & 0x4000) != 0 )
    return v7;
  if ( !a2 )
    return 0;
  if ( a3 != 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 && *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v11);
    }
    if ( *(_QWORD *)a1 != *(_QWORD *)(*(_QWORD *)a1 + 128LL) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v11);
    }
  }
  HmgFree(**(_QWORD **)a1);
LABEL_35:
  *(_QWORD *)a1 = 0LL;
  return v7;
}
