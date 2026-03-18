/*
 * XREFs of xxxSendMinRectMessages @ 0x1C0106320
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C01061E0 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0203704 (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     xxxMinimizeHungWindow @ 0x1C020CBF8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMinRectMessages(unsigned __int64 *a1, struct _LARGE_STRING *a2)
{
  unsigned int v2; // esi
  unsigned __int64 v4; // rbp
  __int64 v5; // r14
  void *v6; // rcx
  unsigned int v7; // edi
  ULONG_PTR v8; // rbx
  unsigned int *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[3]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v15[3]; // [rsp+68h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
    v4 = *a1;
  else
    v4 = 0LL;
  if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x800) != 0 )
  {
    xxxCallHook(5, v4, (__int64)a2, 0xAu);
    v2 = 1;
  }
  v5 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( *(_QWORD *)(v5 + 232) )
  {
    PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 408LL), v15, UserDereferenceObject);
    v6 = *(void **)(gptiCurrent + 408LL);
    if ( v6 )
      ObfReferenceObject(v6);
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *(unsigned int **)(v5 + 232);
      if ( v9 && !v9[3] )
      {
        if ( v7 < *v9 )
        {
          v10 = v7 + 1;
          if ( *(_QWORD *)&v9[4 * v7 + 6] != v8 )
            v10 = v7;
          v7 = v10;
          if ( v10 < *v9 )
          {
            _mm_lfence();
            v8 = *(_QWORD *)&v9[4 * v10 + 6];
            goto LABEL_19;
          }
        }
        v7 = 0;
      }
      v8 = 0LL;
LABEL_19:
      if ( !v8 )
      {
        PopAndFreeW32ThreadLock((__int64)v15);
        return v2;
      }
      v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v14;
      ++*(_DWORD *)(v8 + 8);
      v14[1] = v8;
      if ( xxxSendTransformableMessageTimeout(v8, 0x8Bu, v4, a2, 0, 100, (__int64 *)&BugCheckParameter3, 1, 0) )
        v2 = 1;
      ThreadUnlock1(v12, v11);
    }
  }
  return v2;
}
