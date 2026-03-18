/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00B3F08
 * Callers:
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C009E180 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00B1FC8 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00B2F88 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B334C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00B23F8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B2714 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00B2A84 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00B3B40 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00B42BC (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
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
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int16 v11; // ax
  __int64 v12; // r9
  unsigned int i; // r8d
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v19; // rax
  unsigned __int16 v20; // ax
  SIZE_T v21; // rax
  unsigned __int64 v22; // kr00_8
  PVOID v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rax
  unsigned __int16 v27; // ax
  unsigned int j; // r8d
  __int64 v29; // rdx
  unsigned __int16 v30; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v32[64]; // [rsp+30h] [rbp-48h] BYREF

  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    v2 = (unsigned __int16 *)operator new[](0x8002uLL, 0x63644356u, PagedPool);
    if ( v2 )
    {
      v4 = *((_QWORD *)this + 8);
      v5 = *(unsigned __int16 *)(v4 + 20);
      if ( *(_WORD *)(v4 + 20) )
      {
        v6 = (_DWORD *)(v4 + 280);
        v7 = *(unsigned __int16 *)(v4 + 20);
        do
        {
          *v6 |= 2u;
          v6[2] = 0;
          v6 += 68;
          --v7;
        }
        while ( v7 );
      }
      if ( (int)CCD_TOPOLOGY::_QueryTopologySetIdStr(this, v2, v3) < 0 )
        goto LABEL_21;
      RtlInitUnicodeString(&DestinationString, v2);
      v8 = CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v32, &DestinationString);
      CCD_SET_STRING_ID::operator=(this, (__int64)v8);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v32);
      if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
      {
        v10 = *((_QWORD *)this + 8);
        if ( v10 )
          v11 = *(_WORD *)(v10 + 20);
        else
          v11 = 0;
        v12 = *((_QWORD *)this + 8);
        if ( v11 != *((_WORD *)this + 16) )
        {
          v19 = WdLogNewEntry5_WdAssertion(v9);
          WdLogEvent5_WdAssertion(v19);
          v10 = *((_QWORD *)this + 8);
          v12 = v10;
        }
        for ( i = 0; ; ++i )
        {
          v14 = v12 ? *(_WORD *)(v12 + 20) : 0;
          if ( i >= v14 || *(_DWORD *)(272LL * i + v12 + 288) != i )
            break;
        }
        if ( v10 )
          v15 = *(_WORD *)(v10 + 20);
        else
          v15 = 0;
        if ( i >= v15 )
          goto LABEL_21;
        if ( v10 )
          v20 = *(_WORD *)(v10 + 20);
        else
          v20 = 0;
        v22 = v20;
        v21 = 2LL * v20;
        if ( !is_mul_ok(v22, 2uLL) )
          v21 = -1LL;
        v23 = operator new[](v21, 0x63644356u, PagedPool);
        *((_QWORD *)this + 7) = v23;
        if ( v23 )
        {
          for ( j = 0; ; ++j )
          {
            v29 = *((_QWORD *)this + 8);
            v30 = v29 ? *(_WORD *)(v29 + 20) : 0;
            if ( j >= v30 )
              break;
            *(_WORD *)(*((_QWORD *)this + 7) + 2LL * *(unsigned int *)(272LL * j + v29 + 288)) = j;
          }
          goto LABEL_21;
        }
        v25 = (_QWORD *)WdLogNewEntry5_WdLowResource(v24);
        v25[3] = this;
        v25[4] = *((_QWORD *)this + 8);
        v26 = *((_QWORD *)this + 8);
        if ( v26 )
          v27 = *(_WORD *)(v26 + 20);
        else
          v27 = 0;
        v25[5] = v27;
        WdLogEvent5_WdLowResource(v25);
      }
      CCD_SET_STRING_ID::_Cleanup(this);
LABEL_21:
      operator delete[](v2);
      if ( (_DWORD)v5 )
      {
        v16 = (_DWORD *)(v4 + 280);
        v17 = v5;
        do
        {
          v16[2] = 0;
          *v16 &= ~2u;
          v16 += 68;
          --v17;
        }
        while ( v17 );
      }
    }
  }
  return this;
}
