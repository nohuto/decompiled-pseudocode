/*
 * XREFs of ?RmpUnserializePsmApplicationProperties@@YAXPEAU_PSM_APPLICATION_PROPERTIES@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@2@Z @ 0x180031210
 * Callers:
 *     ?PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x1800310B0 (-PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpUnserializePsmApplicationProperties(
        struct _PSM_APPLICATION_PROPERTIES *a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        enum _PSM_APPLICATION_PRIORITY *a6,
        unsigned __int64 *a7)
{
  if ( a2 )
    *a2 = *((_DWORD *)a1 + 1);
  if ( a3 )
    *a3 = *((_QWORD *)a1 + 1);
  if ( a4 )
    *a4 = *((_QWORD *)a1 + 2);
  if ( a5 )
    *a5 = *((_QWORD *)a1 + 3);
  if ( a6 )
    *(_DWORD *)a6 = *((_DWORD *)a1 + 8);
  if ( a7 )
    *a7 = *((_QWORD *)a1 + 5);
}
