/*
 * XREFs of xxxHandleDestroyGhostWindow @ 0x1C01398BC
 * Callers:
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxHandleDestroyGhostWindow(struct tagWND *a1)
{
  int v1; // edi
  _QWORD *v3; // rax
  __int64 v4; // r11
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagWND *v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 884LL), 1LL);
  if ( !v3 )
  {
    v3 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(*(_QWORD *)v4 + 1362LL), 1LL);
    if ( !v3 )
      return 0LL;
    v1 = 1;
  }
  v6 = HMValidateHandleNoSecure((unsigned __int64)v3, 1);
  if ( v6 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    ++*(_DWORD *)(v6 + 8);
    v13[1] = v6;
    if ( v1 )
      v7 = *(unsigned __int16 *)(gpsi + 1362LL);
    else
      v7 = *(unsigned __int16 *)(gpsi + 884LL);
    InternalRemoveProp(v6, v7, 1LL);
    xxxHideGhostWindow(a1, v10, v8, v9);
    ThreadUnlock1(v12, v11);
  }
  return 0LL;
}
