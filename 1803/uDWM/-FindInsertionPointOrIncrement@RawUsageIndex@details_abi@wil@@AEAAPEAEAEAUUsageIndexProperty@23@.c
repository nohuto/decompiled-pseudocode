/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180035E1C
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180035C18 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x180035B50 (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180036388 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18003645C (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18006EB88 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  char v6; // bl
  unsigned __int64 v7; // r15
  int v8; // r12d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int8 *v17; // r15
  unsigned __int8 *v18; // rax
  unsigned __int8 *v19; // r8
  unsigned int v21; // r15d
  unsigned __int8 *v22; // r8
  __int16 v23; // [rsp+30h] [rbp-20h] BYREF
  char v24; // [rsp+32h] [rbp-1Eh]
  int v25; // [rsp+34h] [rbp-1Ch]
  __int16 v26; // [rsp+38h] [rbp-18h]
  __int128 v27; // [rsp+40h] [rbp-10h]
  unsigned __int8 *v28; // [rsp+80h] [rbp+30h] BYREF

  v6 = 0;
  v7 = *((_QWORD *)this + 2);
  v8 = -1;
  v23 = *((_WORD *)this + 3);
  v24 = *((_BYTE *)this + 8);
  v25 = 0;
  v26 = 0;
  v27 = 0LL;
  if ( v7 )
  {
    v13 = *((_QWORD *)this + 4) - *((_QWORD *)this + 3);
    v14 = *((unsigned int *)a2 + 1);
    v15 = v13 / v7;
    if ( v14 > v15 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v15);
      LODWORD(v14) = *((_DWORD *)a2 + 1);
      v7 = *((_QWORD *)this + 2);
    }
    v16 = a5;
    v17 = &a3[(unsigned int)v14 * v7];
    v18 = wil::details_abi::RawUsageIndex::LowerBound(this, a3, (unsigned int)v14, a4, a5);
    a3 = v18;
    if ( v18 >= v17 )
      return a3;
    v19 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v28 = v18;
    wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v23, &v28, v19);
    v8 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v23, a4, v16);
  }
  else
  {
    v21 = 0;
    if ( !*((_DWORD *)a2 + 1) )
      return a3;
    while ( 1 )
    {
      v22 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v28 = a3;
      if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v23, &v28, v22) )
        break;
      v8 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v23, a4, a5);
      if ( v8 > 0 )
      {
        a3 = v28;
        if ( ++v21 < *((_DWORD *)a2 + 1) )
          continue;
      }
      goto LABEL_6;
    }
    wil::details_abi::UsageIndexProperty::UpdateCount(a2, v21);
  }
LABEL_6:
  if ( !v8 )
  {
    if ( v24 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v23, a6 + v25);
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
