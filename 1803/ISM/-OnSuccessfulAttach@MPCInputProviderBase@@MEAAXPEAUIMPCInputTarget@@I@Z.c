/*
 * XREFs of ?OnSuccessfulAttach@MPCInputProviderBase@@MEAAXPEAUIMPCInputTarget@@I@Z @ 0x180049FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@_NI@Z @ 0x18004A40C (-MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@_NI@Z.c)
 */

void __fastcall MPCInputProviderBase::OnSuccessfulAttach(
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
    ISMTracing::MPCInputProviderSourceDetectedLost_(v7, a2, (MPCInputProviderBase *)((char *)this + 464), 1, a3);
  }
  *((_WORD *)this + 1100) = 257;
}
