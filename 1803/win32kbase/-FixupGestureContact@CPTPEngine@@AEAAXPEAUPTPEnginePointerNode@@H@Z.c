/*
 * XREFs of ?FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z @ 0x1C0138D94
 * Callers:
 *     ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C01396EC (-ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z @ 0x1C013AFB0 (-SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::FixupGestureContact(CPTPEngine *this, struct PTPEnginePointerNode *a2, int a3)
{
  int v3; // eax
  unsigned int v4; // eax

  *((_DWORD *)a2 + 8) = *((_DWORD *)this + 752);
  *((_DWORD *)a2 + 9) = *((_DWORD *)this + 753);
  *((_QWORD *)a2 + 6) = *((_QWORD *)a2 + 4);
  *((_QWORD *)a2 + 7) = *((_QWORD *)a2 + 5);
  v3 = *((_DWORD *)a2 + 3);
  if ( a3 )
    v4 = v3 | 0x2000;
  else
    v4 = v3 & 0xFFFFDFFF;
  *((_DWORD *)a2 + 3) = v4;
  if ( (v4 & 0x40000) == 0 )
  {
    v4 |= 0x14u;
    *((_DWORD *)a2 + 3) = v4;
  }
  *((_DWORD *)a2 + 3) = v4 & 0xFDFFFFFF;
}
