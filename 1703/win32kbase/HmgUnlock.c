/*
 * XREFs of HmgUnlock @ 0x1C00A0158
 * Callers:
 *     GreUnlockRegion @ 0x1C00FCA50 (GreUnlockRegion.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0032EC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgUnlock(unsigned int a1)
{
  __int16 v1; // ebx^2
  unsigned int v2; // edi
  struct OBJECT *EntryObject; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]

  v1 = HIWORD(a1);
  v5 = 0LL;
  v6 = 0;
  v2 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v5, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v5) )
  {
    if ( *(_BYTE *)(v5 + 14) == 4 && *(_WORD *)(v5 + 12) == v1 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v5 & 0xFFFFFF);
      if ( EntryObject )
      {
        if ( *((_WORD *)EntryObject + 6) && *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
        {
          _InterlockedDecrement((volatile signed __int32 *)EntryObject + 3);
          v2 = 1;
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
  }
  if ( v6 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
  return v2;
}
