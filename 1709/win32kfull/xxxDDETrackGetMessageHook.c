/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x1C01F19F0
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00A8320 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     SfnSENTDDEMSG @ 0x1C01FFEF0 (SfnSENTDDEMSG.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F047C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01F0CE4 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01F11C4 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     FreeDdeXact @ 0x1C01F18C0 (FreeDdeXact.c)
 *     xxxFreeDdeConv @ 0x1C01F2168 (xxxFreeDdeConv.c)
 *     xxxClientCopyDDEOut1 @ 0x1C0201BC4 (xxxClientCopyDDEOut1.c)
 *     HMValidateCatHandleNoSecure @ 0x1C023A83C (HMValidateCatHandleNoSecure.c)
 *     HMValidateHandleNoRipNoIL @ 0x1C023A900 (HMValidateHandleNoRipNoIL.c)
 */

__int64 __fastcall xxxDDETrackGetMessageHook(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v8; // rax
  struct tagDDECONV *DdeConv; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagDDECONV *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagFREELIST *v19; // rcx
  __int64 v20; // rcx
  struct tagDDECONV *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rsi
  _QWORD v33[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v34[3]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v35[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v36; // [rsp+80h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 8) == 993 )
  {
    result = ValidateHwnd(*(_QWORD *)a1);
    v6 = result;
    if ( !result )
      return result;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5);
    v33[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v33;
    v33[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v8 = (struct tagWND *)HMValidateCatHandleNoSecure(*(_QWORD *)(a1 + 16));
    if ( v8 )
    {
      DdeConv = FindDdeConv((struct tagWND *)v6, v8);
      v14 = DdeConv;
      if ( !DdeConv )
        return ThreadUnlock1(v11, v10);
      if ( (*((_DWORD *)DdeConv + 20) & 2) != 0 && (*(_DWORD *)(*((_QWORD *)DdeConv + 4) + 80LL) & 2) != 0 )
      {
        v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v12, v13);
        v34[0] = *(_QWORD *)(v15 + 392);
        *(_QWORD *)(v15 + 392) = v34;
        v34[1] = v14;
        _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
        v19 = (struct tagFREELIST *)*((_QWORD *)v14 + 9);
        if ( v19 )
        {
          *((_QWORD *)v14 + 9) = 0LL;
          xxxFreeListFree(v19, v16, v17, v18);
        }
        v20 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v14;
        LOBYTE(v20) = *(_BYTE *)(v20 + gSharedInfo[1] + 25);
        if ( (v20 & 1) == 0 )
          xxxFreeDdeConv(*((struct tagDDECONV **)v14 + 4));
        v21 = (struct tagDDECONV *)ThreadUnlock1(v20, v16);
        if ( v21 )
          xxxFreeDdeConv(v21);
      }
    }
    if ( (GetAppCompatFlags2(0x9900u) & 0x2000) != 0 )
      xxxCleanupDdeConv((struct tagWND *)v6);
    return ThreadUnlock1(v11, v10);
  }
  result = HMValidateHandleNoRipNoIL(*(_QWORD *)(a1 + 24));
  v25 = result;
  if ( result )
  {
    v26 = *(_DWORD *)(result + 64);
    v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
    v35[0] = *(_QWORD *)(v27 + 392);
    *(_QWORD *)(v27 + 392) = v35;
    v35[1] = v25;
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
    v28 = *(_QWORD *)(v25 + 56);
    v29 = xxxClientCopyDDEOut1(v28);
    if ( v29 )
      v32 = *(_QWORD *)(v28 + 24);
    else
      v32 = v36;
    *(_QWORD *)(a1 + 24) = v29;
    if ( !v29 )
      *(_DWORD *)(a1 + 8) = 993;
    result = ThreadUnlock1(v31, v30);
    if ( result )
    {
      if ( (v26 & 0x200) != 0 )
      {
        return FreeDdeXact(v25);
      }
      else if ( *(_QWORD *)(v25 + 40) )
      {
        *(_QWORD *)(v25 + 48) = v32;
      }
      else
      {
        *(_QWORD *)(v25 + 40) = v32;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return result;
}
