/*
 * XREFs of CmpEnumerateLayeredKey @ 0x14068E764
 * Callers:
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpIsRegistryLockContended @ 0x1401E3C0C (CmpIsRegistryLockContended.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401E5608 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetKeyNodeForKcb @ 0x140472A4C (CmpGetKeyNodeForKcb.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpLockKcbStackShared @ 0x14047E98C (CmpLockKcbStackShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpFindSubKeyByNumber @ 0x1404825F0 (CmpFindSubKeyByNumber.c)
 *     CmpQueryKeyDataFromNode @ 0x140482830 (CmpQueryKeyDataFromNode.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140482C20 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpKeyEnumStackAdvance @ 0x14069A94C (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x14069AB34 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14069AB9C (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14069B148 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpKeyEnumStackInitialize @ 0x14069B20C (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14069B25C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x14069B424 (CmpKeyEnumStackVerifyResumeContext.c)
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
  unsigned int v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32[4]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  char v36[8]; // [rsp+A0h] [rbp-60h] BYREF
  char v37[8]; // [rsp+A8h] [rbp-58h] BYREF
  PPRIVILEGE_SET *v38; // [rsp+B0h] [rbp-50h]
  char v39[8]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 v40[172]; // [rsp+C8h] [rbp-38h] BYREF

  v30 = a2;
  v29 = a3;
  v34 = a4;
  v33 = a6;
  v38 = a7;
  memset(v32, 0, sizeof(v32));
  WORD1(v32[0]) = -1;
  v10 = 0;
  CmpKeyEnumStackInitialize(v39);
  v28 = 0LL;
  KcbAtLayerHeight = 0LL;
  HvpGetCellContextReinitialize((__int64)v37);
  v35 = 0LL;
  HvpGetCellContextReinitialize((__int64)v36);
  v12 = 0LL;
  v13 = *a7;
  *a7 = 0LL;
  v27 = v13;
  if ( v29 == 2 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  started = CmpStartKcbStackForTopLayerKcb((__int64)v32, *(_QWORD *)(a1 + 8));
  if ( started < 0 )
  {
    KeyNodeForKcb = 0LL;
    goto LABEL_45;
  }
  CmpLockKcbStackShared((__int64)v32);
  v10 = 1;
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 )
  {
    KeyNodeForKcb = 0LL;
    goto LABEL_45;
  }
  v15 = WORD1(v32[0]);
  if ( SWORD1(v32[0]) <= 0 )
    goto LABEL_35;
  do
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v32, v15);
    if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      v17 = 1;
    v15 = v16 - 1;
  }
  while ( v15 > 0 );
  if ( !v17 )
  {
LABEL_35:
    KcbAtLayerHeight = v32[1];
    KeyNodeForKcb = (_DWORD *)CmpGetKeyNodeForKcb(v32[1], (__int64)v37, 0);
    started = CmpFindSubKeyByNumber(*(_QWORD *)(KcbAtLayerHeight + 24), KeyNodeForKcb, a2, &v31);
    if ( started >= 0 )
    {
      if ( v31 == -1 )
      {
        started = -2147483622;
      }
      else
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                *(_QWORD *)(KcbAtLayerHeight + 24),
                v31,
                v36);
        v25 = *(_QWORD *)(KcbAtLayerHeight + 24);
        v35 = v24;
        started = CmpQueryKeyDataFromNode(v25, v24, v29, v34, a5, v33, 0LL, 0LL);
        if ( started >= 0 )
          started = 0;
      }
    }
    goto LABEL_45;
  }
  if ( v13 || (v13 = (PPRIVILEGE_SET)_InterlockedExchange64((volatile __int64 *)(a1 + 88), v18), (v27 = v13) != 0LL) )
  {
    if ( (unsigned int)CmpKeyEnumStackVerifyResumeContext(v32, v13) == -1073741735 || v13->Control > a2 )
    {
      v12 = v13;
      v13 = 0LL;
      v27 = 0LL;
    }
  }
  started = CmpKeyEnumStackStartFromKcbStack(v39, v32, v13);
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
    ResumeContext = CmpKeyEnumStackCreateResumeContext((unsigned int)v32, (unsigned int)v39, v20, 0, (__int64)&v27);
    v13 = v27;
    if ( ResumeContext >= 0 )
      v13 = (PPRIVILEGE_SET)_InterlockedExchange64((volatile __int64 *)(a1 + 88), (__int64)v27);
    v10 = 1;
    started = CmpQueryKeyDataFromKeyNodeStack(v40, v29, v34, a5, v33);
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
    started = CmpKeyEnumStackCreateResumeContext((unsigned int)v32, (unsigned int)v39, v20, v21, (__int64)&v27);
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
  if ( v35 )
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v36);
  if ( KeyNodeForKcb )
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v37);
  if ( v10 )
    CmpUnlockKcbStack((__int64)v32);
  if ( v32[3] )
    MiDeleteSubsection((PPRIVILEGE_SET)v32[3]);
  if ( v13 )
    CmpKeyEnumStackFreeResumeContext(v13);
  if ( v12 )
    CmpKeyEnumStackFreeResumeContext(v12);
  CmpUnlockRegistry();
  return (unsigned int)started;
}
