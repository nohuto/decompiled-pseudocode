/*
 * XREFs of ?CaptureUsermodeParameters@LoadFontFileRequest@@UEAAXPEAX@Z @ 0x1C00BAA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LoadFontFileRequest::CaptureUsermodeParameters(LoadFontFileRequest *this, _DWORD *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 i; // rcx

  *((_DWORD *)this + 60) = a2[25];
  v3 = *((_QWORD *)a2 + 13);
  *((_QWORD *)this + 29) = v3;
  if ( v3 )
  {
    if ( *((_DWORD *)this + 60) <= 3u )
    {
      v4 = EngAllocMem(0, 0x10u, 0x46464855u);
      *((_QWORD *)this + 31) = v4;
      if ( v4 )
      {
        *v4 = *((_QWORD *)this + 29);
        *(_DWORD *)(*((_QWORD *)this + 31) + 8LL) = *((_DWORD *)this + 60);
        for ( i = 0LL; i < 2; ++i )
          *(_BYTE *)(*((_QWORD *)this + 31) + i + 12) = 0;
      }
    }
  }
}
