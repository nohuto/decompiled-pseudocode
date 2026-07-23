/*
 * XREFs of sub_18002C5FC @ 0x18002C5FC
 * Callers:
 *     TpWaitForTimer @ 0x18002C520 (TpWaitForTimer.c)
 *     TpWaitForWork @ 0x180057E60 (TpWaitForWork.c)
 *     TpWaitForWait @ 0x180059580 (TpWaitForWait.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_180108770 @ 0x180108770 (sub_180108770.c)
 */

int __fastcall sub_18002C5FC(_QWORD *a1, int a2)
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
  sub_180055584(a1 + 7, -v4);
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
    LODWORD(v5) = sub_180108770(a1[18], (int)a1 + 200, a1[10], a1[11], a1[13], v4);
  return (int)v5;
}
