/*
 * XREFs of TpWaitForIoCompletion @ 0x180087F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800176B8 @ 0x1800176B8 (sub_1800176B8.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     sub_180105960 @ 0x180105960 (sub_180105960.c)
 */

struct _PEB *__fastcall TpWaitForIoCompletion(__int64 a1, __int32 a2)
{
  struct _PEB *result; // rax
  __int64 v5; // rcx

  result = (struct _PEB *)sub_1800176B8((struct _PEB_LDR_DATA *)a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( a2 )
      a2 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
    result = (struct _PEB *)sub_18007358C((volatile signed __int64 *)(a1 + 56), -a2, 1);
    if ( a2 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v5 = (__int64)result->HotpatchInformation + 556;
      }
      else
      {
        v5 = 2147353478LL;
      }
      if ( *(_BYTE *)v5 )
        return (struct _PEB *)sub_180105960(
                                *(_QWORD *)(a1 + 144),
                                (int)a1 + 200,
                                (int)a1 + 80,
                                *(_QWORD *)(a1 + 88),
                                *(_QWORD *)(a1 + 104),
                                a2);
    }
  }
  return result;
}
