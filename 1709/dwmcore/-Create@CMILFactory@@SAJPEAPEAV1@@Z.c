/*
 * XREFs of ?Create@CMILFactory@@SAJPEAPEAV1@@Z @ 0x1801CE980
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CMILFactory::Create(struct CMILFactory **a1)
{
  char *v2; // rax
  CMILCOMBase *v3; // rdi
  signed int v4; // eax
  signed int v5; // ebx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
  v3 = (CMILCOMBase *)v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v2 + 2) = 0;
  *(_QWORD *)v2 = &CMILFactory::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)(v2 + 16));
  *((_QWORD *)v3 + 7) = 0LL;
  CMILCOMBase::InternalAddRef(v3);
  v4 = WICCreateImagingFactory_Proxy(567LL, (char *)v3 + 56);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x62u);
  if ( v5 == -2147467259 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x68u);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x2Au);
    CMILCOMBase::InternalRelease(v3);
  }
  else
  {
    *a1 = v3;
  }
  return (unsigned int)v5;
}
