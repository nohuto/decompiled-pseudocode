/*
 * XREFs of ??1CAsyncFlushResponse@@UEAA@XZ @ 0x18007EFD8
 * Callers:
 *     ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x18007EF60 (--_ECAsyncFlushResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180009F80 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 */

void __fastcall CAsyncFlushResponse::~CAsyncFlushResponse(CMILRefCountBase **this)
{
  *this = (CMILRefCountBase *)&CAsyncFlushResponse::`vftable';
  ReleaseInterface<CConnection>(this + 5);
  *this = (CMILRefCountBase *)&CMILRefCountBase::`vftable';
}
