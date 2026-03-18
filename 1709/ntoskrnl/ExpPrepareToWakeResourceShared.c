/*
 * XREFs of ExpPrepareToWakeResourceShared @ 0x140113C80
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x14007D110 (ExReleaseResourceForThreadLite.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x140140250 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x1401404C0 (ExpReleaseFastResourceShared.c)
 * Callees:
 *     KeCaptureWaitChainHead @ 0x140113CFC (KeCaptureWaitChainHead.c)
 */

__int64 __fastcall ExpPrepareToWakeResourceShared(__int64 a1, _QWORD *a2, char *a3, int *a4)
{
  char v4; // r11
  __int64 v6; // r10
  int v7; // ecx
  __int64 result; // rax
  bool v9; // zf

  v4 = 0;
  v6 = a1;
  if ( *(_DWORD *)(a1 + 64) > 1u )
    goto LABEL_2;
  if ( *(_DWORD *)(a1 + 76) )
  {
    KeCaptureWaitChainHead(a1 + 40, a2, a3);
    --*(_DWORD *)(v6 + 76);
    v7 = 1;
    v4 = 1;
    *(_WORD *)(v6 + 26) |= 0x80u;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 72) )
    {
LABEL_2:
      v7 = 0;
      *a2 = 0LL;
      goto LABEL_3;
    }
    *a2 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
    v7 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(v6 + 72) = 0;
  }
LABEL_3:
  result = (unsigned int)(v7 - 1);
  *a4 = v7;
  v9 = (_DWORD)result + *(_DWORD *)(v6 + 64) == 0;
  *(_DWORD *)(v6 + 64) += result;
  *a3 = v4;
  if ( v9 )
    *(_WORD *)(v6 + 24) = 0;
  return result;
}
