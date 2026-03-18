/*
 * XREFs of ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C0122980
 * Callers:
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C0128B6C (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 * Callees:
 *     ApiSetGetPenHoldTime @ 0x1C013C24C (ApiSetGetPenHoldTime.c)
 *     ApiSetGetTouchHoldTime @ 0x1C013C2DC (ApiSetGetTouchHoldTime.c)
 */

__int64 __fastcall CTouchProcessor::PassedHoldTime(CTouchProcessor *this, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v10; // rsi
  bool v11; // cf
  bool v12; // zf

  v4 = 0;
  if ( !gliQpcFreq.QuadPart )
    return 0LL;
  if ( !*((_QWORD *)this + 42) )
    *((_QWORD *)this + 42) = gliQpcFreq.QuadPart * (unsigned int)ApiSetGetPenHoldTime() / 1000;
  if ( !*((_QWORD *)this + 43) )
    *((_QWORD *)this + 43) = gliQpcFreq.QuadPart * (unsigned int)ApiSetGetTouchHoldTime() / 1000;
  v10 = a4 - a3;
  if ( a2 == 3 )
  {
    v11 = v10 < *((_QWORD *)this + 42);
    v12 = v10 == *((_QWORD *)this + 42);
  }
  else
  {
    v11 = v10 < *((_QWORD *)this + 43);
    v12 = v10 == *((_QWORD *)this + 43);
  }
  LOBYTE(v4) = !v11 && !v12;
  return v4;
}
