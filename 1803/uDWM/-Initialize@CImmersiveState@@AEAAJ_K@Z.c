/*
 * XREFs of ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x180007528
 * Callers:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x1800071D8 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 * Callees:
 *     ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z @ 0x18000736C (-UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020F90 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002BA20 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 */

__int64 __fastcall CImmersiveState::Initialize(CImmersiveState *this, unsigned __int64 a2)
{
  struct _LIST_ENTRY *WindowListForDesktop; // rsi
  struct _LIST_ENTRY *i; // rbx

  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 16, 24LL);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                           a2);
  for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
  {
    if ( (HIDWORD(i[6].Flink) & 0x40000000) == 0 )
    {
      switch ( LODWORD(i[7].Flink) )
      {
        case 6:
          if ( !CImmersiveState::UpdateInfoIfTaskbar(this, (HWND *)i) && ((__int64)i[37].Blink & 0xFFF) == 9 )
          {
            if ( SBYTE3(i[37].Flink) >= 0 )
              *((_BYTE *)this + 56) = 1;
            *(struct _LIST_ENTRY *)((char *)this + 72) = i[3];
          }
          break;
        case 0xC:
          if ( !*((_QWORD *)this + 6) )
            *((_QWORD *)this + 6) = i;
          break;
        case 1:
          CImmersiveState::UpdateInfoIfTaskbar(this, (HWND *)i);
          break;
      }
    }
  }
  return 0LL;
}
