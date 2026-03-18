/*
 * XREFs of ?FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z @ 0x1C0134B48
 * Callers:
 *     ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C013553C (-ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z @ 0x1C0136E00 (-SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1C0059AB0 (EngMulDiv.c)
 */

void __fastcall CPTPEngine::FixupGestureContact(CPTPEngine *this, struct PTPEnginePointerNode *a2, int a3)
{
  INT v6; // ebx
  INT v7; // edi
  INT v8; // eax
  __int64 v9; // rbx
  int v10; // eax

  v6 = HIDWORD(*((_QWORD *)a2 + 5)) - *((_DWORD *)this + 754);
  v7 = EngMulDiv(
         *((_QWORD *)a2 + 5) - *((_DWORD *)this + 753),
         *((_DWORD *)this + 18) - *((_DWORD *)this + 16),
         *((_DWORD *)this + 22));
  v8 = EngMulDiv(v6, *((_DWORD *)this + 19) - *((_DWORD *)this + 17), *((_DWORD *)this + 23));
  *((_DWORD *)a2 + 8) = v7 + *((_DWORD *)this + 751);
  *((_DWORD *)a2 + 9) = *((_DWORD *)this + 752) + v8;
  v9 = *((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 10) = EngMulDiv(
                           v9 - *((_DWORD *)this + 16),
                           *((_DWORD *)this + 22),
                           *((_DWORD *)this + 18) - *((_DWORD *)this + 16));
  *((_DWORD *)a2 + 11) = EngMulDiv(
                           HIDWORD(v9) - *((_DWORD *)this + 17),
                           *((_DWORD *)this + 23),
                           *((_DWORD *)this + 19) - *((_DWORD *)this + 17));
  *((_QWORD *)a2 + 6) = *((_QWORD *)a2 + 4);
  *((_QWORD *)a2 + 7) = *((_QWORD *)a2 + 5);
  if ( a3 )
    *((_DWORD *)a2 + 3) |= 0x2000u;
  else
    *((_DWORD *)a2 + 3) &= ~0x2000u;
  v10 = *((_DWORD *)a2 + 3);
  if ( (v10 & 0x40000) == 0 )
    *((_DWORD *)a2 + 3) = v10 | 0x14;
  *((_DWORD *)a2 + 3) &= ~0x2000000u;
}
