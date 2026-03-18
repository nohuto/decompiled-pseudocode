/*
 * XREFs of zzzAnimateFade @ 0x1C01C27AC
 * Callers:
 *     xxxSystemTimerProc @ 0x1C00174B0 (xxxSystemTimerProc.c)
 *     zzzStartSonar @ 0x1C01C2A28 (zzzStartSonar.c)
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01C1578 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01C18F0 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     StopFade @ 0x1C01C2190 (StopFade.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 zzzAnimateFade()
{
  unsigned int v0; // r9d
  unsigned int v1; // ecx
  unsigned int v2; // ebx
  unsigned int v3; // edi
  int v4; // ecx
  __int64 result; // rax
  struct _BLENDFUNCTION v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF

  v0 = gfade[10];
  v1 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gfade[11];
  if ( v1 > v0 )
    return StopFade();
  v2 = gfade[12] & 1;
  if ( v2 )
    v3 = 255 * v1 / v0;
  else
    LOBYTE(v3) = 255 * (v0 - v1) / v0;
  *(_WORD *)&v6.BlendOp = 0;
  v6.AlphaFormat = 0;
  v6.SourceConstantAlpha = v3;
  if ( (gfade[12] & 0x80u) == 0 )
  {
    zzzUpdateFade(0LL, 0LL, 0LL, 0LL, &v6);
    v4 = giSonarRadius;
  }
  else
  {
    DrawSonar(*(HDC *)&gfade[2]);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
    zzzUpdateFade(
      (struct tagPOINT *)&gfade[6],
      (struct tagSIZE *)&gfade[8],
      *(HDC *)&gfade[2],
      (struct tagPOINT *)gZero,
      0LL);
    if ( !v7 )
    {
      --gdwInAtomicOperation;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v7);
    }
    v4 = giSonarRadius - 20;
    giSonarRadius -= 20;
  }
  if ( v2 )
  {
    if ( (_BYTE)v3 != 0xFF )
      goto LABEL_14;
LABEL_16:
    gfade[12] |= 2u;
    return StopFade();
  }
  if ( !(_BYTE)v3 )
    goto LABEL_16;
LABEL_14:
  result = gfade[12];
  if ( (result & 0x80u) != 0LL && v4 < 0 )
    goto LABEL_16;
  return result;
}
