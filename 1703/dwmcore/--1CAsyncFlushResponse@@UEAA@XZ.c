/*
 * XREFs of ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800B0138
 * Callers:
 *     ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x1800B0100 (--_ECAsyncFlushResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x1800B01A4 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 */

void __fastcall CAsyncFlushResponse::~CAsyncFlushResponse(CAsyncFlushResponse *this)
{
  *(_QWORD *)this = &CAsyncFlushResponse::`vftable';
  ReleaseInterface<CConnection>((char *)this + 40);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
