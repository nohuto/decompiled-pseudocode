/*
 * XREFs of ExpPrepareToWakeResourceExclusive @ 0x14015986C
 * Callers:
 *     ExpReleaseDisownedFastResourceExclusive @ 0x140157BB0 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpReleaseFastResourceExclusive @ 0x1401596CC (ExpReleaseFastResourceExclusive.c)
 * Callees:
 *     KeCaptureWaitChainHead @ 0x1401598E8 (KeCaptureWaitChainHead.c)
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
  *(_WORD *)(v4 + 26) &= ~0x80u;
  if ( v7 )
  {
LABEL_8:
    result = (unsigned int)(v7 + *(_DWORD *)(v4 + 64) - 1);
    goto LABEL_6;
  }
  *(_WORD *)(v4 + 24) = 0;
  result = 0LL;
LABEL_6:
  *(_DWORD *)(v4 + 64) = result;
  *a4 = v7;
  *v5 = v6;
  return result;
}
