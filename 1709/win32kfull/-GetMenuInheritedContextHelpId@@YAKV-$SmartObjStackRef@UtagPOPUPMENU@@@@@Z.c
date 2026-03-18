/*
 * XREFs of ?GetMenuInheritedContextHelpId@@YAKV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02045E8
 * Callers:
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall GetMenuInheritedContextHelpId(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 i; // rax
  __int64 v7; // rax
  __int64 **v8; // rcx
  unsigned int v9; // ebx

  v5 = **a1;
  if ( (*(_DWORD *)v5 & 1) == 0 )
  {
    v5 = **a1;
    for ( i = *(_QWORD *)(v5 + 40); !*(_DWORD *)(i + 112); i = *(_QWORD *)(**a1 + 40) )
    {
      if ( (*(_DWORD *)**a1 & 2) != 0 )
      {
        v5 = **a1;
        if ( *(_QWORD *)(v5 + 32) == *(_QWORD *)(v5 + 8) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(a1, *(_QWORD *)(**a1 + 64));
          break;
        }
      }
      if ( !*(_QWORD *)(**a1 + 32) )
        goto LABEL_12;
      v7 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
      v8 = a1;
      if ( !v7 )
        goto LABEL_13;
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(a1, *(_QWORD *)(v7 + 8));
      if ( !**a1 )
      {
LABEL_12:
        v8 = a1;
LABEL_13:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, v5, a3, a4);
        return 0LL;
      }
    }
  }
  v9 = *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 112LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v5, a3, a4);
  return v9;
}
