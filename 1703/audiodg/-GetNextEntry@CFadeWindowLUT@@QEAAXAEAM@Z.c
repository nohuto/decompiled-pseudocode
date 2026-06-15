/*
 * XREFs of ?GetNextEntry@CFadeWindowLUT@@QEAAXAEAM@Z @ 0x14005706C
 * Callers:
 *     ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z @ 0x140056AF8 (--$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z.c)
 *     ??$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z @ 0x140056C74 (--$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFadeWindowLUT::GetNextEntry(CFadeWindowLUT *this, float *a2)
{
  float *v2; // r11
  float *v3; // rax
  float v4; // xmm1_4
  float *v5; // rax

  v2 = (float *)*((_QWORD *)this + 2);
  v3 = (float *)*((_QWORD *)this + 3);
  *a2 = *(float *)(*(_QWORD *)this + 4LL * (unsigned int)(int)*v2)
      - (float)((float)(*v2 - (float)(int)*v2) * *(float *)(*((_QWORD *)this + 1) + 4LL * (unsigned int)(int)*v2));
  v4 = *v3 + *v2;
  v5 = (float *)*((_QWORD *)this + 6);
  *v2 = v4;
  *a2 = (float)(*v5 * *a2) + **((float **)this + 5);
}
