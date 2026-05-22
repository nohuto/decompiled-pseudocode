/*
 * XREFs of ?InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x180062870
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCGestureHandler_PointerDown_@ISMTracing@@QEAAXJJIKK@Z @ 0x1800619F4 (-MPCGestureHandler_PointerDown_@ISMTracing@@QEAAXJJIKK@Z.c)
 *     ?MPCGestureHandler_PointerUp_@ISMTracing@@QEAAXJJIKK@Z @ 0x180061AE4 (-MPCGestureHandler_PointerUp_@ISMTracing@@QEAAXJJIKK@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCGestureHandler::InjectManipulationInput(
        MPCGestureHandler *this,
        unsigned int a2,
        struct tagPOINTER_TOUCH_INFO *a3)
{
  __int64 v4; // r15
  _DWORD *v6; // r9
  DWORD TickCount; // eax
  char v8; // r14
  int *v9; // rbx
  int *v10; // rsi
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  bool v14; // zf
  _DWORD *v15; // rcx
  ISMTracing *v16; // rcx
  _DWORD *v17; // rcx
  ISMTracing *v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  bool v21; // dl
  int v22; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v25[356]; // [rsp+38h] [rbp-C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B88h] [rbp+A88h]

  v4 = a2;
  QueryPerformanceCounter(&PerformanceCount);
  memset(v25, 0, sizeof(v25));
  v6 = (_DWORD *)*((_QWORD *)this + 104);
  HIDWORD(v25[0]) = *v6;
  LODWORD(v25[0]) = v6[1];
  TickCount = GetTickCount();
  LODWORD(v25[5]) = 2848;
  LODWORD(v25[1]) = TickCount;
  v8 = 1;
  v25[2] = PerformanceCount.QuadPart;
  LODWORD(v25[84]) = *((_DWORD *)this + 214);
  LODWORD(v25[70]) = 1065353216;
  HIDWORD(v25[72]) = 1065353216;
  LODWORD(v25[75]) = 1065353216;
  HIDWORD(v25[77]) = 1065353216;
  if ( (_DWORD)v4 )
  {
    v9 = (int *)&v25[9];
    v10 = (int *)((char *)a3 + 12);
    do
    {
      *(v9 - 3) = 0;
      v11 = *v10;
      *(v9 - 4) = *(v10 - 2) + 2;
      v12 = v11 & 2;
      *(v9 - 1) = v10[5];
      *v9 = v10[6];
      v13 = *(v9 - 3);
      if ( v12 )
        v13 = 1;
      v14 = (*v10 & 0x10000) == 0;
      *(v9 - 3) = v13;
      if ( !v14 )
      {
        *(v9 - 3) = (v12 != 0) + 2;
        v15 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v15 )
        {
          if ( *v15 )
          {
            ISMTracing::Instance();
            ISMTracing::MPCGestureHandler_PointerDown_(v16, *(v9 - 1), *v9, *(v9 - 4), SBYTE4(v25[0]), v25[84]);
          }
        }
      }
      if ( (*v10 & 0x40000) != 0 )
      {
        v17 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v17 )
        {
          if ( *v17 )
          {
            ISMTracing::Instance();
            ISMTracing::MPCGestureHandler_PointerUp_(v18, *(v9 - 1), *v9, *(v9 - 4), SBYTE4(v25[0]), v25[84]);
          }
        }
      }
      if ( (*v10 & 0x20000) != 0 )
        *(v9 - 3) |= 2u;
      if ( *((_BYTE *)this + 928) && *v10 == 2 )
      {
        v19 = *((_QWORD *)this + 118);
        v20 = v25[2] - *((_QWORD *)this + 117);
        v21 = v20 < v19;
        if ( v20 >= v19 )
          *((_QWORD *)this + 117) = v25[2];
      }
      else
      {
        *((_QWORD *)this + 117) = 0LL;
        v21 = 0;
      }
      ++LODWORD(v25[6]);
      v8 &= v21;
      v10 += 36;
      v9 += 12;
      --v4;
    }
    while ( v4 );
    if ( !v8 )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 105) + 24LL))(
              *((_QWORD *)this + 105),
              v25);
      if ( v22 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x14C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
          (const char *)(unsigned int)v22);
        __debugbreak();
      }
    }
  }
  return 0LL;
}
