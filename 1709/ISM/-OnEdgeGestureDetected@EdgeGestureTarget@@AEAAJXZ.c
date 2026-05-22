/*
 * XREFs of ?OnEdgeGestureDetected@EdgeGestureTarget@@AEAAJXZ @ 0x18002DDC8
 * Callers:
 *     ?OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z @ 0x18002DC28 (-OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SplashHitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z @ 0x18002AAC0 (-SplashHitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEAXPEAUEdgyConfiguration@@PEAPEAX@Z @ 0x18002B5BC (-GetCandidateConfiguration@Edges@@QEAA_NPEAXPEAUEdgyConfiguration@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::OnEdgeGestureDetected(EdgeGestureTarget *this)
{
  __int64 v1; // rbx
  int v2; // edi
  void *v4; // rdx
  int v5; // edi
  int v6; // esi
  int v7; // r14d
  int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r11
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  void *v25; // [rsp+38h] [rbp-19h] BYREF
  int v26; // [rsp+40h] [rbp-11h]
  float v27; // [rsp+44h] [rbp-Dh]
  float v28; // [rsp+48h] [rbp-9h]
  float v29; // [rsp+4Ch] [rbp-5h]
  float v30; // [rsp+50h] [rbp-1h]
  _BYTE v31[16]; // [rsp+58h] [rbp+7h] BYREF
  int v32; // [rsp+68h] [rbp+17h]
  void *v33; // [rsp+80h] [rbp+2Fh] BYREF
  int v34; // [rsp+88h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v1 = *((_QWORD *)this + 8);
  v2 = 0;
  if ( *(_QWORD *)(v1 + 200) )
  {
    v4 = *(void **)(v1 + 208);
    v5 = *((_DWORD *)this + 15);
    v6 = *((_DWORD *)this + 14);
    v7 = *(_DWORD *)(v1 + 64);
    v8 = *(_DWORD *)(v1 + 60);
    if ( v4 )
    {
      if ( Edges::GetCandidateConfiguration((Edges *)(v1 + 288), v4, (struct EdgyConfiguration *)v31, &v33) )
      {
        v10 = *(_QWORD *)(v1 + 240);
        v11 = *(_QWORD *)(v1 + 280);
        v25 = v33;
        v26 = v32;
        v27 = (float)v6;
        v28 = (float)v5;
        v29 = (float)v8;
        v30 = (float)v7;
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, void **, __int64))(*(_QWORD *)v10 + 160LL))(
                v10,
                v11,
                &v25,
                32LL);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xB3,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cs"
                     "helledgyimpl.cpp",
            (const char *)(unsigned int)v12);
          JUMPOUT(0x18002E015LL);
        }
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
        McTemplateU0qqq(v9, &MinInput_CShellEdgy_NotifiedEdgyDetected, 13, *(_DWORD *)(v1 + 208), 0);
    }
    return 0;
  }
  else if ( EdgeGestureComponent::SplashHitTest(
              *((EdgeGestureComponent **)this + 8),
              *(_DWORD *)(v1 + 60),
              *(_DWORD *)(v1 + 64),
              0LL) )
  {
    v13 = *((_QWORD *)this + 8);
    v14 = *(_DWORD *)(v13 + 60);
    v15 = *(_DWORD *)(v13 + 64);
    v16 = *(_DWORD *)(v13 + 32) - *(_DWORD *)(v13 + 56);
    v17 = v14 < *(_DWORD *)(v13 + 52) ? 4 : 0;
    v33 = (void *)__PAIR64__(v15, v14);
    v18 = v17 | 8;
    if ( v14 < v16 )
      v18 = v17;
    v19 = v18 | 1;
    if ( v15 >= *(_DWORD *)(v13 + 44) )
      v19 = v18;
    v20 = (unsigned int)(*(_DWORD *)(v13 + 36) - *(_DWORD *)(v13 + 48));
    v21 = *(_QWORD *)(v13 + 152);
    v22 = v19 | 2;
    if ( v15 < (unsigned int)v20 )
      v22 = v19;
    v34 = v22;
    if ( v21 )
    {
      v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, void **, __int64))(**(_QWORD **)(v13 + 128) + 160LL))(
              *(_QWORD *)(v13 + 128),
              v21,
              &v33,
              12LL);
      v2 = v23;
      if ( v23 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v20, &MinInput_Warning_CheckResult, 0, 236, v23);
    }
    else
    {
      v2 = -2147024809;
    }
    if ( v2 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v20, &MinInput_Warning_CheckResult, 0, 893, v2);
  }
  return (unsigned int)v2;
}
