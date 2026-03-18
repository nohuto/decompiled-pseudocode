/*
 * XREFs of UsbhQueryGlobalLegacyDeviceValue @ 0x1C0027B80
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

__int64 __fastcall UsbhQueryGlobalLegacyDeviceValue(
        __int64 a1,
        int a2,
        const void *a3,
        unsigned int a4,
        char a5,
        __int64 a6)
{
  SIZE_T v6; // r14
  unsigned int v10; // ebx
  PDEVICE_OBJECT v11; // rcx
  int v12; // esi
  unsigned int v13; // eax
  int v15; // r8d
  void *v16; // rcx
  PVOID PoolWithTag; // rax
  void *v18; // rsi
  __int64 v19; // rdi

  v6 = a4;
  v10 = 0;
  v11 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      65,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v15,
        66,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        a1);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          67,
          (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
          a2);
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            a2,
            1,
            68,
            (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
            (char)a3);
          v11 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              69,
              (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
              v6);
            v11 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_q(
                WPP_GLOBAL_Control->DeviceExtension,
                a2,
                1,
                70,
                (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
                a5);
              v11 = WPP_GLOBAL_Control;
            }
          }
        }
      }
    }
  }
  if ( LOWORD(v11->DeviceType) )
    WPP_RECORDER_SF_q(v11->DeviceExtension, a2, 1, 71, (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids, a6);
  v12 = a2 - 1;
  if ( v12 )
  {
    v13 = 2;
    if ( v12 == 2 )
    {
      if ( *(_DWORD *)a6 != 3 )
        return v10;
      if ( (unsigned int)v6 <= 2 )
        v13 = v6;
      if ( v13 )
      {
        if ( a3 )
        {
          v16 = *(void **)(a6 + 8);
          if ( v16 )
          {
            if ( v16 != a3 )
              memmove(v16, a3, v13);
            return v10;
          }
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( *(_DWORD *)a6 > 1u )
    return v10;
  if ( !(_DWORD)v6 || !a3 || !*(_QWORD *)(a6 + 8) )
    return (unsigned int)-1073741811;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x42554855u);
  v18 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v6);
  v19 = *(_QWORD *)(a6 + 8);
  if ( v18 )
  {
    memmove(v18, a3, v6);
    *(_QWORD *)(v19 + 8) = v18;
    *(_DWORD *)(v19 + 4) = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
