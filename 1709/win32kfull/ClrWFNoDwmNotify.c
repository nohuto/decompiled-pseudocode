/*
 * XREFs of ClrWFNoDwmNotify @ 0x1C01B8880
 * Callers:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C009DE30 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 */

__int16 __fastcall ClrWFNoDwmNotify(_DWORD *a1, unsigned __int16 a2)
{
  return SetOrClrWF(0, a1, a2, 0);
}
