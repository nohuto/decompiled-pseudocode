/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180031EC8
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180031CC8 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x180031C00 (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18003243C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1800325BC (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1800684E0 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  char v6; // di
  int v7; // r12d
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r14
  unsigned __int8 *v15; // rbx
  unsigned __int8 *v16; // rax
  unsigned __int8 *v17; // r8
  unsigned int v19; // r14d
  unsigned __int8 *v20; // r8
  __int16 v21; // [rsp+30h] [rbp-20h] BYREF
  char v22; // [rsp+32h] [rbp-1Eh]
  int v23; // [rsp+34h] [rbp-1Ch]
  __int16 v24; // [rsp+38h] [rbp-18h]
  __int128 v25; // [rsp+40h] [rbp-10h]
  unsigned __int8 *v26; // [rsp+80h] [rbp+30h] BYREF

  v6 = 0;
  v21 = *((_WORD *)this + 3);
  v7 = -1;
  v22 = *((_BYTE *)this + 8);
  v23 = 0;
  v24 = 0;
  v25 = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
    if ( *((unsigned int *)a2 + 1) > v12 )
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v12);
    v13 = *((unsigned int *)a2 + 1);
    v14 = a5;
    v15 = &a3[v13 * *((_QWORD *)this + 2)];
    v16 = wil::details_abi::RawUsageIndex::LowerBound(this, a3, v13, a4, a5);
    a3 = v16;
    if ( v16 >= v15 )
      return a3;
    v17 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v26 = v16;
    wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v21, &v26, v17);
    v7 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v21, a4, v14);
  }
  else
  {
    v19 = 0;
    if ( !*((_DWORD *)a2 + 1) )
      return a3;
    while ( 1 )
    {
      v20 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v26 = a3;
      if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v21, &v26, v20) )
        break;
      v7 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v21, a4, a5);
      if ( v7 > 0 )
      {
        a3 = v26;
        if ( ++v19 < *((_DWORD *)a2 + 1) )
          continue;
      }
      goto LABEL_6;
    }
    wil::details_abi::UsageIndexProperty::UpdateCount(a2, v19);
  }
LABEL_6:
  if ( !v7 )
  {
    if ( v22 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v21, a6 + v23);
    }
    else if ( !*((_BYTE *)this + 56) )
    {
LABEL_9:
      *((_BYTE *)this + 56) = v6;
      return 0LL;
    }
    v6 = 1;
    goto LABEL_9;
  }
  return a3;
}
