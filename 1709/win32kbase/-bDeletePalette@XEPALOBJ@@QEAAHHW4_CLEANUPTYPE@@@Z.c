/*
 * XREFs of ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C004121C
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C006B870 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     bDeletePalette @ 0x1C006ECD0 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AA2B8 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C00415E0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     HmgRemoveObject @ 0x1C0042F70 (HmgRemoveObject.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 *     HmgFree @ 0x1C00A26F0 (HmgFree.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00A9BBC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

__int64 __fastcall XEPALOBJ::bDeletePalette(XEPALOBJ *a1, __int64 a2, __int64 a3)
{
  struct PALETTE *v3; // rax
  int v4; // esi
  int v5; // ebp
  unsigned int v7; // edi
  unsigned __int8 *v8; // rcx
  struct HOBJ__ *v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(struct PALETTE **)a1;
  v4 = a3;
  v5 = a2;
  v7 = 1;
  if ( *(struct PALETTE **)a1 == ppalDefault || !v3 || v3 == ppalMono )
    return v7;
  v8 = (unsigned __int8 *)*((_QWORD *)v3 + 14);
  if ( v8 )
  {
    if ( v8 != gpRGBXlate )
      Win32FreePool(v8, a2, a3);
    *(_QWORD *)(*(_QWORD *)a1 + 112LL) = 0LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x100) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 56LL) )
      return 0LL;
    XEPALOBJ::vMakeNoXlate(a1);
  }
  if ( !v5 && (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x1000000) != 0 )
    return 0LL;
  v10 = **(struct HOBJ__ ***)a1;
  if ( v4 == 3 )
  {
    if ( !HmgRemoveObjectImpl(v10, 0, 1, 2u, 8, 0LL) )
      return 0LL;
    goto LABEL_19;
  }
  if ( HmgRemoveObject((int)v10, 0, 1, 0, 8, 0LL) )
  {
    if ( v4 == 2 )
    {
LABEL_24:
      FreeObject(*(_QWORD *)a1, 8LL);
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
  if ( v4 != 2 && (*(_WORD *)(*(_QWORD *)a1 + 14LL) & 0x4000) != 0 )
    return v7;
  if ( !v5 )
    return 0;
  if ( v4 != 2 )
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
  HmgFree(**(struct HOBJ__ ***)a1);
LABEL_35:
  *(_QWORD *)a1 = 0LL;
  return v7;
}
