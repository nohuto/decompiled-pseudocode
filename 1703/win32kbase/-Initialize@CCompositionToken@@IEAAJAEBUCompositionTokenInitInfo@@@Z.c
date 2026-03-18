/*
 * XREFs of ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C0011E54
 * Callers:
 *     ?ObjectInit@CompositionTokenObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0010A50 (-ObjectInit@CompositionTokenObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C0011CB8 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::Initialize(CCompositionToken *this, const struct CompositionTokenInitInfo *a2)
{
  void *v4; // rax
  __int64 v5; // r8
  int v6; // edi

  *((_DWORD *)this + 8) = 0;
  if ( !is_mul_ok(*((unsigned int *)a2 + 3), 0x20uLL) )
  {
    v6 = -1073741675;
LABEL_9:
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
    return (unsigned int)v6;
  }
  v4 = Win32AllocPoolZInit(32LL * *((unsigned int *)a2 + 3), 1650675028LL);
  v6 = 0;
  *((_QWORD *)this + 9) = v4;
  if ( !v4 )
    v6 = -1073741801;
  *((_DWORD *)this + 20) = 0;
  if ( v6 < 0 )
    goto LABEL_9;
  v6 = CCompositionToken::InitializeUpdates(this, a2, v5);
  if ( v6 < 0 )
    goto LABEL_9;
  *((_QWORD *)this + 11) = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 24) = *((_DWORD *)this + 20);
  *((_BYTE *)this + 64) = 1;
  return (unsigned int)v6;
}
