/*
 * XREFs of ?OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCInputTarget@@I@Z @ 0x180049F60
 * Callers:
 *     ?OnSuccessfulDetach@MPCSixDofProcessor@@EEAAXPEAUIMPCInputTarget@@I@Z @ 0x18003D930 (-OnSuccessfulDetach@MPCSixDofProcessor@@EEAAXPEAUIMPCInputTarget@@I@Z.c)
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800457C0 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@_NI@Z @ 0x18004A40C (-MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@_NI@Z.c)
 */

void __fastcall MPCInputProviderBase::OnSuccessfulDetach(
        MPCInputProviderBase *this,
        struct IMPCInputTarget *a2,
        unsigned int a3)
{
  _DWORD *v6; // rcx
  ISMTracing *v7; // rcx

  v6 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v6 && *v6 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCInputProviderSourceDetectedLost_(v7, a2, (MPCInputProviderBase *)((char *)this + 464), 0, a3);
  }
  *((_BYTE *)this + 2201) = 1;
}
