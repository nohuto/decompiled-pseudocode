/*
 * XREFs of ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180032DE0
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034190 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180035840 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::SetPassiveUpdateMode(CWindowList *this, struct IDwmWindow *a2, unsigned __int8 a3)
{
  int SyncedWindowData; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  struct CWindowData *v13; // [rsp+58h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowData, 0x789u);
  }
  else if ( v13 )
  {
    v8 = *((_QWORD *)v13 + 50);
    if ( v8 )
    {
      v7 = 0;
      if ( a3 != ((*(_BYTE *)(v8 + 241) & 0x10) != 0) )
      {
        v10 = *(_QWORD *)(v8 + 16);
        *(_BYTE *)(v8 + 241) = (16 * a3) | *(_BYTE *)(v8 + 241) & 0xEF;
        v11 = v10 ? *(unsigned int *)(v10 + 24) : 0LL;
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v10 + 16) + 480LL))(
                *(_QWORD *)(v10 + 16),
                v11,
                a3);
        v7 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xFDu);
      }
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x78Du);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v7;
}
