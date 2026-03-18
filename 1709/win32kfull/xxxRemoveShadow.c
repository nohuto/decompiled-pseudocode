/*
 * XREFs of xxxRemoveShadow @ 0x1C0060220
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxRemoveShadow(__int64 a1)
{
  unsigned int v1; // ebx
  struct tagSHADOW **v2; // rdx
  struct tagSHADOW *v4; // rdi
  volatile signed __int32 *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8

  v1 = 0;
  v2 = &gpshadowFirst;
  if ( gpshadowFirst )
  {
    while ( 1 )
    {
      v4 = *v2;
      if ( *(_QWORD *)*v2 == a1 )
        break;
      v2 = (struct tagSHADOW **)((char *)v4 + 16);
      if ( !*((_QWORD *)v4 + 2) )
        return v1;
    }
    *v2 = (struct tagSHADOW *)*((_QWORD *)v4 + 2);
    v5 = (volatile signed __int32 *)HMAssignmentUnlock((char *)v4 + 8);
    HMAssignmentUnlock(v4);
    Win32FreePool(v4, v6, v7);
    if ( v5 )
      return (unsigned int)xxxDestroyWindow(v5, v8, v9);
    else
      return 1;
  }
  return v1;
}
