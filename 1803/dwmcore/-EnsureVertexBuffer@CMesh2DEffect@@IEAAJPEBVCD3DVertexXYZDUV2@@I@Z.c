/*
 * XREFs of ?EnsureVertexBuffer@CMesh2DEffect@@IEAAJPEBVCD3DVertexXYZDUV2@@I@Z @ 0x180221E3C
 * Callers:
 *     ?SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z @ 0x1802224E0 (-SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMesh2DEffect::EnsureVertexBuffer(
        CMesh2DEffect *this,
        const struct CD3DVertexXYZDUV2 *a2,
        unsigned int a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned int v8; // r8d
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // r9d
  int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-60h]
  _DWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  const struct CD3DVertexXYZDUV2 *v18; // [rsp+48h] [rbp-38h]
  int v19; // [rsp+50h] [rbp-30h]
  void *v20; // [rsp+58h] [rbp-28h] BYREF
  int v21; // [rsp+60h] [rbp-20h]
  char **v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+74h] [rbp-Ch]
  void *v25; // [rsp+B0h] [rbp+30h] BYREF
  int v26; // [rsp+C8h] [rbp+48h]
  unsigned int v27; // [rsp+CCh] [rbp+4Ch]

  v26 = 0;
  v3 = (_QWORD *)((char *)this + 176);
  v5 = a3;
  v6 = *((_QWORD *)this + 22);
  v27 = a3;
  if ( !v6 )
  {
LABEL_9:
    *((_DWORD *)this + 46) = 0;
    v20 = &unk_1802AEFF0;
    v21 = 2304;
    v22 = &off_180234BE0;
    v12 = -1;
    v23 = 4;
    v13 = 32 * v5;
    v24 = 32;
    if ( (unsigned __int64)(32 * v5) <= 0xFFFFFFFF )
      v12 = 32 * v5;
    v10 = v13 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v13 > 0xFFFFFFFF )
    {
      v16 = 558;
      v11 = v13 > 0xFFFFFFFF ? 0x80070216 : 0;
      goto LABEL_17;
    }
    v19 = v12;
    v14 = *((_QWORD *)this + 17);
    v18 = a2;
    v17[0] = 1;
    v17[1] = 1;
    v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, void **, _QWORD *))(*(_QWORD *)v14 + 136LL))(
           v14,
           v17,
           0LL,
           &v20,
           v3);
    v10 = v9;
    if ( v9 < 0 )
    {
      v16 = 574;
      goto LABEL_6;
    }
    goto LABEL_13;
  }
  v8 = *((_DWORD *)this + 46);
  if ( v8 < (unsigned int)v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *v3 = 0LL;
    goto LABEL_9;
  }
  v25 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, &v25, 32 * v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v16 = 583;
    goto LABEL_6;
  }
  memcpy_0(v25, a2, 32LL * (unsigned int)v5);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 32LL))(*v3);
  v10 = v9;
  if ( v9 < 0 )
  {
    v16 = 591;
LABEL_6:
    v11 = v9;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v16);
    return v10;
  }
LABEL_13:
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 16) + 88LL))(
         *((_QWORD *)this + 16),
         *v3,
         4LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    v16 = 600;
    goto LABEL_6;
  }
  return v10;
}
