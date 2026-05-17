/*
 * XREFs of sub_18001434C @ 0x18001434C
 * Callers:
 *     TpWaitForWork @ 0x1800110D0 (TpWaitForWork.c)
 *     TpWaitForWait @ 0x180012BD0 (TpWaitForWait.c)
 *     TpWaitForTimer @ 0x1800143D0 (TpWaitForTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     sub_180105960 @ 0x180105960 (sub_180105960.c)
 */

struct _PEB *__fastcall sub_18001434C(_QWORD *a1, int a2)
{
  unsigned __int32 v3; // r8d
  unsigned __int32 v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _PEB *result; // rax
  __int64 v10; // rcx
  bool v11; // zf
  signed __int32 v12; // eax

  _m_prefetchw(a1 + 29);
  v3 = *((_DWORD *)a1 + 58);
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = v3 >> 1;
      if ( !(v3 >> 1) )
        break;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 58, v3 & 1, v3);
      v11 = v3 == v12;
      v3 = v12;
      if ( v11 )
        goto LABEL_4;
    }
  }
  v4 = 0;
LABEL_4:
  sub_18007358C(a1 + 7, -v4, 1LL);
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v6, v5, v7, v8);
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v10 = (__int64)result->HotpatchInformation + 556;
  }
  else
  {
    v10 = 2147353478LL;
  }
  if ( *(_BYTE *)v10 )
  {
    if ( v4 )
      return (struct _PEB *)sub_180105960(a1[18], (int)a1 + 200, a1[10], a1[11], a1[13], v4);
  }
  return result;
}
