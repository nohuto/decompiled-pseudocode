/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0011CC0
 * Callers:
 *     ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0011D08 (-Add@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0045418 (-RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Set<DMMVIDEOPRESENTTARGET>::FindByValue(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 == a1 + 24 )
    return 0LL;
  result = v3 - 8;
  while ( result && result != a2 )
  {
    v5 = *(_QWORD *)(result + 8);
    result = v5 - 8;
    if ( v5 == a1 + 24 )
      result = 0LL;
  }
  return result;
}
