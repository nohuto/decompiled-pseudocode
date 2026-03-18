/*
 * XREFs of RIMCreatePointerDeviceDeadzone @ 0x1C0104EE0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C0116134 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 */

__int64 __fastcall RIMCreatePointerDeviceDeadzone(__int64 a1, const struct tagRIMDEADZONE *a2, _QWORD *a3)
{
  const struct tagRIMDEADZONE *v4; // rbx
  int v6; // edx
  RIMDeadzone *v7; // rax
  __int64 v8; // rsi
  int v9; // edx
  int v10; // ebx
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    31,
    (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 || *(_DWORD *)(a1 + 448) >= 5u )
  {
    v10 = -1073741811;
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      18,
      33,
      (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
  }
  else
  {
    v7 = (RIMDeadzone *)Win32AllocPoolZInit(0x40uLL, 1853506642LL);
    v8 = (__int64)v7;
    if ( v7 )
    {
      v10 = RIMDeadzone::Initialize(v7, v4);
      if ( v10 < 0 )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          18,
          32,
          (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
        Win32FreePool(v8);
      }
      else
      {
        v11 = 0LL;
        v12 = (_QWORD *)(a1 + 408);
        while ( *v12 )
        {
          v11 = (unsigned int)(v11 + 1);
          ++v12;
          if ( (unsigned int)v11 >= 5 )
            goto LABEL_13;
        }
        *(_QWORD *)(a1 + 8 * v11 + 408) = v8;
        ++*(_DWORD *)(a1 + 448);
        *a3 = (unsigned int)v11;
      }
    }
    else
    {
      v10 = -1073741801;
    }
  }
LABEL_13:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x22u,
    (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids,
    v10);
  return (unsigned int)v10;
}
