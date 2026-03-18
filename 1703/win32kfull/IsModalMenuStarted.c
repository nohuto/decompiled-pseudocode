/*
 * XREFs of IsModalMenuStarted @ 0x1C01CA040
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C8A90 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0205008 (xxxMNDismissIfOffMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsModalMenuStarted(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)(a1 + 528);
  if ( !v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(v1 + 8) & 0x101) != 1 )
    return 0;
  return v2;
}
