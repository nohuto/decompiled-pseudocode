/*
 * XREFs of ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C00B1260
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00AFC34 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C00B0F50 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::QueryUnicodeMonitorId(
        CCD_SET_STRING_ID *this,
        __int64 a2,
        struct _UNICODE_STRING *a3,
        __int64 a4)
{
  __int64 v4; // rsi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  NTSTATUS v11; // eax
  _QWORD *v13; // rax
  _STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned int)a2;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  v7 = CCD_SET_STRING_ID::QueryMonitorId(this, a2, &SourceString, a4);
  v10 = v7;
  if ( v7 < 0 || (v11 = RtlAnsiStringToUnicodeString(a3, &SourceString, 1u), v10 = v11, v11 < 0) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v13[3] = v10;
    v13[4] = v4;
    v13[5] = a3;
    v13[6] = this;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v10;
}
