/*
 * XREFs of CmQueryLayeredKey @ 0x1402219B8
 * Callers:
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KCBNeedsVirtualImage_0 @ 0x140221E5C (KCBNeedsVirtualImage_0.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14022310C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpIsKeyStackSymlink @ 0x1404A5108 (CmpIsKeyStackSymlink.c)
 *     CmpInitializeKcbStack @ 0x1404A5B64 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCleanupKcbStack @ 0x1404A64E8 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1404A8434 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 *     CmGetKeyFlags @ 0x1406136D0 (CmGetKeyFlags.c)
 *     CmpCleanupKeyNodeStack @ 0x1406FAB20 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1406FB048 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1406FB4DC (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmQueryLayeredKey(__int64 a1, int a2, unsigned int *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v9; // r12
  signed int started; // ebx
  unsigned int v11; // ebx
  const void **v12; // r9
  unsigned int v13; // ecx
  char v14; // al
  unsigned int v15; // ebx
  char v16; // al
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  unsigned int v21; // esi
  unsigned int v22; // eax
  __int16 v23; // r9
  __int64 KcbAtLayerHeight; // rax
  __int16 v25; // r9
  __int64 v26; // rbx
  int v27; // r10d
  int v28; // eax
  char v30; // [rsp+30h] [rbp-128h]
  PVOID P; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v32[10]; // [rsp+48h] [rbp-110h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-C0h] BYREF
  _BYTE v34[80]; // [rsp+C0h] [rbp-98h] BYREF

  CmpInitializeKcbStack(v32);
  v30 = 0;
  CmpInitializeKeyNodeStack(v34);
  P = 0LL;
  memset(&v32[4], 0, 0x30uLL);
  v9 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb(v32, v9);
  if ( started < 0 )
    goto LABEL_48;
  CmpLockKcbStackShared(v32);
  v30 = 1;
  if ( a2 == 3 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) && (*(_BYTE *)(a1 + 48) & 1) != 0 )
    {
      started = -1073740763;
    }
    else
    {
      started = CmpConstructNameWithStatus(v9, &P);
      if ( started >= 0 )
      {
        v11 = *(unsigned __int16 *)P + 4;
        *a5 = v11;
        if ( a4 >= 4 )
        {
          v12 = (const void **)P;
          *a3 = *(unsigned __int16 *)P;
          v13 = a4 - 4;
          if ( a4 - 4 >= *(unsigned __int16 *)v12 )
            v13 = *(unsigned __int16 *)v12;
          memmove(a3 + 1, v12[1], v13);
          if ( v11 <= a4 )
            started = (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) != 0 ? 0xC000017C : 0;
          else
            started = -2147483643;
        }
        else
        {
          started = -1073741789;
        }
      }
    }
    goto LABEL_48;
  }
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 )
    goto LABEL_48;
  if ( a2 == 6 )
  {
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->Process, &SubjectContext);
    v14 = KCBNeedsVirtualImage_0(v9, &SubjectContext);
    v15 = (v14 != 0) | v32[4] & 0xFFFFFFFE;
    v16 = KCBNeedsVirtualImage_0(v9, &SubjectContext);
    v17 = *(_DWORD *)(v9 + 176);
    if ( !v16 || (v18 = 2, (v17 & 0x20) != 0) )
      v18 = 0;
    v19 = v18 | v15 & 0xFFFFFFFD;
    if ( !CmpVEEnabled || (v20 = 4, (v17 & 0x1000000) == 0) )
      v20 = 0;
    v21 = v20 & 0xFFFFFFE7 | v19 & 0xFFFFFFE3 | ((HIWORD(v17) & 0x80 | (v17 >> 19) & 0x40) >> 3);
    SeReleaseSubjectContext(&SubjectContext);
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_48;
    }
    *a3 = v21;
    goto LABEL_25;
  }
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 24) + 4152LL) & 1) != 0 )
      v22 = v32[4] & 0xFFFFFFFE;
    else
      v22 = LODWORD(v32[4]) | 1;
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_48;
    }
    *a3 = v22;
    goto LABEL_25;
  }
  v23 = *(_WORD *)(v9 + 58);
  if ( v23 < 0 )
  {
LABEL_38:
    v26 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v32, (unsigned __int16)v23);
      if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
        break;
      v23 = v25 - 1;
      if ( v23 < 0 )
        goto LABEL_38;
    }
    v26 = KcbAtLayerHeight;
  }
  if ( a2 == 5 )
  {
    LODWORD(v32[4]) = CmGetKeyFlags(v26, 0LL);
    HIDWORD(v32[4]) = *(int *)(v26 + 32) < 0;
    if ( (unsigned __int8)CmpIsKeyStackSymlink(v32) )
      HIDWORD(v32[4]) = v27 | 2;
    v28 = (*(_DWORD *)(v26 + 176) >> 4) & 0xF;
    *a5 = 12;
    if ( a4 < 0xC )
    {
      started = -1073741789;
      goto LABEL_48;
    }
    *(_QWORD *)a3 = v32[4];
    a3[2] = v28;
LABEL_25:
    started = 0;
    goto LABEL_48;
  }
  started = CmpStartKeyNodeStackFromKcbStack(v34, v32);
  if ( started >= 0 )
  {
    started = CmpQueryKeyDataFromKeyNodeStack((unsigned int)v34, a2, (_DWORD)a3, a4, (__int64)a5);
    if ( started >= 0 )
      started = 0;
  }
LABEL_48:
  CmpCleanupKeyNodeStack(v34);
  if ( P )
    ExFreePoolWithTag(P, 0x624E4D43u);
  if ( v30 )
    CmpUnlockKcbStack(v32);
  CmpCleanupKcbStack(v32);
  return (unsigned int)started;
}
