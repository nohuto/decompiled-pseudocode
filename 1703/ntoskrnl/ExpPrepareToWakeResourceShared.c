/*
 * XREFs of ExpPrepareToWakeResourceShared @ 0x14014E254
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x14014DCBC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14014DF20 (ExpReleaseFastResourceShared.c)
 * Callees:
 *     KeCaptureWaitChainHead @ 0x14014EAE0 (KeCaptureWaitChainHead.c)
 */

__int64 __fastcall ExpPrepareToWakeResourceShared(__int64 a1, _QWORD *a2, _BYTE *a3, _DWORD *a4)
{
  __int64 v4; // r10
  char v6; // cl
  int v7; // r11d
  __int64 result; // rax
  bool v9; // zf

  v4 = a1;
  v6 = 0;
  if ( *(_DWORD *)(v4 + 64) > 1u )
    goto LABEL_2;
  if ( *(_DWORD *)(v4 + 76) )
  {
    KeCaptureWaitChainHead(v4 + 40);
    --*(_DWORD *)(v4 + 76);
    *(_WORD *)(v4 + 26) |= 0x80u;
    v6 = v7;
  }
  else
  {
    if ( !*(_DWORD *)(v4 + 72) )
    {
LABEL_2:
      v7 = 0;
      *a2 = 0LL;
      goto LABEL_3;
    }
    *a2 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v4 + 32) = 0LL;
    v7 = *(_DWORD *)(v4 + 72);
    *(_DWORD *)(v4 + 72) = 0;
  }
LABEL_3:
  result = (unsigned int)(v7 - 1);
  v9 = (_DWORD)result + *(_DWORD *)(v4 + 64) == 0;
  *(_DWORD *)(v4 + 64) += result;
  if ( v9 )
    *(_WORD *)(v4 + 24) = 0;
  *a3 = v6;
  *a4 = v7;
  return result;
}
