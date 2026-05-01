/*
 * XREFs of CemRcObjectCleanup @ 0x1800492B8
 * Callers:
 *     ?HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180046050 (-HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180046570 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180046750 (-HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180047480 (-HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180048FB0 (-HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CempRcTableRemoveObject @ 0x180049684 (CempRcTableRemoveObject.c)
 */

__int64 __fastcall CemRcObjectCleanup(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[3] )
    __int2c();
  if ( a1[2] != -1LL )
    result = CempRcTableRemoveObject(a1[4] & 0xFFFFFFFFFFFFFFFCuLL, a1);
  a1[4] |= 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
