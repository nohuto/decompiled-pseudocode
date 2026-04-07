/*
 * XREFs of ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180032F88
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180034A28 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180034C00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180017058 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180032EF4 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180036710 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 */

void __fastcall CWindowList::CheckForMaximizedChange(CWindowList *this, struct CWindowData *a2)
{
  char v3; // si
  bool v4; // di
  char v6; // r15
  unsigned __int8 v7; // si
  struct _LIST_ENTRY *WindowListForDesktop; // rdi
  struct _LIST_ENTRY *i; // rbx
  struct CWindowData *Buffer; // [rsp+40h] [rbp+8h] BYREF

  v3 = 1;
  v4 = (*((_BYTE *)a2 + 593) & 2) != 0;
  if ( (*((_DWORD *)a2 + 25) & 0x11000000) != 0x11000000 || !*((_QWORD *)a2 + 4) )
    v3 = 0;
  v6 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 400)) == 0;
  *((_BYTE *)a2 + 593) &= ~2u;
  *((_BYTE *)a2 + 593) |= 2 * v3;
  if ( v3 )
  {
    if ( !v4 )
    {
      CGenericSet<CWindowData *>::Add((struct _RTL_GENERIC_TABLE *)((char *)this + 400), (__int64)a2);
      goto LABEL_5;
    }
  }
  else if ( !v4 )
  {
    goto LABEL_5;
  }
  if ( !v3 )
  {
    Buffer = a2;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 400), &Buffer);
  }
LABEL_5:
  v7 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 400)) == 0;
  if ( v6 != v7 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *((_QWORD *)a2 + 15));
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 20) = v7;
    for ( i = WindowListForDesktop->Flink; i != WindowListForDesktop; i = i->Flink )
    {
      if ( (BYTE1(i[37].Flink) & 8) != 0 )
      {
        CWindowData::OnColorizationUpdated((CWindowData *)i);
        PostMessageW((HWND)i[2].Blink, 0x321u, v7, 0LL);
      }
    }
  }
}
