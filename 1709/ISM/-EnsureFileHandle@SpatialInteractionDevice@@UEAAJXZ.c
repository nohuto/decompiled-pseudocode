/*
 * XREFs of ?EnsureFileHandle@SpatialInteractionDevice@@UEAAJXZ @ 0x180075340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003350 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

__int64 __fastcall SpatialInteractionDevice::EnsureFileHandle(SpatialInteractionDevice *this)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  const WCHAR *v3; // rcx
  HANDLE FileW; // rax
  const char *v5; // r9
  HANDLE v6; // rsi
  HANDLE v7; // rcx
  signed int LastError; // eax
  unsigned __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( *(_QWORD *)(v1 + 8) == -1LL )
  {
    v3 = (const WCHAR *)(v1 + 16);
    if ( *(_QWORD *)(v1 + 40) >= 8uLL )
      v3 = *(const WCHAR **)v3;
    FileW = CreateFileW(v3, 0xC0000000, 3u, 0LL, 3u, 0x40000000u, 0LL);
    v6 = FileW;
    if ( FileW == (HANDLE)-1LL )
    {
      return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                             retaddr,
                             (void *)0xC9,
                             (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                             v5);
    }
    else
    {
      v7 = *(HANDLE *)(v1 + 8);
      if ( FileW != v7 )
      {
        if ( v7 != (HANDLE)-1LL )
        {
          if ( !CloseHandle(v7) )
          {
            LastError = GetLastError();
            v10 = (unsigned __int16)LastError | 0x80070000;
            if ( LastError <= 0 )
              v10 = (unsigned int)LastError;
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v10);
            JUMPOUT(0x180075400LL);
          }
          *(_QWORD *)(v1 + 8) = -1LL;
        }
        *(_QWORD *)(v1 + 8) = v6;
      }
    }
  }
  return v2;
}
