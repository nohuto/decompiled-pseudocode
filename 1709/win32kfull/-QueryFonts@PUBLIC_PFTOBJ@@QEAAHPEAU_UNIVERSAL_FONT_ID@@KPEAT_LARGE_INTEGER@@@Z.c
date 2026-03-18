/*
 * XREFs of ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C00AFA1C
 * Callers:
 *     GreQueryFonts @ 0x1C011AE4C (GreQueryFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::QueryFonts(
        PUBLIC_PFTOBJ *this,
        struct _UNIVERSAL_FONT_ID *a2,
        unsigned int a3,
        union _LARGE_INTEGER *a4)
{
  int v4; // edi
  unsigned int v8; // ebx
  __int64 *i; // r8
  __int64 j; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  *a4 = PFTOBJ::FontChangeTime;
  v8 = 0;
  if ( a2 && a3 )
  {
    v13 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    if ( (_DWORD)gufiLocalType1Rasterizer == 2 )
    {
      *(_QWORD *)a2 = gufiLocalType1Rasterizer;
      v8 = 1;
    }
    for ( i = (__int64 *)(*(_QWORD *)this + 40LL);
          (unsigned __int64)i < *(_QWORD *)this + 8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)this + 24LL) + 40;
          ++i )
    {
      if ( v8 >= a3 )
        break;
      for ( j = *i; j && v8 < a3; j = *(_QWORD *)(j + 8) )
      {
        if ( (*(_DWORD *)(j + 52) & 0x20) == 0 )
        {
          v11 = v8++;
          *((_DWORD *)a2 + 2 * v11 + 1) = 1;
          *((_DWORD *)a2 + 2 * v11) = *(_DWORD *)(j + 136);
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    return v8;
  }
  else
  {
    LOBYTE(v4) = (_DWORD)gufiLocalType1Rasterizer == 2;
    return (unsigned int)(v4 + *(_DWORD *)(*(_QWORD *)this + 28LL));
  }
}
