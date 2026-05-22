/*
 * XREFs of ?Describe@Property@Input@@UEBAKPEAGKK@Z @ 0x1800316F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Describe@PropertyNode@Input@@UEBAKPEAGKK@Z @ 0x180031300 (-Describe@PropertyNode@Input@@UEBAKPEAGKK@Z.c)
 *     ?StringCchCatNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18003301C (-StringCchCatNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::Property::Describe(Input::Property *this, unsigned __int16 *a2, unsigned int a3, char a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int16 *v5; // rsi
  __int64 v6; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(_QWORD, _QWORD, unsigned __int16 *, __int64); // r10
  int v12; // eax
  unsigned int v14; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v16; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v17[128]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = a3;
  v5 = a2;
  v16 = a2;
  *a2 = 0;
  v6 = a3;
  v15 = a3;
  if ( (unsigned int)Input::PropertyNode::Describe(this, v17, 0x80u, a4) )
  {
    StringCchCatNExW(v5, (unsigned int)v4, v17, 0x80uLL, &v16, &v15, v14);
    v5 = v16;
    v4 = v15;
  }
  if ( (a4 & 0x10) == 0 )
    return (unsigned int)(v6 - v4);
  v9 = *((_QWORD *)this + 3);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 48);
    if ( v10 )
    {
      v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int16 *, __int64))(v10 + 56);
      v12 = 0;
      if ( v11 )
        v12 = v11(*((_QWORD *)this + 4), *((unsigned int *)this + 10), v17, 128LL);
      else
        v17[0] = 0;
      if ( v12 >= 0 )
      {
        if ( v4 != v6 )
        {
          StringCchCatNExW(v5, v4, L", ", 2uLL, &v16, &v15, v14);
          v5 = v16;
          v4 = v15;
        }
        StringCchCatNExW(v5, v4, v17, 0x80uLL, &v16, &v15, v14);
        LODWORD(v4) = v15;
      }
      return (unsigned int)(v6 - v4);
    }
  }
  return 2147500037LL;
}
