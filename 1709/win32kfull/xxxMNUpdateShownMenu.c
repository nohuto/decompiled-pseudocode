/*
 * XREFs of xxxMNUpdateShownMenu @ 0x1C0213EAC
 * Callers:
 *     xxxEnableMenuItem @ 0x1C007ABB8 (xxxEnableMenuItem.c)
 *     xxxSetMenuInfo @ 0x1C007D540 (xxxSetMenuInfo.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0097220 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0099798 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 * Callees:
 *     _GetClientRect @ 0x1C00499C0 (_GetClientRect.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C02045B4 (xxxInvalidateRect.c)
 */

_QWORD *__fastcall xxxMNUpdateShownMenu(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r14
  ULONG_PTR v6; // rdi
  __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r12d
  int v16; // r13d
  int v17; // r15d
  unsigned __int16 v18; // r9
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD v33[3]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v34[4]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v35[2]; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v36; // [rsp+90h] [rbp+7h] BYREF

  v5 = a3;
  v6 = *(_QWORD *)(*(_QWORD *)*a1 + 16LL);
  v7 = *(_QWORD *)(*(_QWORD *)*a1 + 40LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a1, a3, a4);
  v33[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v33;
  v33[1] = v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
  v34[0] = *(_QWORD *)(v12 + 392);
  *(_QWORD *)(v12 + 392) = v34;
  v34[1] = v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  GetClientRect(v6, (__int64)v35);
  if ( !*(_DWORD *)(v7 + 72) )
  {
    v36 = *(struct tagRECT *)v35;
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v35, 12));
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v35, 8));
    v35[1] = __PAIR64__(v15, v16);
    v17 = *(_DWORD *)(v7 + 144) & 3;
    xxxSendMessage(v6);
    if ( (unsigned int)MNGetpItemIndex(v7, a2) == -1 )
      goto LABEL_35;
    v5 &= ~4u;
    v14 = *(_DWORD *)(v7 + 144) & 3;
    if ( (_DWORD)v14 != v17 )
      goto LABEL_35;
    LODWORD(v35[1]) = v18;
    if ( a2 )
    {
      if ( v18 != v16 )
        goto LABEL_35;
      v19 = *(_DWORD *)(v7 + 76);
      HIDWORD(v35[1]) = v19;
      if ( (*(_DWORD *)(v7 + 144) & 3) != 0 )
      {
        if ( v19 <= v15 )
        {
          v20 = *(unsigned int *)(v7 + 136);
          if ( (_DWORD)v20 == -1 || (unsigned int)v20 >= *(_DWORD *)(v7 + 68) )
            v14 = 0LL;
          else
            v14 = *(_QWORD *)(v7 + 96) + 152 * v20;
          v13 = (unsigned int)(*(_DWORD *)(a2 + 76) - *(_DWORD *)(v14 + 76));
          goto LABEL_32;
        }
        GetClientRect(v6, (__int64)&v36);
        v19 = HIDWORD(v35[1]);
      }
      v21 = *(unsigned int *)(v7 + 136);
      if ( (_DWORD)v21 == -1 || (unsigned int)v21 >= *(_DWORD *)(v7 + 68) )
        v22 = 0LL;
      else
        v22 = *(_QWORD *)(v7 + 96) + 152 * v21;
      v14 = (unsigned int)(*(_DWORD *)(a2 + 76) - *(_DWORD *)(v22 + 76));
      v36.top = v14;
      HIDWORD(v35[0]) = v14;
      if ( (int)v14 >= 0 && (int)v14 < *(_DWORD *)(v7 + 76) )
      {
        xxxScrollWindowEx((struct tagWND *)v6, 0, v19 - v15, &v36, (struct tagRECT *)v35, 0LL, 0LL, 6);
        if ( (unsigned int)MNGetpItemIndex(v7, a2) == -1 )
          goto LABEL_35;
      }
    }
  }
  if ( (v5 & 2) != 0 )
    goto LABEL_39;
  if ( !a2 )
  {
LABEL_35:
    v25 = 0LL;
    goto LABEL_36;
  }
  v23 = *(unsigned int *)(v7 + 136);
  if ( (_DWORD)v23 == -1 || (unsigned int)v23 >= *(_DWORD *)(v7 + 68) )
    v24 = 0LL;
  else
    v24 = *(_QWORD *)(v7 + 96) + 152 * v23;
  v13 = (unsigned int)(*(_DWORD *)(a2 + 76) - *(_DWORD *)(v24 + 76));
  v14 = (unsigned int)(v13 + *(_DWORD *)(a2 + 84));
  HIDWORD(v35[1]) = v13 + *(_DWORD *)(a2 + 84);
LABEL_32:
  HIDWORD(v35[0]) = v13;
  if ( (int)v13 >= 0 && (int)v13 < *(_DWORD *)(v7 + 76) )
  {
    v25 = v35;
LABEL_36:
    xxxInvalidateRect((struct tagWND *)v6, v25, 1);
  }
  if ( (v5 & 4) != 0 )
    xxxSetWindowPos((struct tagWND *)v6, 0LL, 0LL, 0LL, 0, 0, 567);
LABEL_39:
  ThreadUnlock1(v14, v13);
  ThreadUnlock1(v27, v26);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v28, v29, v30);
}
