/*
 * XREFs of ?ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z @ 0x1C0132840
 * Callers:
 *     ?ProcessInput@CMouseAsTouchAdapter@@QEAAXPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K@Z @ 0x1C01327C4 (-ProcessInput@CMouseAsTouchAdapter@@QEAAXPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K@Z.c)
 * Callees:
 *     ApiSetEditionCommitMousePosAndMove @ 0x1C008A468 (ApiSetEditionCommitMousePosAndMove.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?BuildPointerFlags@CMouseAsTouchAdapter@@AEAA_NGPEAIPEA_N@Z @ 0x1C0132528 (-BuildPointerFlags@CMouseAsTouchAdapter@@AEAA_NGPEAIPEA_N@Z.c)
 *     ?ConvertPointCoordinates@CMouseAsTouchAdapter@@AEAAHUtagPOINT@@UtagRECT@@1PEAU2@@Z @ 0x1C0132594 (-ConvertPointCoordinates@CMouseAsTouchAdapter@@AEAAHUtagPOINT@@UtagRECT@@1PEAU2@@Z.c)
 *     ?SendToTouchProcessor@CMouseAsTouchAdapter@@AEAAXUtagPOINT@@0IJ_KG@Z @ 0x1C0132A14 (-SendToTouchProcessor@CMouseAsTouchAdapter@@AEAAXUtagPOINT@@0IJ_KG@Z.c)
 */

void __fastcall CMouseAsTouchAdapter::ProcessMouseInput(
        CMouseAsTouchAdapter *this,
        struct DEVICEINFO *a2,
        struct _MOUSE_INPUT_DATA *a3)
{
  struct tagRECT v6; // xmm1
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  CMouseAsTouchAdapter *v9; // rcx
  struct tagRECT v10; // xmm1
  CMouseAsTouchAdapter *v11; // rcx
  bool v12; // [rsp+50h] [rbp-49h] BYREF
  struct tagPOINT v13; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v14; // [rsp+60h] [rbp-39h] BYREF
  struct tagPOINT v15; // [rsp+68h] [rbp-31h] BYREF
  struct tagPOINT v16[2]; // [rsp+70h] [rbp-29h] BYREF
  int v17; // [rsp+80h] [rbp-19h] BYREF
  __int64 v18; // [rsp+88h] [rbp-11h]
  struct tagRECT v19; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v20; // [rsp+A0h] [rbp+7h] BYREF
  struct tagRECT v21; // [rsp+B0h] [rbp+17h] BYREF

  v6 = *(struct tagRECT *)((char *)this + 52);
  v19 = *(struct tagRECT *)((char *)this + 20);
  v20 = v6;
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v16[0] = *(struct tagPOINT *)&a3->LastX;
  v8 = gliQpcFreq.QuadPart * (int)v7 / 0x3E8uLL;
  if ( (unsigned int)CMouseAsTouchAdapter::ConvertPointCoordinates(
                       (CMouseAsTouchAdapter *)0xFFFFF78000000004LL,
                       v16[0],
                       &v20,
                       &v19,
                       &v13) )
  {
    v10 = *(struct tagRECT *)((char *)this + 20);
    *(_OWORD *)&v16[0].x = *(_OWORD *)((char *)this + 36);
    v21 = v10;
    if ( (unsigned int)CMouseAsTouchAdapter::ConvertPointCoordinates(v9, v13, &v21, (struct tagRECT *)v16, &v15) )
    {
      v17 = 2;
      v18 = a2 ? *(_QWORD *)a2 : 0LL;
      ApiSetEditionCommitMousePosAndMove(
        (__int64)&v13,
        a3->ExtraInformation,
        (__int64)a3,
        (__int64)&v17,
        v7,
        v8,
        0,
        1,
        1);
      if ( CMouseAsTouchAdapter::BuildPointerFlags(this, a3->ButtonFlags, &v14, &v12) )
      {
        if ( v12 )
          CMouseAsTouchAdapter::SendToTouchProcessor(v11, v13, v15, 0x40000u, v7, v8, (*((_WORD *)this + 8) - 1) & 1);
        CMouseAsTouchAdapter::SendToTouchProcessor(this, v13, v15, v14, v7, v8, *((_WORD *)this + 8));
      }
    }
  }
}
