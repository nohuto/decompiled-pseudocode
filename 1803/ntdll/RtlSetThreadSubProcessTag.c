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

PVOID __cdecl RtlSetThreadSubProcessTag(PVOID SubProcessTag)
{
  struct _TEB *v1; // rax
  int v2; // r8d
  PVOID v3; // rdi
  PSILO_USER_SHARED_DATA SharedData; // rdx
  ULONG ServiceSessionId; // eax
  PVOID v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+26h] [rbp-32h]
  int v12; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+44h] [rbp-14h]

  v1 = NtCurrentTeb();
  v2 = (int)SubProcessTag;
  v3 = v1->SubProcessTag;
  v1->SubProcessTag = SubProcessTag;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData )
    ServiceSessionId = SharedData->ServiceSessionId;
  else
    ServiceSessionId = 0;
  v6 = SubProcessTag;
  v7 = 2147353488LL;
  if ( SharedData )
    v6 = SubProcessTag;
  if ( ServiceSessionId )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[8];
  else
    v8 = 2147353488LL;
  if ( *(_BYTE *)v8 && v6 != v3 )
  {
    v12 = (int)v3;
    v11 = 1349;
    v13 = v2;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[8];
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x402u, 8u, Fields);
  }
  return v3;
}
