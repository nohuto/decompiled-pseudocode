/*
 * XREFs of CmQueryLayeredKey @ 0x1401DEC90
 * Callers:
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401E14EC (CmpQueryKeyDataFromKeyNodeStack.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpIsKeyStackSymlink @ 0x14048FCAC (CmpIsKeyStackSymlink.c)
 *     CmpIsMasterHive @ 0x1404D3FBC (CmpIsMasterHive.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     CmpInitializeKcbStack @ 0x1404FC458 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCleanupKcbStack @ 0x1404FCC2C (CmpCleanupKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404FCE78 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockKcbStackShared @ 0x1404FF968 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     CmGetKeyFlags @ 0x1405D62EC (CmGetKeyFlags.c)
 *     CmpCleanupKeyNodeStack @ 0x14066D4DC (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14066DA4C (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14066DE58 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmQueryLayeredKey(__int64 a1, int a2, unsigned int *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v9; // r14
  signed int started; // ebx
  int v11; // esi
  __int64 v12; // r12
  unsigned int v13; // ebx
  const void **v14; // r9
  unsigned int v15; // ecx
  bool v16; // zf
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int16 v23; // r9
  __int64 KcbAtLayerHeight; // rax
  __int16 v25; // r9
  __int64 v26; // rbx
  int v27; // r10d
  int v28; // eax
  char v30; // [rsp+30h] [rbp-108h]
  PVOID P; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-F0h]
  _QWORD v33[10]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v34[80]; // [rsp+A0h] [rbp-98h] BYREF

  v32 = a1;
  CmpInitializeKcbStack(v33);
  v30 = 0;
  CmpInitializeKeyNodeStack(v34);
  P = 0LL;
  memset(&v33[4], 0, 0x30uLL);
  v9 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb(v33, v9);
  if ( started < 0 )
    goto LABEL_56;
  CmpLockKcbStackShared(v33);
  v11 = 1;
  v30 = 1;
  if ( a2 == 3 )
  {
    v12 = v32;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v32, 0LL) && (*(_BYTE *)(v32 + 48) & 1) != 0 )
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
          v15 = *(unsigned __int16 *)v14;
          if ( a4 - 4 < v15 )
            v15 = a4 - 4;
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
  started = CmpPerformKeyBodyDeletionCheck(v32, 0LL);
  if ( started < 0 )
    goto LABEL_56;
  if ( a2 == 6 )
  {
    if ( !CmpVEEnabled
      || (*(_DWORD *)(v9 + 176) & 0x2000000) != 0
      || (unsigned __int8)CmpIsMasterHive(v9)
      || (v16 = (unsigned __int8)CmpIsSystemEntity(0LL) == 0, v17 = 1, !v16) )
    {
      v17 = 0;
    }
    v18 = v17 | v33[4] & 0xFFFFFFFE;
    if ( !CmpVEEnabled
      || (*(_DWORD *)(v9 + 176) & 0x2000000) != 0
      || (unsigned __int8)CmpIsMasterHive(v9)
      || (unsigned __int8)CmpIsSystemEntity(0LL)
      || (v19 = 2, (*(_DWORD *)(v9 + 176) & 0x20) != 0) )
    {
      v19 = 0;
    }
    v20 = v19 | v18 & 0xFFFFFFFD;
    if ( !CmpVEEnabled || (*(_DWORD *)(v9 + 176) & 0x1000000) == 0 )
      v11 = 0;
    v21 = v20 & 0xFFFFFFE3 | (4 * (v11 & 0xFFFFFFF9)) | ((*(_DWORD *)(v9 + 176) & 0x800000 | (*(_DWORD *)(v9 + 176) >> 3) & 0x400000u) >> 19);
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_56;
    }
    *a3 = v21;
    goto LABEL_33;
  }
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 24) + 5360LL) & 1) != 0 )
      v22 = v33[4] & 0xFFFFFFFE;
    else
      v22 = LODWORD(v33[4]) | 1;
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_56;
    }
    *a3 = v22;
    goto LABEL_33;
  }
  v23 = *(_WORD *)(v9 + 58);
  if ( v23 < 0 )
  {
LABEL_46:
    v26 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v33, (unsigned __int16)v23);
      if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
        break;
      v23 = v25 - 1;
      if ( v23 < 0 )
        goto LABEL_46;
    }
    v26 = KcbAtLayerHeight;
  }
  if ( a2 == 5 )
  {
    LODWORD(v33[4]) = CmGetKeyFlags(v26, 0LL);
    HIDWORD(v33[4]) = *(_DWORD *)(v26 + 32) >= 0x80000000;
    if ( (unsigned __int8)CmpIsKeyStackSymlink(v33) )
      HIDWORD(v33[4]) = v27 | 2;
    v28 = (*(_DWORD *)(v26 + 176) >> 4) & 0xF;
    *a5 = 12;
    if ( a4 < 0xC )
    {
      started = -1073741789;
      goto LABEL_56;
    }
    *(_QWORD *)a3 = v33[4];
    a3[2] = v28;
LABEL_33:
    started = 0;
    goto LABEL_56;
  }
  started = CmpStartKeyNodeStackFromKcbStack(v34, v33);
  if ( started >= 0 )
  {
    started = CmpQueryKeyDataFromKeyNodeStack((unsigned int)v34, a2, (_DWORD)a3, a4, (__int64)a5);
    if ( started >= 0 )
      started = 0;
  }
LABEL_56:
  CmpCleanupKeyNodeStack(v34);
  if ( P )
    ExFreePoolWithTag(P, 0x624E4D43u);
  if ( v30 )
    CmpUnlockKcbStack(v33);
  CmpCleanupKcbStack(v33);
  return (unsigned int)started;
}
