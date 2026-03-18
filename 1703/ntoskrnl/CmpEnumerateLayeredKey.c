/*
 * XREFs of CmpEnumerateLayeredKey @ 0x140664FCC
 * Callers:
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401E14EC (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpFindSubKeyByNumber @ 0x14043B918 (CmpFindSubKeyByNumber.c)
 *     CmpGetKeyNodeForKcb @ 0x1404CFE00 (CmpGetKeyNodeForKcb.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404FCE78 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpQueryKeyDataFromNode @ 0x1404FEEE0 (CmpQueryKeyDataFromNode.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1404FF968 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpKeyEnumStackAdvance @ 0x140670278 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x140670460 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackInitialize @ 0x140670798 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x1406707E8 (CmpKeyEnumStackStartFromKcbStack.c)
 */

__int64 __fastcall CmpEnumerateLayeredKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 v9; // r13
  char v10; // r14
  __int64 KcbAtLayerHeight; // rsi
  _DWORD *KeyNodeForKcb; // r12
  int started; // ebx
  int v14; // eax
  int v15; // edi
  __int16 v16; // r10
  char v17; // r9
  __int16 v18; // r10
  __int16 v19; // r11
  unsigned int v22; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int *v23; // [rsp+48h] [rbp-B8h]
  __int64 v24; // [rsp+50h] [rbp-B0h]
  _BYTE v25[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v26[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27[5]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v28[8]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v29[156]; // [rsp+98h] [rbp-68h] BYREF

  v24 = a4;
  v23 = a6;
  memset(v27, 0, 0x20uLL);
  v9 = 0LL;
  WORD1(v27[0]) = -1;
  v10 = 0;
  CmpKeyEnumStackInitialize(v28);
  KcbAtLayerHeight = 0LL;
  KeyNodeForKcb = 0LL;
  HvpGetCellContextReinitialize((__int64)v26);
  HvpGetCellContextReinitialize((__int64)v25);
  if ( a3 == 2 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  started = CmpStartKcbStackForTopLayerKcb((__int64)v27, *(_QWORD *)(a1 + 8));
  if ( started >= 0 )
  {
    CmpLockKcbStackShared((__int64)v27);
    v10 = 1;
    v14 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    v15 = 0;
    started = v14;
    if ( v14 >= 0 )
    {
      v16 = WORD1(v27[0]);
      if ( SWORD1(v27[0]) <= 0 )
        goto LABEL_19;
      do
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v27, v16);
        if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
          v17 = 1;
        v16 = v19 + v18;
      }
      while ( v16 > 0 );
      if ( v17 )
      {
        started = CmpKeyEnumStackStartFromKcbStack(v28, v27);
        if ( started >= 0 )
        {
          started = CmpKeyEnumStackAdvance(v28);
          if ( started >= 0 )
          {
            if ( a2 )
            {
              while ( 1 )
              {
                started = CmpKeyEnumStackAdvance(v28);
                if ( started < 0 )
                  break;
                if ( ++v15 >= a2 )
                  goto LABEL_16;
              }
            }
            else
            {
LABEL_16:
              started = CmpQueryKeyDataFromKeyNodeStack(v29, a3, v24, a5, v23);
              if ( started >= 0 )
                started = 0;
            }
          }
        }
      }
      else
      {
LABEL_19:
        KcbAtLayerHeight = v27[1];
        KeyNodeForKcb = (_DWORD *)CmpGetKeyNodeForKcb(v27[1], (__int64)v26, 0);
        started = CmpFindSubKeyByNumber(*(_QWORD *)(KcbAtLayerHeight + 24), KeyNodeForKcb, a2, &v22);
        if ( started >= 0 )
        {
          if ( v22 == -1 )
          {
            started = -2147483622;
          }
          else
          {
            v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                   *(_QWORD *)(KcbAtLayerHeight + 24),
                   v22,
                   v25);
            started = CmpQueryKeyDataFromNode(*(_QWORD *)(KcbAtLayerHeight + 24), v9, a3, v24, a5, v23, 0LL, 0LL);
            if ( started >= 0 )
              started = 0;
          }
        }
      }
    }
  }
  CmpKeyEnumStackCleanup(v28);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v25);
  if ( KeyNodeForKcb )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v26);
  if ( v10 )
    CmpUnlockKcbStack((__int64)v27);
  if ( v27[3] )
    MiDeleteSubsection((PPRIVILEGE_SET)v27[3]);
  CmpUnlockRegistry();
  return (unsigned int)started;
}
