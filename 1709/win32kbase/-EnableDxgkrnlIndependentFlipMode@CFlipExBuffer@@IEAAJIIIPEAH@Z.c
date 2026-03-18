/*
 * XREFs of ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIIPEAH@Z @ 0x1C0152F0C
 * Callers:
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIIPEAH@Z @ 0x1C0153150 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIIPEAH@Z.c)
 * Callees:
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C0020F8C (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     GreDxgkSetIndependentFlipMode @ 0x1C00F3680 (GreDxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::EnableDxgkrnlIndependentFlipMode(
        CFlipExBuffer *this,
        int a2,
        int a3,
        int a4,
        int *a5)
{
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  v9 = -1073741275;
  if ( *((_DWORD *)this + 60) )
  {
    v10 = *((_QWORD *)this + 28);
    Handle = 0LL;
    v9 = CBufferRealization::OpenDxSurfaceHandle((CBufferRealization *)(v10 - 8), 0, 1u, &Handle);
    if ( v9 >= 0 )
    {
      v11 = *((_QWORD *)this + 2);
      v13 = *((_QWORD *)this + 1);
      v9 = GreDxgkSetIndependentFlipMode(
             (__int64)Handle,
             (__int64)&v13,
             v11,
             1u,
             a2,
             a3,
             a4,
             (__int64)a5,
             (__int64)this + 472);
      if ( v9 < 0 )
      {
        ObCloseHandle(Handle, 0);
      }
      else
      {
        *((_QWORD *)this + 60) = Handle;
        *((_DWORD *)this + 87) = 1;
        *((_DWORD *)this + 122) = a2;
        *((_DWORD *)this + 123) = a4;
        *((_DWORD *)this + 124) = a3;
      }
    }
  }
  return (unsigned int)v9;
}
