/*
 * XREFs of ?_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z @ 0x1C0110B30
 * Callers:
 *     ?_AllocListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z @ 0x1C0110AD0 (-_AllocListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z.c)
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall Edgy::_GrowListeners(Edgy *this, struct tagEDGY_DATA *a2)
{
  unsigned int v2; // eax
  __int64 v4; // rcx
  unsigned int v5; // eax
  int v6; // esi
  void *v7; // rax
  const void *v8; // rdi
  size_t v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8

  v2 = *(_DWORD *)this;
  if ( *((_DWORD *)this + 1) > *(_DWORD *)this )
    return 1LL;
  if ( v2 <= 0x20 )
  {
    v4 = v2 + 4;
    v5 = 2 * v2;
    if ( (unsigned int)v4 <= v5 )
      v4 = v5;
    v6 = v4;
    v7 = (void *)Win32AllocPoolZInit(32 * v4, 1684370261LL);
    if ( v7 )
    {
      v8 = (const void *)*((_QWORD *)this + 1);
      v9 = 32LL * *(unsigned int *)this;
      *((_QWORD *)this + 1) = v7;
      *((_DWORD *)this + 1) = v6;
      memmove(v7, v8, v9);
      if ( v8 )
        Win32FreePool(v8, v10, v11);
      return 1LL;
    }
  }
  return 0LL;
}
