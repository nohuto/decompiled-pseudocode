/*
 * XREFs of ?RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180035850
 * Callers:
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800319C0 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18001EE28 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RmpActivityHostAddResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180035584 (-RmpActivityHostAddResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_.c)
 *     ?RmpActivityHostRemoveResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800362C8 (-RmpActivityHostRemoveResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_.c)
 */

void __fastcall RmpActivityHostApplyResourceSet(
        struct _RM_ACTIVITY_HOST *a1,
        struct IUnknown **a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // esi

  if ( *((_DWORD *)a1 + 14) == 1 )
    v6 = *((_DWORD *)a1 + 22);
  else
    v6 = 0;
  if ( a2[180] )
    RmpActivityHostRemoveResourceSet(a1, a2, 0LL, a4);
  RmpActivityHostAddResourceSet(a1, (__int64)a2, 1);
  a2[18] = (struct IUnknown *)*((_QWORD *)a1 + 3);
  if ( a2[235] )
    ATL::AtlComPtrAssign(a2 + 235, 0LL);
  *((_DWORD *)a2 + 2) = v6;
  *((_BYTE *)a2 + 12) = 1;
}
