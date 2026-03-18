/*
 * XREFs of MNSetTimerToCloseHierarchy @ 0x1C0205B60
 * Callers:
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     InternalSetTimer @ 0x1C0087850 (InternalSetTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall MNSetTimerToCloseHierarchy(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v14, 0LL, a3, a4);
  v7 = *(_DWORD **)*a1;
  if ( (*v7 & 0x20) == 0 )
  {
    v8 = 0;
    goto LABEL_10;
  }
  if ( (**(_DWORD **)*a1 & 0x4000) != 0 )
  {
LABEL_9:
    v8 = 1;
    goto LABEL_10;
  }
  v9 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)*a1 + 24LL));
  v8 = 0;
  if ( v9 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v14, *(_QWORD *)(v9 + 8));
    if ( *(_QWORD *)v14[0] )
    {
      if ( !InternalSetTimer(*(_QWORD *)(*(_QWORD *)*a1 + 16LL), 0xFFFFLL, (unsigned int)gdtMNDropDown, 0LL, 0, 16) )
      {
        v8 = -1;
        goto LABEL_10;
      }
      **(_DWORD **)*a1 |= 0x4000u;
      **(_DWORD **)v14[0] |= 0x1000u;
      goto LABEL_9;
    }
  }
LABEL_10:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, (__int64)v7, v5, v6);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v10, v11, v12);
  return v8;
}
