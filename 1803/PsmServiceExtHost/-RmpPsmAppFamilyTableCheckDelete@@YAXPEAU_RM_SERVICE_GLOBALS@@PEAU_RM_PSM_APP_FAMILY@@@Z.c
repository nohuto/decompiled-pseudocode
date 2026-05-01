/*
 * XREFs of ?RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18000918C
 * Callers:
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800092B8 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D158 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPsmAppFamilyTableCheckDelete(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  unsigned __int64 v3; // r9
  struct _RM_PSM_APP_FAMILY *i; // rdx

  if ( !*((_QWORD *)a2 + 69) )
  {
    v3 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)a1 + 499) & 0x1F));
    for ( i = (struct _RM_PSM_APP_FAMILY *)(*((_QWORD *)a1 + 250)
                                          + 8
                                          * ((HIBYTE(v3)
                                            + 37
                                            * (BYTE6(v3)
                                             + 37
                                             * (BYTE5(v3)
                                              + 37
                                              * (BYTE4(v3)
                                               + 37
                                               * (BYTE3(v3)
                                                + 37
                                                * (BYTE2(v3) + 37 * (BYTE1(v3) + 37 * ((unsigned __int8)v3 + 11623883)))))))) & (unsigned int)((*((_DWORD *)a1 + 499) >> 5) - 1)));
          (*(_QWORD *)i & 1) == 0;
          i = *(struct _RM_PSM_APP_FAMILY **)i )
    {
      if ( *(struct _RM_PSM_APP_FAMILY **)i == a2 )
      {
        *(_QWORD *)i = *(_QWORD *)a2;
        --*((_DWORD *)a1 + 498);
        *(_QWORD *)a2 |= 0x8000000000000002uLL;
        break;
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
}
