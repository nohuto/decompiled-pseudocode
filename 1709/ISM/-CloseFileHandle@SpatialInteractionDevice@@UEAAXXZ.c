/*
 * XREFs of ?CloseFileHandle@SpatialInteractionDevice@@UEAAXXZ @ 0x180075410
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

void __fastcall SpatialInteractionDevice::CloseFileHandle(SpatialInteractionDevice *this)
{
  __int64 v1; // rbx
  void *v2; // rcx
  signed int LastError; // eax
  unsigned __int64 v4; // rcx

  v1 = *((_QWORD *)this + 11);
  v2 = *(void **)(v1 + 8);
  if ( v2 != (void *)-1LL )
  {
    if ( !CloseHandle(v2) )
    {
      LastError = GetLastError();
      v4 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v4 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v4);
      JUMPOUT(0x180075452LL);
    }
    *(_QWORD *)(v1 + 8) = -1LL;
  }
}
