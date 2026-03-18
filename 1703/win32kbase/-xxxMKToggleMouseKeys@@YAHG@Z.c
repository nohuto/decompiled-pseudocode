/*
 * XREFs of ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C0119A50
 * Callers:
 *     <none>
 * Callees:
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C0118FD0 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01192F0 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013BE54 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C013C174 (ApiSetEditionPostRitSound.c)
 */

_BOOL8 __fastcall xxxMKToggleMouseKeys()
{
  BOOL v0; // edi
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int16 v4; // bx

  v0 = 1;
  v1 = *((_QWORD *)grpdeskRitInput + 5);
  v2 = *(_QWORD *)(v1 + 24);
  if ( (gdwPUDFlags & 0x2000) == 0 )
  {
    if ( ((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) == 17 )
    {
      if ( (dword_1C018AD44 & 4) != 0 )
      {
        v0 = gbMKMouseMode != 0;
        TurnOffMouseKeys();
      }
    }
    else
    {
      v3 = *(_QWORD *)(v1 + 24);
      if ( (((unsigned int)dword_1C018AD44 >> 7) & 1) == (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)gNumLockVk >> 2))) != 0) )
      {
        gbMKMouseMode = 1;
        ApiSetEditionPostRitSound(v3, 3LL, v2, 0LL);
      }
      else
      {
        gbMKMouseMode = 0;
        ApiSetEditionPostRitSound(v3, 2LL, v2, 0LL);
        v4 = gwMKCurrentButton;
        gwMKCurrentButton = 3;
        xxxMKButtonSetState(1);
        gwMKCurrentButton = v4;
      }
      ApiSetEditionPostAccessibility(3LL);
    }
  }
  return v0;
}
