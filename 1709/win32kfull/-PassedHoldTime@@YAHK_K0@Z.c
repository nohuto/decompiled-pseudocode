/*
 * XREFs of ?PassedHoldTime@@YAHK_K0@Z @ 0x1C01F60CC
 * Callers:
 *     ?UpdateStateIndicator@@YAXPEAUtagINPUTPOINTERNODE@@I_KUtagPOINT@@@Z @ 0x1C01F6894 (-UpdateStateIndicator@@YAXPEAUtagINPUTPOINTERNODE@@I_KUtagPOINT@@@Z.c)
 * Callees:
 *     GetPenHoldTime @ 0x1C01F3430 (GetPenHoldTime.c)
 *     GetTouchHoldTime @ 0x1C01F3470 (GetTouchHoldTime.c)
 */

__int64 __fastcall PassedHoldTime(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned int TouchHoldTime; // eax
  unsigned __int64 v11; // rdi
  bool v12; // cf
  bool v13; // zf

  v3 = 0;
  if ( !gliQpcFreq )
    return 0LL;
  v8 = qword_1C0333FA0;
  if ( !qword_1C0333FA0 )
  {
    v8 = gliQpcFreq * (unsigned int)GetPenHoldTime() / 1000LL;
    qword_1C0333FA0 = v8;
  }
  v9 = qword_1C0333FA8;
  if ( !qword_1C0333FA8 )
  {
    TouchHoldTime = GetTouchHoldTime();
    v8 = qword_1C0333FA0;
    v9 = gliQpcFreq * TouchHoldTime / 1000LL;
    qword_1C0333FA8 = v9;
  }
  v11 = a3 - a2;
  if ( a1 == 3 )
  {
    v12 = v11 < v8;
    v13 = v11 == v8;
  }
  else
  {
    v12 = v11 < v9;
    v13 = v11 == v9;
  }
  LOBYTE(v3) = !v12 && !v13;
  return v3;
}
