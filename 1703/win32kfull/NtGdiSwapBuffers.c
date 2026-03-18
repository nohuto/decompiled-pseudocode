/*
 * XREFs of NtGdiSwapBuffers @ 0x1C0298CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0254A94 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C0254B9C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0285604 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiSwapBuffers(HDC a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  __int64 v3; // r9
  struct EWNDOBJ *v4; // r15
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r8
  _QWORD *v8; // rcx
  __int64 DeviceHdev; // rdx
  __int64 v10; // r8
  unsigned int (__fastcall *v11)(__int64, struct EWNDOBJ *); // rax
  _QWORD v13[2]; // [rsp+28h] [rbp-39h] BYREF
  struct _RECTL v14; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v15[80]; // [rsp+48h] [rbp-19h] BYREF
  struct EWNDOBJ *v16; // [rsp+98h] [rbp+37h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v1 = 0;
  if ( !v13[0] || !*(_QWORD *)(v13[0] + 512LL) )
  {
    EngSetLastError(6u);
    v2 = 0;
    goto LABEL_21;
  }
  v2 = 1;
  if ( *(_DWORD *)(v13[0] + 32LL) == 1 )
  {
LABEL_21:
    v1 = v2;
    goto LABEL_22;
  }
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v15, (struct XDCOBJ *)v13);
  if ( (v15[24] & 1) != 0 )
  {
    if ( v16 )
    {
      if ( ERECTL::bEmpty((struct EWNDOBJ *)((char *)v16 + 4)) )
        goto LABEL_18;
      ++*(_DWORD *)(*(_QWORD *)(v13[0] + 512LL) + 92LL);
      v4 = v16;
      v5 = *(_QWORD *)(v13[0] + 48LL);
      v6 = (*(_QWORD *)(v13[0] + 512LL) + 24LL) & -(__int64)(*(_QWORD *)(v13[0] + 512LL) != 0LL);
      v7 = v6;
      if ( (*(_DWORD *)(v5 + 32) & 0x20000) != 0 )
      {
        v8 = *(_QWORD **)(v13[0] + 48LL);
        v14 = *(struct _RECTL *)(v13[0] + 1448LL);
        DeviceHdev = hdevFindDeviceHdev(v8, &v14, v16, v3);
        v7 = v6;
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(v13[0] + 512LL) == *(_QWORD *)(v5 + 2568) )
          {
            v10 = *(_QWORD *)(DeviceHdev + 2568);
            if ( v10 )
              v7 = v10 + 24;
            else
              v7 = 0LL;
          }
          v5 = DeviceHdev;
        }
      }
      v11 = *(unsigned int (__fastcall **)(__int64, struct EWNDOBJ *))(v5 + 3152);
      if ( v11 )
      {
        if ( v11(v7, v4) )
LABEL_18:
          v1 = 1;
      }
    }
    else
    {
      EngSetLastError(6u);
    }
  }
  else
  {
    LOBYTE(v1) = (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v13) != 0;
  }
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v15);
LABEL_22:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v13);
  return v1;
}
