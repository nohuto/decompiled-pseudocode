/*
 * XREFs of ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x18015B0DC
 * Callers:
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x18015AFB0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierRenderTarget::SliceRect(CMagnifierRenderTarget *this)
{
  unsigned int v1; // ebp
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v7; // rsi
  int v8; // edi
  int v9; // eax

  v1 = 0;
  v2 = 0LL;
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 72LL);
  if ( !*(_DWORD *)(v4 + 80) )
    goto LABEL_4;
  while ( 1 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 8 * v2);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 264LL))(v5) )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= *(_DWORD *)(v4 + 80) )
      goto LABEL_4;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 8 * v2);
  if ( v7 )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 280LL) )
    {
      *((_DWORD *)this + 174) = -2147024891;
    }
    else
    {
      v8 = 0;
      if ( *((_DWORD *)this + 100) )
      {
        while ( 1 )
        {
          *((_DWORD *)this + 170) = v8;
          v9 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v7 + 120LL))(
                 v7,
                 (char *)this + 648,
                 (char *)this + 168);
          v1 = v9;
          if ( v9 < 0 )
            break;
          if ( (unsigned int)++v8 >= *((_DWORD *)this + 100) )
            goto LABEL_5;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2FBu);
      }
    }
  }
  else
  {
LABEL_4:
    *((_DWORD *)this + 174) = -2003304442;
  }
LABEL_5:
  *((_DWORD *)this + 170) = 0;
  return v1;
}
