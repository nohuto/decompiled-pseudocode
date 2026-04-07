/*
 * XREFs of ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x1800138A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawNineGridInstruction::WriteInstruction(
        CDrawNineGridInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  int v3; // r10d
  unsigned int v4; // r14d
  int v5; // r9d
  int v7; // r8d
  int v8; // r11d
  int v9; // r9d
  int v10; // r10d
  int v11; // r9d
  int v12; // edi
  int v13; // ebx
  int v14; // eax
  int v15; // edx
  __int64 *v16; // rdi
  unsigned int v17; // ebx
  __int64 v18; // r11
  __int64 v20; // r10
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  int v25; // eax
  float v26; // xmm1_4
  __int64 (__fastcall *v27)(struct IRenderDataBuilder *, __int128 *, _QWORD); // rax
  int v28; // eax
  __int128 v29; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v30[4]; // [rsp+40h] [rbp-58h]
  _DWORD v31[4]; // [rsp+50h] [rbp-48h]

  v3 = *((_DWORD *)a3 + 30);
  v4 = 0;
  v5 = *((_DWORD *)a3 + 31);
  v7 = -*((_DWORD *)this + 10);
  v8 = -*((_DWORD *)this + 8);
  v9 = *((_DWORD *)this + 11) + v5;
  v10 = *((_DWORD *)this + 9) + v3 + *((_DWORD *)this + 8);
  if ( v10 < 0 )
    v10 = 0;
  v11 = v9 + *((_DWORD *)this + 10);
  if ( v11 < 0 )
    v11 = 0;
  v29 = *((_OWORD *)this + 1);
  v12 = v29;
  if ( (int)v29 + DWORD1(v29) > v10 )
  {
    v13 = (int)v29 * v10 / ((int)v29 + DWORD1(v29));
    v12 = v13;
  }
  else
  {
    v13 = v10 - DWORD1(v29);
  }
  v14 = DWORD2(v29);
  if ( HIDWORD(v29) + DWORD2(v29) > v11 )
  {
    v14 = v11 * DWORD2(v29) / (HIDWORD(v29) + DWORD2(v29));
    v15 = v14;
  }
  else
  {
    v15 = v11 - HIDWORD(v29);
  }
  v31[0] = v7;
  v31[1] = v7 + v14;
  v30[1] = v8 + v12;
  v31[3] = v7 + v11;
  v30[0] = v8;
  v30[2] = v8 + v13;
  v30[3] = v10 + v8;
  v16 = (__int64 *)((char *)this + 48);
  v31[2] = v7 + v15;
  v17 = 0;
  while ( 1 )
  {
    v18 = *v16;
    if ( *v16 )
    {
      v20 = v17 / 3;
      v21 = v31[v20];
      v22 = v17 % 3;
      v23 = v30[v22];
      v24 = v30[(unsigned int)(v22 + 1)];
      v25 = v31[(unsigned int)(v20 + 1)] - v21;
      *(float *)&v29 = (float)v23;
      *((float *)&v29 + 1) = (float)v21;
      v26 = (float)v25;
      v27 = *(__int64 (__fastcall **)(struct IRenderDataBuilder *, __int128 *, _QWORD))(*(_QWORD *)a2 + 56LL);
      *((float *)&v29 + 2) = (float)(v24 - v23) + (float)v23;
      *((float *)&v29 + 3) = v26 + (float)v21;
      v28 = v27(a2, &v29, *(unsigned int *)(v18 + 24));
      v4 = v28;
      if ( v28 < 0 )
        break;
    }
    ++v17;
    ++v16;
    if ( v17 >= 9 )
      return v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x11Fu);
  return v4;
}
