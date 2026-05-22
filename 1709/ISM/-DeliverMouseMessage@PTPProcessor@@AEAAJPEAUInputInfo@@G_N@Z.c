/*
 * XREFs of ?DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x18006F1C8
 * Callers:
 *     ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006E8A0 (-OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcesssDragStart@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18006EC88 (-ProcesssDragStart@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessDragContinue@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18006EDB4 (-ProcessDragContinue@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessTap@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18006EF74 (-ProcessTap@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessDelayedTap@PTPProcessor@@AEAAJXZ @ 0x18006F0B8 (-ProcessDelayedTap@PTPProcessor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PTPProcessor::DeliverMouseMessage(PTPProcessor *this, struct InputInfo *a2, __int16 a3, char a4)
{
  __int64 v5; // rdx
  int v7; // ebx
  int v8; // eax

  *(_DWORD *)a2 = 2;
  v5 = 0LL;
  *((_WORD *)a2 + 349) = 0;
  *((_WORD *)a2 + 350) = a3;
  if ( !a4 && !a3 )
  {
    v7 = *((_DWORD *)a2 + 18) - *((_DWORD *)this + 156);
    *((_DWORD *)a2 + 177) = MulDiv(*((_DWORD *)a2 + 17) - *((_DWORD *)this + 155), 450, 2540);
    *((_DWORD *)a2 + 178) = MulDiv(v7, 450, 2540);
    *((_DWORD *)this + 155) = *((_DWORD *)a2 + 17);
    v8 = *((_DWORD *)a2 + 18);
LABEL_9:
    *((_DWORD *)this + 156) = v8;
    return MouseProcessor::OnInputReport((PTPProcessor *)((char *)this + 8), a2);
  }
  *(_QWORD *)((char *)a2 + 708) = 0LL;
  if ( *((_DWORD *)a2 + 12) )
  {
    while ( (*((_BYTE *)a2 + 48 * v5 + 60) & 1) == 0 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)a2 + 12) )
        return MouseProcessor::OnInputReport((PTPProcessor *)((char *)this + 8), a2);
    }
    *((_DWORD *)this + 155) = *((_DWORD *)a2 + 12 * v5 + 17);
    v8 = *((_DWORD *)a2 + 12 * v5 + 18);
    goto LABEL_9;
  }
  return MouseProcessor::OnInputReport((PTPProcessor *)((char *)this + 8), a2);
}
