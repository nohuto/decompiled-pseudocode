/*
 * XREFs of ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C02221D0
 * Callers:
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C0220EF8 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C02216E4 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C021B2E0 (-ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1C021B434 (-ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C021CA50 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

struct tagWND *__fastcall InteractiveControlDevice::UpdateInputTarget(InteractiveControlDevice *this, int a2)
{
  const GUID *v2; // rdi
  __int64 v3; // rbx
  struct InteractiveControlManager *v5; // rax
  InteractiveControlManager *v6; // rax
  __int64 v7; // rdx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rax
  InteractiveControlManager *v11; // rax
  __int64 v12; // rdx
  const GUID *v13; // r8
  const GUID *v14; // r9

  v2 = (const GUID *)*((_QWORD *)this + 6);
  v3 = 0LL;
  if ( v2 && (a2 & *((_DWORD *)this + 14)) != 0 )
  {
    if ( (v2[3].Data4[4] & 0x80u) != 0 || (v2[3].Data4[3] & 0x80u) != 0 )
    {
      v6 = InteractiveControlManager::Instance();
      InteractiveControlManager::ClearBackgroundAccessors(v6, v7, v8, v9);
    }
    else
    {
      v5 = InteractiveControlManager::Instance();
      InteractiveControlManager::SetDeviceFocus((__int64)v5, 0, 0LL, v2);
    }
  }
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
  {
    if ( *(char *)(v10 + 60) < 0 || *(char *)(v10 + 59) < 0 )
    {
      v11 = InteractiveControlManager::Instance();
      InteractiveControlManager::ClearDeviceFocus(v11, v12, v13, v14);
    }
    else
    {
      return (struct tagWND *)*((_QWORD *)this + 5);
    }
  }
  return (struct tagWND *)v3;
}
