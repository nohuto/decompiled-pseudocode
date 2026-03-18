/*
 * XREFs of ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020D430
 * Callers:
 *     EditionHandleMitSignal @ 0x1C00F9D40 (EditionHandleMitSignal.c)
 *     zzzPostInertiaMessage @ 0x1C020DBB4 (zzzPostInertiaMessage.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WakeDIT @ 0x1C00FDA3C (WakeDIT.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     CalcManipulationInputInteropMessageSize @ 0x1C01CDDE0 (CalcManipulationInputInteropMessageSize.c)
 *     xxxClientCallManipulationThread @ 0x1C0201440 (xxxClientCallManipulationThread.c)
 */

__int64 __fastcall xxxRouteSyntheticTouchpadToMT(
        __int64 a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        unsigned __int64 a4)
{
  unsigned int v6; // r14d
  unsigned int v8; // esi
  __int64 v9; // rax
  struct tagPOINT *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  _DWORD v15[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v16[14]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[16]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v18[56]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v19[152]; // [rsp+200h] [rbp+100h] BYREF

  v6 = a1;
  v8 = 0;
  memset(&v19[6], 0, 193);
  memset(&v19[102], 0, 193);
  gInertiaMTInfo &= ~1u;
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PsGetCurrentProcess)(a1, a2);
  if ( (unsigned int)IsProcessDwm(v9) )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      memset(v17, 0, 0x78uLL);
      memset(v19, 0, sizeof(v19));
      v17[12] = v19;
      LODWORD(v17[6]) = 1;
      v19[101] = a4;
      v19[0] = v19[0] & 0xFFFFF3FF | 0x400;
      v19[1] |= 0x180u;
      v10 = (struct tagPOINT *)&v19[62];
    }
    else
    {
      memset(v16, 0, sizeof(v16));
      memset(v18, 0, 0xD8uLL);
      v16[11] = v18;
      LODWORD(v16[5]) = 1;
      v18[53] = a4;
      v18[0] = v18[0] & 0xFFFFF3FF | 0x400;
      v18[1] |= 0x180u;
      v10 = (struct tagPOINT *)&v18[14];
    }
    v10->x = 5;
    v10[1].y = 0x800000;
    v10[6] = a2;
    v10[4] = a2;
    v10[7] = a3;
    v10[5] = a3;
    v10[9].x = v6;
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v15);
    if ( (gdwMitConfig & 4) != 0 )
    {
      CTouchProcessor::ForwardPointerInputFrameToManipulationThread((const struct CPointerInputFrame *)v17);
    }
    else
    {
      v13 = CalcManipulationInputInteropMessageSize(1);
      v8 = (unsigned int)xxxClientCallManipulationThread(glpfnManipulationThreadCallback, (__int64)v16, v13);
    }
    if ( !v15[0] )
      UserSessionSwitchLeaveCrit(v12, v11);
  }
  else
  {
    gInertiaMTInfo |= 1u;
    dword_1C0330AF4 = v6;
    stru_1C0330AF8 = a2;
    stru_1C0330B00 = a3;
    qword_1C0330B08 = a4;
    WakeDIT(0x100u);
  }
  CInputDest::~CInputDest((CInputDest *)&v19[102]);
  CInputDest::~CInputDest((CInputDest *)&v19[6]);
  return v8;
}
