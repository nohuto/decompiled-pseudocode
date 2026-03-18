/*
 * XREFs of ?VisualTopLevelNode@CChannel@@UEAAJIPEAUHWND__@@H@Z @ 0x180081530
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualTopLevelNode(CChannel *this, int a2, HWND a3, int a4)
{
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  HWND v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v10[0] = 61;
  v10[1] = a2;
  v11 = a3;
  v12 = a4;
  v8 = CChannel::SendCommand(this, v10, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v8;
}
