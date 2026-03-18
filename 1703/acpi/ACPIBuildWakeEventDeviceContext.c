/*
 * XREFs of ACPIBuildWakeEventDeviceContext @ 0x1C0044D3C
 * Callers:
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000E1B0 (ACPIBuildProcessDevicePhasePrw.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C0028544 (WPP_RECORDER_SF_sqss.c)
 *     WPP_RECORDER_SF_sLqss @ 0x1C00456F0 (WPP_RECORDER_SF_sLqss.c)
 */

__int64 __fastcall ACPIBuildWakeEventDeviceContext(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rsi
  char v4; // dl
  const char *v6; // rax
  const char *v7; // r8
  __int64 v8; // r9
  ULONG_PTR v10; // r14
  int v11; // eax
  __int64 v12; // r8
  int v13; // edx
  unsigned int v14; // r11d
  const char *v15; // rax
  const char *v16; // r10
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  int BugCheckParameter4; // [rsp+20h] [rbp-38h]

  v2 = *(_QWORD *)(BugCheckParameter3 + 32);
  v4 = 0;
  if ( *(_DWORD *)v2 >= 2u )
  {
    v10 = BugCheckParameter2 + 920;
    v11 = AMLIGetNameSpaceObject(*(_BYTE **)(v2 + 40), 0LL, (_QWORD *)(BugCheckParameter2 + 920));
    v13 = 0;
    v14 = v11;
    if ( v11 < 0 )
    {
      if ( BugCheckParameter2 )
      {
        v12 = *(_QWORD *)(BugCheckParameter2 + 8);
        v13 = BugCheckParameter2;
      }
      WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, v13, v12, 18);
      KeBugCheckEx(0xA5u, 6uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v2 + 40));
    }
    if ( *(_WORD *)(**(_QWORD **)v10 + 66LL) != 6 )
    {
      v15 = byte_1C0066CD0;
      v16 = byte_1C0066CD0;
      if ( BugCheckParameter2 )
      {
        v17 = *(_QWORD *)(BugCheckParameter2 + 8);
        LOBYTE(v13) = BugCheckParameter2;
        if ( (v17 & 0x200000000000LL) != 0 )
        {
          v15 = *(const char **)(BugCheckParameter2 + 560);
          if ( (v17 & 0x400000000000LL) != 0 )
            v16 = *(const char **)(BugCheckParameter2 + 568);
        }
      }
      WPP_RECORDER_SF_sqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xAu,
        0x13u,
        BugCheckParameter4,
        *(const char **)(v2 + 40),
        v13,
        v15,
        v16);
      KeBugCheckEx(0xA5u, 0x19uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v2 + 40));
    }
    v18 = *(_QWORD *)(BugCheckParameter3 + 32);
    v19 = *(_WORD *)(v18 + 50);
    if ( v19 != 1 )
      KeBugCheckEx(0xA5u, 4uLL, BugCheckParameter2, BugCheckParameter3, v19);
    *(_DWORD *)(BugCheckParameter2 + 928) = *(_DWORD *)(v18 + 64);
    _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 952), 0x4000000000uLL);
    return v14;
  }
  else
  {
    v6 = byte_1C0066CD0;
    v7 = byte_1C0066CD0;
    if ( BugCheckParameter2 )
    {
      v8 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(BugCheckParameter2 + 560);
        if ( (v8 & 0x400000000000LL) != 0 )
          v7 = *(const char **)(BugCheckParameter2 + 568);
      }
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xAu,
      0x11u,
      (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
      13,
      v4,
      v6,
      v7);
    return 3221225485LL;
  }
}
