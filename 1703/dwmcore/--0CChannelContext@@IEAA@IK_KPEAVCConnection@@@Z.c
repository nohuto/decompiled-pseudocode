/*
 * XREFs of ??0CChannelContext@@IEAA@IK_KPEAVCConnection@@@Z @ 0x18007E01C
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x1800C67CC (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CChannelContext *__fastcall CChannelContext::CChannelContext(
        CChannelContext *this,
        int a2,
        int a3,
        __int64 a4,
        struct CConnection *a5)
{
  CChannelContext *result; // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CChannelContext::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 5) = a5;
  if ( a5 )
    _InterlockedIncrement((volatile signed __int32 *)a5 + 2);
  *((_DWORD *)this + 4) = a2;
  result = this;
  *((_DWORD *)this + 5) = a3;
  *((_QWORD *)this + 3) = a4;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_DWORD *)this + 19) = 0;
  return result;
}
