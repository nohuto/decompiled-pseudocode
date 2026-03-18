/*
 * XREFs of xxxMNUpdateShownMenu @ 0x1C0212964
 * Callers:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0042360 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxSetMenuInfo @ 0x1C0043870 (xxxSetMenuInfo.c)
 *     xxxEnableMenuItem @ 0x1C00C2158 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C00F1334 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 * Callees:
 *     _GetClientRect @ 0x1C003C920 (_GetClientRect.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C0202AA0 (xxxInvalidateRect.c)
 */

_QWORD *__fastcall xxxMNUpdateShownMenu(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r12d
  int v10; // r13d
  int v11; // r15d
  unsigned __int16 v12; // r9
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v24[3]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v25[4]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v26[2]; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v27; // [rsp+90h] [rbp+7h] BYREF

  v5 = *(_QWORD *)(*a1 + 16LL);
  v6 = *(_QWORD *)(*a1 + 40LL);
  v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v24;
  v24[1] = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v25;
  v25[1] = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  GetClientRect(v5, v26);
  if ( !*(_DWORD *)(v6 + 72) )
  {
    v27 = *(struct tagRECT *)v26;
    v9 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v26, 12));
    v10 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v26, 8));
    v26[1] = __PAIR64__(v9, v10);
    v11 = *(_DWORD *)(v6 + 144) & 3;
    xxxSendMessage(v5, 482, a3, 0);
    if ( (unsigned int)MNGetpItemIndex(v6, a2) == -1 )
      goto LABEL_35;
    LOBYTE(a3) = a3 & 0xFB;
    v8 = *(_DWORD *)(v6 + 144) & 3;
    if ( (_DWORD)v8 != v11 )
      goto LABEL_35;
    LODWORD(v26[1]) = v12;
    if ( a2 )
    {
      if ( v12 != v10 )
        goto LABEL_35;
      v13 = *(_DWORD *)(v6 + 76);
      HIDWORD(v26[1]) = v13;
      if ( (*(_DWORD *)(v6 + 144) & 3) != 0 )
      {
        if ( v13 <= v9 )
        {
          v14 = *(unsigned int *)(v6 + 136);
          if ( (_DWORD)v14 == -1 || (unsigned int)v14 >= *(_DWORD *)(v6 + 68) )
            v8 = 0LL;
          else
            v8 = *(_QWORD *)(v6 + 96) + 152 * v14;
          v7 = (unsigned int)(*(_DWORD *)(a2 + 76) - *(_DWORD *)(v8 + 76));
          goto LABEL_32;
        }
        GetClientRect(v5, &v27);
        v13 = HIDWORD(v26[1]);
      }
      v15 = *(unsigned int *)(v6 + 136);
      if ( (_DWORD)v15 == -1 || (unsigned int)v15 >= *(_DWORD *)(v6 + 68) )
        v16 = 0LL;
      else
        v16 = *(_QWORD *)(v6 + 96) + 152 * v15;
      v8 = (unsigned int)(*(_DWORD *)(a2 + 76) - *(_DWORD *)(v16 + 76));
      v27.top = v8;
      HIDWORD(v26[0]) = v8;
      if ( (int)v8 >= 0 && (int)v8 < *(_DWORD *)(v6 + 76) )
      {
        xxxScrollWindowEx((struct tagWND *)v5, 0, v13 - v9, &v27, (struct tagRECT *)v26, 0LL, 0LL, 6);
        if ( (unsigned int)MNGetpItemIndex(v6, a2) == -1 )
          goto LABEL_35;
      }
    }
  }
  if ( (a3 & 2) != 0 )
    goto LABEL_39;
  if ( !a2 )
  {
LABEL_35:
    v19 = 0LL;
    goto LABEL_36;
  }
  v17 = *(unsigned int *)(v6 + 136);
  if ( (_DWORD)v17 == -1 || (unsigned int)v17 >= *(_DWORD *)(v6 + 68) )
    v18 = 0LL;
  else
    v18 = *(_QWORD *)(v6 + 96) + 152 * v17;
  v7 = (unsigned int)(*(_DWORD *)(a2 + 76) - *(_DWORD *)(v18 + 76));
  v8 = (unsigned int)(v7 + *(_DWORD *)(a2 + 84));
  HIDWORD(v26[1]) = v7 + *(_DWORD *)(a2 + 84);
LABEL_32:
  HIDWORD(v26[0]) = v7;
  if ( (int)v7 >= 0 && (int)v7 < *(_DWORD *)(v6 + 76) )
  {
    v19 = v26;
LABEL_36:
    xxxInvalidateRect((struct tagWND *)v5, v19, 1);
  }
  if ( (a3 & 4) != 0 )
    xxxSetWindowPos((struct tagWND *)v5, 0LL, 0LL, 0LL, 0, 0, 567);
LABEL_39:
  ThreadUnlock1(v8, v7);
  ThreadUnlock1(v21, v20);
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
}
