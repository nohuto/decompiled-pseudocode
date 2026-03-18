/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x1C01E59D0
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00527D0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     SfnSENTDDEMSG @ 0x1C01FE5C0 (SfnSENTDDEMSG.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C00C3100 (GetAppCompatFlags2.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01E445C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01E4CA4 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01E5184 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     FreeDdeXact @ 0x1C01E58A0 (FreeDdeXact.c)
 *     xxxFreeDdeConv @ 0x1C01E6124 (xxxFreeDdeConv.c)
 *     xxxClientCopyDDEOut1 @ 0x1C0200268 (xxxClientCopyDDEOut1.c)
 *     HMValidateCatHandleNoSecure @ 0x1C02390F4 (HMValidateCatHandleNoSecure.c)
 *     HMValidateHandleNoRipNoIL @ 0x1C02391A8 (HMValidateHandleNoRipNoIL.c)
 */

__int64 __fastcall xxxDDETrackGetMessageHook(__int64 a1)
{
  __int64 result; // rax
  struct tagWND *v3; // rdi
  struct tagWND *v4; // rax
  struct tagDDECONV *DdeConv; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagDDECONV *v8; // rbx
  struct tagFREELIST *v9; // rcx
  __int64 v10; // rcx
  struct tagDDECONV *v11; // rax
  __int64 v12; // rdi
  int v13; // ebp
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v21[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v22; // [rsp+80h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 8) == 993 )
  {
    result = ValidateHwnd(*(_QWORD *)a1);
    v3 = (struct tagWND *)result;
    if ( !result )
      return result;
    v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v19;
    v19[1] = result;
    ++*(_DWORD *)(result + 8);
    v4 = (struct tagWND *)HMValidateCatHandleNoSecure(*(_QWORD *)(a1 + 16));
    if ( v4 )
    {
      DdeConv = FindDdeConv(v3, v4);
      v8 = DdeConv;
      if ( !DdeConv )
        return ThreadUnlock1(v7, v6);
      if ( (*((_DWORD *)DdeConv + 20) & 2) != 0 && (*(_DWORD *)(*((_QWORD *)DdeConv + 4) + 80LL) & 2) != 0 )
      {
        v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v20;
        v20[1] = DdeConv;
        ++*((_DWORD *)DdeConv + 2);
        v9 = (struct tagFREELIST *)*((_QWORD *)DdeConv + 9);
        if ( v9 )
        {
          *((_QWORD *)DdeConv + 9) = 0LL;
          xxxFreeListFree(v9);
        }
        v10 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v8;
        LOBYTE(v10) = *(_BYTE *)(v10 + gSharedInfo[1] + 25);
        if ( (v10 & 1) == 0 )
          xxxFreeDdeConv(*((struct tagDDECONV **)v8 + 4));
        v11 = (struct tagDDECONV *)ThreadUnlock1(v10, v6);
        if ( v11 )
          xxxFreeDdeConv(v11);
      }
    }
    if ( (GetAppCompatFlags2(0x9900u) & 0x2000) != 0 )
      xxxCleanupDdeConv(v3);
    return ThreadUnlock1(v7, v6);
  }
  result = HMValidateHandleNoRipNoIL(*(_QWORD *)(a1 + 24));
  v12 = result;
  if ( result )
  {
    v13 = *(_DWORD *)(result + 64);
    v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v21;
    v21[1] = result;
    v14 = *(_QWORD *)(result + 56);
    ++*(_DWORD *)(result + 8);
    v15 = xxxClientCopyDDEOut1(v14);
    if ( v15 )
      v18 = *(_QWORD *)(v14 + 24);
    else
      v18 = v22;
    *(_QWORD *)(a1 + 24) = v15;
    if ( !v15 )
      *(_DWORD *)(a1 + 8) = 993;
    result = ThreadUnlock1(v17, v16);
    if ( result )
    {
      if ( (v13 & 0x200) != 0 )
      {
        return FreeDdeXact(v12);
      }
      else if ( *(_QWORD *)(v12 + 40) )
      {
        *(_QWORD *)(v12 + 48) = v18;
      }
      else
      {
        *(_QWORD *)(v12 + 40) = v18;
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
