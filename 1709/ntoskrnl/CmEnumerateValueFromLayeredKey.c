/*
 * XREFs of CmEnumerateValueFromLayeredKey @ 0x14068C5D0
 * Callers:
 *     CmEnumerateValueKey @ 0x14047E740 (CmEnumerateValueKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpGetKeyNodeForKcb @ 0x140472A4C (CmpGetKeyNodeForKcb.c)
 *     CmpQueryKeyValueData @ 0x14047DAE0 (CmpQueryKeyValueData.c)
 *     CmpLockKcbStackShared @ 0x14047E98C (CmpLockKcbStackShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpValueEnumStackAdvance @ 0x14069C39C (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14069C4B0 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x14069C53C (CmpValueEnumStackInitialize.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14069C654 (CmpValueEnumStackStartFromKcbStack.c)
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
  __int64 KcbAtLayerHeight; // rsi
  __int64 v10; // r15
  int started; // edi
  __int16 v12; // r10
  char v13; // r9
  __int16 v14; // r10
  __int16 v15; // r11
  int v16; // ebx
  unsigned int v17; // edi
  __int64 v18; // r13
  __int64 KeyNodeForKcb; // rax
  __int64 v20; // rbx
  _BYTE v23[8]; // [rsp+48h] [rbp-A1h] BYREF
  _BYTE v24[8]; // [rsp+50h] [rbp-99h] BYREF
  _BYTE v25[8]; // [rsp+58h] [rbp-91h] BYREF
  __int64 v26[4]; // [rsp+60h] [rbp-89h] BYREF
  __int64 v27; // [rsp+80h] [rbp-69h]
  void *Src; // [rsp+88h] [rbp-61h]
  int v29; // [rsp+90h] [rbp-59h] BYREF
  __int16 v30; // [rsp+96h] [rbp-53h]

  v7 = a2;
  Src = a4;
  v27 = a6;
  memset(v26, 0, sizeof(v26));
  WORD1(v26[0]) = -1;
  v8 = 0;
  CmpValueEnumStackInitialize(&v29);
  HvpGetCellContextReinitialize((__int64)v25);
  KcbAtLayerHeight = 0LL;
  v10 = 0LL;
  HvpGetCellContextReinitialize((__int64)v23);
  HvpGetCellContextReinitialize((__int64)v24);
  started = CmpStartKcbStackForTopLayerKcb((__int64)v26, *(_QWORD *)(a1 + 8));
  if ( started < 0 )
    goto LABEL_22;
  CmpLockKcbStackShared((__int64)v26);
  v8 = 1;
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    started = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_22;
  }
  v12 = WORD1(v26[0]);
  if ( SWORD1(v26[0]) <= 0 )
    goto LABEL_15;
  do
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v26, v12);
    if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      v13 = 1;
    v12 = v15 + v14;
  }
  while ( v12 > 0 );
  if ( !v13 )
  {
LABEL_15:
    KcbAtLayerHeight = v26[1];
    KeyNodeForKcb = CmpGetKeyNodeForKcb(v26[1], (__int64)v23, 0);
    v10 = KeyNodeForKcb;
    if ( *(_DWORD *)(KeyNodeForKcb + 36) <= (unsigned int)v7 )
    {
      started = -2147483622;
      goto LABEL_22;
    }
    v18 = KcbAtLayerHeight;
    v17 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                        *(_QWORD *)(KcbAtLayerHeight + 24),
                        *(unsigned int *)(KeyNodeForKcb + 40),
                        v24)
                    + 4 * v7);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v24);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v23);
    goto LABEL_18;
  }
  started = CmpValueEnumStackStartFromKcbStack(&v29, v26);
  if ( started < 0 )
    goto LABEL_22;
  started = CmpValueEnumStackAdvance(&v29);
  if ( started < 0 )
    goto LABEL_22;
  v16 = 0;
  if ( !(_DWORD)v7 )
  {
LABEL_14:
    v17 = v29;
    v18 = CmpGetKcbAtLayerHeight((__int64)v26, v30);
LABEL_18:
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v18 + 24) + 8LL))(
            *(_QWORD *)(v18 + 24),
            v17,
            v25);
    started = CmpQueryKeyValueData(v18, v17, v20, a3, Src, a5, (int *)v27);
    if ( started >= 0 )
      started = 0;
    v10 = 0LL;
    if ( v20 )
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v18 + 24) + 16LL))(*(_QWORD *)(v18 + 24), v25);
    goto LABEL_22;
  }
  while ( 1 )
  {
    started = CmpValueEnumStackAdvance(&v29);
    if ( started < 0 )
      break;
    if ( ++v16 >= (unsigned int)v7 )
      goto LABEL_14;
  }
LABEL_22:
  CmpValueEnumStackCleanup(&v29);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v23);
  if ( v8 )
    CmpUnlockKcbStack((__int64)v26);
  if ( v26[3] )
    MiDeleteSubsection((PPRIVILEGE_SET)v26[3]);
  return (unsigned int)started;
}
