/*
 * XREFs of WinSqmIncrementDWORD @ 0x1C0078390
 * Callers:
 *     <none>
 * Callees:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00783B4 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 */

void __fastcall WinSqmIncrementDWORD(struct _GUID *a1, unsigned int a2, unsigned int a3)
{
  _WinSqmDWORDEvent(&SQM_INCREMENT_DWORD, a1, a2, a3);
}
