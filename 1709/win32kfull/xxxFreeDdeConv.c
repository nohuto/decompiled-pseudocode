/*
 * XREFs of xxxFreeDdeConv @ 0x1C01F2168
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01F0CE4 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C01F19C0 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01F19F0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01F2000 (xxxDDETrackWindowDying.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F0680 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F07D8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 */

void __fastcall xxxFreeDdeConv(struct tagDDECONV *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagDDECONV *v4; // rbx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v6; // r8
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
    return;
  v4 = a1;
  if ( (*((_DWORD *)a1 + 20) & 2) == 0
    && (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)**((_DWORD **)a1 + 6)
                 + gSharedInfo[1]
                 + 25LL) & 1) == 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gSharedInfo[0], a3, a4);
    v19[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v19;
    v19[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
    v6 = (_QWORD *)*((_QWORD *)v4 + 5);
    v7 = v6 ? *v6 : 0LL;
    PostMessage(*((_QWORD *)v4 + 6), 993LL, v7, 0LL);
    v4 = (struct tagDDECONV *)ThreadUnlock1(v9, v8);
    if ( !v4 )
      return;
  }
  v10 = *((_QWORD *)v4 + 4);
  if ( v10 && (*(_DWORD *)(*((_QWORD *)v4 + 2) + 464LL) & 1) != 0 )
    *(_DWORD *)(v10 + 80) |= 2u;
  UnlinkConv(v4);
  v11 = *((_QWORD *)v4 + 11);
  if ( v11 )
  {
    --*(_WORD *)(v11 + 90);
    v12 = *((_QWORD *)v4 + 11);
    if ( *(_WORD *)(v12 + 90) || *(_WORD *)(v12 + 88) )
      goto LABEL_19;
    if ( SeTokenType(*(PACCESS_TOKEN *)(v12 + 32)) == TokenPrimary )
    {
      v15 = *(void **)(*((_QWORD *)v4 + 11) + 32LL);
    }
    else
    {
      v15 = *(void **)(*((_QWORD *)v4 + 11) + 32LL);
      if ( !v15 )
      {
LABEL_18:
        Win32FreePool(*((_QWORD *)v4 + 11), v13, v14);
LABEL_19:
        *((_QWORD *)v4 + 11) = 0LL;
        goto LABEL_20;
      }
    }
    ObfDereferenceObject(v15);
    goto LABEL_18;
  }
LABEL_20:
  HMAssignmentUnlock((char *)v4 + 32);
  HMAssignmentUnlock((char *)v4 + 48);
  HMAssignmentUnlock((char *)v4 + 40);
  if ( (unsigned int)HMMarkObjectDestroy(v4) )
  {
    while ( *((_QWORD *)v4 + 7) )
      PopState(v4, v16, v17, v18);
    HMFreeObject(v4);
  }
}
