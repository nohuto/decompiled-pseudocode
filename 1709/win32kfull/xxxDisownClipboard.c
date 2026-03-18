/*
 * XREFs of xxxDisownClipboard @ 0x1C00C4CC4
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C005F5B0 (xxxDW_SendDestroyMessages.c)
 *     xxxSetProcessWindowStation @ 0x1C00F4E60 (xxxSetProcessWindowStation.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00C5834 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C6290 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C6904 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxDisownClipboard(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // r8d
  int v7; // edx
  _OWORD *v8; // r9
  int v9; // ebp
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // eax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  result = CheckClipboardAccess();
  v4 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v13, UserDereferenceObject, v3);
    ObfReferenceObject((PVOID)v4);
    xxxSendClipboardMessage((struct tagWINDOWSTATION *)v4, 0x306u);
    v5 = *(_QWORD *)(v4 + 96);
    v6 = 0;
    v7 = *(_DWORD *)(v4 + 104);
    v8 = (_OWORD *)v5;
    v9 = 0;
    while ( v7 )
    {
      v10 = *(_QWORD *)(v5 + 8);
      --v7;
      if ( v10 && (v10 != 1 || v6) )
      {
        ++v9;
        *v8 = *(_OWORD *)v5;
        v8[1] = *(_OWORD *)(v5 + 16);
        v8 += 2;
        if ( *(_QWORD *)(v5 + 8) != 1LL && *(_DWORD *)v5 <= 0xDu )
        {
          v11 = 8322;
          if ( _bittest(&v11, *(_DWORD *)v5) )
            v6 = 1;
        }
      }
      v5 += 32LL;
    }
    if ( a1 == *(_QWORD *)(v4 + 80) )
      HMAssignmentUnlock(v4 + 80);
    if ( v9 != *(_DWORD *)(v4 + 104) )
    {
      *(_DWORD *)(v4 + 32) |= 0x40u;
      ++*(_DWORD *)(v4 + 112);
    }
    v12 = *(_DWORD *)(v4 + 32);
    *(_DWORD *)(v4 + 104) = v9;
    if ( (v12 & 0x40) != 0 )
    {
      xxxDrawClipboard((struct tagWINDOWSTATION *)v4);
      MungeClipData((struct tagWINDOWSTATION *)v4);
    }
    if ( a1 == *(_QWORD *)(v4 + 80) )
      HMAssignmentUnlock(v4 + 80);
    return PopAndFreeW32ThreadLock(v13);
  }
  return result;
}
