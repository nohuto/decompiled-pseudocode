/*
 * XREFs of ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x1801851B4
 * Callers:
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x180183950 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
 *     ?StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z @ 0x18018566C (-StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgCreateWsz @ 0x1800B1408 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180181E10 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
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
  __int64 v17; // [rsp+38h] [rbp-91h] BYREF
  CMotion *v18; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-81h] BYREF
  CMotion **v20; // [rsp+68h] [rbp-61h]
  int v21; // [rsp+70h] [rbp-59h]
  int v22; // [rsp+74h] [rbp-55h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-51h] BYREF
  char *v24; // [rsp+88h] [rbp-41h]
  int v25; // [rsp+90h] [rbp-39h]
  int v26; // [rsp+94h] [rbp-35h]
  char *v27; // [rsp+98h] [rbp-31h]
  int v28; // [rsp+A0h] [rbp-29h]
  int v29; // [rsp+A4h] [rbp-25h]
  char *v30; // [rsp+A8h] [rbp-21h]
  int v31; // [rsp+B0h] [rbp-19h]
  int v32; // [rsp+B4h] [rbp-15h]
  char *v33; // [rsp+B8h] [rbp-11h]
  int v34; // [rsp+C0h] [rbp-9h]
  int v35; // [rsp+C4h] [rbp-5h]
  __int64 *v36; // [rsp+C8h] [rbp-1h]
  int v37; // [rsp+D0h] [rbp+7h]
  int v38; // [rsp+D4h] [rbp+Bh]

  *((_DWORD *)this + 6) = 0;
  *((float *)this + 8) = a3;
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)this + 23);
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
  if ( dword_18023D7F0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
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
      LODWORD(v17) = a5;
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
      TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7F3D, v15, v16, 9u, &pData);
    }
  }
}
