/*
 * XREFs of ?Uninitialize@CApplicationFrameService@@UEAAJXZ @ 0x18004DA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameService::Uninitialize(CApplicationFrameService *this)
{
  struct _TP_WAIT *v2; // rcx
  char *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = (struct _TP_WAIT *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    SetThreadpoolWait(v2, 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 23), 0);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 23));
    *((_QWORD *)this + 23) = 0LL;
    v3 = (char *)*((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = 0LL;
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v3);
  }
  if ( *((_DWORD *)this + 40) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 56LL))(*((_QWORD *)this + 18));
    *((_DWORD *)this + 40) = 0;
  }
  v4 = *((_QWORD *)this + 18);
  if ( v4 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return 0LL;
}
