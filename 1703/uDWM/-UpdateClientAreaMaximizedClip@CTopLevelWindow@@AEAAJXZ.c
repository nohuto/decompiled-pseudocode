/*
 * XREFs of ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180024DB8
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180024F10 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x1800268E0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180029E14 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z @ 0x180019F9C (-SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floorf_0 @ 0x18004DE78 (floorf_0.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaMaximizedClip(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rbx
  float v4; // xmm0_4
  float v5; // xmm2_4
  int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 59) )
  {
    v3 = *((_QWORD *)this + 90);
    v8 = *(_OWORD *)((char *)this + 636);
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v3 + 180) - 1.0)) & _xmm);
    if ( v4 >= 0.0000011920929
      || (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v3 + 184) - 1.0)) & _xmm), v5 >= 0.0000011920929) )
    {
      LODWORD(v8) = (int)floorf_0((float)(int)v8 / *(float *)(v3 + 180));
      DWORD1(v8) = (int)floorf_0((float)SDWORD1(v8) / *(float *)(v3 + 180));
      DWORD2(v8) = (int)floorf_0((float)SDWORD2(v8) / *(float *)(v3 + 184));
      HIDWORD(v8) = (int)floorf_0((float)SHIDWORD(v8) / *(float *)(v3 + 184));
    }
    v6 = CClientArea::SetMaximizedClipMargins(
           *((CClientArea **)this + 59),
           (const struct _MARGINS *)((unsigned __int64)&v8 & -(__int64)((*((_BYTE *)this + 240) & 8) != 0)));
    v1 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x13BDu);
  }
  return v1;
}
