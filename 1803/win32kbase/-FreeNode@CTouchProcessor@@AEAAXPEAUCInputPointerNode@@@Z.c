/*
 * XREFs of ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0111FF0
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C010E18C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C0111ED0 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeNode(struct _KTHREAD **this, struct CInputPointerNode *a2)
{
  struct CInputPointerNode *v3; // rax
  struct CInputPointerNode **v4; // rcx
  char *v5; // rax
  __int64 v6; // rcx
  char **v7; // rdx

  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( *((struct CInputPointerNode **)a2 + 36) != (struct CInputPointerNode *)((char *)a2 + 288) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( *((struct CInputPointerNode **)a2 + 34) != (struct CInputPointerNode *)((char *)a2 + 272) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v3 = *(struct CInputPointerNode **)a2;
  if ( *(struct CInputPointerNode **)(*(_QWORD *)a2 + 8LL) != a2
    || (v4 = (struct CInputPointerNode **)*((_QWORD *)a2 + 1), *v4 != a2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *((_QWORD *)v3 + 1) = v4;
  v5 = (char *)a2 + 16;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v6 = *((_QWORD *)a2 + 2);
  if ( (struct CInputPointerNode *)v6 != (struct CInputPointerNode *)((char *)a2 + 16) )
  {
    if ( *(char **)(v6 + 8) != v5 || (v7 = (char **)*((_QWORD *)a2 + 3), *v7 != v5) )
      __fastfail(3u);
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
  }
  if ( *((_DWORD *)a2 + 12) )
    CInputDest::SetEmpty((struct CInputPointerNode *)((char *)a2 + 48));
  Win32FreePool((__int64)a2);
}
