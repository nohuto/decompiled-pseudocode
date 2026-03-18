/*
 * XREFs of ?Create@CMILFactory@@SAJPEAPEAV1@@Z @ 0x1800CAF78
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180064C48 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CMILFactory::Create(struct CMILFactory **a1)
{
  char *v2; // rax
  CBitmapOfDeviceBitmaps *v3; // rdi
  int v4; // eax
  int v5; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
  v3 = (CBitmapOfDeviceBitmaps *)v2;
  if ( !v2 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  *((_DWORD *)v2 + 2) = 0;
  *(_QWORD *)v2 = &CMILFactory::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)(v2 + 16));
  *((_QWORD *)v3 + 7) = 0LL;
  CBitmapOfDeviceBitmaps::AddRef(v3);
  v4 = WICCreateImagingFactory_Proxy(567LL, (char *)v3 + 56);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x62u);
  if ( v5 == -2147467259 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x68u);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2Au);
    CMILCOMBase::InternalRelease(v3);
  }
  else
  {
    *a1 = v3;
  }
  return (unsigned int)v5;
}
