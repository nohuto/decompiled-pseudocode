/*
 * XREFs of ?MNSetTimerToOpenHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0203090
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     InternalSetTimer @ 0x1C00B26E0 (InternalSetTimer.c)
 */

__int64 __fastcall MNSetTimerToOpenHierarchy(_QWORD *a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned int v5; // edi
  __int64 v6; // r8

  v2 = (_DWORD *)*a1;
  v3 = (unsigned int)v2[20];
  if ( (_DWORD)v3 != -1 )
  {
    v4 = *((_QWORD *)v2 + 5);
    v5 = 0;
    if ( (unsigned int)v3 >= *(_DWORD *)(v4 + 68) )
    {
LABEL_12:
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
      return v5;
    }
    v6 = *(_QWORD *)(v4 + 96) + 152 * v3;
    if ( *(_QWORD *)(v6 + 16) && (*(_DWORD *)(v6 + 4) & 3) == 0 )
    {
      if ( (*v2 & 0x2000) != 0 || (*v2 & 0x20) != 0 && (_DWORD)v3 == v2[21] )
      {
        v5 = 1;
      }
      else
      {
        if ( InternalSetTimer(*((_QWORD *)v2 + 2), 65534LL, gdtMNDropDown, 0LL, 0, 16) )
        {
          *(_DWORD *)*a1 |= 0x2000u;
          SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
          return 1LL;
        }
        v5 = -1;
      }
      goto LABEL_12;
    }
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return 0LL;
}
