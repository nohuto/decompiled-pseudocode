/*
 * XREFs of ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C00B2A10
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00B066C (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C00B238C (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::QueryUnicodeMonitorId(
        CCD_SET_STRING_ID *this,
        unsigned int a2,
        struct _UNICODE_STRING *a3)
{
  __int64 v3; // rsi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  _QWORD *v11; // rax
  struct _STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  v6 = CCD_SET_STRING_ID::QueryMonitorId(this, a2, &SourceString);
  v8 = v6;
  if ( v6 < 0 || (v9 = RtlAnsiStringToUnicodeString(a3, &SourceString, 1u), v8 = v9, v9 < 0) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v11[3] = v8;
    v11[4] = v3;
    v11[5] = a3;
    v11[6] = this;
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v8;
}
