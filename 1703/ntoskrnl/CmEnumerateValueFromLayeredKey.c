/*
 * XREFs of CmEnumerateValueFromLayeredKey @ 0x140662EF0
 * Callers:
 *     CmEnumerateValueKey @ 0x1404FF740 (CmEnumerateValueKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpGetKeyNodeForKcb @ 0x1404CFE00 (CmpGetKeyNodeForKcb.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackShared @ 0x1404FF968 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpQueryKeyValueData @ 0x140503410 (CmpQueryKeyValueData.c)
 *     CmpValueEnumStackAdvance @ 0x140671354 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14067146C (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x1406714CC (CmpValueEnumStackInitialize.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x1406715E4 (CmpValueEnumStackStartFromKcbStack.c)
 */

__int64 __fastcall CmEnumerateValueFromLayeredKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        void *a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // r12
  char v9; // r14
  __int64 KcbAtLayerHeight; // rdi
  __int64 v11; // rsi
  int started; // ebx
  __int16 v13; // r10
  char v14; // r9
  __int16 v15; // r10
  int v16; // r15d
  unsigned int v17; // ebx
  __int64 v18; // r15
  __int64 KeyNodeForKcb; // rax
  __int64 v20; // r12
  _BYTE v22[8]; // [rsp+40h] [rbp-A9h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-A1h] BYREF
  _BYTE v24[8]; // [rsp+50h] [rbp-99h] BYREF
  __int64 v25[4]; // [rsp+58h] [rbp-91h] BYREF
  __int64 v26; // [rsp+78h] [rbp-71h]
  void *Src; // [rsp+80h] [rbp-69h]
  int v28; // [rsp+90h] [rbp-59h] BYREF
  __int16 v29; // [rsp+96h] [rbp-53h]

  v7 = a2;
  Src = a4;
  v26 = a6;
  memset(v25, 0, sizeof(v25));
  WORD1(v25[0]) = -1;
  v9 = 0;
  CmpValueEnumStackInitialize(&v28);
  HvpGetCellContextReinitialize((__int64)v24);
  KcbAtLayerHeight = 0LL;
  v11 = 0LL;
  HvpGetCellContextReinitialize((__int64)v22);
  HvpGetCellContextReinitialize((__int64)v23);
  started = CmpStartKcbStackForTopLayerKcb((__int64)v25, *(_QWORD *)(a1 + 8));
  if ( started < 0 )
    goto LABEL_22;
  CmpLockKcbStackShared((__int64)v25);
  v9 = 1;
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    started = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_22;
  }
  v13 = WORD1(v25[0]);
  if ( SWORD1(v25[0]) <= 0 )
    goto LABEL_15;
  do
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v25, v13);
    if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      v14 = 1;
    v13 = v15 - 1;
  }
  while ( v13 > 0 );
  if ( !v14 )
  {
LABEL_15:
    KcbAtLayerHeight = v25[1];
    KeyNodeForKcb = CmpGetKeyNodeForKcb(v25[1], (__int64)v22, 0);
    v11 = KeyNodeForKcb;
    if ( *(_DWORD *)(KeyNodeForKcb + 36) <= (unsigned int)v7 )
    {
      started = -2147483622;
      goto LABEL_22;
    }
    v18 = KcbAtLayerHeight;
    v17 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                        *(_QWORD *)(KcbAtLayerHeight + 24),
                        *(unsigned int *)(KeyNodeForKcb + 40),
                        v23)
                    + 4 * v7);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v23);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v22);
    goto LABEL_18;
  }
  started = CmpValueEnumStackStartFromKcbStack(&v28, v25);
  if ( started < 0 )
    goto LABEL_22;
  started = CmpValueEnumStackAdvance(&v28);
  if ( started < 0 )
    goto LABEL_22;
  v16 = 0;
  if ( !(_DWORD)v7 )
  {
LABEL_14:
    v17 = v28;
    v18 = CmpGetKcbAtLayerHeight((__int64)v25, v29);
LABEL_18:
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v18 + 24) + 8LL))(
            *(_QWORD *)(v18 + 24),
            v17,
            v24);
    started = CmpQueryKeyValueData(v18, v17, v20, a3, Src, a5, (int *)v26);
    v11 = 0LL;
    if ( started >= 0 )
      started = 0;
    if ( v20 )
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v18 + 24) + 16LL))(*(_QWORD *)(v18 + 24), v24);
    goto LABEL_22;
  }
  while ( 1 )
  {
    started = CmpValueEnumStackAdvance(&v28);
    if ( started < 0 )
      break;
    if ( ++v16 >= (unsigned int)v7 )
      goto LABEL_14;
  }
LABEL_22:
  CmpValueEnumStackCleanup(&v28);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v22);
  if ( v9 )
    CmpUnlockKcbStack((__int64)v25);
  if ( v25[3] )
    MiDeleteSubsection((PPRIVILEGE_SET)v25[3]);
  return (unsigned int)started;
}
