/*
 * XREFs of CmEnumerateValueFromLayeredKey @ 0x1406F09E4
 * Callers:
 *     CmEnumerateValueKey @ 0x1404A6F00 (CmEnumerateValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpGetKeyNodeForKcb @ 0x1404A05A0 (CmpGetKeyNodeForKcb.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpQueryKeyValueData @ 0x1404A6780 (CmpQueryKeyValueData.c)
 *     CmpLockKcbStackShared @ 0x1404A8434 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpValueEnumStackAdvance @ 0x14070104C (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x1407011A8 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x140701208 (CmpValueEnumStackInitialize.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140701320 (CmpValueEnumStackStartFromKcbStack.c)
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
  char v8; // r14
  __int64 v9; // rdx
  __int64 KcbAtLayerHeight; // rsi
  __int64 v11; // r15
  int started; // edi
  __int16 v13; // r10
  char v14; // r9
  __int16 v15; // r10
  __int16 v16; // r11
  int v17; // ebx
  unsigned int v18; // edi
  __int64 v19; // r13
  __int64 KeyNodeForKcb; // rax
  __int64 v21; // rbx
  __int64 v23; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v24; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v25; // [rsp+50h] [rbp-99h] BYREF
  int v26; // [rsp+58h] [rbp-91h]
  __int64 v27[4]; // [rsp+60h] [rbp-89h] BYREF
  __int64 v28; // [rsp+80h] [rbp-69h]
  void *Src; // [rsp+88h] [rbp-61h]
  int v30; // [rsp+90h] [rbp-59h] BYREF
  __int16 v31; // [rsp+96h] [rbp-53h]

  v7 = a2;
  v26 = a3;
  Src = a4;
  v28 = a6;
  memset(v27, 0, sizeof(v27));
  WORD1(v27[0]) = -1;
  v8 = 0;
  CmpValueEnumStackInitialize(&v30);
  v9 = *(_QWORD *)(a1 + 8);
  KcbAtLayerHeight = 0LL;
  v11 = 0LL;
  v25 = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  v24 = 0xFFFFFFFFLL;
  started = CmpStartKcbStackForTopLayerKcb((__int64)v27, v9);
  if ( started < 0 )
    goto LABEL_22;
  CmpLockKcbStackShared((__int64)v27);
  v8 = 1;
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    started = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_22;
  }
  v13 = WORD1(v27[0]);
  if ( SWORD1(v27[0]) <= 0 )
    goto LABEL_15;
  do
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v27, v13);
    if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      v14 = 1;
    v13 = v16 + v15;
  }
  while ( v13 > 0 );
  if ( !v14 )
  {
LABEL_15:
    KcbAtLayerHeight = v27[1];
    v19 = v27[1];
    KeyNodeForKcb = CmpGetKeyNodeForKcb(v27[1], (__int64)&v23, 0);
    v11 = KeyNodeForKcb;
    if ( *(_DWORD *)(KeyNodeForKcb + 36) <= (unsigned int)v7 )
    {
      started = -2147483622;
      goto LABEL_22;
    }
    v18 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                        *(_QWORD *)(KcbAtLayerHeight + 24),
                        *(unsigned int *)(KeyNodeForKcb + 40),
                        &v24)
                    + 4 * v7);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v24);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v23);
    goto LABEL_18;
  }
  started = CmpValueEnumStackStartFromKcbStack(&v30, v27);
  if ( started < 0 )
    goto LABEL_22;
  started = CmpValueEnumStackAdvance(&v30);
  if ( started < 0 )
    goto LABEL_22;
  v17 = 0;
  if ( !(_DWORD)v7 )
  {
LABEL_14:
    v18 = v30;
    v19 = CmpGetKcbAtLayerHeight((__int64)v27, v31);
LABEL_18:
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v19 + 24) + 8LL))(
            *(_QWORD *)(v19 + 24),
            v18,
            &v25);
    started = CmpQueryKeyValueData(v19, v18, v21, v26, Src, a5, (int *)v28);
    if ( started >= 0 )
      started = 0;
    v11 = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v19 + 24) + 16LL))(*(_QWORD *)(v19 + 24), &v25);
    goto LABEL_22;
  }
  while ( 1 )
  {
    started = CmpValueEnumStackAdvance(&v30);
    if ( started < 0 )
      break;
    if ( ++v17 >= (unsigned int)v7 )
      goto LABEL_14;
  }
LABEL_22:
  CmpValueEnumStackCleanup(&v30);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v23);
  if ( v8 )
    CmpUnlockKcbStack((__int64)v27);
  if ( v27[3] )
    CmSiFreeMemory((PPRIVILEGE_SET)v27[3]);
  return (unsigned int)started;
}
