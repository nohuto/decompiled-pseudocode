/*
 * XREFs of ?WindowNodeNotifyDxImmediateUpdate@CChannel@@UEAAJIIPEAXU_LUID@@_KU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@AEBUtagRECT@@I@Z @ 0x180123A70
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CChannel::WindowNodeNotifyDxImmediateUpdate(
        CChannel *this,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int128 *a8,
        int a9)
{
  __int128 v13; // xmm0
  unsigned int v14; // ebx
  int v16; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v17[2]; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v18; // [rsp+2Ch] [rbp-34h]
  __int64 v19; // [rsp+34h] [rbp-2Ch]
  __int64 v20; // [rsp+3Ch] [rbp-24h]
  int v21; // [rsp+44h] [rbp-1Ch]
  __int128 v22; // [rsp+48h] [rbp-18h]
  int v23; // [rsp+58h] [rbp-8h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+80h] [rbp+20h] BYREF

  v24 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v16 = 353;
  memset_0(v17, 0, 0x20uLL);
  v19 = a5;
  v20 = a6;
  v21 = a7;
  v17[0] = a2;
  v17[1] = a3;
  v18 = a4;
  v13 = *a8;
  v23 = a9;
  v22 = v13;
  v14 = CChannel::SendCommand(this, &v16, 0x3Cu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v24);
  return v14;
}
