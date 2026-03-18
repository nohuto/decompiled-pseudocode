/*
 * XREFs of ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x180148BCC
 * Callers:
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x180148AA0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
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
      *((_DWORD *)this + 160) = -2147024891;
    }
    else
    {
      v8 = 0;
      if ( *((_DWORD *)this + 86) )
      {
        while ( 1 )
        {
          *((_DWORD *)this + 156) = v8;
          v9 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v7 + 56LL))(
                 v7,
                 (char *)this + 592,
                 (char *)this + 112);
          v1 = v9;
          if ( v9 < 0 )
            break;
          if ( (unsigned int)++v8 >= *((_DWORD *)this + 86) )
            goto LABEL_5;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x470u);
      }
    }
  }
  else
  {
LABEL_4:
    *((_DWORD *)this + 160) = -2003304442;
  }
LABEL_5:
  *((_DWORD *)this + 156) = 0;
  return v1;
}
