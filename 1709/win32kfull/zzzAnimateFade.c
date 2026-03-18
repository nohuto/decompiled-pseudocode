/*
 * XREFs of zzzAnimateFade @ 0x1C013DECC
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0083EC0 (xxxSystemTimerProc.c)
 *     zzzStartSonar @ 0x1C01C574C (zzzStartSonar.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C013DFA4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     StopFade @ 0x1C013E090 (StopFade.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01C4DB8 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 */

__int64 zzzAnimateFade()
{
  unsigned int v0; // r9d
  unsigned int v1; // ecx
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // edi
  __int64 result; // rax
  struct _BLENDFUNCTION v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF

  v0 = gfade[5];
  v1 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - HIDWORD(gfade[5]);
  if ( v1 > v0 )
    return StopFade();
  v2 = gfade[6] & 1;
  if ( v2 )
    v3 = 255 * v1;
  else
    v3 = 255 * (v0 - v1);
  *(_WORD *)&v6.BlendOp = 0;
  v6.AlphaFormat = 0;
  v4 = v3 / v0;
  v6.SourceConstantAlpha = v3 / v0;
  if ( (LODWORD(gfade[6]) & 0x80u) != 0 )
  {
    DrawSonar((HDC)gfade[1]);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
    zzzUpdateFade((struct tagPOINT *)&gfade[3], (struct tagSIZE *)&gfade[4], (HDC)gfade[1], gZero, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
    giSonarRadius -= 20;
  }
  else
  {
    zzzUpdateFade(0LL, 0LL, 0LL, 0LL, &v6);
  }
  if ( !v2 )
  {
    if ( (_BYTE)v4 )
      goto LABEL_8;
LABEL_16:
    LODWORD(gfade[6]) |= 2u;
    return StopFade();
  }
  if ( (_BYTE)v4 == 0xFF )
    goto LABEL_16;
LABEL_8:
  result = gfade[0];
  if ( (LODWORD(gfade[6]) & 0x80u) != 0 && giSonarRadius < 0 )
    goto LABEL_16;
  return result;
}
