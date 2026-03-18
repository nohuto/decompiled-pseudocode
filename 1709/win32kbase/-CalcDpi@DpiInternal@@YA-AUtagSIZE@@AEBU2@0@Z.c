/*
 * XREFs of ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C009A1F8
 * Callers:
 *     ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C009A0A8 (-FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z.c)
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C009A124 (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 * Callees:
 *     ?CalcDpi@DpiInternal@@YAIII@Z @ 0x1C009A23C (-CalcDpi@DpiInternal@@YAIII@Z.c)
 */

struct tagSIZE __fastcall DpiInternal::CalcDpi(DpiInternal *this, const struct tagSIZE *a2, const struct tagSIZE *a3)
{
  unsigned int v5; // r8d
  __int64 v7; // [rsp+30h] [rbp+8h]

  LODWORD(v7) = DpiInternal::CalcDpi((DpiInternal *)*(unsigned int *)this, a2->cx, (unsigned int)a3);
  HIDWORD(v7) = DpiInternal::CalcDpi((DpiInternal *)*((unsigned int *)this + 1), a2->cy, v5);
  return (struct tagSIZE)v7;
}
