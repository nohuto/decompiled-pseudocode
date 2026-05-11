/*
 * XREFs of USBType1RenderBytePosition @ 0x1C0003520
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetCurrentFrame @ 0x1C0002BAC (USBHwGetCurrentFrame.c)
 *     USBMidiInGetCurrentTime @ 0x1C0002C04 (USBMidiInGetCurrentTime.c)
 *     USBHwGetClockRatio @ 0x1C0002D9C (USBHwGetClockRatio.c)
 *     WPP_RECORDER_SF_di @ 0x1C00030E4 (WPP_RECORDER_SF_di.c)
 *     WPP_RECORDER_SF_id @ 0x1C00031A8 (WPP_RECORDER_SF_id.c)
 *     USBType1AdjustPositionWithin1Ms @ 0x1C000345C (USBType1AdjustPositionWithin1Ms.c)
 */

__int64 __fastcall USBType1RenderBytePosition(__int64 a1, union _LARGE_INTEGER *a2)
{
  int CurrentFrame; // r12d
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  KIRQL v9; // al
  KIRQL v10; // r13
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // esi
  __int64 v16; // rdx
  __int64 *i; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  LONGLONG QuadPart; // rcx
  unsigned __int64 v21; // rax
  union _LARGE_INTEGER v22; // rax
  union _LARGE_INTEGER v23; // rcx
  union _LARGE_INTEGER v24; // rdx
  int v25; // [rsp+20h] [rbp-58h]
  __int128 v26; // [rsp+40h] [rbp-38h] BYREF
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF

  v27 = 0LL;
  CurrentFrame = 0;
  v4 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
    return 3221225860LL;
  v7 = *(_QWORD *)(v5 + 16);
  if ( !v7 )
    return 3221225860LL;
  v8 = *(_QWORD *)(v5 + 152);
  if ( !v8 )
    return 3221225860LL;
  a2[2].QuadPart = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 112));
  v10 = v9;
  if ( !*(_BYTE *)(v8 + 12) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 112), v9);
    USBHwGetClockRatio(v5, &v26, &v27);
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 112));
    v4 = v27;
    v10 = v11;
  }
  a2[1] = KeQueryPerformanceCounter(a2);
  if ( *(_BYTE *)(v5 + 45) )
  {
    CurrentFrame = USBHwGetCurrentFrame(v7, &v27);
    if ( CurrentFrame >= 0 )
    {
      USBMidiInGetCurrentTime();
      v15 = v27;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_di((__int64)WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14, v25);
      v16 = v5 + 64;
      for ( i = *(__int64 **)(v5 + 64); i != (__int64 *)v16; i = (__int64 *)*i )
      {
        v18 = i[3];
        v19 = *(unsigned int *)(v18 + 128);
        if ( (_DWORD)v19 )
        {
          if ( (unsigned int)(v15 - v19) < *(_DWORD *)(v18 + 132) )
          {
            QuadPart = a2[2].QuadPart + *(unsigned int *)(v18 + 12LL * (unsigned int)(v15 - v19) + 140);
            a2[2].QuadPart = QuadPart;
            if ( v4 )
            {
              v21 = USBType1AdjustPositionWithin1Ms(v5, v4, (__int64)&v26, v15);
              QuadPart = a2[2].QuadPart;
            }
            else
            {
              v21 = 0LL;
            }
            a2[2].QuadPart = QuadPart + v21;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_id((__int64)WPP_GLOBAL_Control->DeviceExtension, v16, v18, v19, v25);
            break;
          }
          if ( (unsigned int)(v15 - v19) < 0x7FFFFFFF )
            a2[2].QuadPart += *((unsigned int *)i + 9);
        }
      }
      v22.QuadPart = a2[2].QuadPart + *(_QWORD *)(v5 + 88);
      a2[2] = v22;
      v23 = *(union _LARGE_INTEGER *)(v5 + 80);
      if ( v22.QuadPart > (unsigned __int64)v23.QuadPart
        || (v23 = *(union _LARGE_INTEGER *)(v5 + 96), v22.QuadPart < (unsigned __int64)v23.QuadPart) )
      {
        a2[2] = v23;
      }
    }
  }
  else
  {
    v24 = *(union _LARGE_INTEGER *)(v5 + 88);
    if ( v24.QuadPart <= *(_QWORD *)(v5 + 96) )
      v24 = *(union _LARGE_INTEGER *)(v5 + 96);
    a2[2] = v24;
  }
  a2[4] = KeQueryPerformanceCounter(0LL);
  *(union _LARGE_INTEGER *)(v5 + 96) = a2[2];
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 112), v10);
  return (unsigned int)CurrentFrame;
}
