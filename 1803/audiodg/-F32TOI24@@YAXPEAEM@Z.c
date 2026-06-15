/*
 * XREFs of ?F32TOI24@@YAXPEAEM@Z @ 0x14001B4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall F32TOI24(unsigned __int8 *a1, float a2)
{
  double v2; // [rsp+8h] [rbp+8h]

  v2 = a2 * 8388608.0;
  *(_WORD *)a1 = (int)v2;
  a1[2] = (unsigned int)(int)v2 >> 16;
}
