/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00DC3A4
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00DA308 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DF0C8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DF48C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C00F8DA0 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DAB54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00DAC64 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00DBFE4 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00DC588 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

const struct CCD_SET_STRING_ID *__fastcall CCD_TOPOLOGY::GetModalitySetId(CCD_TOPOLOGY *this)
{
  wchar_t *v2; // rsi
  unsigned __int16 v3; // r8
  __int64 v4; // rbp
  __int64 v5; // rdi
  _DWORD *v6; // rax
  __int64 v7; // rcx
  CCD_SET_STRING_ID *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int i; // r8d
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  _DWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v18; // rax
  unsigned __int16 v19; // ax
  SIZE_T v20; // rax
  unsigned __int64 v21; // kr00_8
  PVOID v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  unsigned __int16 v26; // ax
  unsigned int j; // r8d
  __int64 v28; // rdx
  unsigned __int16 v29; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v31[64]; // [rsp+30h] [rbp-48h] BYREF

  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    v2 = (wchar_t *)operator new(0x8002uLL, 0x63644356u, PagedPool);
    if ( v2 )
    {
      v4 = *((_QWORD *)this + 8);
      v5 = *(unsigned __int16 *)(v4 + 20);
      if ( *(_WORD *)(v4 + 20) )
      {
        v6 = (_DWORD *)(v4 + 272);
        v7 = *(unsigned __int16 *)(v4 + 20);
        do
        {
          *v6 |= 2u;
          v6[2] = 0;
          v6 += 66;
          --v7;
        }
        while ( v7 );
      }
      if ( CCD_TOPOLOGY::_QueryTopologySetIdStr(this, v2, v3) < 0 )
        goto LABEL_21;
      RtlInitUnicodeString(&DestinationString, v2);
      v8 = CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v31, &DestinationString);
      CCD_SET_STRING_ID::operator=(this, (__int64)v8);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v31);
      if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
      {
        v9 = *((_QWORD *)this + 8);
        if ( v9 )
          v10 = *(unsigned __int16 *)(v9 + 20);
        else
          v10 = 0LL;
        if ( (_WORD)v10 != *((_WORD *)this + 16) )
        {
          v18 = WdLogNewEntry5_WdAssertion(v10);
          WdLogEvent5_WdAssertion(v18);
        }
        v11 = *((_QWORD *)this + 8);
        for ( i = 0; ; ++i )
        {
          v13 = v11 ? *(_WORD *)(v11 + 20) : 0;
          if ( i >= v13 || *(_DWORD *)(264LL * i + v11 + 280) != i )
            break;
        }
        if ( v11 )
          v14 = *(_WORD *)(v11 + 20);
        else
          v14 = 0;
        if ( i >= v14 )
          goto LABEL_21;
        if ( v11 )
          v19 = *(_WORD *)(v11 + 20);
        else
          v19 = 0;
        v21 = v19;
        v20 = 2LL * v19;
        if ( !is_mul_ok(v21, 2uLL) )
          v20 = -1LL;
        v22 = operator new(v20, 0x63644356u, PagedPool);
        *((_QWORD *)this + 7) = v22;
        if ( v22 )
        {
          for ( j = 0; ; ++j )
          {
            v28 = *((_QWORD *)this + 8);
            v29 = v28 ? *(_WORD *)(v28 + 20) : 0;
            if ( j >= v29 )
              break;
            *(_WORD *)(*((_QWORD *)this + 7) + 2LL * *(unsigned int *)(264LL * j + v28 + 280)) = j;
          }
          goto LABEL_21;
        }
        v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v23);
        v24[3] = this;
        v24[4] = *((_QWORD *)this + 8);
        v25 = *((_QWORD *)this + 8);
        if ( v25 )
          v26 = *(_WORD *)(v25 + 20);
        else
          v26 = 0;
        v24[5] = v26;
        WdLogEvent5_WdLowResource(v24);
      }
      CCD_SET_STRING_ID::_Cleanup(this);
LABEL_21:
      ExFreePoolWithTag(v2, 0);
      if ( (_DWORD)v5 )
      {
        v15 = (_DWORD *)(v4 + 272);
        v16 = v5;
        do
        {
          v15[2] = 0;
          *v15 &= ~2u;
          v15 += 66;
          --v16;
        }
        while ( v16 );
      }
    }
  }
  return this;
}
