/*
 * XREFs of ?sndRegQueryValue@@YAHPEAUHKEY__@@PEBG1KPEAG@Z @ 0x1800D3690
 * Callers:
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x1800D346C (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 *     ?sndRegQueryUserValue@@YAHPEBG0KPEAG@Z @ 0x1800D3618 (-sndRegQueryUserValue@@YAHPEBG0KPEAG@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sndRegQueryValue(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        DWORD a4,
        unsigned __int16 *a5)
{
  unsigned __int16 *v6; // [rsp+28h] [rbp-20h]
  DWORD v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = a4;
  v6 = a5;
  *a5 = 0;
  return RegGetValueW(a1, a2, 0LL, 2u, 0LL, v6, &v7) == 0;
}
