/*
 * XREFs of UsbhQueryUxdDevice @ 0x1C0058BC0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0028680 (memmove.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C003C2E0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C00454FC (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall UsbhQueryUxdDevice(__int64 a1, __int64 a2, const void *a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  SIZE_T v6; // rsi
  int v8; // ebp
  unsigned int v10; // ebx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r8d
  int v14; // ebp
  void *v15; // rcx
  PVOID PoolWithTag; // rax
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+28h] [rbp-20h]

  v6 = a4;
  v8 = a2;
  v10 = 0;
  v11 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v12,
        12,
        (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
        a1);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v17) = v8;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0xDu,
          (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
          v17);
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            a2,
            1u,
            0xEu,
            (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
            a3);
          v11 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v18) = v6;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              0,
              1u,
              0xFu,
              (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
              v18);
            v11 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_q(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                a2,
                1u,
                0x10u,
                (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
                a5);
              v11 = WPP_GLOBAL_Control;
            }
          }
        }
      }
    }
  }
  if ( LOWORD(v11->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)v11->DeviceExtension,
      a2,
      1u,
      0x11u,
      (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
      a6);
  if ( !a6 )
    return 3221225485LL;
  v14 = v8 - 1;
  if ( !v14 )
  {
    if ( (unsigned int)v6 <= 0x200 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x42554855u);
      *(_QWORD *)a6 = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, v6);
      v15 = *(void **)a6;
      if ( !*(_QWORD *)a6 )
        return v10;
      a6[2] = v6;
      goto LABEL_23;
    }
    return (unsigned int)-2147483643;
  }
  if ( v14 == 2 )
  {
    if ( (unsigned int)v6 <= 0x44 )
    {
      v15 = a6;
LABEL_23:
      memmove(v15, a3, v6);
      return v10;
    }
    return (unsigned int)-2147483643;
  }
  return (unsigned int)-1073741811;
}
