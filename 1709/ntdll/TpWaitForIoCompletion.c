/*
 * XREFs of TpWaitForIoCompletion @ 0x180087220
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18000F958 (TppIopValidateIo.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x18010AF80 (TppETWCallbackCancel.c)
 */

struct _PEB *__fastcall TpWaitForIoCompletion(__int64 a1, __int32 a2)
{
  struct _PEB *result; // rax
  __int64 v5; // r9
  __int64 v6; // rcx

  result = (struct _PEB *)TppIopValidateIo((_PEB_LDR_DATA *)a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( a2 )
      a2 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
    result = (struct _PEB *)TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -a2, (unsigned __int64 *)1, v5);
    if ( a2 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v6 = (__int64)result->SharedData + 556;
      }
      else
      {
        v6 = 2147353478LL;
      }
      if ( *(_BYTE *)v6 )
        return (struct _PEB *)TppETWCallbackCancel(
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
