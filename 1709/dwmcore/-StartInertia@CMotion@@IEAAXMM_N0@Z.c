/*
 * XREFs of ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x18018D2C0
 * Callers:
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018A620 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z.c)
 *     ?StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z @ 0x18018D6EC (-StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180189154 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 */

void __fastcall CMotion::StartInertia(CMotion *this, float a2, float a3, char a4, bool a5)
{
  float v7; // xmm0_4
  char v8; // al
  float (__fastcall *v9)(CMotion *); // rax
  float v10; // xmm1_4
  float v11; // xmm0_4
  __int64 v12; // rax
  int v13; // ecx
  const wchar_t *v14; // rax
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  BOOL v17; // [rsp+38h] [rbp-81h] BYREF
  CMotion *v18; // [rsp+40h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-71h] BYREF
  CMotion **v20; // [rsp+68h] [rbp-51h]
  int v21; // [rsp+70h] [rbp-49h]
  int v22; // [rsp+74h] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-41h] BYREF
  char *v24; // [rsp+88h] [rbp-31h]
  int v25; // [rsp+90h] [rbp-29h]
  int v26; // [rsp+94h] [rbp-25h]
  char *v27; // [rsp+98h] [rbp-21h]
  int v28; // [rsp+A0h] [rbp-19h]
  int v29; // [rsp+A4h] [rbp-15h]
  char *v30; // [rsp+A8h] [rbp-11h]
  int v31; // [rsp+B0h] [rbp-9h]
  int v32; // [rsp+B4h] [rbp-5h]
  char *v33; // [rsp+B8h] [rbp-1h]
  int v34; // [rsp+C0h] [rbp+7h]
  int v35; // [rsp+C4h] [rbp+Bh]
  BOOL *v36; // [rsp+C8h] [rbp+Fh]
  int v37; // [rsp+D0h] [rbp+17h]
  int v38; // [rsp+D4h] [rbp+1Bh]

  *((_DWORD *)this + 6) = 0;
  *((float *)this + 8) = a3;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 17);
  if ( !a5 )
  {
    *((_BYTE *)this + 8) &= ~1u;
    *((_BYTE *)this + 8) |= a4;
  }
  v7 = *((float *)this + 10);
  if ( v7 == 0.0 )
    v8 = 0;
  else
    v8 = 4;
  *((_BYTE *)this + 8) &= ~4u;
  *((_BYTE *)this + 8) |= v8;
  *((_DWORD *)this + 10) = 0;
  v9 = *(float (__fastcall **)(CMotion *))(*(_QWORD *)this + 40LL);
  v10 = fminf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v7 + a2)) & _xmm), *((float *)this + 13))
      * (float)((float)(v7 + a2) > 0.0);
  *((float *)this + 12) = v10;
  *((float *)this + 7) = v10;
  v11 = v9(this);
  v12 = *(_QWORD *)this;
  *((float *)this + 17) = v11;
  *((float *)this + 15) = (*(float (__fastcall **)(CMotion *))(v12 + 24))(this);
  *((_DWORD *)this + 4) = 2;
  if ( dword_18026D7B0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
    {
      v13 = *((_DWORD *)this + 3);
      v22 = 0;
      v20 = &v18;
      v18 = this;
      v21 = 8;
      v14 = ScrollAxisToString(v13);
      TlgCreateWsz(&pDesc, v14);
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v17 = a5;
      v36 = &v17;
      v24 = (char *)this + 44;
      v25 = 4;
      v27 = (char *)this + 48;
      v28 = 4;
      v30 = (char *)this + 68;
      v31 = 4;
      v33 = (char *)this + 60;
      v34 = 4;
      v37 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_1802148AF, v15, v16, 9u, &pData);
    }
  }
}
