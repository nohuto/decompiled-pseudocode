/*
 * XREFs of ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C00CF480
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1C0001E90 (RtlStringCbCopyNW.c)
 */

signed int __fastcall ADAPTER_RENDER::CopyUmdFileName(ADAPTER_RENDER *this, struct _D3DKMT_UMDFILENAMEINFO *a2)
{
  __int64 CurrentProcess; // rax
  size_t v5; // rdx
  _WORD *v6; // r8
  unsigned __int16 v7; // ax
  KMTUMDVERSION v8; // r10d
  unsigned __int64 v9; // r11
  size_t v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r9
  _WORD *v13; // rax
  signed int result; // eax
  __int64 v15; // r9

  CurrentProcess = PsGetCurrentProcess(this);
  if ( PsGetProcessWow64Process(CurrentProcess) )
  {
    v6 = (_WORD *)*((_QWORD *)this + 35);
    v7 = *((_WORD *)this + 136);
  }
  else
  {
    v6 = (_WORD *)*((_QWORD *)this + 33);
    v7 = *((_WORD *)this + 128);
  }
  v8 = KMTUMDVERSION_DX9;
  v9 = v7;
  v10 = 0LL;
  while ( 1 )
  {
    v6 = (_WORD *)((char *)v6 + v10);
    v11 = v9 >> 1;
    v12 = 0LL;
    if ( v6 && v11 <= 0x7FFFFFFF )
    {
      v5 = v9 >> 1;
      v13 = v6;
      if ( v11 )
      {
        do
        {
          if ( !*v13 )
            break;
          ++v13;
          --v5;
        }
        while ( v5 );
      }
      result = v5 == 0 ? 0xC000000D : 0;
      if ( v5 )
        v12 = v11 - v5;
    }
    else
    {
      result = -1073741811;
    }
    v15 = result < 0 ? 0LL : 2 * v12;
    if ( result < 0 )
      break;
    if ( !v15 )
      return -1073741811;
    v10 = v15 + 2;
    ++v8;
    v9 -= v10;
    if ( (unsigned int)v8 > a2->Version )
    {
      if ( v10 != 6 )
        return RtlStringCbCopyNW(a2->UmdFileName, v5, v6, v10);
      v5 = (unsigned int)(*(_DWORD *)L"<>" - *(_DWORD *)v6);
      if ( *(_DWORD *)L"<>" == *(_DWORD *)v6 )
        v5 = asc_1C0053A9C[2] - (unsigned int)(unsigned __int16)v6[2];
      if ( (_DWORD)v5 )
        return RtlStringCbCopyNW(a2->UmdFileName, v5, v6, v10);
      return -1073741811;
    }
  }
  return result;
}
