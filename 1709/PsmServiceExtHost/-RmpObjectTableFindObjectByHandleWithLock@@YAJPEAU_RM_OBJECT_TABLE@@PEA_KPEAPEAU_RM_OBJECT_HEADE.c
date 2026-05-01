/*
 * XREFs of ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x180016EF0
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000D270 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x180019FDC (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

__int64 __fastcall RmpObjectTableFindObjectByHandleWithLock(
        struct _RM_OBJECT_TABLE *a1,
        unsigned __int64 *a2,
        struct _RM_OBJECT_HEADER **a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 result; // rax

  v3 = *a2;
  v5 = 0LL;
  v6 = *((_DWORD *)a1 + 1);
  v7 = -1LL << (*((_BYTE *)a1 + 4) & 0x1F);
  v8 = v7 & (HIBYTE(v3)
           + 37
           * (BYTE6(v3)
            + 37
            * (BYTE5(v3)
             + 37
             * (BYTE4(v3)
              + 37 * (BYTE3(v3) + 37 * (BYTE2(v3) + 37 * (BYTE1(v3) + 37 * ((unsigned __int8)v3 + 11623883LL))))))));
LABEL_2:
  if ( v5 )
    goto LABEL_5;
  if ( v6 >> 5 )
  {
    v5 = *((_QWORD *)a1 + 1)
       + 8LL
       * ((37
         * (BYTE6(v8)
          + 37
          * (BYTE5(v8)
           + 37
           * (BYTE4(v8) + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
         + HIBYTE(v8)) & ((v6 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v5 = *(_QWORD *)v5;
      if ( (v5 & 1) != 0 )
        break;
      if ( v8 == (v7 & *(_QWORD *)(v5 + 8)) )
      {
        if ( v3 != *(_QWORD *)(v5 + 24) )
          goto LABEL_2;
        RmpObjectAddRef((struct _RM_OBJECT_HEADER *)v5);
        result = 0LL;
        *a3 = (struct _RM_OBJECT_HEADER *)v5;
        return result;
      }
    }
  }
  return 3221226021LL;
}
