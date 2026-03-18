/*
 * XREFs of CmQueryLayeredKey @ 0x1401E318C
 * Callers:
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401E5608 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpIsKeyStackSymlink @ 0x14047B64C (CmpIsKeyStackSymlink.c)
 *     CmpLockKcbStackShared @ 0x14047E98C (CmpLockKcbStackShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140482C20 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpCleanupKcbStack @ 0x1404834BC (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140483BC0 (CmpInitializeKcbStack.c)
 *     CmpIsMasterHive @ 0x140569B5C (CmpIsMasterHive.c)
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 *     CmGetKeyFlags @ 0x1405F2C10 (CmGetKeyFlags.c)
 *     CmpCleanupKeyNodeStack @ 0x140697B4C (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x140697F6C (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140698350 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmQueryLayeredKey(__int64 a1, int a2, unsigned int *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v9; // rsi
  signed int started; // ebx
  int v11; // r14d
  __int64 v12; // r12
  unsigned int v13; // ebx
  const void **v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  __int16 v22; // r9
  __int64 KcbAtLayerHeight; // rax
  __int16 v24; // r9
  __int64 v25; // rbx
  int v26; // r10d
  int v27; // eax
  char v29; // [rsp+30h] [rbp-108h]
  PVOID P; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-F0h]
  _QWORD v32[10]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v33[80]; // [rsp+A0h] [rbp-98h] BYREF

  v31 = a1;
  CmpInitializeKcbStack(v32);
  v29 = 0;
  CmpInitializeKeyNodeStack(v33);
  P = 0LL;
  memset(&v32[4], 0, 0x30uLL);
  v9 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb(v32, v9);
  if ( started < 0 )
    goto LABEL_56;
  CmpLockKcbStackShared(v32);
  v11 = 1;
  v29 = 1;
  if ( a2 == 3 )
  {
    v12 = v31;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v31, 0LL) && (*(_BYTE *)(v31 + 48) & 1) != 0 )
    {
      started = -1073740763;
    }
    else
    {
      started = CmpConstructNameWithStatus(v9, &P);
      if ( started >= 0 )
      {
        v13 = *(unsigned __int16 *)P + 4;
        *a5 = v13;
        if ( a4 >= 4 )
        {
          v14 = (const void **)P;
          *a3 = *(unsigned __int16 *)P;
          v15 = a4 - 4;
          if ( a4 - 4 >= *(unsigned __int16 *)v14 )
            v15 = *(unsigned __int16 *)v14;
          memmove(a3 + 1, v14[1], v15);
          if ( v13 <= a4 )
            started = (unsigned __int8)CmpIsKeyDeletedForKeyBody(v12, 0LL) != 0 ? 0xC000017C : 0;
          else
            started = -2147483643;
        }
        else
        {
          started = -1073741789;
        }
      }
    }
    goto LABEL_56;
  }
  started = CmpPerformKeyBodyDeletionCheck(v31, 0LL);
  if ( started < 0 )
    goto LABEL_56;
  if ( a2 == 6 )
  {
    if ( !CmpVEEnabled
      || (*(_DWORD *)(v9 + 176) & 0x2000000) != 0
      || (unsigned __int8)CmpIsMasterHive(v9)
      || (unsigned __int8)CmpIsSystemEntity(0LL) )
    {
      v11 = 0;
    }
    v16 = v11 | v32[4] & 0xFFFFFFFE;
    if ( !CmpVEEnabled
      || (*(_DWORD *)(v9 + 176) & 0x2000000) != 0
      || (unsigned __int8)CmpIsMasterHive(v9)
      || (unsigned __int8)CmpIsSystemEntity(0LL)
      || (v17 = 2, (*(_DWORD *)(v9 + 176) & 0x20) != 0) )
    {
      v17 = 0;
    }
    v18 = v17 | v16 & 0xFFFFFFFD;
    if ( !CmpVEEnabled || (v19 = 4, (*(_DWORD *)(v9 + 176) & 0x1000000) == 0) )
      v19 = 0;
    v20 = v19 & 0xFFFFFFEF | v18 & 0xFFFFFFE3 | ((*(_WORD *)(v9 + 178) & 0x80 | (*(unsigned __int16 *)(v9 + 178) >> 3) & 0x40u) >> 3);
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_56;
    }
    *a3 = v20;
    goto LABEL_33;
  }
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 24) + 5360LL) & 1) != 0 )
      v21 = v32[4] & 0xFFFFFFFE;
    else
      v21 = LODWORD(v32[4]) | 1;
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_56;
    }
    *a3 = v21;
    goto LABEL_33;
  }
  v22 = *(_WORD *)(v9 + 58);
  if ( v22 < 0 )
  {
LABEL_46:
    v25 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v32, (unsigned __int16)v22);
      if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
        break;
      v22 = v24 - 1;
      if ( v22 < 0 )
        goto LABEL_46;
    }
    v25 = KcbAtLayerHeight;
  }
  if ( a2 == 5 )
  {
    LODWORD(v32[4]) = CmGetKeyFlags(v25, 0LL);
    HIDWORD(v32[4]) = *(int *)(v25 + 32) < 0;
    if ( (unsigned __int8)CmpIsKeyStackSymlink(v32) )
      HIDWORD(v32[4]) = v26 | 2;
    v27 = (*(_DWORD *)(v25 + 176) >> 4) & 0xF;
    *a5 = 12;
    if ( a4 < 0xC )
    {
      started = -1073741789;
      goto LABEL_56;
    }
    *(_QWORD *)a3 = v32[4];
    a3[2] = v27;
LABEL_33:
    started = 0;
    goto LABEL_56;
  }
  started = CmpStartKeyNodeStackFromKcbStack(v33, v32);
  if ( started >= 0 )
  {
    started = CmpQueryKeyDataFromKeyNodeStack((unsigned int)v33, a2, (_DWORD)a3, a4, (__int64)a5);
    if ( started >= 0 )
      started = 0;
  }
LABEL_56:
  CmpCleanupKeyNodeStack(v33);
  if ( P )
    ExFreePoolWithTag(P, 0x624E4D43u);
  if ( v29 )
    CmpUnlockKcbStack(v32);
  CmpCleanupKcbStack(v32);
  return (unsigned int)started;
}
