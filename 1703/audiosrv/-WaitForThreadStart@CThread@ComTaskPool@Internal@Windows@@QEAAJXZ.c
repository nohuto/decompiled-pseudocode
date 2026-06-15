/*
 * XREFs of ?WaitForThreadStart@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x1800D78D8
 * Callers:
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800D8428 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800D7398 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CThread::WaitForThreadStart(HANDLE *this)
{
  signed int Error; // ebx

  Error = 0;
  if ( WaitForSingleObject(this[7], 0xFFFFFFFF) == -1 )
    Error = ResultFromKnownLastError();
  if ( (*((_BYTE *)this + 132) & 2) == 0 )
  {
    CloseHandle(this[7]);
    this[7] = 0LL;
  }
  if ( Error >= 0 )
    return (unsigned int)*((_DWORD *)this + 12);
  return (unsigned int)Error;
}
