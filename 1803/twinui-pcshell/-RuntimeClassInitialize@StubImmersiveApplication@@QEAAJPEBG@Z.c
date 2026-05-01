/*
 * XREFs of ?RuntimeClassInitialize@StubImmersiveApplication@@QEAAJPEBG@Z @ 0x1802416A4
 * Callers:
 *     ??$MakeAndInitialize@VStubImmersiveApplication@@V1@AEBQEAG@Details@WRL@Microsoft@@YAJPEAPEAVStubImmersiveApplication@@AEBQEAG@Z @ 0x18025747C (--$MakeAndInitialize@VStubImmersiveApplication@@V1@AEBQEAG@Details@WRL@Microsoft@@YAJPEAPEAVStub.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18001CF60 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall StubImmersiveApplication::RuntimeClassInitialize(
        StubImmersiveApplication *this,
        const unsigned __int16 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)this + 16,
         (__int64)a2,
         0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE,
      (__int64)"internal\\shell\\private\\inc\\stubimmersiveapplication.h",
      (const char *)(unsigned int)v2);
  return v3;
}
