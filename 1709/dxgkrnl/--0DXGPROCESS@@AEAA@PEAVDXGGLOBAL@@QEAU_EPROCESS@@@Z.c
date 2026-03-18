/*
 * XREFs of ??0DXGPROCESS@@AEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C0089CE4
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C00F0940 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

DXGPROCESS *__fastcall DXGPROCESS::DXGPROCESS(DXGPROCESS *this, struct DXGGLOBAL *a2, struct _EPROCESS *const a3)
{
  HANDLE ProcessId; // rax

  *((_QWORD *)this + 2) = a2;
  ProcessId = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = a3;
  if ( a3 )
    ProcessId = PsGetProcessId(a3);
  *((_QWORD *)this + 7) = ProcessId;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 39;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 38) = 38;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 54) = 37;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 33) = (char *)this + 256;
  *((_QWORD *)this + 32) = (char *)this + 256;
  *((_BYTE *)this + 272) = 0;
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 35) = (char *)this + 280;
  *((_QWORD *)this + 37) = 0LL;
  *((_WORD *)this + 152) = 0;
  *((_BYTE *)this + 306) = 0;
  *((_WORD *)this + 154) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 112) = 0;
  *((_QWORD *)this + 57) = 0LL;
  *((_BYTE *)this + 464) = 0;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_WORD *)this + 270) = 0;
  *((_BYTE *)this + 542) = 0;
  *((_DWORD *)this + 62) = 2;
  *((_QWORD *)this + 46) = (char *)this + 360;
  *((_QWORD *)this + 45) = (char *)this + 360;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 50) = (char *)this + 392;
  *((_QWORD *)this + 49) = (char *)this + 392;
  *((_QWORD *)this + 48) = (char *)this + 376;
  *((_QWORD *)this + 47) = (char *)this + 376;
  *((_BYTE *)this + 307) &= 0xF1u;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 24);
  return this;
}
