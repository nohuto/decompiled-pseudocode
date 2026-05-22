/*
 * XREFs of ?Set@Value@Input@@QEAAJPEBXK@Z @ 0x180030D34
 * Callers:
 *     ??4Property@Input@@UEAAAEAV01@AEBV01@@Z @ 0x1800313B0 (--4Property@Input@@UEAAAEAV01@AEBV01@@Z.c)
 *     ?Set@Property@Input@@UEAAJPEBXK@Z @ 0x1800314C0 (-Set@Property@Input@@UEAAJPEBXK@Z.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

__int64 __fastcall Input::Value::Set(void **this, const void *a2, unsigned int a3)
{
  unsigned int v6; // esi
  void *v7; // rax
  void *v8; // rbp

  v6 = -2147024882;
  if ( *((_DWORD *)this + 3) >= a3 )
  {
    memcpy_0(*this, a2, a3);
    goto LABEL_5;
  }
  v7 = operator new[](a3);
  v8 = v7;
  if ( v7 )
  {
    memset(v7, 0, a3);
    memcpy_0(v8, a2, a3);
    operator delete(*this);
    *this = v8;
    *((_DWORD *)this + 3) = a3;
LABEL_5:
    v6 = 0;
    *((_DWORD *)this + 2) = a3;
  }
  return v6;
}
