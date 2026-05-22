/*
 * XREFs of ?HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAKPEAU_OVERLAPPED@@KKPEBXKPEAK@Z @ 0x1800B3830
 * Callers:
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 * Callees:
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?IoctlTimeout_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KK0AEBUSPATIAL_NODE_ID@@PEB_W@Z @ 0x1800B12B8 (-IoctlTimeout_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KK0AEBUSPATIAL_NODE_ID@@PEB_W@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::HandleIoctlTimeout(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        struct _OVERLAPPED *a2,
        int a3,
        __int64 a4,
        struct _GUID *a5,
        unsigned int a6,
        unsigned int *lpNumberOfBytesTransferred)
{
  const wchar_t *v7; // rdi
  unsigned int v8; // ebx
  struct _GUID v12; // xmm0
  _DWORD *v13; // rcx
  HolographicDriverClientTrace *v14; // rcx
  struct _GUID v16; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v17; // [rsp+50h] [rbp-20h] BYREF

  v7 = &word_1800DF514;
  v8 = 0;
  *(_QWORD *)&v16.Data1 = 0LL;
  *(_QWORD *)v16.Data4 = 0LL;
  v17 = (struct _GUID)0LL;
  *lpNumberOfBytesTransferred = 0;
  switch ( a3 )
  {
    case 5981188:
      v12 = *a5;
      goto LABEL_13;
    case 5997588:
LABEL_9:
      v16 = *a5;
      break;
    case 5997592:
      v12 = a5[1];
      v16 = *a5;
LABEL_13:
      v17 = v12;
      break;
    case 5997596:
      v7 = (const wchar_t *)a5;
      break;
    case 5997616:
    case 5998604:
    case 5998608:
    case 5998612:
      goto LABEL_9;
  }
  v13 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v13 && *v13 )
  {
    HolographicDriverClientTrace::Instance();
    HolographicDriverClientTrace::IoctlTimeout_(
      v14,
      (const struct _GUID *)((char *)this + 12),
      a3,
      5000,
      &v16,
      (const struct SPATIAL_NODE_ID *)&v17,
      v7);
  }
  if ( !GetOverlappedResultEx(*((HANDLE *)this + 9), a2, lpNumberOfBytesTransferred, 0xFFFFFFFF, 0) )
    return GetLastError();
  return v8;
}
