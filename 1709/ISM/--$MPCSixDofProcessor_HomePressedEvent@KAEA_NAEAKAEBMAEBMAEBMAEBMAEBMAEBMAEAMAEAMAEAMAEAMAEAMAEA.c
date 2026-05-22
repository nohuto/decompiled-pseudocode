/*
 * XREFs of ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x180051BBC
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004DC58 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCSixDofProcessor_HomePressedEvent_@ISMTracing@@QEAAXK_NKMMMMMMMMMMMMMMMMMMK@Z @ 0x18004D008 (-MPCSixDofProcessor_HomePressedEvent_@ISMTracing@@QEAAXK_NKMMMMMMMMMMMMMMMMMMK@Z.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomePressedEvent<unsigned long,bool &,unsigned long &,float const &,float const &,float const &,float const &,float const &,float const &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,unsigned int const &>(
        int *a1,
        char *a2,
        int *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float *a9,
        float *a10,
        float *a11,
        float *a12,
        float *a13,
        float *a14,
        float *a15,
        float *a16,
        float *a17,
        float *a18,
        float *a19,
        float *a20,
        float *a21,
        _DWORD *a22)
{
  _DWORD *v26; // r10
  ISMTracing *v27; // rcx

  v26 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v26 )
  {
    if ( *v26 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCSixDofProcessor_HomePressedEvent_(
        v27,
        *a1,
        *a2,
        *a3,
        *a4,
        *a5,
        *a6,
        *a7,
        *a8,
        *a9,
        *a10,
        *a11,
        *a12,
        *a13,
        *a14,
        *a15,
        *a16,
        *a17,
        *a18,
        *a19,
        *a20,
        *a21,
        *a22);
    }
  }
}
