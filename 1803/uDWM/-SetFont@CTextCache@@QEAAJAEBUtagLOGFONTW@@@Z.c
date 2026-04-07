/*
 * XREFs of ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x180037BC0
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x1800148B0 (-ValidateResources@CText@@AEAAJXZ.c)
 * Callees:
 *     ?ReleaseFont@CTextCache@@AEAAXXZ @ 0x18003B428 (-ReleaseFont@CTextCache@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcmp_0 @ 0x18004B354 (memcmp_0.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1800A86FC (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTextCache::SetFont(CTextCache *this, const struct tagLOGFONTW *a2)
{
  unsigned int v2; // edi
  HFONT FontIndirectW; // rax
  signed int LastError; // eax
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // r8d

  v2 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    if ( !memcmp_0((char *)this + 8, a2, 0x5CuLL) )
      return v2;
    CTextCache::ReleaseFont(this);
  }
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)&a2->lfHeight;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)&a2->lfWeight;
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)&a2->lfFaceName[2];
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)&a2->lfFaceName[10];
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)&a2->lfFaceName[18];
  *((_QWORD *)this + 11) = *(_QWORD *)&a2->lfFaceName[26];
  *((_DWORD *)this + 24) = *(_DWORD *)&a2->lfFaceName[30];
  SetLastError(0);
  FontIndirectW = CreateFontIndirectW((const LOGFONTW *)((char *)this + 8));
  *((_QWORD *)this + 14) = FontIndirectW;
  if ( FontIndirectW )
  {
    *((_QWORD *)this + 15) = SelectObject(*((HDC *)this + 13), FontIndirectW);
  }
  else
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( (v2 & 0x80000000) == 0 )
      v2 = CheckGUIHandleQuota(v9, v8, v10);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x31u);
  }
  return v2;
}
