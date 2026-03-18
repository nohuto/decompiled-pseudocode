/*
 * XREFs of WmipSendEnableRequest @ 0x1405577A8
 * Callers:
 *     WmipEnableCollectOrEvent @ 0x140557544 (WmipEnableCollectOrEvent.c)
 * Callees:
 *     WmipUnreferenceEntry @ 0x1404BECD0 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x14055536C (WmipReferenceEntry.c)
 *     WmipSendEnableDisableRequest @ 0x140581C7C (WmipSendEnableDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x1405D63E4 (WmipReleaseCollectionEnabled.c)
 *     WmipWaitForCollectionEnabled @ 0x1407097B8 (WmipWaitForCollectionEnabled.c)
 */

__int64 __fastcall WmipSendEnableRequest(ULONG_PTR BugCheckParameter2, char a2)
{
  int v4; // ecx
  int v5; // edi
  __int64 v6; // r8
  unsigned int v7; // ebp
  __int64 v8; // r8
  int v9; // eax

  if ( a2 )
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 88);
    v5 = 2;
    *(_DWORD *)(BugCheckParameter2 + 88) = v4 + 1;
  }
  else
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 92);
    v5 = 4;
    *(_DWORD *)(BugCheckParameter2 + 92) = v4 + 1;
  }
  if ( v4 || (v5 & *(_DWORD *)(BugCheckParameter2 + 16)) != 0 )
  {
    if ( !a2 && (v5 & *(_DWORD *)(BugCheckParameter2 + 16)) != 0 )
      WmipWaitForCollectionEnabled(BugCheckParameter2);
    return 0;
  }
  else
  {
    WmipReferenceEntry(BugCheckParameter2);
    *(_DWORD *)(BugCheckParameter2 + 16) |= v5;
    do
    {
      LOBYTE(v6) = a2;
      v7 = WmipSendEnableDisableRequest(a2 != 0 ? 4 : 6, BugCheckParameter2, v6);
      if ( a2 )
        v9 = *(_DWORD *)(BugCheckParameter2 + 88);
      else
        v9 = *(_DWORD *)(BugCheckParameter2 + 92);
      if ( v9 )
        break;
      LOBYTE(v8) = a2;
      v7 = WmipSendEnableDisableRequest(a2 != 0 ? 5 : 7, BugCheckParameter2, v8);
    }
    while ( a2 ? *(_DWORD *)(BugCheckParameter2 + 88) : *(_DWORD *)(BugCheckParameter2 + 92) );
    *(_DWORD *)(BugCheckParameter2 + 16) &= ~v5;
    if ( !a2 )
      WmipReleaseCollectionEnabled(BugCheckParameter2);
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)BugCheckParameter2);
  }
  return v7;
}
