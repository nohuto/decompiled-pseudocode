/*
 * XREFs of RIMCreatePointerDeviceDeadzone @ 0x1C0104D10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C0114CA4 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 */

__int64 __fastcall RIMCreatePointerDeviceDeadzone(__int64 a1, const struct tagRIMDEADZONE *a2, _QWORD *a3)
{
  RIMDeadzone *v6; // rax
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x1Fu,
    (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 || *(_DWORD *)(a1 + 448) >= 5u )
  {
    v8 = -1073741811;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0x21u,
      (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
  }
  else
  {
    v6 = (RIMDeadzone *)Win32AllocPoolZInit(0x40uLL, 1853506642LL);
    v7 = (__int64)v6;
    if ( v6 )
    {
      v8 = RIMDeadzone::Initialize(v6, a2);
      if ( v8 < 0 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0x20u,
          (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
        Win32FreePool(v7);
      }
      else
      {
        v9 = 0LL;
        v10 = (_QWORD *)(a1 + 408);
        while ( *v10 )
        {
          v9 = (unsigned int)(v9 + 1);
          ++v10;
          if ( (unsigned int)v9 >= 5 )
            goto LABEL_13;
        }
        *(_QWORD *)(a1 + 8 * v9 + 408) = v7;
        ++*(_DWORD *)(a1 + 448);
        *a3 = (unsigned int)v9;
      }
    }
    else
    {
      v8 = -1073741801;
    }
  }
LABEL_13:
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x22u,
    (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids,
    v8);
  return (unsigned int)v8;
}
