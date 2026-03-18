/*
 * XREFs of ?MNSetTimerToOpenHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0204A30
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0087850 (InternalSetTimer.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 */

__int64 __fastcall MNSetTimerToOpenHierarchy(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 **v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // rcx

  v4 = a1;
  v5 = **a1;
  if ( *(_DWORD *)(v5 + 80) != -1 )
  {
    v6 = 0;
    v5 = **a1;
    if ( *(_DWORD *)(v5 + 80) >= *(_DWORD *)(*(_QWORD *)(v5 + 40) + 68LL) )
    {
LABEL_12:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v4, v5, a3, a4);
      return v6;
    }
    v5 = **a1;
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 96LL) + 152LL * *(unsigned int *)(v5 + 80);
    if ( *(_QWORD *)(v7 + 16) && (*(_DWORD *)(v7 + 4) & 3) == 0 )
    {
      if ( (*(_DWORD *)**v4 & 0x2000) != 0
        || (*(_DWORD *)**v4 & 0x20) != 0 && (v5 = **v4, *(_DWORD *)(v5 + 80) == *(_DWORD *)(v5 + 84)) )
      {
        v6 = 1;
      }
      else
      {
        if ( InternalSetTimer(*(_QWORD *)(**v4 + 16), 65534LL, (unsigned int)gdtMNDropDown, 0LL, 0, 16) )
        {
          *(_DWORD *)**v4 |= 0x2000u;
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v4, v5, a3, a4);
          return 1LL;
        }
        v6 = -1;
      }
      goto LABEL_12;
    }
    a1 = v4;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v5, a3, a4);
  return 0LL;
}
