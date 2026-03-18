/*
 * XREFs of ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C0119DC4
 * Callers:
 *     SetGestureConfigSettings @ 0x1C0119F1C (SetGestureConfigSettings.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C0119BF8 (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C011A04C (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1C011A144 (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C011A170 (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1C01F9500 (-FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z.c)
 *     ?GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z @ 0x1C01F9538 (-GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z.c)
 */

__int64 __fastcall _StoreGestureConfig(struct tagWND *a1, unsigned int a2, struct tagGESTURECONFIG *a3)
{
  struct tagGESTURECONFIGLIST **WindowGCList; // rdi
  __int64 v7; // rdx
  struct tagVWPLGESTUREDATA *GCData; // r15
  struct tagGESTURECONFIGLIST **v9; // rax
  int v10; // ebp
  int *i; // rbx
  int v12; // esi
  int v13; // ecx
  __int64 v14; // r9
  unsigned int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // edx
  __int64 v20; // rcx
  unsigned int v21; // r9d
  struct tagGESTURECONFIGLIST *v22; // rcx
  struct tagGESTURECONFIGLIST *v23; // [rsp+68h] [rbp+20h] BYREF

  WindowGCList = (struct tagGESTURECONFIGLIST **)GetWindowGCList(a1);
  GCData = GetGCData(a1);
  if ( !WindowGCList )
  {
    v9 = (struct tagGESTURECONFIGLIST **)Win32AllocPoolWithQuota(64LL, 1667724117LL);
    WindowGCList = v9;
    if ( !v9 )
    {
LABEL_19:
      v20 = 14LL;
      goto LABEL_21;
    }
    memset(v9, 0, 0x40uLL);
    *((_QWORD *)GetGCData(a1) + 2) = WindowGCList;
  }
  v10 = 0;
  if ( !a2 )
    return 1LL;
  for ( i = (int *)((char *)a3 + 4); ; i += 3 )
  {
    v12 = i[1];
    v13 = *i;
    if ( (v12 & *i) != 0 )
      break;
    v14 = (unsigned int)*(i - 1);
    if ( !(_DWORD)v14 )
      break;
    if ( (unsigned int)v14 > 7 )
      break;
    v7 = (unsigned int)~dword_1C02E31B0[v14];
    if ( ((unsigned int)v7 & v13) != 0 || ((unsigned int)v7 & v12) != 0 )
      break;
    if ( v13 || v12 || *((_DWORD *)GCData + 2) || *((_DWORD *)GCData + 3) )
    {
      if ( (unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v14) )
      {
        if ( (unsigned int)FindGID(WindowGCList, v15, &v23) )
        {
          v22 = v23;
          *((_DWORD *)v23 + 4) = v12;
          *((_DWORD *)v22 + 3) = *i;
        }
        goto LABEL_17;
      }
      v16 = Win32AllocPoolWithQuota(24LL, 1667724117LL);
      if ( !v16 )
        goto LABEL_19;
      *(_DWORD *)(v16 + 8) = *(i - 1);
      v17 = *(_BYTE *)(v16 + 8) & 7;
      *(_DWORD *)(v16 + 16) = i[1];
      *(_DWORD *)(v16 + 12) = *i;
      *(_QWORD *)v16 = WindowGCList[v17];
      WindowGCList[v17] = (struct tagGESTURECONFIGLIST *)v16;
      v18 = *(_DWORD *)(v16 + 8);
    }
    else
    {
      if ( !(unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v14) )
        goto LABEL_17;
      GCRemoveHashElement(WindowGCList, v21);
      v18 = *(i - 1);
    }
    SetBitMask(a1, v18);
LABEL_17:
    if ( ++v10 >= a2 )
      return 1LL;
  }
  v20 = 87LL;
LABEL_21:
  UserSetLastError(v20, v7);
  return 0LL;
}
