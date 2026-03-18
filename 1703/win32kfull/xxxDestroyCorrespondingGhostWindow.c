/*
 * XREFs of xxxDestroyCorrespondingGhostWindow @ 0x1C0132100
 * Callers:
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxHandleHealthyWindow @ 0x1C013208C (xxxHandleHealthyWindow.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     IsNonImmersiveBand @ 0x1C00B79A8 (IsNonImmersiveBand.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxDestroyCorrespondingGhostWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  int v3; // esi
  _QWORD *v4; // rax
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  struct tagWND *v12; // r11
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 884LL), 1LL);
  if ( v4 )
  {
    v1 = 1;
    if ( v4 == (_QWORD *)-1LL )
    {
      if ( !IsNonImmersiveBand((__int64)a1) )
        PostShellHookMessagesEx(0x34u, *(_QWORD *)a1, 0LL);
      v4 = 0LL;
    }
  }
  else
  {
    v4 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(*(_QWORD *)v5 + 1362LL), 1LL);
    if ( !v4 )
      return v1;
    v1 = 1;
    v3 = 1;
  }
  if ( v4 )
  {
    v6 = HMValidateHandleNoSecure((unsigned __int64)v4, 1);
    v8 = v6;
    if ( v6 )
    {
      v9 = gptiCurrent;
      v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v14;
      v10 = *(unsigned __int16 *)(v6 + 82);
      ++*(_DWORD *)(v8 + 8);
      v14[1] = v8;
      if ( (v10 & 0xFFFF3FFF) == 0x2AA )
      {
        if ( v3 )
          v11 = *(unsigned __int16 *)(gpsi + 1362LL);
        else
          v11 = *(unsigned __int16 *)(gpsi + 884LL);
        InternalRemoveProp(v8, v11, 1LL);
        xxxHideGhostWindow(v12, a1);
      }
      else
      {
        v1 = 0;
      }
      ThreadUnlock1(v9, v7);
    }
  }
  return v1;
}
