/*
 * XREFs of ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C0220CF4
 * Callers:
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C021FAF0 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0220300 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C021A09C (-ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1C021A1E4 (-ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C021B7B8 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

struct tagWND *__fastcall InteractiveControlDevice::UpdateInputTarget(InteractiveControlDevice *this, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  struct InteractiveControlManager *v5; // rax
  InteractiveControlManager *v6; // rax
  __int64 v7; // rax
  InteractiveControlManager *v8; // rax

  v2 = *((_QWORD *)this + 6);
  v3 = 0LL;
  if ( v2 && (a2 & *((_DWORD *)this + 14)) != 0 )
  {
    if ( *(char *)(v2 + 60) < 0 || *(char *)(v2 + 59) < 0 )
    {
      v6 = InteractiveControlManager::Instance();
      InteractiveControlManager::ClearBackgroundAccessors(v6);
    }
    else
    {
      v5 = InteractiveControlManager::Instance();
      InteractiveControlManager::SetDeviceFocus((__int64)v5, 0, 0, v2);
    }
  }
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    if ( *(char *)(v7 + 60) < 0 || *(char *)(v7 + 59) < 0 )
    {
      v8 = InteractiveControlManager::Instance();
      InteractiveControlManager::ClearDeviceFocus(v8);
    }
    else
    {
      return (struct tagWND *)*((_QWORD *)this + 5);
    }
  }
  return (struct tagWND *)v3;
}
