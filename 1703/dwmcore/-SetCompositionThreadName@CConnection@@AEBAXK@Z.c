/*
 * XREFs of ?SetCompositionThreadName@CConnection@@AEBAXK@Z @ 0x1800654AC
 * Callers:
 *     ?StartCompositionThread@CConnection@@AEAAJH@Z @ 0x1800654EC (-StartCompositionThread@CConnection@@AEAAJH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CConnection::SetCompositionThreadName(CConnection *this, int a2)
{
  ULONG_PTR Arguments[2]; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+34h] [rbp-14h]

  LODWORD(Arguments[0]) = 4096;
  Arguments[1] = (ULONG_PTR)"DWMCompositorThread";
  v3 = a2;
  v4 = 0;
  RaiseException(0x406D1388u, 0, 3u, Arguments);
}
