/*
 * XREFs of ?EnsureVertexBuffer@CMesh2DEffect@@IEAAJPEBVCD3DVertexXYZDUV2@@I@Z @ 0x1800D1DA8
 * Callers:
 *     ?SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z @ 0x1801C20A0 (-SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMesh2DEffect::EnsureVertexBuffer(
        CMesh2DEffect *this,
        const struct CD3DVertexXYZDUV2 *a2,
        unsigned int a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned int v8; // r8d
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-60h]
  _DWORD v14[2]; // [rsp+40h] [rbp-40h] BYREF
  const struct CD3DVertexXYZDUV2 *v15; // [rsp+48h] [rbp-38h]
  int v16; // [rsp+50h] [rbp-30h]
  void *v17; // [rsp+58h] [rbp-28h] BYREF
  int v18; // [rsp+60h] [rbp-20h]
  char **v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+70h] [rbp-10h]
  int v21; // [rsp+74h] [rbp-Ch]
  void *v22; // [rsp+B0h] [rbp+30h] BYREF
  int v23; // [rsp+C8h] [rbp+48h]
  unsigned int v24; // [rsp+CCh] [rbp+4Ch]

  v23 = 0;
  v3 = (_QWORD *)((char *)this + 176);
  v5 = a3;
  v6 = *((_QWORD *)this + 22);
  v24 = a3;
  if ( v6 )
  {
    v8 = *((_DWORD *)this + 46);
    if ( v8 >= (unsigned int)v5 )
    {
      v22 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, &v22, 32 * v8);
      v10 = v9;
      if ( v9 < 0 )
      {
        v13 = 583;
      }
      else
      {
        memcpy_0(v22, a2, 32LL * (unsigned int)v5);
        v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 32LL))(*v3);
        v10 = v9;
        if ( v9 >= 0 )
          goto LABEL_5;
        v13 = 591;
      }
LABEL_16:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v13);
      return v10;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *v3 = 0LL;
  }
  *((_DWORD *)this + 46) = 0;
  v17 = &unk_1801F0FB0;
  v18 = 2304;
  v19 = &off_1801CB130;
  v20 = 4;
  v21 = 32;
  if ( (unsigned __int64)(32 * v5) > 0xFFFFFFFF )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x22Eu);
    return v10;
  }
  v16 = 32 * v5;
  v14[0] = 1;
  v14[1] = 1;
  v12 = *((_QWORD *)this + 17);
  v15 = a2;
  v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, void **, _QWORD *))(*(_QWORD *)v12 + 136LL))(
         v12,
         v14,
         0LL,
         &v17,
         v3);
  v10 = v9;
  if ( v9 < 0 )
  {
    v13 = 574;
    goto LABEL_16;
  }
LABEL_5:
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 16) + 88LL))(
         *((_QWORD *)this + 16),
         *v3,
         4LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    v13 = 600;
    goto LABEL_16;
  }
  return v10;
}
