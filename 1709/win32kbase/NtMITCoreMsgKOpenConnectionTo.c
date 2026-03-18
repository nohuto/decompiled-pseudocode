/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x1C0087C60
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     OpenConnectionToMITEndpoint @ 0x1C0087D60 (OpenConnectionToMITEndpoint.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(unsigned int a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  PVOID CurrentProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _BOOL8 v10; // rdx
  unsigned int v11; // ebx
  _BYTE v13[32]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v14; // [rsp+40h] [rbp-68h]
  __int128 v15; // [rsp+50h] [rbp-58h]
  __int64 v16; // [rsp+60h] [rbp-48h]
  _OWORD v17[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v18; // [rsp+88h] [rbp-20h]

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v13);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v5, v4);
  v10 = 0LL;
  if ( CurrentProcess )
  {
    v8 = 1LL;
    v10 = CurrentProcess == g_pepDwm;
  }
  if ( v10 )
  {
    if ( a2 + 40 < a2 || a2 + 40 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v14 = *(_OWORD *)a2;
    v15 = *(_OWORD *)(a2 + 16);
    v16 = *(_QWORD *)(a2 + 32);
    v17[0] = v14;
    v17[1] = v15;
    v18 = v16;
    v11 = OpenConnectionToMITEndpoint(a1, v17);
  }
  else
  {
    v11 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v7, v10, v8, v9);
  return v11;
}
