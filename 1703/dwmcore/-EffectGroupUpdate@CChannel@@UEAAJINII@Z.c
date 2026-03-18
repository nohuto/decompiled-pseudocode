/*
 * XREFs of ?EffectGroupUpdate@CChannel@@UEAAJINII@Z @ 0x180080440
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::EffectGroupUpdate(CChannel *this, int a2, double a3, int a4, unsigned int a5)
{
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  double v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]
  unsigned int v13; // [rsp+34h] [rbp-24h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v10[0] = 200;
  v13 = a5;
  v11 = a3;
  v10[1] = a2;
  v12 = a4;
  v8 = CChannel::SendCommand(this, v10, 0x18u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return v8;
}
