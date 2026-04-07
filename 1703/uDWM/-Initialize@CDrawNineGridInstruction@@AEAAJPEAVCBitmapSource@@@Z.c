/*
 * XREFs of ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18003BE08
 * Callers:
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18003BB64 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?HasSourceClip@CBitmapSource@@QEBA_NXZ @ 0x18001E6D4 (-HasSourceClip@CBitmapSource@@QEBA_NXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLayout@@@Z @ 0x18003C074 (-GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLay.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Initialize(struct _MARGINS *this, struct CBitmapSource *a2)
{
  struct _MARGINS v2; // xmm0
  unsigned int v3; // r14d
  unsigned int v6; // esi
  __int64 v7; // rdx
  struct _MARGINS *i; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r13d
  int v12; // r12d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // [rsp+90h] [rbp-39h]
  int v19; // [rsp+94h] [rbp-35h]
  __int64 v20; // [rsp+98h] [rbp-31h] BYREF
  float v21; // [rsp+A0h] [rbp-29h]
  float v22; // [rsp+A4h] [rbp-25h]
  struct _MARGINS v23; // [rsp+B0h] [rbp-19h] BYREF
  _DWORD v24[8]; // [rsp+C0h] [rbp-9h] BYREF

  v2 = (struct _MARGINS)*((_OWORD *)a2 + 2);
  v3 = 0;
  v20 = 0LL;
  this[1] = v2;
  v6 = 0;
  this[2] = *((struct _MARGINS *)a2 + 3);
  v21 = *((float *)a2 + 6);
  v22 = *((float *)a2 + 7);
  if ( (unsigned __int8)CBitmapSource::HasSourceClip(a2) )
    v20 = *(_QWORD *)(v7 + 80);
  v23 = v2;
  CDrawNineGridInstruction::GetNineGridLayout(&v23, (const struct MilPointAndSizeL *)&v20, (struct NineGridLayout *)v24);
  this[7].cyTopHeight = 0;
  for ( i = this + 3; ; i = (struct _MARGINS *)((char *)i + 8) )
  {
    v9 = v3 / 3;
    v10 = v3 % 3;
    v11 = v24[(unsigned int)(v10 + 1)] - v24[v10];
    v18 = v24[v10];
    v12 = v24[(unsigned int)(v9 + 1) + 4] - v24[v9 + 4];
    v19 = v24[v9 + 4];
    if ( v11 <= 0 || v12 <= 0 )
    {
      *(_QWORD *)&i->cxLeftWidth = 0LL;
      goto LABEL_6;
    }
    ++this[7].cyTopHeight;
    v14 = CResource::Create(0x11u, *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL), (CBaseObject **)&this[3] + v3);
    v6 = v14;
    if ( v14 < 0 )
      break;
    v23 = (struct _MARGINS)_xmm;
    *(float *)&v20 = (float)v18;
    v15 = *(_QWORD *)&i->cxLeftWidth;
    *((float *)&v20 + 1) = (float)v19;
    v16 = *((_QWORD *)a2 + 2);
    v21 = (float)(v11 + v18);
    v22 = (float)(v19 + v12);
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _MARGINS *, __int64 *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int, _DWORD, int, int, _DWORD))(**(_QWORD **)(v15 + 16) + 1192LL))(
            *(_QWORD *)(v15 + 16),
            *(unsigned int *)(v15 + 24),
            *(_QWORD *)(v15 + 16),
            &v23,
            &v20,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            1,
            1,
            *(_DWORD *)(v16 + 24));
    v6 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x8Fu);
      return v6;
    }
LABEL_6:
    if ( ++v3 >= 9 )
      return v6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x70u);
  return v6;
}
