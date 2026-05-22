/*
 * XREFs of ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180060C14
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180037730 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180037D24 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004DC58 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004EB20 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18005005C (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180060998 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCButtonHoldHelper::UpdateState(MPCButtonHoldHelper *this, char a2, __int64 a3)
{
  bool v4; // zf
  char v5; // dl
  char v6; // al

  *((_QWORD *)this + 4) = a3;
  *(_DWORD *)((char *)this + 10) = 0;
  v4 = a2 == 0;
  v5 = *((_BYTE *)this + 8);
  if ( !v4 )
  {
    if ( v5 )
    {
      if ( *((_BYTE *)this + 9) || (unsigned __int64)(a3 - *((_QWORD *)this + 2)) <= *((_QWORD *)this + 3) )
        goto LABEL_16;
      *((_BYTE *)this + 13) = 1;
      *((_BYTE *)this + 9) = 1;
    }
    else
    {
      *((_QWORD *)this + 2) = a3;
      *((_BYTE *)this + 10) = 1;
    }
    goto LABEL_10;
  }
  if ( v5 && !*((_BYTE *)this + 9) )
  {
    *((_BYTE *)this + 11) = 1;
LABEL_10:
    if ( a2 )
      goto LABEL_16;
  }
  v6 = *((_BYTE *)this + 12);
  if ( v5 )
    v6 = 1;
  *((_BYTE *)this + 12) = v6;
  if ( v5 )
  {
    *((_WORD *)this + 4) = 0;
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
LABEL_16:
  *((_BYTE *)this + 8) = a2;
}
