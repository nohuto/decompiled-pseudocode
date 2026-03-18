/*
 * XREFs of ??0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAVCConnection@@@Z @ 0x18000AFB4
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180009EA0 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CChannelContext *__fastcall CChannelContext::CChannelContext(
        CChannelContext *this,
        int a2,
        int a3,
        struct CProcessAttribution *a4,
        struct CConnection *a5)
{
  CChannelContext *result; // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CChannelContext::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = a5;
  if ( a5 )
    _InterlockedIncrement((volatile signed __int32 *)a5 + 2);
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 5) = a3;
  *((_QWORD *)this + 5) = a4;
  if ( a4 )
    _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
  *((_QWORD *)this + 3) = 0LL;
  result = this;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  return result;
}
