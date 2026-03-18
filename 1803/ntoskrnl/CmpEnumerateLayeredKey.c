/*
 * XREFs of CmpEnumerateLayeredKey @ 0x1406F2910
 * Callers:
 *     CmEnumerateKey @ 0x1404ACAA0 (CmEnumerateKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpIsRegistryLockContended @ 0x140221EAC (CmpIsRegistryLockContended.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14022310C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1404A05A0 (CmpGetKeyNodeForKcb.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1404A8434 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpQueryKeyDataFromNode @ 0x1404AC0B0 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumber @ 0x1404AD3B0 (CmpFindSubKeyByNumber.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpKeyEnumStackAdvance @ 0x1406FF528 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x1406FF718 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1406FF780 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x1406FFD38 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpKeyEnumStackInitialize @ 0x1406FFDF4 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x1406FFE44 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140700010 (CmpKeyEnumStackVerifyResumeContext.c)
 */

__int64 __fastcall CmpEnumerateLayeredKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        PPRIVILEGE_SET *a7,
        char a8)
{
  char v10; // r14
  __int64 KcbAtLayerHeight; // r13
  struct _PRIVILEGE_SET *v12; // r12
  PPRIVILEGE_SET v13; // rbx
  int started; // edi
  __int16 v15; // r9
  __int16 v16; // r9
  char v17; // r10
  __int64 v18; // r11
  ULONG Control; // r14d
  ULONG v20; // esi
  int v21; // r9d
  int ResumeContext; // eax
  _DWORD *KeyNodeForKcb; // r15
  __int64 v24; // rax
  __int64 v25; // rcx
  PPRIVILEGE_SET v27; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v28; // [rsp+50h] [rbp-B0h]
  int v29; // [rsp+58h] [rbp-A8h]
  unsigned int v30; // [rsp+5Ch] [rbp-A4h]
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34[4]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  PPRIVILEGE_SET *v38; // [rsp+B0h] [rbp-50h]
  char v39[8]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 v40[172]; // [rsp+C8h] [rbp-38h] BYREF

  v30 = a2;
  v29 = a3;
  v36 = a4;
  v35 = a6;
  v38 = a7;
  memset(v34, 0, sizeof(v34));
  WORD1(v34[0]) = -1;
  v10 = 0;
  CmpKeyEnumStackInitialize(v39);
  v28 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  KcbAtLayerHeight = 0LL;
  v37 = 0LL;
  v12 = 0LL;
  v13 = *a7;
  *a7 = 0LL;
  LODWORD(v32) = -1;
  WORD2(v32) = 0;
  LODWORD(v31) = -1;
  WORD2(v31) = 0;
  v27 = v13;
  if ( v29 == 2 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  started = CmpStartKcbStackForTopLayerKcb((__int64)v34, *(_QWORD *)(a1 + 8));
  if ( started < 0 )
  {
    KeyNodeForKcb = 0LL;
    goto LABEL_45;
  }
  CmpLockKcbStackShared((__int64)v34);
  v10 = 1;
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 )
  {
    KeyNodeForKcb = 0LL;
    goto LABEL_45;
  }
  v15 = WORD1(v34[0]);
  if ( SWORD1(v34[0]) <= 0 )
    goto LABEL_35;
  do
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v34, v15);
    if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      v17 = 1;
    v15 = v16 - 1;
  }
  while ( v15 > 0 );
  if ( !v17 )
  {
LABEL_35:
    KcbAtLayerHeight = v34[1];
    KeyNodeForKcb = (_DWORD *)CmpGetKeyNodeForKcb(v34[1], (__int64)&v32, 0);
    started = CmpFindSubKeyByNumber(*(_QWORD *)(KcbAtLayerHeight + 24), KeyNodeForKcb, a2, &v33);
    if ( started >= 0 )
    {
      if ( v33 == -1 )
      {
        started = -2147483622;
      }
      else
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                *(_QWORD *)(KcbAtLayerHeight + 24),
                v33,
                &v31);
        v25 = *(_QWORD *)(KcbAtLayerHeight + 24);
        v37 = v24;
        started = CmpQueryKeyDataFromNode(v25, v24, v29, v36, a5, v35, 0LL, 0LL);
        if ( started >= 0 )
          started = 0;
      }
    }
    goto LABEL_45;
  }
  if ( v13 || (v13 = (PPRIVILEGE_SET)_InterlockedExchange64((volatile __int64 *)(a1 + 88), v18), (v27 = v13) != 0LL) )
  {
    if ( (unsigned int)CmpKeyEnumStackVerifyResumeContext(v34, v13) == -1073741735 || v13->Control > a2 )
    {
      v12 = v13;
      v13 = 0LL;
      v27 = 0LL;
    }
  }
  started = CmpKeyEnumStackStartFromKcbStack(v39, v34, v13);
  if ( started < 0 )
  {
LABEL_42:
    KeyNodeForKcb = v28;
    goto LABEL_45;
  }
  if ( v13 )
  {
    Control = v13->Control;
    v12 = v13;
    v13 = 0LL;
    v27 = 0LL;
  }
  else
  {
    Control = 0;
  }
  started = CmpKeyEnumStackAdvance(v39);
  if ( started < 0 )
  {
    v10 = 1;
    goto LABEL_42;
  }
  v20 = Control;
  if ( Control >= v30 )
  {
LABEL_27:
    ResumeContext = CmpKeyEnumStackCreateResumeContext((unsigned int)v34, (unsigned int)v39, v20, 0, (__int64)&v27);
    v13 = v27;
    if ( ResumeContext >= 0 )
      v13 = (PPRIVILEGE_SET)_InterlockedExchange64((volatile __int64 *)(a1 + 88), (__int64)v27);
    v10 = 1;
    started = CmpQueryKeyDataFromKeyNodeStack(v40, v29, v36, a5, v35);
    if ( started >= 0 )
      started = 0;
  }
  else
  {
    while ( !CmpIsRegistryLockContended() || v20 - Control < 0xA || !a8 )
    {
      started = CmpKeyEnumStackAdvance(v39);
      if ( started < 0 )
      {
        v10 = 1;
        KeyNodeForKcb = 0LL;
        goto LABEL_45;
      }
      if ( ++v20 >= v30 )
        goto LABEL_27;
    }
    v10 = 1;
    LOBYTE(v21) = 1;
    started = CmpKeyEnumStackCreateResumeContext((unsigned int)v34, (unsigned int)v39, v20, v21, (__int64)&v27);
    if ( started >= 0 )
    {
      v13 = 0LL;
      started = -1073741267;
      KeyNodeForKcb = 0LL;
      *v38 = v27;
      goto LABEL_45;
    }
    v13 = v27;
  }
  KeyNodeForKcb = 0LL;
LABEL_45:
  CmpKeyEnumStackCleanup(v39);
  if ( v37 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v31);
  if ( KeyNodeForKcb )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v32);
  if ( v10 )
    CmpUnlockKcbStack((__int64)v34);
  if ( v34[3] )
    CmSiFreeMemory((PPRIVILEGE_SET)v34[3]);
  if ( v13 )
    CmpKeyEnumStackFreeResumeContext(v13);
  if ( v12 )
    CmpKeyEnumStackFreeResumeContext(v12);
  CmpUnlockRegistry();
  return (unsigned int)started;
}
