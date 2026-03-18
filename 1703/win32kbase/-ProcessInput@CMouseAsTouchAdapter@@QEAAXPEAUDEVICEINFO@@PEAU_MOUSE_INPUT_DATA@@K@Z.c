/*
 * XREFs of ?ProcessInput@CMouseAsTouchAdapter@@QEAAXPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K@Z @ 0x1C01327C4
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0099E80 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z @ 0x1C0132840 (-ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z.c)
 */

void __fastcall CMouseAsTouchAdapter::ProcessInput(
        CMouseAsTouchAdapter *this,
        struct DEVICEINFO *a2,
        struct _MOUSE_INPUT_DATA *a3,
        unsigned int a4)
{
  struct _MOUSE_INPUT_DATA *v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // xmm1_8
  _MOUSE_INPUT_DATA v9; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 1) && a3 )
  {
    v6 = (struct _MOUSE_INPUT_DATA *)((char *)a3 + a4);
    do
    {
      v7 = (unsigned __int64)&a3[1];
      v8 = *(_QWORD *)&a3->LastY;
      *(_OWORD *)&v9.UnitId = *(_OWORD *)&a3->UnitId;
      *(_QWORD *)&v9.LastY = v8;
      CMouseAsTouchAdapter::ProcessMouseInput(this, a2, &v9);
      a3 = (struct _MOUSE_INPUT_DATA *)(v7 & -(__int64)(v7 < (unsigned __int64)v6));
    }
    while ( a3 );
  }
}
