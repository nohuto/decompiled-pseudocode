/*
 * XREFs of CmpBounceContextStart @ 0x1404AD270
 * Callers:
 *     NtEnumerateKey @ 0x1404AC500 (NtEnumerateKey.c)
 *     NtQueryMultipleValueKey @ 0x1405615AC (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x140596600 (NtEnumerateValueKey.c)
 *     NtQueryKey @ 0x14059E7B0 (NtQueryKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1400078DC (CmpAllocateTransientPoolWithQuotaTag.c)
 *     _TlgWriteAgg @ 0x14006F11C (_TlgWriteAgg.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpIsBufferGloballyVisible @ 0x1404A17C8 (CmpIsBufferGloballyVisible.c)
 */

__int64 __fastcall CmpBounceContextStart(__int64 a1, unsigned __int64 a2, size_t a3, __int64 a4, char a5)
{
  void *TransientPoolWithQuotaTag; // rdi
  unsigned int v9; // edx
  char v10; // cl
  char v11; // [rsp+30h] [rbp-98h] BYREF
  __int64 v12; // [rsp+38h] [rbp-90h] BYREF
  __int64 v13; // [rsp+40h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-58h]
  __int64 v16; // [rsp+78h] [rbp-50h]
  char *v17; // [rsp+80h] [rbp-48h]
  __int64 v18; // [rsp+88h] [rbp-40h]
  __int64 *v19; // [rsp+90h] [rbp-38h]
  __int64 v20; // [rsp+98h] [rbp-30h]

  *(_QWORD *)a1 = a2;
  TransientPoolWithQuotaTag = (void *)a2;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return 0LL;
  }
  if ( !qword_1403CA2E8 || !(_DWORD)a4 && CmpIsBufferGloballyVisible(a2) )
  {
LABEL_10:
    *(_QWORD *)(a1 + 8) = TransientPoolWithQuotaTag;
    return 0LL;
  }
  if ( stru_140397090.LevelPlus1 > 5
    && (stru_140397090.KeywordAny & 4) != 0
    && (stru_140397090.KeywordAll & 4) == stru_140397090.KeywordAll )
  {
    v9 = a3;
    v11 = a5;
    v12 = 1LL;
    if ( (((_DWORD)a3 - 1) & (unsigned int)a3) != 0 )
    {
      v10 = -1;
      if ( (_DWORD)a3 )
      {
        do
        {
          ++v10;
          v9 >>= 1;
        }
        while ( v9 );
      }
      v9 = 1 << (v10 + 1);
    }
    v13 = v9;
    v15 = &v12;
    v17 = &v11;
    v19 = &v13;
    v16 = 8LL;
    v18 = 1LL;
    v20 = 8LL;
    TlgWriteAgg((__int64)&stru_140397090, (unsigned __int8 *)dword_140308515, a3, a4, 5u, &v14);
  }
  if ( a3 <= 0x40 )
  {
    TransientPoolWithQuotaTag = (void *)(a1 + 17);
LABEL_13:
    memset(TransientPoolWithQuotaTag, 0, a3);
    goto LABEL_10;
  }
  if ( a3 <= 0x1000 )
  {
    ++dword_1403D1E14;
    TransientPoolWithQuotaTag = RtlpInterlockedPopEntrySList(&CmpBounceBufferLookaside);
    if ( TransientPoolWithQuotaTag
      || (++dword_1403D1E18,
          (TransientPoolWithQuotaTag = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_1403D1E30)(
                                                 (unsigned int)dword_1403D1E24,
                                                 (unsigned int)dword_1403D1E2C,
                                                 (unsigned int)dword_1403D1E28,
                                                 &CmpBounceBufferLookaside)) != 0LL) )
    {
      memset(TransientPoolWithQuotaTag, 0, a3);
      *(_BYTE *)(a1 + 16) |= 1u;
      goto LABEL_10;
    }
  }
  TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(a1, a3, 0x42424D43u);
  if ( TransientPoolWithQuotaTag )
    goto LABEL_13;
  return 3221225626LL;
}
