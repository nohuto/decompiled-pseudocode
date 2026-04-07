/*
 * XREFs of ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x18003E208
 * Callers:
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003D918 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleInstruction::SetLinearGradientFill(
        CRectangleInstruction *this,
        __int64 a2,
        const struct _D3DCOLORVALUE *a3,
        const struct _D3DCOLORVALUE *a4)
{
  __int64 *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  _QWORD v10[2]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v11; // [rsp+80h] [rbp-58h] BYREF
  __int64 v12; // [rsp+90h] [rbp-48h] BYREF
  __int128 v13; // [rsp+98h] [rbp-40h]
  double v14; // [rsp+A8h] [rbp-30h]
  __int128 v15; // [rsp+B0h] [rbp-28h]

  v4 = (__int64 *)((char *)this + 16);
  if ( *((_QWORD *)this + 2)
    || (v5 = CResource::Create(0x14u, *((_QWORD *)this + 5), (CBaseObject **)this + 2), v6 = v5, v5 >= 0) )
  {
    v10[0] = 0LL;
    v12 = 0LL;
    v10[1] = 0LL;
    v7 = *v4;
    v13 = xmmword_1800AB4D8;
    v14 = DOUBLE_1_0;
    v15 = xmmword_1800AB4C8;
    v11 = _xmm;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, _QWORD *, __int128 *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, __int64 *, int))(**(_QWORD **)(v7 + 16) + 1184LL))(
           *(_QWORD *)(v7 + 16),
           *(unsigned int *)(v7 + 24),
           &v11,
           v10,
           &v11,
           0,
           0,
           0,
           0,
           1,
           0,
           &v12,
           2);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x92u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x70u);
  }
  return v6;
}
