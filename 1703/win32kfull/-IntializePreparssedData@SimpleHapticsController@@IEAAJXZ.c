/*
 * XREFs of ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C0222FE0
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0222720 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C022345C (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 */

__int64 __fastcall SimpleHapticsController::IntializePreparssedData(SimpleHapticsController *this)
{
  int v2; // ebx
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  void *v5; // rax
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  int v9; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v10[6]; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  int *v13; // [rsp+90h] [rbp+27h]
  int v14; // [rsp+98h] [rbp+2Fh]
  int v15; // [rsp+9Ch] [rbp+33h]

  v2 = SimpleHapticsController::SendDeviceIOControl(this, 0xB01A8u, 0LL, 0, v10, 0xCu, 0LL);
  if ( v2 >= 0 )
  {
    v5 = (void *)Win32AllocPoolNonPaged(v10[0], 1147695957LL);
    *((_QWORD *)this + 2) = v5;
    if ( v5 )
    {
      v2 = SimpleHapticsController::SendDeviceIOControl(this, 0xB0193u, 0LL, 0, v5, v10[0], 0LL);
      if ( v2 < 0 )
      {
        if ( (unsigned int)dword_1C0324150 > 2 )
        {
          TlgCreateSz(&pDesc, "Function failed.");
          v15 = 0;
          v13 = &v9;
          v14 = 4;
          v9 = v2;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v6, v7, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::IntializePreparssedData",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          501,
          v2,
          "Function failed.");
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    if ( (unsigned int)dword_1C0324150 > 2 )
    {
      TlgCreateSz(&pDesc, "Function failed.");
      v15 = 0;
      v13 = &v9;
      v14 = 4;
      v9 = v2;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v3, v4, 4u, &pData);
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::IntializePreparssedData",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      487,
      v2,
      "Function failed.");
  }
  return (unsigned int)v2;
}
