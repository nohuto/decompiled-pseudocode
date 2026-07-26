/*
 * XREFs of NdisPDStartup @ 0x1C00F8290
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceProtocol @ 0x1C00062A4 (ndisReferenceProtocol.c)
 *     ndisReferenceFilterDriver @ 0x1C000F228 (ndisReferenceFilterDriver.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00F76A0 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 */

__int64 __fastcall NdisPDStartup(_NDIS_PROTOCOL_BLOCK *a1, __int64 a2, __int64 a3, __int64 **a4, _QWORD *a5)
{
  char v6; // r14
  unsigned int v10; // edi
  __int64 *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 *v13; // rbx
  _QWORD *v14; // rax
  bool v15; // al
  __int64 *i; // rax
  ULONG ClearBitsAndSet; // eax
  __int64 v18; // rax
  __int64 **v19; // rdx
  __int64 v21; // [rsp+20h] [rbp-48h]
  KLockHolder v22; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_qqq(0x13u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, a2, a3);
  *a4 = 0LL;
  if ( (unsigned __int8)(a1->Header.Type - 3) > 1u )
  {
    v10 = -1073741788;
    goto LABEL_31;
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x6341444Eu);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[10] = 0LL;
    PoolWithTag[11] = 0LL;
    PoolWithTag[12] = 0LL;
    *((_WORD *)PoolWithTag + 52) = 0;
    PoolWithTag[1] = 0LL;
    *PoolWithTag = 0LL;
    v14 = PoolWithTag + 2;
    v14[1] = v14;
    *v14 = v14;
    v13[5] = (__int64)(v13 + 4);
    v13[4] = (__int64)(v13 + 4);
    v13[7] = (__int64)(v13 + 6);
    v13[6] = (__int64)(v13 + 6);
    v13[9] = (__int64)(v13 + 8);
    v13[8] = (__int64)(v13 + 8);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v10 = -1073741670;
    goto LABEL_31;
  }
  if ( a1->Header.Type == 3 )
  {
    v15 = ndisReferenceProtocol((__int64)a1, 0xEu);
  }
  else
  {
    if ( a1->Header.Type != 4 )
      goto LABEL_26;
    v15 = ndisReferenceFilterDriver((__int64)a1, 4u);
  }
  if ( v15 )
  {
    v13[10] = (__int64)a1;
    v6 = 1;
    v13[11] = a2;
    v13[12] = a3;
    *a4 = v13;
    *a5 = &unk_1C007FAE0;
    v22.m_Lock = (KPushLockBase *)qword_1C00987F8;
    v22.m_State = Unlocked;
    v22.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v22);
    for ( i = *(__int64 **)(qword_1C00987F8 + 8); i != (__int64 *)(qword_1C00987F8 + 8); i = (__int64 *)*i )
    {
      if ( (_NDIS_PROTOCOL_BLOCK *)i[10] == a1 )
      {
        v10 = -1073740008;
        goto LABEL_22;
      }
    }
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(qword_1C00987F8 + 24), 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v10 = -1073741618;
LABEL_22:
      KLockHolder::~KLockHolder(&v22);
      goto LABEL_27;
    }
    *((_WORD *)v13 + 52) = ClearBitsAndSet;
    v18 = qword_1C00987F8 + 8;
    v19 = *(__int64 ***)(qword_1C00987F8 + 16);
    if ( *v19 != (__int64 *)(qword_1C00987F8 + 8) )
      __fastfail(3u);
    *v13 = v18;
    v13[1] = (__int64)v19;
    *v19 = v13;
    *(_QWORD *)(v18 + 8) = v13;
    KLockHolder::~KLockHolder(&v22);
    v10 = 0;
    v13 = 0LL;
    v6 = 0;
    goto LABEL_27;
  }
LABEL_26:
  v10 = -1073741436;
LABEL_27:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x6341444Eu);
  if ( v6 )
    ndisPDDereferenceClientDriver(a1, v12);
LABEL_31:
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
  {
    LODWORD(v21) = v10;
    WPP_SF_qqd(0x14u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, *a4, v21);
  }
  return v10;
}
