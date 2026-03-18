/*
 * XREFs of ?MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z @ 0x180120410
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x1801207A8 (-Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall MilCompositionEngine_Initialize(
        int a1,
        struct IDWMCoRenderEngine *a2,
        struct HMIL_CONNECTION__ **a3)
{
  unsigned int v4; // ebx
  signed int v5; // eax
  struct CConnection *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( a3 )
  {
    v5 = CConnection::Create(a1, a2, &v7);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802191C0, 1u, v5, 0x2Fu);
    else
      *a3 = v7;
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802191C0, 1u, 0x80070057, 0x2Bu);
  }
  return v4;
}
