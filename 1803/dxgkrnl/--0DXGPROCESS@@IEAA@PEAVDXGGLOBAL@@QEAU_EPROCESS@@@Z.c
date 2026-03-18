/*
 * XREFs of ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C00F7B64
 * Callers:
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x1C0034284 (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z @ 0x1C00D3444 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z.c)
 * Callees:
 *     <none>
 */

DXGPROCESS *__fastcall DXGPROCESS::DXGPROCESS(DXGPROCESS *this, struct DXGGLOBAL *a2, struct _EPROCESS *const a3)
{
  HANDLE ProcessId; // rax

  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &DXGPROCESS::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = a3;
  if ( a3 )
    ProcessId = PsGetProcessId(a3);
  else
    ProcessId = 0LL;
  *((_QWORD *)this + 8) = ProcessId;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 34) = 39;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 40) = 38;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 56) = 37;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 34) = (char *)this + 272;
  *((_WORD *)this + 144) = 0;
  *((_QWORD *)this + 38) = (char *)this + 296;
  *((_QWORD *)this + 37) = (char *)this + 296;
  *((_BYTE *)this + 323) &= ~0x20u;
  *((_QWORD *)this + 39) = 0LL;
  *((_WORD *)this + 160) = 0;
  *((_BYTE *)this + 322) = 0;
  *((_WORD *)this + 162) = 0;
  *((_DWORD *)this + 82) = 0;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 104) = 0;
  *((_WORD *)this + 210) = 0;
  *((_QWORD *)this + 53) = 0LL;
  *((_WORD *)this + 216) = 0;
  *((_BYTE *)this + 434) = 0;
  *((_QWORD *)this + 55) = 0LL;
  *((_BYTE *)this + 448) = 0;
  *((_DWORD *)this + 66) = 2;
  *((_QWORD *)this + 48) = (char *)this + 376;
  *((_QWORD *)this + 47) = (char *)this + 376;
  *((_BYTE *)this + 323) &= 0xA1u;
  *((_DWORD *)this + 98) = 0;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 25);
  return this;
}
