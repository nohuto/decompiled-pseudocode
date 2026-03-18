/*
 * XREFs of xxxDDETrackPostHook @ 0x1C01F1BFC
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F047C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01F11C4 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F1774 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F183C (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C0202140 (xxxClientFreeDDEHandle.c)
 *     xxxClientGetDDEHookData @ 0x1C0202358 (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1C0213CD0 (xxxMessageEvent.c)
 */

__int64 __fastcall xxxDDETrackPostHook(unsigned int *a1, struct tagWND *a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // rsi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebx
  struct tagWND *v14; // rax
  struct tagWND *v15; // rbx
  struct tagDDECONV *DdeConv; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rdx
  _QWORD v31[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v32[7]; // [rsp+48h] [rbp-38h] BYREF
  struct tagDDECONV *v33; // [rsp+B8h] [rbp+38h]

  v5 = 0LL;
  v10 = a5 != 0 ? 0x2000000 : 0x4000000;
  if ( (v10 & MonitorFlags) != 0 )
  {
    memset(v32, 0, sizeof(v32));
    v11 = *a1;
    if ( (_DWORD)v11 == 994
      || (unsigned int)v11 > 0x3E3
      && ((unsigned int)v11 <= 0x3E5 || (unsigned int)v11 > 0x3E6 && (unsigned int)v11 <= 0x3E8) )
    {
      xxxClientGetDDEHookData(v11, *a4, v32);
    }
    else
    {
      v12 = *(unsigned __int16 *)a4;
      LODWORD(v32[2]) = 0;
      v32[0] = v12;
      v32[1] = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent((_DWORD)a2, *a1, a3, (unsigned int)*a4, v10, (__int64)v32);
  }
  if ( *(_QWORD *)(gptiCurrent + 400LL) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 400LL) )
    return 2;
  if ( *a1 == 992 )
    return 0;
  v14 = (struct tagWND *)ValidateHwnd(a3);
  v15 = v14;
  if ( v14 )
  {
    DdeConv = FindDdeConv(v14, a2);
    v33 = DdeConv;
    v5 = (__int64)DdeConv;
    if ( DdeConv )
    {
      if ( a5
        && *(_QWORD *)(*((_QWORD *)DdeConv + 4) + 56LL)
        && (*(_DWORD *)(*((_QWORD *)v15 + 2) + 624LL) & 0x40000) == 0 )
      {
        return 0;
      }
      if ( gptiCurrent != *((_QWORD *)DdeConv + 2) && *(_WORD *)(gptiCurrent + 608LL) != 1024 )
      {
        UserSetLastError(1408LL, v17);
        return 0;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
      v31[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v31;
      v31[1] = v33;
      _InterlockedAdd((volatile signed __int32 *)v33 + 2, 1u);
      v21 = (struct tagFREELIST *)*((_QWORD *)v33 + 9);
      *((_QWORD *)v33 + 9) = 0LL;
      xxxFreeListFree(v21, v22, v23, v24);
      v26 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v33;
      LOBYTE(v26) = *(_BYTE *)(v26 + gSharedInfo[1] + 25);
      if ( (v26 & 1) != 0 || *a1 != 993 && (*((_DWORD *)v33 + 20) & 6) != 0 )
      {
        v13 = 1;
      }
      else
      {
        v27 = *((_QWORD *)v33 + 7);
        if ( v27 )
        {
          v28 = (*(__int64 (__fastcall **)(unsigned int *, void **, struct tagDDECONV *))(v27 + 32))(a1, a4, v33);
        }
        else if ( (*((_DWORD *)v33 + 20) & 1) != 0 )
        {
          v28 = xxxUnexpectedServerPost(a1, a4, v33);
        }
        else
        {
          v28 = xxxUnexpectedClientPost(a1, a4, v33);
        }
        v13 = v28;
      }
      v5 = ThreadUnlock1(v26, v25);
    }
    else
    {
      v13 = *a1 == 993;
    }
  }
  else
  {
    v13 = (*a1 == 993) + 1;
  }
  if ( v13 == 1 && (*(_DWORD *)(gptiCurrent + 464LL) & 1) == 0 )
  {
    v29 = 0x8000LL;
    switch ( (unsigned __int16)*a1 )
    {
      case 0x3E2u:
        v29 = 33025LL;
        break;
      case 0x3E3u:
        break;
      case 0x3E4u:
        v29 = 32769LL;
        break;
      default:
        if ( (unsigned __int16)*a1 != 997 )
        {
          if ( (unsigned __int16)*a1 == 998 )
            break;
          if ( (unsigned __int16)*a1 != 999 )
          {
            if ( (unsigned __int16)*a1 != 1000 )
              return v13;
            v29 = 34816LL;
            break;
          }
        }
        v29 = 32899LL;
        break;
    }
    if ( v5 )
    {
      xxxClientFreeDDEHandle(*a4, v29);
      return 3;
    }
  }
  return v13;
}
