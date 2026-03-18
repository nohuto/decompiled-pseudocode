/*
 * XREFs of ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0068960
 * Callers:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0068884 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C00BDA80 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C00BDC70 (WinSqmAddToStreamEx.c)
 *     WinSqmEndSession @ 0x1C00BDFB8 (WinSqmEndSession.c)
 *     WinSqmSetString @ 0x1C00BE284 (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsExtendedWinSqmHandle(struct _GUID *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (unsigned __int64)&a1[-1].Data4[7] <= 0xFFFFFFFFFFFFFFFDuLL
    && RtlCompareMemory(a1, &xmmword_1C019F140, 0x10uLL) == 16 )
  {
    return a1[1].Data1 == 40;
  }
  return v1;
}
