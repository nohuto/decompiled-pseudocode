/*
 * XREFs of NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01E5870
 * Callers:
 *     <none>
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C004A640 (_GetPointerDeviceRects.c)
 *     _MonitorFromPoint @ 0x1C0055A30 (_MonitorFromPoint.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetScreenRect @ 0x1C013FD78 (GetScreenRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GetHimetricScaleForMonitor @ 0x1C01C3B8C (GetHimetricScaleForMonitor.c)
 */

__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  unsigned int v10; // r15d
  int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v18; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v19[5]; // [rsp+24h] [rbp-84h] BYREF
  _BYTE v20[16]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v21; // [rsp+48h] [rbp-60h] BYREF
  __int128 v22; // [rsp+58h] [rbp-50h] BYREF
  __int128 v23; // [rsp+68h] [rbp-40h]

  v8 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  if ( a1 && a3 && a4 && (unsigned int)GetPointerDeviceRects(a1, 0LL, &v22) )
  {
    v10 = 1;
    v19[0] = 1;
    v11 = 1;
    v18 = 1;
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v23 = *GetScreenRect(&v21, v9);
      v12 = v22 - v23;
      if ( (_QWORD)v22 == (_QWORD)v23 )
        v12 = *((_QWORD *)&v22 + 1) - *((_QWORD *)&v23 + 1);
      if ( !v12 )
      {
        v13 = MonitorFromPoint(a2, 2u, 0);
        GetHimetricScaleForMonitor(v13, &v18, v19, v14);
        v11 = v18;
        v10 = v19[0];
      }
    }
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = v11;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_DWORD *)MmUserProbeAddress;
    *a4 = v10;
    v19[3] = 1;
  }
  else
  {
    v8 = 0;
    UserSetLastError(87LL, v9);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit(v16, v15);
  return v8;
}
