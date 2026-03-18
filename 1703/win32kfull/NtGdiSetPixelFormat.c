/*
 * XREFs of NtGdiSetPixelFormat @ 0x1C0298AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     UserGetHwnd @ 0x1C01C2D20 (UserGetHwnd.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0267808 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0285604 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02988B8 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall NtGdiSetPixelFormat(__int64 *a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  ULONG v11; // ecx
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 DeviceHdev; // rdx
  __int64 v16; // rsi
  unsigned int (__fastcall *v17)(__int64, _QWORD, __int64); // rax
  ULONG v18; // ecx
  _QWORD v20[2]; // [rsp+20h] [rbp-39h] BYREF
  struct _RECTL v21; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v22[32]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v23; // [rsp+60h] [rbp+7h]
  __int64 v24; // [rsp+68h] [rbp+Fh]
  __int64 v25; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v20, (HDC)a1);
  v6 = 0;
  if ( !v20[0] || !*(_QWORD *)(v20[0] + 512LL) )
  {
    v18 = 6;
    goto LABEL_34;
  }
  v7 = *(unsigned __int16 *)(v20[0] + 2520LL);
  if ( (v7 & 0x8000u) != 0LL )
    v8 = XDCOBJ::ipfdDevMaxGet((XDCOBJ *)v20);
  else
    v8 = (__int16)v7;
  if ( a2 < 1 || a2 > v8 )
  {
    v18 = 87;
LABEL_34:
    EngSetLastError(v18);
    goto LABEL_35;
  }
  UserEnterUserCritSec(v4, v7, v5);
  v23 = 0LL;
  v24 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v22, (struct XDCOBJ *)v20, 0);
  v10 = v20[0];
  if ( (*(_DWORD *)(v20[0] + 36LL) & 1) == 0 )
  {
    v12 = 0LL;
    goto LABEL_17;
  }
  if ( (unsigned int)UserGetHwnd(a1, &v26, &v25) )
  {
    if ( v25 )
    {
      if ( *(_DWORD *)(v25 + 188) != a2 )
      {
        v11 = 2000;
        goto LABEL_14;
      }
LABEL_30:
      v6 = 1;
      goto LABEL_31;
    }
    v10 = v20[0];
    v12 = v26;
LABEL_17:
    v13 = *(_QWORD *)(v10 + 48);
    v14 = (*(_QWORD *)(v10 + 512) + 24LL) & -(__int64)(*(_QWORD *)(v10 + 512) != 0LL);
    if ( (*(_DWORD *)(v13 + 32) & 0x20000) != 0 )
    {
      v21 = *(struct _RECTL *)(v10 + 1448);
      DeviceHdev = hdevFindDeviceHdev((_QWORD *)v13, &v21, 0LL, v9);
      if ( DeviceHdev )
      {
        if ( *(_QWORD *)(v20[0] + 512LL) == *(_QWORD *)(v13 + 2568) )
        {
          v16 = *(_QWORD *)(DeviceHdev + 2568);
          if ( v16 )
            v14 = v16 + 24;
          else
            v14 = 0LL;
        }
        v13 = DeviceHdev;
      }
    }
    if ( !*(_QWORD *)(v13 + 3152) )
      goto LABEL_31;
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v14) + 112) & 0x200000) == 0 )
      goto LABEL_31;
    v17 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(v13 + 3136);
    if ( !v17 || !v17(v14, (unsigned int)a2, v12) )
      goto LABEL_31;
    if ( gbWndobjUpdate )
    {
      gbWndobjUpdate = 0;
      vForceClientRgnUpdate();
    }
    goto LABEL_30;
  }
  v11 = 2002;
LABEL_14:
  EngSetLastError(v11);
LABEL_31:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
  UserLeaveUserCritSec();
LABEL_35:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v20);
  return v6;
}
