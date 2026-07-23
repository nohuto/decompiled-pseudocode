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

int __fastcall sub_18001434C(_QWORD *a1, int a2)
{
  unsigned __int32 v3; // r8d
  unsigned __int32 v4; // ebx
  struct _PEB *v5; // rax
  __int64 v6; // rcx
  bool v7; // zf
  signed __int32 v8; // eax

  _m_prefetchw(a1 + 29);
  v3 = *((_DWORD *)a1 + 58);
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = v3 >> 1;
      if ( !(v3 >> 1) )
        break;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 58, v3 & 1, v3);
      v7 = v3 == v8;
      v3 = v8;
      if ( v7 )
        goto LABEL_4;
    }
  }
  v4 = 0;
LABEL_4:
  sub_18007358C(a1 + 7, -v4, 1LL);
  LODWORD(v5) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v5 )
  {
    v5 = NtCurrentPeb();
    v6 = (__int64)&v5->SharedData->UserModeGlobalLogger[3];
  }
  else
  {
    v6 = 2147353478LL;
  }
  if ( *(_BYTE *)v6 && v4 )
    LODWORD(v5) = sub_180105960(a1[18], (int)a1 + 200, a1[10], a1[11], a1[13], v4);
  return (int)v5;
}
