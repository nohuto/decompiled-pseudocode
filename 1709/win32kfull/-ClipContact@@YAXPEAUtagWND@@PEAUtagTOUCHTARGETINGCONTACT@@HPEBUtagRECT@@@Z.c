/*
 * XREFs of ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C01D3698
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D57E4 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C01D6F54 (xxxTouchTargetWindow.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     TouchTargetingClipContact @ 0x1C023C688 (TouchTargetingClipContact.c)
 */

void __fastcall ClipContact(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        __int64 a3,
        const struct tagRECT *a4)
{
  const struct tagRECT *v5; // rbp
  __int64 v6; // rcx
  unsigned int v7; // r14d
  struct tagTOUCHTARGETINGCONTACT *v8; // r15
  __int128 *v9; // rcx
  __int64 v10; // rcx
  unsigned int RegionData; // eax
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  __int128 *v18; // rdi
  __int64 v19; // rsi
  __int128 v20; // [rsp+20h] [rbp-58h] BYREF
  __int128 v21; // [rsp+30h] [rbp-48h] BYREF

  v5 = a4;
  v6 = *((_QWORD *)a1 + 28);
  v7 = a3;
  v8 = a2;
  if ( v6 )
  {
    if ( !(unsigned int)GreGetRgnBox(v6, &v21) )
      return;
    v9 = &v21;
    a4 = v5;
    a3 = v7;
    a2 = v8;
    goto LABEL_13;
  }
  v10 = *((_QWORD *)a1 + 27);
  if ( !v10 )
  {
    v9 = &v20;
    v20 = *((_OWORD *)a1 + 8);
LABEL_13:
    TouchTargetingClipContact(v9, a2, a3, a4, v20, *((_QWORD *)&v20 + 1));
    return;
  }
  RegionData = GreGetRegionData(v10, 0LL, 0LL);
  v12 = RegionData;
  if ( RegionData )
  {
    v13 = Win32AllocPool((int)RegionData, 1920103253LL);
    v14 = v13;
    if ( v13 )
    {
      if ( (unsigned int)GreGetRegionData(*((_QWORD *)a1 + 27), v12, v13) )
      {
        v17 = *(_DWORD *)(v14 + 8);
        v18 = (__int128 *)(v14 + 32);
        if ( v17 > 0 )
        {
          v19 = (unsigned int)v17;
          do
          {
            v20 = *v18;
            ((void (__fastcall *)(__int128 *, struct tagTOUCHTARGETINGCONTACT *, _QWORD, const struct tagRECT *))TouchTargetingClipContact)(
              &v20,
              v8,
              v7,
              v5);
            ++v18;
            --v19;
          }
          while ( v19 );
        }
      }
      Win32FreePool(v14, v15, v16);
    }
  }
}
