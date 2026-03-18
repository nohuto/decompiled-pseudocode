/*
 * XREFs of xxxDisownClipboard @ 0x1C00AE014
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C00200BC (xxxDW_SendDestroyMessages.c)
 *     xxxSetProcessWindowStation @ 0x1C00E29B0 (xxxSetProcessWindowStation.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00AE988 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00AF478 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00AFB1C (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxDisownClipboard(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r8d
  int v6; // edx
  _OWORD *v7; // r9
  int v8; // ebp
  __int64 v9; // rcx
  int v10; // r10d
  int v11; // eax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  result = CheckClipboardAccess();
  v3 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v12, UserDereferenceObject);
    ObfReferenceObject((PVOID)v3);
    xxxSendClipboardMessage((struct tagWINDOWSTATION *)v3, 0x306u);
    v4 = *(_QWORD *)(v3 + 96);
    v5 = 0;
    v6 = *(_DWORD *)(v3 + 104);
    v7 = (_OWORD *)v4;
    v8 = 0;
    while ( v6 )
    {
      v9 = *(_QWORD *)(v4 + 8);
      --v6;
      if ( v9 && (v9 != 1 || v5) )
      {
        ++v8;
        *v7 = *(_OWORD *)v4;
        v7[1] = *(_OWORD *)(v4 + 16);
        v7 += 2;
        if ( *(_DWORD *)v4 <= 0xDu && *(_QWORD *)(v4 + 8) != 1LL )
        {
          v10 = 8322;
          if ( _bittest(&v10, *(_DWORD *)v4) )
            v5 = 1;
        }
      }
      v4 += 32LL;
    }
    if ( a1 == *(_QWORD *)(v3 + 80) )
      HMAssignmentUnlock(v3 + 80);
    if ( v8 != *(_DWORD *)(v3 + 104) )
    {
      *(_DWORD *)(v3 + 32) |= 0x40u;
      ++*(_DWORD *)(v3 + 112);
    }
    v11 = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 104) = v8;
    if ( (v11 & 0x40) != 0 )
    {
      xxxDrawClipboard((struct tagWINDOWSTATION *)v3);
      MungeClipData((struct tagWINDOWSTATION *)v3);
    }
    if ( a1 == *(_QWORD *)(v3 + 80) )
      HMAssignmentUnlock(v3 + 80);
    return PopAndFreeW32ThreadLock(v12);
  }
  return result;
}
