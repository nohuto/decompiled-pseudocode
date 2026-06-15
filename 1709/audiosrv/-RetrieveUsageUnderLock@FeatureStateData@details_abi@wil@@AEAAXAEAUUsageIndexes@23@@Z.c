/*
 * XREFs of ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x1800018F4
 * Callers:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800019F0 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180006280 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18008C764 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180005D48 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::FeatureStateData::RetrieveUsageUnderLock(
        wil::details_abi::FeatureStateData *this,
        struct wil::details_abi::UsageIndexes *a2)
{
  void **v4; // r14
  char *v5; // rsi
  __int64 v6; // xmm3_8
  __int128 v7; // xmm2
  void *v8; // r12
  void *v9; // rbp
  void *v10; // r15
  void *v11; // rcx
  void *v12; // rcx
  char v13; // cl
  char v14; // cl
  __int128 v15; // [rsp+20h] [rbp-48h]
  char v16; // [rsp+38h] [rbp-30h] BYREF

  if ( *((_BYTE *)this + 64) )
  {
    v4 = (void **)((char *)a2 + 48);
    v5 = (char *)this + 56;
    v15 = *(_OWORD *)((char *)a2 + 24);
    v6 = *((_QWORD *)a2 + 5);
    v7 = v15;
    v8 = (void *)*((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 6) = 0LL;
    v9 = v8;
    *(_OWORD *)((char *)a2 + 24) = *((_OWORD *)this + 2);
    *((_QWORD *)a2 + 5) = *((_QWORD *)this + 6);
    if ( (char *)a2 + 48 != (char *)this + 56 )
    {
      v10 = *(void **)v5;
      *(_QWORD *)v5 = 0LL;
      v11 = *v4;
      if ( v10 != *v4 )
      {
        if ( v11 )
        {
          operator delete(v11);
          v7 = v15;
        }
        *v4 = v10;
      }
    }
    *((_OWORD *)this + 2) = v7;
    *((_QWORD *)this + 6) = v6;
    if ( v5 != &v16 )
    {
      v12 = *(void **)v5;
      v9 = 0LL;
      if ( v8 == *(void **)v5 )
      {
LABEL_9:
        v13 = *((_BYTE *)a2 + 56);
        *((_BYTE *)a2 + 56) = *((_BYTE *)this + 64);
        *((_BYTE *)this + 64) = v13;
        v14 = *((_BYTE *)a2 + 57);
        *((_BYTE *)a2 + 57) = *((_BYTE *)this + 65);
        *((_BYTE *)this + 65) = v14;
        goto LABEL_10;
      }
      if ( v12 )
        operator delete(v12);
      *(_QWORD *)v5 = v8;
    }
    if ( v9 )
      operator delete(v9);
    goto LABEL_9;
  }
LABEL_10:
  if ( *((_BYTE *)this + 128) )
    wil::details_abi::RawUsageIndex::Swap(
      (struct wil::details_abi::UsageIndexes *)((char *)a2 + 64),
      (wil::details_abi::FeatureStateData *)((char *)this + 72));
  if ( *((_BYTE *)this + 192) )
    wil::details_abi::RawUsageIndex::Swap(
      (struct wil::details_abi::UsageIndexes *)((char *)a2 + 128),
      (wil::details_abi::FeatureStateData *)((char *)this + 136));
}
