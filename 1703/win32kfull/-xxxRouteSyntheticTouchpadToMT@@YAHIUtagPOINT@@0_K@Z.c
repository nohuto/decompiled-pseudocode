/*
 * XREFs of ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020A28C
 * Callers:
 *     xxxRouteTouchpadInertiaToMT @ 0x1C020AA0C (xxxRouteTouchpadInertiaToMT.c)
 *     zzzPostInertiaMessage @ 0x1C020AA48 (zzzPostInertiaMessage.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B528 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WakeDIT @ 0x1C0104328 (WakeDIT.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     CalcManipulationInputInfoSize @ 0x1C01C9A8C (CalcManipulationInputInfoSize.c)
 *     xxxClientCallManipulationThread @ 0x1C01FF9F0 (xxxClientCallManipulationThread.c)
 */

__int64 __fastcall xxxRouteSyntheticTouchpadToMT(
        __int64 a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        unsigned __int64 a4)
{
  unsigned int v6; // r15d
  unsigned int v8; // esi
  __int64 CurrentProcess; // rax
  struct tagPOINT *v10; // rax
  unsigned int v11; // r8d
  _QWORD *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD v18[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v19[14]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v20[16]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v21[56]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v22[152]; // [rsp+200h] [rbp+100h] BYREF

  v6 = a1;
  v8 = 0;
  memset(&v22[6], 0, 193);
  memset(&v22[102], 0, 193);
  gInertiaMTInfo &= ~1u;
  CurrentProcess = PsGetCurrentProcess(a1);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      memset(v20, 0, 0x78uLL);
      memset(v22, 0, sizeof(v22));
      v20[12] = v22;
      LODWORD(v20[6]) = 1;
      v22[101] = a4;
      v22[0] = v22[0] & 0xFFFFF3FF | 0x400;
      v22[1] |= 0x180u;
      v10 = (struct tagPOINT *)&v22[62];
    }
    else
    {
      memset(v19, 0, sizeof(v19));
      memset(v21, 0, 0xD8uLL);
      v19[11] = v21;
      LODWORD(v19[5]) = 1;
      v21[53] = a4;
      v21[0] = v21[0] & 0xFFFFF3FF | 0x400;
      v21[1] |= 0x180u;
      v10 = (struct tagPOINT *)&v21[14];
    }
    v10->x = 5;
    v10[1].y = 0x800000;
    v10[6] = a2;
    v10[4] = a2;
    v10[7] = a3;
    v10[5] = a3;
    v10[9].x = v6;
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v18);
    v11 = CalcManipulationInputInfoSize(1);
    v12 = v19;
    if ( (gdwMitConfig & 4) != 0 )
      v12 = v20;
    v8 = (unsigned int)xxxClientCallManipulationThread(glpfnManipulationThreadCallback, (__int64)v12, v11);
    if ( !v18[0] )
      UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  }
  else
  {
    gInertiaMTInfo |= 1u;
    dword_1C0335CCC = v6;
    stru_1C0335CD0 = a2;
    stru_1C0335CD8 = a3;
    qword_1C0335CE0 = a4;
    WakeDIT(0x100u);
  }
  CInputDest::~CInputDest((CInputDest *)&v22[102]);
  CInputDest::~CInputDest((CInputDest *)&v22[6]);
  return v8;
}
