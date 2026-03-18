/*
 * XREFs of ??1CEventResponse@@UEAA@XZ @ 0x180149C10
 * Callers:
 *     ??_ECEventResponse@@UEAAPEAXI@Z @ 0x180149C90 (--_ECEventResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CEventResponse::~CEventResponse(HANDLE *this)
{
  *this = &CEventResponse::`vftable';
  CloseHandle(this[5]);
  *this = &CMILRefCountBase::`vftable';
}
