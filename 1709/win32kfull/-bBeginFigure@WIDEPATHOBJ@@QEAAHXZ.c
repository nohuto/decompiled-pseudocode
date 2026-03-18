/*
 * XREFs of ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00E5C20
 * Callers:
 *     ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C00E5028 (-bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C00E53B8 (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C013B4F0 (-bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     ?bGrowPath@WIDEPATHOBJ@@IEAAHXZ @ 0x1C00E5A34 (-bGrowPath@WIDEPATHOBJ@@IEAAHXZ.c)
 *     ?bValid@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00E5C64 (-bValid@WIDEPATHOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall WIDEPATHOBJ::bBeginFigure(WIDEPATHOBJ *this)
{
  WIDEPATHOBJ *v2; // rcx
  __int64 result; // rax

  if ( (unsigned int)WIDEPATHOBJ::bValid(this) )
  {
    if ( (unsigned int)WIDEPATHOBJ::bGrowPath(v2) )
    {
      result = 1LL;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 16LL) = 1;
      return result;
    }
    *((_DWORD *)this + 32) = 1;
  }
  return 0LL;
}
