/*
 * XREFs of ?GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z @ 0x180002C40
 * Callers:
 *     ?GetVolumeRange@CVolumeStrip@@UEAAJIPEAM00@Z @ 0x180017D70 (-GetVolumeRange@CVolumeStrip@@UEAAJIPEAM00@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeRange(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5)
{
  unsigned int v5; // ebx
  float *v6; // rcx

  v5 = -2147467261;
  if ( !a3 || !a4 || !a5 )
    goto LABEL_12;
  if ( a2 == -1 )
    a2 = *((_DWORD *)this + 28);
  if ( a2 >= *((_DWORD *)this + 29) )
  {
    v5 = -2147024809;
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetVolumeRange", 0xC7u, v5);
    return v5;
  }
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  v6 = (float *)(*((_QWORD *)this + 10) + 56LL * a2);
  v5 = 0;
  *a3 = v6[2];
  *a4 = v6[3];
  *a5 = v6[4];
  return v5;
}
