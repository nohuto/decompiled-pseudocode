/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000AD88
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000AECC (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18000B158 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x1800275D0 (_invalid_parameter_noinfo.c)
 *     memset @ 0x1800275FE (memset.c)
 *     memcpy_0 @ 0x180027AB7 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, unsigned int a2)
{
  const void *v2; // r14
  _QWORD *v5; // rsi
  int v6; // ebp
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, __int64); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r15
  const void *v13; // rbx
  size_t v14; // r8
  void *v15; // rcx
  signed __int32 v16; // eax
  bool v17; // cc
  __int64 result; // rax

  v2 = *a1;
  v5 = (char *)*a1 - 24;
  v6 = *((_DWORD *)v5 + 2);
  v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5);
  v8 = (**v7)(v7, a2, 2LL);
  v12 = v8;
  if ( !v8 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  v13 = (const void *)(v8 + 24);
  if ( v6 < (int)a2 )
    a2 = v6;
  v14 = 2LL * (int)(a2 + 1);
  if ( v14 )
  {
    if ( v8 != -24 )
    {
      v15 = (void *)(v8 + 24);
      if ( v2 )
      {
        memcpy_0(v15, v2, v14);
        goto LABEL_10;
      }
      memset(v15, 0, v14);
    }
    *(_DWORD *)_o__errno(v10, v9, v14, v11) = 22;
    invalid_parameter_noinfo();
  }
LABEL_10:
  *(_DWORD *)(v12 + 8) = v6;
  v16 = _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 4, 0xFFFFFFFF);
  v17 = v16 <= 1;
  result = (unsigned int)(v16 - 1);
  if ( v17 )
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, size_t))(*(_QWORD *)*v5 + 8LL))(*v5, v5, v14);
  *a1 = v13;
  return result;
}
