/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180079A98
 * Callers:
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180079BD4 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180079BD4.c)
 * Callees:
 *     _TlgWrite @ 0x180016430 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

int __fastcall _TlgWriteActivityAutoStop<35184372088832,5>(const struct _TlgProvider_t *a1, const GUID *a2)
{
  __int64 v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u && (*((_QWORD *)a1 + 2) & 0x200000000000LL) != 0 )
  {
    v2 = *((_QWORD *)a1 + 3) & 0x200000000000LL;
    if ( v2 == *((_QWORD *)a1 + 3) )
      LODWORD(v2) = TlgWrite(a1, &unk_1800AF3ED, a2, 0LL, 2u, &pData);
  }
  return v2;
}
