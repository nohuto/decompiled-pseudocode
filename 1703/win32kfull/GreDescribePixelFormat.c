/*
 * XREFs of GreDescribePixelFormat @ 0x1C0298974
 * Callers:
 *     NtGdiDescribePixelFormat @ 0x1C028CFB0 (NtGdiDescribePixelFormat.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0285604 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02988B8 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall GreDescribePixelFormat(HDC a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rbp
  int v8; // edi
  ULONG v9; // ecx
  __int16 v10; // ax
  int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v15)(_QWORD, _QWORD, _QWORD, __int64); // rax
  struct _RECTL v17; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v19[80]; // [rsp+50h] [rbp-68h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  v7 = v18[0];
  v8 = 0;
  if ( !v18[0] )
  {
    v9 = 6;
LABEL_19:
    EngSetLastError(v9);
    goto LABEL_20;
  }
  v10 = *(_WORD *)(v18[0] + 2520LL);
  if ( v10 < 0 )
    v11 = XDCOBJ::ipfdDevMaxGet((XDCOBJ *)v18);
  else
    v11 = v10;
  if ( !a3 )
  {
    v8 = v11;
LABEL_20:
    v11 = v8;
    goto LABEL_21;
  }
  if ( a3 < 0x28 || a2 < 1 || a2 > v11 )
  {
    v9 = 87;
    goto LABEL_19;
  }
  *(_QWORD *)&v17.left = *(_QWORD *)(v7 + 48);
  v12 = *(_QWORD *)&v17.left;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19, (struct PDEVOBJ *)&v17);
  if ( (*(_DWORD *)(v12 + 32) & 0x20000) != 0 )
  {
    v17 = *(struct _RECTL *)(v7 + 1448);
    DeviceHdev = hdevFindDeviceHdev(*(_QWORD **)(v7 + 48), &v17, 0LL, v13);
    if ( DeviceHdev )
      v12 = DeviceHdev;
  }
  v15 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v12 + 3144);
  if ( !v15 || !v15(*(_QWORD *)(v12 + 1816), (unsigned int)a2, a3, a4) )
    v11 = 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
LABEL_21:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v18);
  return (unsigned int)v11;
}
