/*
 * XREFs of UsbhQueryGlobalLegacyDeviceValue @ 0x1C00271B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0029500 (memmove.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
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
  int v11; // esi
  unsigned int v12; // eax
  void *v14; // rcx
  PVOID PoolWithTag; // rax
  void *v16; // rsi
  __int64 v17; // rdi

  v6 = a4;
  v10 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      65,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      (_DWORD)a3,
      66,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      67,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      68,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      (char)a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      69,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      v6);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      70,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      71,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a6);
  v11 = a2 - 1;
  if ( v11 )
  {
    v12 = 2;
    if ( v11 == 2 )
    {
      if ( *(_DWORD *)a6 != 3 )
        return v10;
      if ( (unsigned int)v6 <= 2 )
        v12 = v6;
      if ( v12 )
      {
        if ( a3 )
        {
          v14 = *(void **)(a6 + 8);
          if ( v14 )
          {
            if ( v14 != a3 )
              memmove(v14, a3, v12);
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
  v16 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v6);
  v17 = *(_QWORD *)(a6 + 8);
  if ( v16 )
  {
    memmove(v16, a3, v6);
    *(_QWORD *)(v17 + 8) = v16;
    *(_DWORD *)(v17 + 4) = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
