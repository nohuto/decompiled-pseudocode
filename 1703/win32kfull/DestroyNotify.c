/*
 * XREFs of DestroyNotify @ 0x1C00D8D34
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C0058528 (xxxProcessNotifyWinEvent.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D8BF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeThreadsWinEvents @ 0x1C00D8C90 (FreeThreadsWinEvents.c)
 * Callees:
 *     <none>
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
