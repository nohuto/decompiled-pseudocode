/*
 * XREFs of ConvertUserHandlesToKernelHandles @ 0x1C004CFA4
 * Callers:
 *     NtMITWaitForMultipleObjectsEx @ 0x1C004C0E0 (NtMITWaitForMultipleObjectsEx.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004D114 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00E6EB8 (WPP_RECORDER_SF_qD.c)
 */

_BOOL8 __fastcall ConvertUserHandlesToKernelHandles(__int64 a1, HANDLE *a2, unsigned int a3)
{
  HANDLE *v4; // r14
  NTSTATUS v6; // eax
  int v7; // edx
  NTSTATUS v8; // ebx
  unsigned int v9; // edi
  HANDLE *v10; // r15
  int v11; // edx
  HANDLE TargetProcessHandle; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      1,
      10,
      (__int64)&WPP_5c93d0b061953b71fb60c0758197579d_Traceguids);
  }
  TargetProcessHandle = 0LL;
  v6 = ObOpenObjectByPointer(PsInitialSystemProcess, 0x200u, 0LL, 0x20000u, 0LL, 0, &TargetProcessHandle);
  v8 = v6;
  if ( v6 < 0 )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_D(gBaseLog, v7, 1, 13, (__int64)&WPP_5c93d0b061953b71fb60c0758197579d_Traceguids, v6);
  }
  else
  {
    v9 = 0;
    if ( a3 )
    {
      v10 = v4;
      while ( 1 )
      {
        v8 = ZwDuplicateObject(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               *v10,
               TargetProcessHandle,
               (PHANDLE)(a1 + 8LL * v9),
               0x100000u,
               0x200u,
               2u);
        if ( v8 < 0 )
          break;
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_qq(
          gBaseLog,
          v11,
          1,
          12,
          (__int64)&WPP_5c93d0b061953b71fb60c0758197579d_Traceguids,
          (char)*v10,
          (char)*(HANDLE *)((char *)v10 + a1 - (_QWORD)v4));
        ++v9;
        ++v10;
        if ( v9 >= a3 )
          goto LABEL_8;
      }
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_qD(
        gBaseLog,
        v11,
        1,
        11,
        (__int64)&WPP_5c93d0b061953b71fb60c0758197579d_Traceguids,
        (char)v4[v9],
        v8);
    }
  }
LABEL_8:
  if ( TargetProcessHandle )
    ZwClose(TargetProcessHandle);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      1,
      14,
      (__int64)&WPP_5c93d0b061953b71fb60c0758197579d_Traceguids);
  }
  return v8 >= 0;
}
