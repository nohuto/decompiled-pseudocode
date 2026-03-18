/*
 * XREFs of NtUserSetCoreWindowPartner @ 0x1C0009A30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0009B04 (-SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C009AB94 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C020BFF8 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall NtUserSetCoreWindowPartner(HWND a1, int a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rbx
  struct tagWND *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagWND *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rcx
  struct tagWND *v17; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    UserSetLastError(87LL);
    v7 = 0LL;
    goto LABEL_10;
  }
  v6 = ValidateHWNDND(a1, &v17);
  v7 = 0LL;
  if ( !v6 )
    goto LABEL_11;
  v8 = v17;
  v9 = *((_QWORD *)v17 + 2);
  if ( gptiCurrent != v9 || !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v9 + 400)) )
  {
    v16 = 5LL;
    goto LABEL_12;
  }
  LOBYTE(v10) = 1;
  v11 = (struct tagWND *)HMValidateHandleNoSecure(a3, v10);
  if ( !v11 )
    goto LABEL_11;
  if ( !a2 )
  {
    v12 = CoreWindowProp::RemoveComponent(v11, v8);
    goto LABEL_9;
  }
  if ( a2 != 2 )
  {
LABEL_11:
    v16 = 87LL;
LABEL_12:
    UserSetLastError(v16);
    goto LABEL_10;
  }
  v12 = CoreWindowProp::SetHost(v8, v11);
LABEL_9:
  LOBYTE(v7) = v12 >= 0;
LABEL_10:
  UserSessionSwitchLeaveCrit(v14, v13);
  return v7;
}
