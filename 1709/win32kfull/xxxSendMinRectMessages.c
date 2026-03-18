/*
 * XREFs of xxxSendMinRectMessages @ 0x1C010FF44
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C010FE00 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020518C (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     xxxMinimizeHungWindow @ 0x1C020EA88 (xxxMinimizeHungWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMinRectMessages(unsigned __int64 *a1, struct _LARGE_STRING *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rbx
  unsigned int *v13; // rdx
  unsigned int v14; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v19[3]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp+8h] BYREF

  v4 = 0;
  if ( a1 )
    v6 = *a1;
  else
    v6 = 0LL;
  if ( ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x800) != 0 )
  {
    xxxCallHook(5, v6, (__int64)a2, 0xAu);
    v4 = 1;
  }
  v7 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( *(_QWORD *)(v7 + 232) )
  {
    PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 432LL), v20, UserDereferenceObject, a4);
    v10 = *(void **)(gptiCurrent + 432LL);
    if ( v10 )
      ObfReferenceObject(v10);
    v11 = 0;
    v12 = 0LL;
    while ( 1 )
    {
      v13 = *(unsigned int **)(v7 + 232);
      if ( v13 && !v13[3] )
      {
        v8 = *v13;
        if ( v11 < (unsigned int)v8 )
        {
          v14 = v11 + 1;
          if ( *(_QWORD *)&v13[4 * v11 + 6] != v12 )
            v14 = v11;
          v11 = v14;
          if ( v14 < (unsigned int)v8 )
          {
            v12 = *(_QWORD *)&v13[4 * v14 + 6];
            goto LABEL_19;
          }
        }
        v11 = 0;
      }
      v12 = 0LL;
LABEL_19:
      if ( !v12 )
      {
        PopAndFreeW32ThreadLock((__int64)v20, (int)v13);
        return v4;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v13, v8, v9);
      v19[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v19;
      v19[1] = v12;
      _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
      if ( xxxSendTransformableMessageTimeout(
             (__int64 *)v12,
             139LL,
             v6,
             a2,
             0,
             100,
             (__int64 *)&BugCheckParameter3,
             1u,
             0) )
      {
        v4 = 1;
      }
      ThreadUnlock1(v17, v16);
    }
  }
  return v4;
}
