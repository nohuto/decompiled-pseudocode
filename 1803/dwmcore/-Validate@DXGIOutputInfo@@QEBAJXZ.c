/*
 * XREFs of ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x1800CB6E4
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800B6D9C (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DXGIOutputInfo::Validate(DXGIOutputInfo *this)
{
  _WORD *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  signed int v4; // ebx
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx

  v1 = (_WORD *)((char *)this + 204);
  v2 = 0LL;
  if ( this == (DXGIOutputInfo *)-204LL )
  {
    v4 = -2147024809;
  }
  else
  {
    v3 = 32LL;
    do
    {
      if ( !*v1 )
        break;
      ++v1;
      --v3;
    }
    while ( v3 );
    v4 = v3 == 0 ? 0x80070057 : 0;
    if ( v3 )
      v2 = 32 - v3;
    else
      v2 = 0LL;
  }
  if ( v4 < 0 )
    v5 = 0LL;
  else
    v5 = 2 * v2;
  if ( v4 < 0 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x3Cu);
  }
  else
  {
    v6 = (v4 >> 31) & 0x80070057;
    if ( v5 < 2 )
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x41u);
    }
    else if ( (*((_BYTE *)this + 200) & 8) != 0 && !*((_QWORD *)this + 13) )
    {
      v6 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304442, 0x4Au);
    }
  }
  return v6;
}
