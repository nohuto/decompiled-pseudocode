/*
 * XREFs of SetWFNoDwmNotify @ 0x1C01B8908
 * Callers:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C009DE30 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 */

__int16 __fastcall SetWFNoDwmNotify(_DWORD *a1, unsigned __int16 a2)
{
  return SetOrClrWF(1, a1, a2, 0);
}
