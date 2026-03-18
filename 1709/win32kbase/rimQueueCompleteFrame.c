/*
 * XREFs of rimQueueCompleteFrame @ 0x1C010BDD4
 * Callers:
 *     rimProcessCompleteFrame @ 0x1C010BBEC (rimProcessCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_qi @ 0x1C010B874 (WPP_RECORDER_SF_qi.c)
 */

_QWORD *__fastcall rimQueueCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *result; // rax
  __int64 v8; // [rsp+20h] [rbp-28h]

  ++*(_QWORD *)(a2 + 192);
  WPP_RECORDER_SF_qi((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x11u, v8);
  v5 = a1 + 680;
  v6 = (_QWORD *)(a3 + 8);
  result = *(_QWORD **)(v5 + 8);
  if ( *result != v5 )
    __fastfail(3u);
  *v6 = v5;
  v6[1] = result;
  *result = v6;
  *(_QWORD *)(v5 + 8) = v6;
  return result;
}
