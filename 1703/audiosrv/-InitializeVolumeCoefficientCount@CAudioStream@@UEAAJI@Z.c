/*
 * XREFs of ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x18007A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??4?$unique_ptr@$$BY0A@MU?$default_delete@$$BY0A@M@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007C31C (--4-$unique_ptr@$$BY0A@MU-$default_delete@$$BY0A@M@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall CAudioStream::InitializeVolumeCoefficientCount(CAudioStream *this, unsigned int a2)
{
  unsigned int v2; // ebx
  SIZE_T v4; // rax
  SIZE_T v5; // rax
  __int64 v6; // rdx
  unsigned int i; // ecx
  __int64 v8; // rax
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 22) != a2 )
  {
    *((_DWORD *)this + 22) = a2;
    v4 = 4LL * a2;
    if ( !is_mul_ok(a2, 4uLL) )
      v4 = -1LL;
    v10 = operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
    std::unique_ptr<float [0]>::operator=((char *)this + 112, &v10);
    if ( v10 )
      operator delete(v10);
    v5 = 4LL * *((unsigned int *)this + 22);
    if ( !is_mul_ok(*((unsigned int *)this + 22), 4uLL) )
      v5 = -1LL;
    v10 = operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
    std::unique_ptr<float [0]>::operator=((char *)this + 120, &v10);
    if ( v10 )
      operator delete(v10);
    v6 = *((_QWORD *)this + 14);
    if ( v6 && *((_QWORD *)this + 15) )
    {
      for ( i = 0; i < *((_DWORD *)this + 22); *(_DWORD *)(v6 + 4 * v8) = 1065353216 )
        v8 = i++;
    }
    else
    {
      v2 = -2147024882;
      AudSrvTraceLoggingErrorHelper("CAudioStream::InitializeVolumeCoefficientCount", 278, -2147024882);
    }
  }
  return v2;
}
