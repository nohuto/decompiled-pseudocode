/*
 * XREFs of ?F32TOI24W@@YAXPEAEM@Z @ 0x14001C480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall F32TOI24W(unsigned __int8 *a1, float a2)
{
  *(_DWORD *)a1 = (int)(a2 * 8388608.0) << 8;
}
