/*
 * XREFs of TppWorkWait @ 0x18000C5D0
 * Callers:
 *     TpWaitForWork @ 0x18000ABD0 (TpWaitForWork.c)
 *     TpWaitForTimer @ 0x18000C660 (TpWaitForTimer.c)
 *     TpWaitForWait @ 0x180012C80 (TpWaitForWait.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x18010AF80 (TppETWCallbackCancel.c)
 */

struct _PEB *__fastcall TppWorkWait(_QWORD *a1, int a2)
{
  unsigned __int32 v3; // r8d
  unsigned __int32 v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _PEB *result; // rax
  __int64 v8; // rcx
  bool v9; // zf
  signed __int32 v10; // eax

  _m_prefetchw(a1 + 29);
  v3 = *((_DWORD *)a1 + 58);
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = v3 >> 1;
      if ( !(v3 >> 1) )
        break;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 58, v3 & 1, v3);
      v9 = v3 == v10;
      v3 = v10;
      if ( v9 )
        goto LABEL_4;
    }
  }
  v4 = 0;
LABEL_4:
  TppBarrierAdjust(a1 + 7, -v4, 1LL);
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v6, v5);
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v8 = (__int64)result->SharedData + 556;
  }
  else
  {
    v8 = 2147353478LL;
  }
  if ( *(_BYTE *)v8 )
  {
    if ( v4 )
      return (struct _PEB *)TppETWCallbackCancel(a1[18], (int)a1 + 200, a1[10], a1[11], a1[13], v4);
  }
  return result;
}
