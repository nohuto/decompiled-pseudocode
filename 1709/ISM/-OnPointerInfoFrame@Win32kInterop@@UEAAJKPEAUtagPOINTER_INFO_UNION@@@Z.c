/*
 * XREFs of ?OnPointerInfoFrame@Win32kInterop@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x180010680
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::OnPointerInfoFrame(
        Win32kInterop *this,
        unsigned int a2,
        struct tagPOINTER_INFO_UNION *a3)
{
  unsigned __int64 v6; // rbx
  _DWORD *v7; // rdi
  _DWORD *v8; // rdx
  __int64 v9; // r8
  _OWORD *v10; // rcx
  __int128 v11; // xmm0

  v6 = 208 * (a2 - 1) + 232;
  v7 = operator new[](v6);
  memset(v7, 0, (unsigned int)v6);
  *v7 = 0;
  v7[4] = a2;
  *((_QWORD *)v7 + 1) = *((_QWORD *)this + 18);
  if ( a2 )
  {
    v8 = v7 + 54;
    v9 = a2;
    do
    {
      v10 = v8 - 48;
      *v10 = *(_OWORD *)a3;
      v10[1] = *((_OWORD *)a3 + 1);
      v10[2] = *((_OWORD *)a3 + 2);
      v10[3] = *((_OWORD *)a3 + 3);
      v10[4] = *((_OWORD *)a3 + 4);
      v10[5] = *((_OWORD *)a3 + 5);
      v10[6] = *((_OWORD *)a3 + 6);
      v10[7] = *((_OWORD *)a3 + 7);
      v11 = *((_OWORD *)a3 + 8);
      a3 = (struct tagPOINTER_INFO_UNION *)((char *)a3 + 144);
      v10[8] = v11;
      *v8 = *((_DWORD *)this + 34);
      v8 += 52;
      --v9;
    }
    while ( v9 );
  }
  ((void (__fastcall *)(_DWORD *, _QWORD))Win32kInterop::s_pfnMTCallback)(v7, 0LL);
  operator delete(v7);
  return 0LL;
}
