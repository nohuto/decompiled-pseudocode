/*
 * XREFs of ??1CRPCTimeout@@QEAA@XZ @ 0x180053F44
 * Callers:
 *     _CImmersiveApp::QueryService_::_1_::dtor$0 @ 0x18019A39A (_CImmersiveApp--QueryService_--_1_--dtor$0.c)
 *     __lambda_e749f471b43b5c52416cbe595e41d9dc_::operator()_::_1_::dtor$6 @ 0x18019F21D (__lambda_e749f471b43b5c52416cbe595e41d9dc_--operator()_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall CRPCTimeout::~CRPCTimeout(CRPCTimeout *this)
{
  void *v2; // rdx

  if ( *((int *)this + 2) >= 0 )
  {
    *((_DWORD *)this + 2) = -2147467259;
    CoDisableCallCancellation(0LL);
    v2 = (void *)*((_QWORD *)this + 2);
    if ( v2 )
    {
      DeleteTimerQueueTimer(0LL, v2, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *((_QWORD *)this + 2) = 0LL;
    }
  }
}
