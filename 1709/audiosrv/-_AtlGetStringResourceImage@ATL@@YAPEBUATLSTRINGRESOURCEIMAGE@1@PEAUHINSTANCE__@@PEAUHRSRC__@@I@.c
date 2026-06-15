/*
 * XREFs of ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x180076BA0
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x180070428 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x180073538 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 * Callees:
 *     <none>
 */

const struct ATL::ATLSTRINGRESOURCEIMAGE *__fastcall ATL::_AtlGetStringResourceImage(
        HINSTANCE hModule,
        HRSRC hResInfo,
        char a3)
{
  HGLOBAL Resource; // rax
  unsigned __int64 v8; // rbx
  char *v9; // rcx
  int v10; // edi

  Resource = LoadResource(hModule, hResInfo);
  if ( !Resource )
    return 0LL;
  v8 = (unsigned __int64)LockResource(Resource);
  if ( !v8 )
    return 0LL;
  v9 = (char *)(v8 + SizeofResource(hModule, hResInfo));
  v10 = a3 & 0xF;
  if ( v10 )
  {
    while ( v8 < (unsigned __int64)v9 )
    {
      v8 += 2LL * *(unsigned __int16 *)v8 + 2;
      if ( !--v10 )
        goto LABEL_7;
    }
    return 0LL;
  }
LABEL_7:
  if ( v8 >= (unsigned __int64)v9 )
    return 0LL;
  return (const struct ATL::ATLSTRINGRESOURCEIMAGE *)(v8 & -(__int64)(*(_WORD *)v8 != 0));
}
