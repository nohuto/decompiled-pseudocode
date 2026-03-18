/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00EE2CC
 * Callers:
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C00AD610 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00B0C90 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EBFAC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B1150 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00B1474 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00B15E8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00EC3E0 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00EE258 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

const struct CCD_SET_STRING_ID *__fastcall CCD_TOPOLOGY::GetModalitySetId(CCD_TOPOLOGY *this)
{
  unsigned __int16 *v2; // rsi
  unsigned __int16 v3; // r8
  __int64 v4; // rbp
  __int64 v5; // rdi
  _DWORD *v6; // rax
  __int64 v7; // rcx
  CCD_SET_STRING_ID *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int i; // r8d
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // ax
  _DWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v21; // rax
  unsigned __int16 v22; // ax
  SIZE_T v23; // rax
  unsigned __int64 v24; // kr00_8
  PVOID v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  unsigned __int16 v29; // ax
  unsigned int j; // r8d
  __int64 v31; // rdx
  unsigned __int16 v32; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v34[64]; // [rsp+30h] [rbp-48h] BYREF

  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    v2 = (unsigned __int16 *)operator new(0x8002uLL, 0x63644356u, PagedPool);
    if ( v2 )
    {
      v4 = *((_QWORD *)this + 8);
      v5 = *(unsigned __int16 *)(v4 + 20);
      if ( *(_WORD *)(v4 + 20) )
      {
        v6 = (_DWORD *)(v4 + 240);
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
      if ( (int)CCD_TOPOLOGY::_QueryTopologySetIdStr(this, v2, v3) < 0 )
        goto LABEL_21;
      RtlInitUnicodeString(&DestinationString, v2);
      v8 = CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v34, &DestinationString);
      CCD_SET_STRING_ID::operator=(this, (__int64)v8);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v34);
      if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
      {
        v12 = *((_QWORD *)this + 8);
        if ( v12 )
          v13 = *(unsigned __int16 *)(v12 + 20);
        else
          v13 = 0LL;
        if ( (_WORD)v13 != *((_WORD *)this + 16) )
        {
          v21 = WdLogNewEntry5_WdAssertion(v13, v9, v10, v11);
          WdLogEvent5_WdAssertion(v21);
        }
        v14 = *((_QWORD *)this + 8);
        for ( i = 0; ; ++i )
        {
          v16 = v14 ? *(_WORD *)(v14 + 20) : 0;
          if ( i >= v16 || *(_DWORD *)(264LL * i + v14 + 248) != i )
            break;
        }
        if ( v14 )
          v17 = *(_WORD *)(v14 + 20);
        else
          v17 = 0;
        if ( i >= v17 )
          goto LABEL_21;
        if ( v14 )
          v22 = *(_WORD *)(v14 + 20);
        else
          v22 = 0;
        v24 = v22;
        v23 = 2LL * v22;
        if ( !is_mul_ok(v24, 2uLL) )
          v23 = -1LL;
        v25 = operator new(v23, 0x63644356u, PagedPool);
        *((_QWORD *)this + 7) = v25;
        if ( v25 )
        {
          for ( j = 0; ; ++j )
          {
            v31 = *((_QWORD *)this + 8);
            v32 = v31 ? *(_WORD *)(v31 + 20) : 0;
            if ( j >= v32 )
              break;
            *(_WORD *)(*((_QWORD *)this + 7) + 2LL * *(unsigned int *)(264LL * j + v31 + 248)) = j;
          }
          goto LABEL_21;
        }
        v27 = (_QWORD *)WdLogNewEntry5_WdLowResource(v26);
        v27[3] = this;
        v27[4] = *((_QWORD *)this + 8);
        v28 = *((_QWORD *)this + 8);
        if ( v28 )
          v29 = *(_WORD *)(v28 + 20);
        else
          v29 = 0;
        v27[5] = v29;
        WdLogEvent5_WdLowResource(v27);
      }
      CCD_SET_STRING_ID::_Cleanup(this);
LABEL_21:
      ExFreePoolWithTag(v2, 0);
      if ( (_DWORD)v5 )
      {
        v18 = (_DWORD *)(v4 + 240);
        v19 = v5;
        do
        {
          v18[2] = 0;
          *v18 &= ~2u;
          v18 += 66;
          --v19;
        }
        while ( v19 );
      }
    }
  }
  return this;
}
