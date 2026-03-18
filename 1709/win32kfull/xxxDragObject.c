/*
 * XREFs of xxxDragObject @ 0x1C02134AC
 * Callers:
 *     NtUserDragObject @ 0x1C01E3EB0 (NtUserDragObject.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0046780 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0046880 (xxxSetCapture.c)
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     zzzSetCursor @ 0x1C0098174 (zzzSetCursor.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009F5E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSleepThread2 @ 0x1C00A3308 (xxxSleepThread2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     zzzShowCursor @ 0x1C011E824 (zzzShowCursor.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0213304 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 */

__int64 __fastcall xxxDragObject(struct tagWND *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r13
  __int64 ThreadWin32Thread; // rax
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // r12d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  struct tagCURSOR *DropObject; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // r8
  unsigned int v57; // edi
  __int64 v58; // rdx
  __int64 v59; // rcx
  volatile signed __int32 *v60; // rdx
  int v61; // [rsp+58h] [rbp-B0h]
  __int64 *BugCheckParameter2; // [rsp+60h] [rbp-A8h]
  __int64 v63; // [rsp+70h] [rbp-98h] BYREF
  __int64 v64; // [rsp+78h] [rbp-90h]
  _QWORD v65[6]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v66[3]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v67[3]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v68[3]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v69[3]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v70[48]; // [rsp+118h] [rbp+10h] BYREF

  memset(v65, 0, sizeof(v65));
  memset(v70, 0, sizeof(v70));
  v8 = 0;
  v61 = 1;
  v9 = 0LL;
  BugCheckParameter2 = 0LL;
  result = Win32AllocPoolWithQuotaZInit(96LL, 1935962965LL);
  v12 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v69, (__int64)Win32FreePool, v11);
    v16 = 0LL;
    if ( a2 )
      v16 = *(_QWORD *)a2;
    *(_QWORD *)v12 = v16;
    *(_DWORD *)(v12 + 16) = a3;
    *(_QWORD *)(v12 + 24) = a4;
    if ( a5 )
      v17 = zzzSetCursor(a5);
    else
      v17 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 368LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
    v66[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v66;
    v66[1] = v17;
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    if ( a2 )
    {
      v19 = *(_BYTE *)(a2 + 71);
      v20 = a2;
      while ( (v19 & 0xC0) == 0x40 )
      {
        v20 = *(_QWORD *)(v20 + 104);
        v19 = *(_BYTE *)(v20 + 71);
      }
      v67[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v67;
      v67[1] = v20;
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
      xxxInternalUpdateWindow((struct tagWND *)v20, 1u);
      ThreadUnlock1(v22, v21);
    }
    if ( gpqForeground )
    {
      v23 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v23 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 408LL) )
        {
          v24 = 33;
          if ( *(_QWORD *)(v23 + 16) == gptiCurrent )
            v23 = a2;
          else
            v24 = 49;
          xxxWindowEvent(0x80000004, (volatile signed __int32 *)v23, 0LL, 3LL, v24);
        }
      }
    }
    xxxWindowEvent(0xEu, (volatile signed __int32 *)a2, 0LL, 0LL, 0);
    xxxSetCapture(a2);
    zzzShowCursor(1LL, v25, v26, v27);
    v30 = 1;
    v63 = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = &v63;
    v64 = 0LL;
    while ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 104LL) == a2 )
    {
      while ( !(unsigned int)xxxInternalGetMessage((int)v65, 0, 512, 526, 1, 0)
           && !(unsigned int)xxxInternalGetMessage((int)v65, 0, 35, 35, 1, 0)
           && !(unsigned int)xxxInternalGetMessage((int)v65, 0, 256, 265, 1, 0) )
      {
        if ( !(unsigned int)xxxSleepThread2(7u, 0, 1, 0, 0LL) )
        {
          ThreadUnlock1(v32, v31);
          ThreadUnlock1(v34, v33);
          goto LABEL_68;
        }
      }
      while ( (unsigned int)xxxInternalGetMessage((int)v70, 0, 256, 265, 1, 0) )
        ;
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 104LL) != a2 || LODWORD(v65[1]) == 256 && v65[2] == 27LL )
      {
        v9 = *(_QWORD *)&gasyscur[84];
        if ( v9 )
          zzzSetCursor(*(_QWORD *)&gasyscur[84]);
        break;
      }
      v38 = *(_OWORD *)(v12 + 16);
      *(_OWORD *)(v12 + 48) = *(_OWORD *)v12;
      v39 = *(_OWORD *)(v12 + 32);
      *(_OWORD *)(v12 + 64) = v38;
      *(_OWORD *)(v12 + 80) = v39;
      *(_QWORD *)(v12 + 32) = *(_QWORD *)((char *)&v65[4] + 4);
      DropObject = xxxQueryDropObject(a1, (struct tagDROPSTRUCT *)v12);
      v9 = (__int64)DropObject;
      if ( DropObject )
      {
        if ( DropObject == (struct tagCURSOR *)1 )
          v9 = a5;
      }
      else
      {
        v9 = *(_QWORD *)&gasyscur[84];
        *(_QWORD *)(v12 + 8) = 0LL;
      }
      if ( v9 )
        zzzSetCursor(v9);
      if ( a2 )
      {
        v44 = *(_QWORD *)&gasyscur[84];
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(
          (__int64 *)a2,
          557LL,
          v9 != v44,
          (struct _LARGE_STRING *)v12,
          0,
          0,
          0LL,
          1u,
          1);
      }
      LOBYTE(v41) = 1;
      if ( BugCheckParameter2 == (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(v12 + 8), v41, v42, v43) )
      {
        if ( BugCheckParameter2 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            BugCheckParameter2,
            559LL,
            0LL,
            (struct _LARGE_STRING *)v12,
            0,
            0,
            0LL,
            1u,
            1);
        }
      }
      else
      {
        if ( BugCheckParameter2 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            BugCheckParameter2,
            558LL,
            0LL,
            (struct _LARGE_STRING *)(v12 + 48),
            0,
            0,
            0LL,
            1u,
            1);
        }
        LOBYTE(v28) = 1;
        v47 = HMValidateHandleNoSecure(*(_QWORD *)(v12 + 8), v28, v45, v46);
        BugCheckParameter2 = (__int64 *)v47;
        ThreadUnlock1(v49, v48);
        v63 = *(_QWORD *)(gptiCurrent + 392LL);
        *(_QWORD *)(gptiCurrent + 392LL) = &v63;
        v64 = v47;
        if ( v47 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v47 + 8), 1u);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((__int64 *)v47, 558LL, 1uLL, (struct _LARGE_STRING *)v12, 0, 0, 0LL, 1u, 1);
        }
      }
      if ( LODWORD(v65[1]) == 162 || LODWORD(v65[1]) == 514 )
      {
        v30 = 0;
        v61 = 0;
      }
      else
      {
        v30 = v61;
      }
      if ( !v30 )
        break;
    }
    ThreadUnlock1(v29, v28);
    if ( v30 )
      v9 = *(_QWORD *)&gasyscur[84];
    xxxReleaseCapture();
    zzzShowCursor(0LL, v50, v51, v52);
    zzzSetCursor(v17);
    ThreadUnlock1(v54, v53);
    if ( v9 == *(_QWORD *)&gasyscur[84] || (v55 = ValidateHwnd(*(_QWORD *)(v12 + 8))) == 0 )
    {
      v57 = 0;
    }
    else
    {
      v68[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v68;
      v68[1] = v55;
      _InterlockedIncrement((volatile signed __int32 *)(v55 + 8));
      v56 = 0LL;
      *(_DWORD *)(*(_QWORD *)(v55 + 16) + 464LL) |= 0x20u;
      if ( a2 )
        v56 = *(_QWORD *)a2;
      _InterlockedIncrement(&glSendMessage);
      v57 = xxxSendTransformableMessageTimeout(
              (__int64 *)v55,
              554LL,
              v56,
              (struct _LARGE_STRING *)v12,
              0,
              0,
              0LL,
              1u,
              1);
      ThreadUnlock1(v59, v58);
    }
    if ( gpqForeground )
    {
      v60 = *(volatile signed __int32 **)(gpqForeground + 112LL);
      if ( v60 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 408LL) )
          xxxWindowEvent(0x80000005, v60, 0LL, 4LL, 33);
      }
    }
    xxxWindowEvent(0xFu, (volatile signed __int32 *)a2, 0LL, 0LL, 0);
    v8 = v57;
LABEL_68:
    PopAndFreeAlwaysW32ThreadLock((__int64)v69, v35, v36, v37);
    return v8;
  }
  return result;
}
