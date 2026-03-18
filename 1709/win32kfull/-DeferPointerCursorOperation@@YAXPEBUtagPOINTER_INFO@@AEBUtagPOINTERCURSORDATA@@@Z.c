/*
 * XREFs of ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01BBAC0
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01BB688 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C01350C4 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall DeferPointerCursorOperation(const struct tagPOINTER_INFO *a1, const struct tagPOINTERCURSORDATA *a2)
{
  __int64 v4; // rax
  _OWORD *v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  signed __int64 v10; // r8
  _DWORD v11[48]; // [rsp+20h] [rbp-268h] BYREF
  _BYTE v12[208]; // [rsp+E0h] [rbp-1A8h] BYREF
  _OWORD v13[12]; // [rsp+1B0h] [rbp-D8h] BYREF

  v4 = ValidateHwnd(*((_QWORD *)a1 + 3));
  if ( v4 )
  {
    v5 = INPUTDEST_FROM_PWND(v11, v4);
    v13[0] = *v5;
    v13[1] = v5[1];
    v13[2] = v5[2];
    v13[3] = v5[3];
    v13[4] = v5[4];
    v13[5] = v5[5];
    v13[6] = v5[6];
    v6 = v5[7];
    v5 += 8;
    v13[7] = v6;
    v13[8] = *v5;
    v13[9] = v5[1];
    v13[10] = v5[2];
    v13[11] = v5[3];
    CInputDest::CInputDest((CInputDest *)v12, (const struct tagINPUTDEST *)v13);
    UpdateGlobalCursorOwner(v12, (char *)a1 + 32);
    CInputDest::~CInputDest((CInputDest *)v12);
  }
  v7 = 0LL;
  while ( 1 )
  {
    v8 = _InterlockedExchange64((volatile __int64 *)&(&Feedback::gppcdFree)[v7], 0LL);
    if ( v8 )
      break;
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 3 )
      return;
  }
  v9 = *((_DWORD *)a2 + 2);
  *(_QWORD *)v8 = *(_QWORD *)a2;
  *(_DWORD *)(v8 + 8) = v9;
  v10 = _InterlockedExchange64((volatile __int64 *)&Feedback::gppcdLatest, v8);
  if ( v10 )
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&(&Feedback::gppcdFree)[(unsigned int)((v10 - (__int64)&Feedback::gpcd) / 0xCuLL)],
      v10,
      0LL);
  KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
}
