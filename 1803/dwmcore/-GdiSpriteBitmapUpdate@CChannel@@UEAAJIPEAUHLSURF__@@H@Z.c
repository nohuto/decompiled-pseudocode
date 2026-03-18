/*
 * XREFs of ?GdiSpriteBitmapUpdate@CChannel@@UEAAJIPEAUHLSURF__@@H@Z @ 0x1800852E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::GdiSpriteBitmapUpdate(CChannel *this, int a2, HLSURF a3, int a4)
{
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  HLSURF v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  char *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v10[0] = 164;
  v10[1] = a2;
  v11 = a3;
  v12 = a4;
  v8 = CChannel::SendCommand(this, v10, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v8;
}
