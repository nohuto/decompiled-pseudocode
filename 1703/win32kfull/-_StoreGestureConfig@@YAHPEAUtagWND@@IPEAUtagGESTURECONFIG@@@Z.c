/*
 * XREFs of ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C0110E98
 * Callers:
 *     SetGestureConfigSettings @ 0x1C0110CB8 (SetGestureConfigSettings.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C00C66C8 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C0110FF0 (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1C0111030 (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C011105C (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1C01EF080 (-FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z.c)
 *     ?GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z @ 0x1C01EF0B8 (-GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z.c)
 */

__int64 __fastcall _StoreGestureConfig(struct tagWND *a1, unsigned int a2, struct tagGESTURECONFIG *a3)
{
  struct tagGESTURECONFIGLIST **WindowGCList; // rdi
  struct tagVWPLGESTUREDATA *GCData; // r15
  struct tagGESTURECONFIGLIST **v8; // rax
  int v9; // ebp
  int *i; // rbx
  int v11; // esi
  int v12; // ecx
  __int64 v13; // r9
  int v14; // edx
  unsigned int v15; // r9d
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rdx
  unsigned int v19; // edx
  __int64 v21; // rcx
  unsigned int v22; // r9d
  struct tagGESTURECONFIGLIST *v23; // rcx
  struct tagGESTURECONFIGLIST *v24; // [rsp+68h] [rbp+20h] BYREF

  WindowGCList = (struct tagGESTURECONFIGLIST **)GetWindowGCList(a1);
  GCData = GetGCData(a1);
  if ( !WindowGCList )
  {
    v8 = (struct tagGESTURECONFIGLIST **)Win32AllocPoolWithQuota(64LL, 1667724117LL);
    WindowGCList = v8;
    if ( !v8 )
    {
LABEL_19:
      v21 = 14LL;
      goto LABEL_21;
    }
    memset(v8, 0, 0x40uLL);
    *((_QWORD *)GetGCData(a1) + 2) = WindowGCList;
  }
  v9 = 0;
  if ( !a2 )
    return 1LL;
  for ( i = (int *)((char *)a3 + 4); ; i += 3 )
  {
    v11 = i[1];
    v12 = *i;
    if ( (v11 & *i) != 0 )
      break;
    v13 = (unsigned int)*(i - 1);
    if ( !(_DWORD)v13 )
      break;
    if ( (unsigned int)v13 > 7 )
      break;
    v14 = ~dword_1C02E66B0[v13];
    if ( (v14 & v12) != 0 || (v14 & v11) != 0 )
      break;
    if ( v12 || v11 || *((_DWORD *)GCData + 2) || *((_DWORD *)GCData + 3) )
    {
      if ( (unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v13) )
      {
        if ( (unsigned int)FindGID(WindowGCList, v15, &v24) )
        {
          v23 = v24;
          *((_DWORD *)v24 + 4) = v11;
          *((_DWORD *)v23 + 3) = *i;
        }
        goto LABEL_17;
      }
      v16 = Win32AllocPoolWithQuota(24LL, 1667724117LL);
      if ( !v16 )
        goto LABEL_19;
      v17 = 1;
      *(_DWORD *)(v16 + 8) = *(i - 1);
      v18 = *(_BYTE *)(v16 + 8) & 7;
      *(_DWORD *)(v16 + 16) = i[1];
      *(_DWORD *)(v16 + 12) = *i;
      *(_QWORD *)v16 = WindowGCList[v18];
      WindowGCList[v18] = (struct tagGESTURECONFIGLIST *)v16;
      v19 = *(_DWORD *)(v16 + 8);
    }
    else
    {
      if ( !(unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v13) )
        goto LABEL_17;
      GCRemoveHashElement(WindowGCList, v22);
      v19 = *(i - 1);
      v17 = 0;
    }
    SetBitMask(a1, v19, v17);
LABEL_17:
    if ( ++v9 >= a2 )
      return 1LL;
  }
  v21 = 87LL;
LABEL_21:
  UserSetLastError(v21);
  return 0LL;
}
