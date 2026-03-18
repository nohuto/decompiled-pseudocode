/*
 * XREFs of _anonymous_namespace_::Compressor::Compress @ 0x18014ADAC
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x18013E930 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 */

__int64 __fastcall anonymous_namespace_::Compressor::Compress(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned __int64 v6; // rsi
  PVOID v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  char v10; // cl
  BYTE *v11; // rax
  BYTE *v12; // r9
  BYTE *v13; // rbx
  LONG *v15; // [rsp+30h] [rbp-18h]
  LONG *v16; // [rsp+30h] [rbp-18h]
  INT v17; // [rsp+38h] [rbp-10h]
  INT v18; // [rsp+38h] [rbp-10h]
  PVOID context; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 input_used; // [rsp+60h] [rbp+18h] BYREF

  v5 = CreateCompressor(2LL, 0LL, &context);
  v6 = 0LL;
  v7 = context;
  if ( v5 != 1 )
    v7 = 0LL;
  v8 = *(_QWORD *)(a3 + 8) - *(_QWORD *)a3;
  context = v7;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v9 = v8 / 0xA;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( v8 / 0xA )
  {
    v11 = (BYTE *)std::_Allocate<std::_Default_allocate_traits<1>>(v9, 1uLL);
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = &v11[v9];
    v10 = 1;
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
  }
  v12 = v11;
  if ( v10 )
  {
    v13 = &v11[v9];
    memset_0(v11, 0, v9);
    v12 = *(BYTE **)a1;
    LODWORD(v11) = (_DWORD)v13;
    *(_QWORD *)(a1 + 8) = v13;
  }
  if ( Compress(
         context,
         *(const BYTE **)a3,
         *(_DWORD *)(a3 + 8) - *(_DWORD *)a3,
         v12,
         (_DWORD)v11 - (_DWORD)v12,
         (PLONG)&input_used,
         v15,
         v17) == 1
    || GetLastError() == 122
    && (std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
          a1,
          input_used),
        Compress(
          context,
          *(const BYTE **)a3,
          *(_DWORD *)(a3 + 8) - *(_DWORD *)a3,
          *(PBYTE *)a1,
          *(_DWORD *)(a1 + 8) - *(_DWORD *)a1,
          (PLONG)&input_used,
          v16,
          v18) == 1) )
  {
    v6 = input_used;
  }
  else
  {
    input_used = 0LL;
  }
  std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(a1, v6);
  CloseCompressor(context);
  return a1;
}
