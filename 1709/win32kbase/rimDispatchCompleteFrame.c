/*
 * XREFs of rimDispatchCompleteFrame @ 0x1C010BA6C
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C000A28C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x1C010BBEC (rimProcessCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     HMAssignmentLock @ 0x1C0017670 (HMAssignmentLock.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C009C094 (rimFreeAutoRepeatCompleteFrame.c)
 *     rimSignalReadComplete @ 0x1C00A46B8 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C00A49F0 (rimStackAttachAndProcessInput.c)
 *     RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C010D3B4 (RIMFixUpAutoRepeatCompleteFrameUpDowns.c)
 */

__int64 __fastcall rimDispatchCompleteFrame(__int64 a1, __int64 a2, LARGE_INTEGER *a3)
{
  __int64 v6; // rdx
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 LowPart; // [rsp+38h] [rbp-48h]
  __int128 v10; // [rsp+40h] [rbp-40h]
  __int128 v11; // [rsp+50h] [rbp-30h]
  __int128 v12; // [rsp+60h] [rbp-20h] BYREF
  __int128 v13; // [rsp+70h] [rbp-10h] BYREF

  v8 = 0LL;
  LowPart = a3->LowPart;
  a3[7].HighPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a3[8] = KeQueryPerformanceCounter(0LL);
  rimStackAttachAndProcessInput(a1, a2, (__int64)a3, (__int64)&v8, 1);
  if ( !*(_QWORD *)(a1 + 768) && !*(_BYTE *)(a1 + 712) && *(_QWORD *)(a2 + 24) )
  {
    *((_QWORD *)&v10 + 1) = a2;
    *(_QWORD *)&v10 = a1 + 48;
    v12 = v10;
    HMAssignmentLock((__int64 **)&v12);
    *(_QWORD *)&v11 = a1 + 56;
    *((_QWORD *)&v11 + 1) = *(_QWORD *)(a2 + 472);
    v13 = v11;
    HMAssignmentLock((__int64 **)&v13);
  }
  rimSignalReadComplete(a1, a2);
  if ( *(_QWORD *)(a1 + 480) == -1LL )
    return Win32FreePool((__int64)a3);
  rimFreeAutoRepeatCompleteFrame(a2);
  RIMFixUpAutoRepeatCompleteFrameUpDowns(a1, v6, a3);
  if ( a3[3].LowPart )
  {
    a3[7].LowPart = 1;
    *(_DWORD *)(a2 + 184) |= 0x40000000u;
    *(_QWORD *)(a2 + 400) = a3;
  }
  else
  {
    Win32FreePool((__int64)a3);
  }
  return WPP_RECORDER_SF_q(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x14u,
           (__int64)&WPP_7f939aa136043ee70ba1a66d38f0357a_Traceguids,
           a2,
           v8,
           LowPart);
}
