/*
 * XREFs of ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z @ 0x1801A44B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1801A4510 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(
        KeyboardHosting::TabTipAdapter *this,
        struct MsgString *a2)
{
  unsigned int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v2 = *(_DWORD *)a2 & 0xE0000000;
    if ( v2 == 0x40000000 )
    {
      a2 = (struct MsgString *)((char *)a2 + 8);
    }
    else
    {
      if ( v2 != 0x80000000 )
        __debugbreak();
      a2 = (struct MsgString *)*((_QWORD *)a2 + 1);
    }
  }
  v3 = KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(
         (KeyboardHosting::TabTipAdapter *)((char *)this - 8),
         (const unsigned __int16 *)a2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2C4,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
