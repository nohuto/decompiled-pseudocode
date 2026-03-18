/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C005C8D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(
        struct HOBJ__ *a1,
        __int128 *a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, struct HOBJ__ *, struct tagRECT *, __int64),
        __int64 a4)
{
  __int128 *v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  _BYTE v14[24]; // [rsp+30h] [rbp-68h] BYREF
  __int128 *v15; // [rsp+48h] [rbp-50h]
  __int128 v16; // [rsp+58h] [rbp-40h] BYREF

  v6 = a2;
  v15 = a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v14);
  v12 = 0;
  if ( gbVideoInitialized )
  {
    if ( v6 )
    {
      if ( (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (__int128 *)MmUserProbeAddress;
      v16 = *v6;
      v6 = &v16;
      v15 = &v16;
    }
    v12 = xxxEnumDisplayMonitors(a1, (__int64)v6, a3, a4, 0);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v12;
}
