/*
 * XREFs of ?ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z @ 0x1C0131F34
 * Callers:
 *     ?ProcessInput@CMouseAsTouchAdapter@@QEAAXPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K@Z @ 0x1C0131EB8 (-ProcessInput@CMouseAsTouchAdapter@@QEAAXPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K@Z.c)
 * Callees:
 *     ApiSetEditionCommitMousePosAndMove @ 0x1C0018CF4 (ApiSetEditionCommitMousePosAndMove.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?BuildPointerFlags@CMouseAsTouchAdapter@@AEAA_NGPEAIPEA_N@Z @ 0x1C0131BCC (-BuildPointerFlags@CMouseAsTouchAdapter@@AEAA_NGPEAIPEA_N@Z.c)
 *     ?ConvertPointCoordinates@CMouseAsTouchAdapter@@AEAAHUtagPOINT@@UtagRECT@@1PEAU2@@Z @ 0x1C0131C74 (-ConvertPointCoordinates@CMouseAsTouchAdapter@@AEAAHUtagPOINT@@UtagRECT@@1PEAU2@@Z.c)
 *     ?GetDeviceRects@CMouseAsTouchAdapter@@AEAAHPEAXPEAUtagRECT@@1@Z @ 0x1C0131DF4 (-GetDeviceRects@CMouseAsTouchAdapter@@AEAAHPEAXPEAUtagRECT@@1@Z.c)
 *     ?SendToTouchProcessor@CMouseAsTouchAdapter@@AEAAXUtagPOINT@@0IJ_KG@Z @ 0x1C0132134 (-SendToTouchProcessor@CMouseAsTouchAdapter@@AEAAXUtagPOINT@@0IJ_KG@Z.c)
 */

void __fastcall CMouseAsTouchAdapter::ProcessMouseInput(
        CMouseAsTouchAdapter *this,
        struct DEVICEINFO *a2,
        struct _MOUSE_INPUT_DATA *a3)
{
  __int64 v6; // r14
  CMouseAsTouchAdapter *v7; // rcx
  unsigned __int64 v8; // rdi
  struct tagRECT v9; // xmm0
  struct tagRECT v10; // xmm1
  CMouseAsTouchAdapter *v11; // rcx
  struct tagRECT v12; // xmm1
  CMouseAsTouchAdapter *v13; // rcx
  bool v14; // [rsp+50h] [rbp-49h] BYREF
  struct tagPOINT v15; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v16; // [rsp+60h] [rbp-39h] BYREF
  struct tagPOINT v17; // [rsp+68h] [rbp-31h] BYREF
  struct tagPOINT v18[2]; // [rsp+70h] [rbp-29h] BYREF
  int v19; // [rsp+80h] [rbp-19h] BYREF
  __int64 v20; // [rsp+88h] [rbp-11h]
  struct tagRECT v21; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v22; // [rsp+A0h] [rbp+7h] BYREF
  struct tagRECT v23; // [rsp+B0h] [rbp+17h] BYREF

  v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v7 = *(CMouseAsTouchAdapter **)gpDispInfo;
  v8 = v6 * gliQpcFreq.QuadPart / 0x3E8uLL;
  if ( **(_DWORD **)gpDispInfo != *((_DWORD *)this + 20) )
    CMouseAsTouchAdapter::GetDeviceRects(
      this,
      *((char **)this + 1),
      (struct tagRECT *)((char *)this + 36),
      (struct tagRECT *)((char *)this + 20));
  v9 = *(struct tagRECT *)((char *)this + 20);
  v18[0].x = a3->LastX;
  v10 = *(struct tagRECT *)((char *)this + 52);
  v18[0].y = a3->LastY;
  v21 = v9;
  v22 = v10;
  if ( (unsigned int)CMouseAsTouchAdapter::ConvertPointCoordinates(v7, v18[0], &v22, &v21, &v15) )
  {
    v12 = *(struct tagRECT *)((char *)this + 20);
    *(_OWORD *)&v18[0].x = *(_OWORD *)((char *)this + 36);
    v23 = v12;
    if ( (unsigned int)CMouseAsTouchAdapter::ConvertPointCoordinates(v11, v15, &v23, (struct tagRECT *)v18, &v17) )
    {
      v19 = 2;
      v20 = a2 ? *(_QWORD *)a2 : 0LL;
      ApiSetEditionCommitMousePosAndMove(
        (__int64)&v15,
        a3->ExtraInformation,
        (__int64)a3,
        (__int64)&v19,
        v6,
        v8,
        0,
        1,
        1,
        0);
      if ( CMouseAsTouchAdapter::BuildPointerFlags(this, a3->ButtonFlags, &v16, &v14) )
      {
        if ( v14 )
          CMouseAsTouchAdapter::SendToTouchProcessor(v13, v15, v17, 0x40000u, v6, v8, (*((_WORD *)this + 8) - 1) & 1);
        CMouseAsTouchAdapter::SendToTouchProcessor(this, v15, v17, v16, v6, v8, *((_WORD *)this + 8));
      }
    }
  }
}
