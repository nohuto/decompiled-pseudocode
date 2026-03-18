/*
 * XREFs of GreSetTextCharacterExtra @ 0x1C0294E74
 * Callers:
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C009853C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxDrawState @ 0x1C021AAB8 (xxxDrawState.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetTextCharacterExtra(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  DC *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+2Ch] [rbp-Ch]

  v7 = 0;
  v8 = 0;
  v3 = 0x80000000;
  XDCOBJ::vLock(&v6, a1);
  if ( v6 )
  {
    v4 = *((_QWORD *)v6 + 10);
    v3 = *(_DWORD *)(v4 + 160);
    *(_DWORD *)(v4 + 160) = a2;
    XDCOBJ::vUnlockFast((XDCOBJ *)&v6);
  }
  return v3;
}
