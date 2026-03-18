/*
 * XREFs of WmipDoDisableRequest @ 0x1405D5E40
 * Callers:
 *     WmipEnableCollectionForNewGuid @ 0x14051C2C4 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140593B58 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendDisableRequest @ 0x14059D4B8 (WmipSendDisableRequest.c)
 * Callees:
 *     WmipReleaseCollectionEnabled @ 0x1405D5ED0 (WmipReleaseCollectionEnabled.c)
 *     WmipSendEnableDisableRequest @ 0x1405D5EF0 (WmipSendEnableDisableRequest.c)
 */

__int64 __fastcall WmipDoDisableRequest(_DWORD *a1, char a2, __int64 a3)
{
  int v3; // ebp
  _DWORD *v5; // rbx
  char v6; // si
  __int64 v7; // r8
  unsigned int v8; // r14d
  __int64 v9; // rcx

  v3 = a3;
  v5 = a1;
  v6 = a2 != 0 ? 5 : 7;
  do
  {
    LOBYTE(a3) = a2;
    LOBYTE(a1) = v6;
    v8 = WmipSendEnableDisableRequest(a1, v5, a3);
    if ( a2 )
      v9 = (unsigned int)v5[22];
    else
      v9 = (unsigned int)v5[23];
    if ( !(_DWORD)v9 )
      break;
    LOBYTE(v7) = a2;
    LOBYTE(v9) = a2 != 0 ? 4 : 6;
    v8 = WmipSendEnableDisableRequest(v9, v5, v7);
  }
  while ( !(a2 ? v5[22] : v5[23]) );
  v5[4] &= ~v3;
  if ( !a2 )
    WmipReleaseCollectionEnabled(v5);
  return v8;
}
