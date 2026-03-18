/*
 * XREFs of ExpPrepareToWakeResourceExclusive @ 0x14014EA64
 * Callers:
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14014D0C4 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpReleaseFastResourceExclusive @ 0x14014E868 (ExpReleaseFastResourceExclusive.c)
 * Callees:
 *     KeCaptureWaitChainHead @ 0x14014EAE0 (KeCaptureWaitChainHead.c)
 */

__int64 __fastcall ExpPrepareToWakeResourceExclusive(__int64 a1, _QWORD *a2, char *a3, int *a4)
{
  __int64 v4; // r10
  char *v5; // r11
  char v6; // cl
  int v7; // edx
  __int64 result; // rax

  v4 = a1;
  v5 = a3;
  v6 = 0;
  if ( *(_DWORD *)(v4 + 72) )
  {
    *a2 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v4 + 32) = 0LL;
    v7 = *(_DWORD *)(v4 + 72);
    *(_DWORD *)(v4 + 72) = 0;
  }
  else
  {
    if ( *(_DWORD *)(v4 + 76) )
    {
      KeCaptureWaitChainHead(v4 + 40);
      --*(_DWORD *)(v4 + 76);
      v7 = 1;
      v6 = 1;
      goto LABEL_8;
    }
    *a2 = 0LL;
    v7 = 0;
  }
  result = 65407LL;
  *(_WORD *)(v4 + 26) &= ~0x80u;
  if ( v7 )
  {
LABEL_8:
    result = (unsigned int)(v7 - 1);
    *(_DWORD *)(v4 + 64) += result;
    goto LABEL_6;
  }
  *(_DWORD *)(v4 + 64) = 0;
  *(_WORD *)(v4 + 24) = 0;
LABEL_6:
  *a4 = v7;
  *v5 = v6;
  return result;
}
