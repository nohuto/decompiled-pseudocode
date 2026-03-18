/*
 * XREFs of NtUserGetPointerDeviceRects @ 0x1C004A540
 * Callers:
 *     <none>
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C004A640 (_GetPointerDeviceRects.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  int v6; // ebx
  _OWORD *v7; // rcx
  _OWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v12; // [rsp+38h] [rbp-30h] BYREF
  __int128 v13; // [rsp+48h] [rbp-20h] BYREF
  char v14; // [rsp+70h] [rbp+8h] BYREF

  v12 = 0uLL;
  v13 = 0uLL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  v6 = 0;
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &v12, &v13) )
  {
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (_OWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v8 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v8 = (_OWORD *)MmUserProbeAddress;
    *v8 = *v8;
    *a2 = v12;
    *a3 = v13;
    v6 = 1;
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v10, v9);
  return v6;
}
