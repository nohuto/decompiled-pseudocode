/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x180028650
 * Callers:
 *     sub_180025A28 @ 0x180025A28 (sub_180025A28.c)
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 *     sub_180027A70 @ 0x180027A70 (sub_180027A70.c)
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 *     sub_18004A230 @ 0x18004A230 (sub_18004A230.c)
 *     sub_180108E80 @ 0x180108E80 (sub_180108E80.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

void *__fastcall RtlSetThreadSubProcessTag(void *a1)
{
  struct _TEB *v1; // rax
  int v2; // r8d
  void *SubProcessTag; // rdi
  int *HotpatchInformation; // rdx
  int v5; // eax
  void *v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  char v10[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+26h] [rbp-32h]
  int v12; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+44h] [rbp-14h]

  v1 = NtCurrentTeb();
  v2 = (int)a1;
  SubProcessTag = v1->SubProcessTag;
  v1->SubProcessTag = a1;
  HotpatchInformation = (int *)NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation )
    v5 = *HotpatchInformation;
  else
    v5 = 0;
  v6 = a1;
  v7 = 2147353488LL;
  if ( HotpatchInformation )
    v6 = a1;
  if ( v5 )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 566;
  else
    v8 = 2147353488LL;
  if ( *(_BYTE *)v8 && v6 != SubProcessTag )
  {
    v12 = (int)SubProcessTag;
    v11 = 1349;
    v13 = v2;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 566;
    ZwTraceEvent(*(unsigned __int8 *)v7, 1026LL, 8LL, v10);
  }
  return SubProcessTag;
}
