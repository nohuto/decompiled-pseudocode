/*
 * XREFs of ?Deserialize@Value@Input@@QEAAJIPEAUIStream@@PEAK@Z @ 0x180030DC8
 * Callers:
 *     ?Deserialize@Property@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180031640 (-Deserialize@Property@Input@@UEAAJIPEAUIStream@@PEAK@Z.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::Value::Deserialize(void **this, __int64 a2, struct IStream *a3, unsigned int *a4)
{
  unsigned int v6; // r14d
  int v8; // esi
  void *v9; // rax
  void *v10; // rbp
  int v11; // ecx
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0;
  v6 = (unsigned int)a4;
  if ( (unsigned int)a4 <= *((_DWORD *)this + 2) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD, int *))(*(_QWORD *)a2 + 24LL))(
           a2,
           *this,
           *(unsigned int *)a3,
           &v13);
    if ( v8 >= 0 )
      *(_DWORD *)a3 += v13;
  }
  else
  {
    v8 = -2147024882;
    v9 = operator new[]((unsigned int)a4);
    v10 = v9;
    if ( v9 )
    {
      memset(v9, 0, v6);
      v8 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD, int *))(*(_QWORD *)a2 + 24LL))(a2, v10, v6, &v13);
      if ( v8 >= 0 )
      {
        *(_DWORD *)a3 += v13;
        operator delete(*this);
        v11 = v13;
        *((_DWORD *)this + 2) = v13;
        *((_DWORD *)this + 3) = v11;
        *this = v10;
      }
    }
  }
  return (unsigned int)v8;
}
