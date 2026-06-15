/*
 * XREFs of ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C5904
 * Callers:
 *     std::_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std::allocator_int__void_::_Do_call @ 0x1800C4DD0 (std--_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std--allocator_int__void_--_Do_call.c)
 *     std::_Func_impl__lambda_c4f40eb4128b796d78dc595c2797cc70__std::allocator_int__void_::_Do_call @ 0x1800C4E50 (std--_Func_impl__lambda_c4f40eb4128b796d78dc595c2797cc70__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x1800C5284 (-AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x1800C71DC (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 */

void __fastcall Sarm::CStreamResource::CompleteRevocation(Sarm::CStreamResource *this)
{
  unsigned int *v2; // rbx
  LPCGUID v3; // r9
  LPCGUID v4; // r8
  int v5; // [rsp+30h] [rbp-69h] BYREF
  int v6; // [rsp+34h] [rbp-65h] BYREF
  __int64 v7; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-39h] BYREF
  int *v10; // [rsp+70h] [rbp-29h]
  int v11; // [rsp+78h] [rbp-21h]
  int v12; // [rsp+7Ch] [rbp-1Dh]
  char *v13; // [rsp+80h] [rbp-19h]
  int v14; // [rsp+88h] [rbp-11h]
  int v15; // [rsp+8Ch] [rbp-Dh]
  char *v16; // [rsp+90h] [rbp-9h]
  int v17; // [rsp+98h] [rbp-1h]
  int v18; // [rsp+9Ch] [rbp+3h]
  char *v19; // [rsp+A0h] [rbp+7h]
  int v20; // [rsp+A8h] [rbp+Fh]
  int v21; // [rsp+ACh] [rbp+13h]
  int *v22; // [rsp+B0h] [rbp+17h]
  int v23; // [rsp+B8h] [rbp+1Fh]
  int v24; // [rsp+BCh] [rbp+23h]
  __int64 *v25; // [rsp+C0h] [rbp+27h]
  int v26; // [rsp+C8h] [rbp+2Fh]
  int v27; // [rsp+CCh] [rbp+33h]

  SarmTraceLoggingTracer("Sarm::CStreamResource::CompleteRevocation", 0x85u);
  v2 = (unsigned int *)((char *)this + 84);
  if ( *((_DWORD *)this + 21) )
  {
    if ( (unsigned int)dword_18012A220 > 4 )
    {
      TlgCreateSz(&pDesc, "Sarm::CStreamResource::CompleteRevocation");
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v10 = &v5;
      v13 = (char *)this + 40;
      v16 = (char *)this + 16;
      v6 = *((_DWORD *)this + 13);
      v22 = &v6;
      v7 = *((_QWORD *)this + 1);
      v25 = &v7;
      v5 = 145;
      v11 = (int)v3;
      v14 = (_DWORD)v3 + 4;
      v17 = 16;
      v19 = (char *)this + 84;
      v20 = (int)v3;
      v23 = (int)v3;
      v26 = (_DWORD)v3 + 4;
      TlgWrite((TraceLoggingHProvider)&dword_18012A220, &unk_1800FABDB, v4, v3, 9u, &pData);
    }
    Sarm::CEndpointResourcePool::AddToDynamicPool(*((Sarm::CEndpointResourcePool **)this + 1), *v2);
    *v2 = 0;
  }
}
