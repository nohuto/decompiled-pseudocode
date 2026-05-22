/*
 * XREFs of ??$MPCSixDofProcessor_HomeEvent@K_N_N_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N11AEBIAEA_N$$QEAM1@Z @ 0x180051D88
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004DC58 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N00K0M0@Z @ 0x18004CEF4 (-MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N00K0M0@Z.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool,unsigned int const &,bool &,float,bool>(
        int *a1,
        char *a2,
        char *a3,
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
