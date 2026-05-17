/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x180017240
 * Callers:
 *     sub_180012130 @ 0x180012130 (sub_180012130.c)
 *     sub_180013820 @ 0x180013820 (sub_180013820.c)
 *     sub_180016A78 @ 0x180016A78 (sub_180016A78.c)
 *     sub_180016D48 @ 0x180016D48 (sub_180016D48.c)
 *     sub_1800957D0 @ 0x1800957D0 (sub_1800957D0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

void *__fastcall RtlSetThreadSubProcessTag(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rax
  __int64 v6; // rbx
  void *SubProcessTag; // rdi
  _DWORD *HotpatchInformation; // rcx
  __int64 v9; // rcx
  char v11[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v12; // [rsp+26h] [rbp-32h]
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  v4 = NtCurrentTeb();
  v6 = 2147353488LL;
  SubProcessTag = v4->SubProcessTag;
  v4->SubProcessTag = a1;
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 566;
  else
    v9 = 2147353488LL;
  if ( *(_BYTE *)v9 && a1 != SubProcessTag )
  {
    v13 = (int)SubProcessTag;
    v12 = 1349;
    v14 = (int)a1;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, a1, a3, a4) )
      v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 566;
    ZwTraceEvent(*(unsigned __int8 *)v6, 1026LL, 8LL, v11);
  }
  return SubProcessTag;
}
