/*
 * XREFs of ?RuntimeClassInitialize@CDelayedTask@ComTaskPool@Internal@Windows@@QEAAJW4TaskApartment@34@W4TaskOptions@34@KKPEAUIComPoolTask@34@@Z @ 0x180087CE8
 * Callers:
 *     _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x1800879B8 (_lambda_ca324c265ed58b3d9541d2204f682216_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CDelayedTask::RuntimeClassInitialize(
        char *a1,
        int a2,
        int a3,
        int a4,
        DWORD DueTime,
        __int64 a6)
{
  _DWORD *v10; // rax
  _DWORD *v11; // rdi
  signed int Error; // ebx
  char **v13; // rdi
  char *v14; // rcx

  v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    *v10 = a2;
    v10[1] = a3;
    v10[2] = a4;
    *((_QWORD *)v10 + 2) = a6;
    if ( a6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
    *((_QWORD *)v11 + 3) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  *((_QWORD *)a1 + 3) = v11;
  Error = v11 == 0LL ? 0x8007000E : 0;
  if ( v11 )
  {
    v13 = (char **)(a1 + 32);
    if ( *((char **)a1 + 4) != a1 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
      v14 = *v13;
      *v13 = a1;
      if ( v14 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( CreateTimerQueueTimer(
           (PHANDLE)a1 + 2,
           0LL,
           (WAITORTIMERCALLBACK)Windows::Internal::ComTaskPool::CDelayedTask::s_TPWake,
           a1,
           DueTime,
           0,
           8u) )
    {
      return 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)a1 + 4);
    }
  }
  return (unsigned int)Error;
}
