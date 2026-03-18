/*
 * XREFs of xxxFreeDdeConv @ 0x1C01E6124
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01E4CA4 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C01E59A0 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01E59D0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01E5FCC (xxxDDETrackWindowDying.c)
 * Callees:
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01E4660 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01E47A8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 */

void __fastcall xxxFreeDdeConv(struct tagDDECONV *a1)
{
  struct tagDDECONV *v1; // rbx
  _QWORD *v2; // r8
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  void *v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
    return;
  v1 = a1;
  if ( (*((_DWORD *)a1 + 20) & 2) == 0
    && (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)**((_DWORD **)a1 + 6)
                 + gSharedInfo[1]
                 + 25LL) & 1) == 0 )
  {
    v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v10;
    ++*((_DWORD *)a1 + 2);
    v2 = (_QWORD *)*((_QWORD *)a1 + 5);
    v10[1] = a1;
    v3 = v2 ? *v2 : 0LL;
    PostMessage(*((_QWORD *)a1 + 6), 993LL, v3, 0LL);
    v1 = (struct tagDDECONV *)ThreadUnlock1(v5, v4);
    if ( !v1 )
      return;
  }
  v6 = *((_QWORD *)v1 + 4);
  if ( v6 && (*(_DWORD *)(*((_QWORD *)v1 + 2) + 440LL) & 1) != 0 )
    *(_DWORD *)(v6 + 80) |= 2u;
  UnlinkConv(v1);
  v7 = *((_QWORD *)v1 + 11);
  if ( v7 )
  {
    --*(_WORD *)(v7 + 90);
    v8 = *((_QWORD *)v1 + 11);
    if ( *(_WORD *)(v8 + 90) || *(_WORD *)(v8 + 88) )
      goto LABEL_19;
    if ( SeTokenType(*(PACCESS_TOKEN *)(v8 + 32)) == TokenPrimary )
    {
      v9 = *(void **)(*((_QWORD *)v1 + 11) + 32LL);
    }
    else
    {
      v9 = *(void **)(*((_QWORD *)v1 + 11) + 32LL);
      if ( !v9 )
      {
LABEL_18:
        Win32FreePool(*((_QWORD *)v1 + 11));
LABEL_19:
        *((_QWORD *)v1 + 11) = 0LL;
        goto LABEL_20;
      }
    }
    ObfDereferenceObject(v9);
    goto LABEL_18;
  }
LABEL_20:
  HMAssignmentUnlock((char *)v1 + 32);
  HMAssignmentUnlock((char *)v1 + 48);
  HMAssignmentUnlock((char *)v1 + 40);
  if ( (unsigned int)HMMarkObjectDestroy(v1) )
  {
    while ( *((_QWORD *)v1 + 7) )
      PopState(v1);
    HMFreeObject(v1);
  }
}
