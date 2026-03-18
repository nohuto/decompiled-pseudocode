/*
 * XREFs of DestroyNotify @ 0x1C0058630
 * Callers:
 *     FreeThreadsWinEvents @ 0x1C0058540 (FreeThreadsWinEvents.c)
 *     xxxProcessNotifyWinEvent @ 0x1C006DA90 (xxxProcessNotifyWinEvent.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00C50F0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     ?RemoveNotify@@YAXPEAPEAUtagNOTIFY@@@Z @ 0x1C005866C (-RemoveNotify@@YAXPEAPEAUtagNOTIFY@@@Z.c)
 */

void __fastcall DestroyNotify(struct tagNOTIFY **a1)
{
  struct tagNOTIFY **v1; // rax
  struct tagNOTIFY **v3; // rcx

  v1 = gpPendingNotifies;
  v3 = (struct tagNOTIFY **)&gpPendingNotifies;
  while ( v1 )
  {
    if ( v1 == a1 )
    {
      RemoveNotify(v3);
      return;
    }
    v3 = v1;
    v1 = (struct tagNOTIFY **)*v1;
  }
}
