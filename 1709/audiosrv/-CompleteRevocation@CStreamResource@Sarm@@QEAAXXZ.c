/*
 * XREFs of ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C46D4
 * Callers:
 *     std::_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std::allocator_int__void_::_Do_call @ 0x1800C2AB0 (std--_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std--allocator_int__void_--_Do_call.c)
 *     std::_Func_impl__lambda_c4f40eb4128b796d78dc595c2797cc70__std::allocator_int__void_::_Do_call @ 0x1800C2B40 (std--_Func_impl__lambda_c4f40eb4128b796d78dc595c2797cc70__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18002EFF0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x1800C3F9C (-AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 */

void __fastcall Sarm::CStreamResource::CompleteRevocation(Sarm::CStreamResource *this)
{
  unsigned int *v2; // rbx
  LPCGUID v3; // r9
  LPCGUID v4; // r8
  int v5; // [rsp+30h] [rbp-59h] BYREF
  int v6; // [rsp+34h] [rbp-55h] BYREF
  __int64 v7; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-29h] BYREF
  int *v10; // [rsp+70h] [rbp-19h]
  int v11; // [rsp+78h] [rbp-11h]
  int v12; // [rsp+7Ch] [rbp-Dh]
  char *v13; // [rsp+80h] [rbp-9h]
  int v14; // [rsp+88h] [rbp-1h]
  int v15; // [rsp+8Ch] [rbp+3h]
  char *v16; // [rsp+90h] [rbp+7h]
  int v17; // [rsp+98h] [rbp+Fh]
  int v18; // [rsp+9Ch] [rbp+13h]
  char *v19; // [rsp+A0h] [rbp+17h]
  int v20; // [rsp+A8h] [rbp+1Fh]
  int v21; // [rsp+ACh] [rbp+23h]
  int *v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+B8h] [rbp+2Fh]
  int v24; // [rsp+BCh] [rbp+33h]
  __int64 *v25; // [rsp+C0h] [rbp+37h]
  int v26; // [rsp+C8h] [rbp+3Fh]
  int v27; // [rsp+CCh] [rbp+43h]

  SarmTraceLoggingTracer("Sarm::CStreamResource::CompleteRevocation", 129);
  v2 = (unsigned int *)((char *)this + 84);
  if ( *((_DWORD *)this + 21) )
  {
    if ( (unsigned int)dword_18014A370 > 4 )
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
      v5 = 141;
      v11 = (int)v3;
      v14 = (_DWORD)v3 + 4;
      v17 = 16;
      v19 = (char *)this + 84;
      v20 = (int)v3;
      v23 = (int)v3;
      v26 = (_DWORD)v3 + 4;
      TlgWrite((TraceLoggingHProvider)&dword_18014A370, &unk_1801112E3, v4, v3, 9u, &pData);
    }
    Sarm::CEndpointResourcePool::AddToDynamicPool(*((Sarm::CEndpointResourcePool **)this + 1), *v2);
    *v2 = 0;
  }
}
