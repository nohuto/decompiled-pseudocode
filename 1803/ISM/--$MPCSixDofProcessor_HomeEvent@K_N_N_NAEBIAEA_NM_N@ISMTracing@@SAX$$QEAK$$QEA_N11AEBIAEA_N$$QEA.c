/*
 * XREFs of ??$MPCSixDofProcessor_HomeEvent@K_N_N_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N11AEBIAEA_N$$QEAM1@Z @ 0x18004184C
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N@Z @ 0x18003BA6C (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N@Z.c)
 * Callees:
 *     ?MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N00K0M0@Z @ 0x1800444C4 (-MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N00K0M0@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool,unsigned int const &,bool &,float,bool>(
        unsigned int *a1,
        bool *a2,
        bool *a3,
        bool *a4,
        _DWORD *a5,
        bool *a6,
        float *a7,
        bool *a8)
{
  _DWORD *v12; // r10

  v12 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v12 )
  {
    if ( *v12 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCSixDofProcessor_HomeEvent_((ISMTracing *)(unsigned int)*a5, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8);
    }
  }
}
