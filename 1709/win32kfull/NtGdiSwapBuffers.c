/*
 * XREFs of NtGdiSwapBuffers @ 0x1C0295370
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0256564 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C025666C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0282168 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

_BOOL8 __fastcall NtGdiSwapBuffers(HDC a1)
{
  __int64 v1; // rax
  BOOL v2; // ebx
  struct EWNDOBJ *v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v8)(__int64, struct EWNDOBJ *); // rax
  _QWORD v10[2]; // [rsp+28h] [rbp-29h] BYREF
  struct _RECTL v11; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v12[80]; // [rsp+48h] [rbp-9h] BYREF
  struct EWNDOBJ *v13; // [rsp+98h] [rbp+47h]

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v1 = v10[0];
  if ( !v10[0] || !*(_QWORD *)(v10[0] + 512LL) )
  {
    EngSetLastError(6u);
    v2 = 0;
    goto LABEL_20;
  }
  v2 = 1;
  if ( *(_DWORD *)(v10[0] + 32LL) == 1 )
    goto LABEL_21;
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v12, (struct XDCOBJ *)v10);
  if ( (v12[24] & 1) != 0 )
  {
    if ( v13 )
    {
      if ( ERECTL::bEmpty((struct EWNDOBJ *)((char *)v13 + 4)) )
        goto LABEL_18;
      ++*(_DWORD *)(*(_QWORD *)(v10[0] + 512LL) + 92LL);
      v3 = v13;
      v4 = *(_QWORD *)(v10[0] + 48LL);
      v5 = (*(_QWORD *)(v10[0] + 512LL) + 24LL) & -(__int64)(*(_QWORD *)(v10[0] + 512LL) != 0LL);
      v6 = v5;
      if ( (*(_DWORD *)(v4 + 32) & 0x20000) != 0 )
      {
        v11 = *(struct _RECTL *)(v10[0] + 1448LL);
        DeviceHdev = hdevFindDeviceHdev((_QWORD *)v4, &v11, v13);
        v6 = v5;
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(v10[0] + 512LL) == *(_QWORD *)(v4 + 2568) )
          {
            v6 = *(_QWORD *)(DeviceHdev + 2568);
            if ( v6 )
              v6 += 24LL;
          }
          v4 = DeviceHdev;
        }
      }
      v8 = *(unsigned int (__fastcall **)(__int64, struct EWNDOBJ *))(v4 + 3152);
      if ( v8 )
      {
        if ( v8(v6, v3) )
          goto LABEL_18;
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    v2 = 0;
  }
  else
  {
    v2 = XDCOBJ::bFullScreen((XDCOBJ *)v10) != 0;
  }
LABEL_18:
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v12);
LABEL_20:
  v1 = v10[0];
LABEL_21:
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v2;
}
